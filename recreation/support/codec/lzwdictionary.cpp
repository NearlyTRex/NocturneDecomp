#include "support/codec/lzwdictionary.h"

#include "support/codec/bitbuffer.h"

#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::support {

// nocedit 0x0043edd0
CLZWDictionary::CLZWDictionary() = default;

// nocedit 0x0043ee60
void CLZWDictionary::init(int new_dict_size, int new_num_bits) {
    node_table_.resize(static_cast<std::size_t>(new_dict_size));
    num_bits_ = new_num_bits;
    initTable();
}

// nocedit 0x0043eef0
void CLZWDictionary::initTable() {
    entry_count_ = 1 << num_bits_;
    for (int code = 0; code < entry_count_; ++code) {
        node_table_[static_cast<std::size_t>(code)] = {.code = code, .parent_index = -1};
    }
    current_num_bits_ = num_bits_;
}

// deferred: each code's first longer string and the next of its parent's, with findCode
// nocedit 0x0043ef90
bool CLZWDictionary::addNode(int code, int parent_index) {
    if (static_cast<std::size_t>(entry_count_) >= node_table_.size()) {
        initTable();
        return true;
    }
    if ((entry_count_ & (entry_count_ - 1)) == 0) {
        ++current_num_bits_;
    }
    node_table_[static_cast<std::size_t>(entry_count_)] = {.code = code,
                                                           .parent_index = parent_index};
    ++entry_count_;
    return false;
}

// nocedit 0x0043f0d0
int CLZWDictionary::readCodeFromBuffer(SBitBuffer &bit_buffer,
                                       std::span<const std::byte> &input) const {
    const int highest = entry_count_ - 1;
    int code = 0;
    int bit = 1 << (current_num_bits_ - 1);
    bool matching = true;
    for (; bit != 0; bit >>= 1) {
        if (matching && (highest & bit) == 0) {
            continue;
        }
        const int sent = extractBitsFromBuffer(bit_buffer, 1, input);
        if (sent < 0) {
            return -1;
        }
        if (sent != 0) {
            code |= bit;
        } else {
            matching = false;
        }
    }
    return code;
}

// nocedit 0x0043f270
int CLZWDictionary::decodeCodeToBuffer(int code, std::vector<std::uint8_t> &output) const {
    std::size_t length = 0;
    int first = 0;
    for (int link = code; link >= 0;
         link = node_table_[static_cast<std::size_t>(link)].parent_index) {
        first = node_table_[static_cast<std::size_t>(link)].code;
        ++length;
    }
    output.resize(output.size() + length);
    auto end = output.end();
    for (int link = code; link >= 0;
         link = node_table_[static_cast<std::size_t>(link)].parent_index) {
        --end;
        *end = static_cast<std::uint8_t>(node_table_[static_cast<std::size_t>(link)].code);
    }
    return first;
}

} // namespace nocturne::support
