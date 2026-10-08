#pragma once

#include "sound/fwd.h"

#include <cstdint>

namespace nocturne::sound {

void staticInit();
int enumerateWavOutDevice(std::uint32_t device_id, SSoundDeviceInfo *device_info);
CWavOutDevice *getWavOutDevice(std::uint32_t device_id);

} // namespace nocturne::sound
