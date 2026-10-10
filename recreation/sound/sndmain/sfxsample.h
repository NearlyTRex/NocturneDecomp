#pragma once

#include "sound/fwd.h"

#include <cstdint>

namespace nocturne::sound {

class CSfxSample {
public:
    CSfxSample();
    ~CSfxSample();

    void parseConfigFile();
    void freeMemory();
    CSfxSample *init();
    int getBytesPerFrame();
    double normalizePlaybackPos(double position, std::uint32_t input_type);
};

} // namespace nocturne::sound
