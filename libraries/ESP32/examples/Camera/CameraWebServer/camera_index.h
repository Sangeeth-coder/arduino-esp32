const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html>
  <head>
    <title>ESP32-CAM</title>
  </head>
  <body>
    <h1>ESP32-CAM Video Streaming</h1>
    <img src="http://%s/stream" style="width:100%%;">
  </body>
</html>
)rawliteral";
