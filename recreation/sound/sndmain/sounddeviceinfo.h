#pragma once

#include <string>

namespace nocturne::sound {

// An output device the Sound Options can pick.
struct SSoundDeviceInfo {
    // As the menu shows it and the INI's DeviceName stores it: the host audio API, then the device.
    std::string device_name;
    // What the audio device opens it by; empty for the system's default.
    std::string open_name;
};

} // namespace nocturne::sound
