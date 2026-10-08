#pragma once

#include "sound/fwd.h"

#include <cstdint>

namespace nocturne::sound {

void staticInit();
int enumerateDirectSoundDevice(std::uint32_t device_id, SSoundDeviceInfo *device_info);
CDirectSoundDevice *getDirectSoundDevice(std::uint32_t device_id);

} // namespace nocturne::sound
