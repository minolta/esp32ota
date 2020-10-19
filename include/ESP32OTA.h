#include <Arduino.h>
#include <HTTPClient.h>
#include <Update.h>
#ifndef ESP32OTA_H
#define ESP32OTA_H

class ESP32OTA
{

private:
    boolean isValidContentType = false;
    int otatimeout;
    int otatimeouttime = 5;
    long contentLength;
    String message;
    String host;
    WiFiClient client;
    String updateurl;
    String version;

public:
    String getHeaderValue(String, String);
    void ota(void);
    void setHost(String);
    void setUpdateUrl(String);
    void setVersion(String);
};
#endif