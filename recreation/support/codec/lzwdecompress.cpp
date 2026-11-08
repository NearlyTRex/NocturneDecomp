#include "support/codec/lzwdecompress.h"

#include "support/codec/bitbuffer.h"

#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::support {

// nocedit 0x0043f490
CLZWDecompress::CLZWDecompress(int buffer_size, int initial_bits)
    : buffer_size_(buffer_size), num_bits_(initial_bits) {}

// nocedit 0x0043f4d0
void CLZWDecompress::init() {
    lzw_dict_.init(buffer_size_, num_bits_);
    resetBitBuffer(bit_state_);
    current_code_ = -1;
    previous_code_ = -1;
}

// Each code adds the string before it and its own first value. The original's finish had nothing
// left to write, since the loop only stops on a code it couldn't read.
// nocedit 0x0043f5d0
void CLZWDecompress::processBuffer(std::span<const std::byte> input,
                                   std::vector<std::uint8_t> &output) {
    for (;;) {
        if (current_code_ >= 0) {
            const int first = lzw_dict_.decodeCodeToBuffer(current_code_, output);
            if (previous_code_ >= 0 && lzw_dict_.addNode(first, previous_code_)) {
                current_code_ = -1;
            }
            previous_code_ = current_code_;
        }
        current_code_ = lzw_dict_.readCodeFromBuffer(bit_state_, input);
        if (current_code_ < 0) {
            return;
        }
    }
}

} // namespace nocturne::support
