#pragma once

#include "sound/fwd.h"

#include <cstdint>

namespace nocturne::sound {

// enumerateDirectSoundDevice / enumerateWavOutDevice and getDirectSoundDevice /
// getWavOutDevice collapse into this; the adapter lists its own devices.
class ISoundDeviceProvider {
public:
    virtual ~ISoundDeviceProvider() = default;

    // False past the last device.
    [[nodiscard]] virtual bool enumerateSoundDevice(std::uint32_t device_id,
                                                    SSoundDeviceInfo &device_info) = 0;
    // Owned by the provider.
    [[nodiscard]] virtual CSoundDevice *getSoundDevice(std::uint32_t device_id) = 0;
};

} // namespace nocturne::sound
