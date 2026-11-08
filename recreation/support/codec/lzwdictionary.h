#pragma once

#include "support/fwd.h"

#include <cstddef>
#include <cstdint>
#include <istream>
#include <ostream>
#include <span>
#include <vector>

namespace nocturne::support {

// The strings an LZW stream has defined so far, each code the last value of its string and the
// code of the rest. The first 2^num_bits codes are the single values.
class CLZWDictionary {
public:
    CLZWDictionary();

    // Room for dictionary_size codes, at least the single values.
    void init(int new_dict_size, int new_num_bits);
    int findCode(int search_code, int start_index);
    // A full table starts again from the single values instead, answering true.
    bool addNode(int code, int parent_index);
    int readCodeFromStream(SBitBuffer *bit_buffer, std::istream *istream, int *bytes_remaining);
    // The next code, at most the highest defined. While it matches that code from the top, only
    // the bits set there are sent; after its first clear one, every lower bit is. -1 when the
    // input runs out first.
    [[nodiscard]] int readCodeFromBuffer(SBitBuffer &bit_buffer,
                                         std::span<const std::byte> &input) const;
    void writeCodeBits(int code_value, SBitBuffer *bit_buffer, std::ostream *ostream);
    int writeCodeSequence(int code, std::ostream *ostream);
    // Appends the code's string, answering its first value.
    int decodeCodeToBuffer(int code, std::vector<std::uint8_t> &output) const;

private:
    struct SNode {
        int code = 0;
        // -1 for a single value.
        int parent_index = -1;
    };

    void initTable();

    std::vector<SNode> node_table_;
    int entry_count_ = 0;
    int num_bits_ = 0;
    // What the highest code defined takes.
    int current_num_bits_ = 0;
};

} // namespace nocturne::support
