#pragma once

#include "sound/fwd.h"

#include <cstdint>

namespace nocturne::sound {

class CMP3Decoder {
public:
    CMP3Decoder();
    ~CMP3Decoder();

    void openFile(char *filename);
    void free();
    int read(std::int16_t *output_buffer, int samples_requested);
    int seek(int sample_offset);
};

} // namespace nocturne::sound
