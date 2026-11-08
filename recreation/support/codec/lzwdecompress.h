#pragma once

#include "support/codec/bitbuffer.h"
#include "support/codec/lzwdictionary.h"

#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::support {

// Turns an LZW stream back into its values, a buffer at a time. Only buffers are decoded, so
// the original's stream half and the codec base it shared with the compressor are left out.
class CLZWDecompress {
public:
    // The dictionary's size, and how many bits its single values take.
    CLZWDecompress(int buffer_size, int initial_bits);

    // Ready for a new stream.
    void init();
    // Appends the values of every whole code in the input.
    void processBuffer(std::span<const std::byte> input, std::vector<std::uint8_t> &output);

private:
    CLZWDictionary lzw_dict_;
    SBitBuffer bit_state_;
    int buffer_size_ = 0;
    int num_bits_ = 0;
    int current_code_ = -1;
    int previous_code_ = -1;
};

} // namespace nocturne::support
