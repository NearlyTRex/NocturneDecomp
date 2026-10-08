#pragma once

#include "sound/fwd.h"

#include <cstdint>

namespace nocturne::sound {

class CSfxSample {
public:
    CSfxSample();
    ~CSfxSample();

    void parseConfigFile();
    int allocateHwSample();
    void freeMemory();
    void *lock(int lock_offset, int lock_length);
    void releaseSoundBuffer();
    void seek(int playback_position, int dest_buffer_offset);
    int pollStream(float time_window, float update_interval);
    CSfxSample *init();
    int getBytesPerFrame();
    double normalizePlaybackPos(double position, std::uint32_t input_type);
};

} // namespace nocturne::sound
