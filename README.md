# android-audio-duck

simple titanium module for android audio focus using ```AUDIOFOCUS_GAIN_TRANSIENT_MAY_DUCK ```
## config
add to your tiapp.xml
```xml
<module platform="android">android.duck.audio</module>
```

## usage
```javascript
var audioPlayer = require("android.duck.audio");
audioPlayer.playSound(audioUrl);
```
enjoy!

