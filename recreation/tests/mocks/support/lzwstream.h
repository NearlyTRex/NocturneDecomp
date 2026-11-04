#pragma once

#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace nocturne::support {

// The values as the original's compressor writes them, to the last byte: each string's code
// once the next value would leave the dictionary, sent in the bits the decoder reads.
inline std::string compressLzw(std::span<const std::uint8_t> values, int dictionary_size,
                               int num_bits) {
    struct SNode {
        int code = 0;
        int first_child = -1;
        int next_sibling = -1;
    };
    std::vector<SNode> nodes(static_cast<std::size_t>(dictionary_size));
    int entry_count = 0;
    int current_bits = 0;
    const auto start = [&] {
        entry_count = 1 << num_bits;
        for (int code = 0; code < entry_count; ++code) {
            nodes[static_cast<std::size_t>(code)] = {.code = code};
        }
        current_bits = num_bits;
    };
    std::string output;
    std::uint32_t pending = 0;
    int pending_bits = 0;
    const auto writeBit = [&](bool bit) {
        pending |= static_cast<std::uint32_t>(bit) << pending_bits;
        if (++pending_bits == 8) {
            output.push_back(static_cast<char>(pending));
            pending = 0;
            pending_bits = 0;
        }
    };
    const auto writeCode = [&](int code) {
        const int highest = entry_count - 1;
        bool matching = true;
        for (int bit = 1 << (current_bits - 1); bit != 0; bit >>= 1) {
            if (matching && (highest & bit) == 0) {
                continue;
            }
            matching = matching && (code & bit) != 0;
            writeBit((code & bit) != 0);
        }
    };
    const auto find = [&](int value, int parent) {
        if (parent < 0) {
            return value;
        }
        for (int child = nodes[static_cast<std::size_t>(parent)].first_child; child >= 0;
             child = nodes[static_cast<std::size_t>(child)].next_sibling) {
            if (nodes[static_cast<std::size_t>(child)].code == value) {
                return child;
            }
        }
        return -1;
    };
    const auto add = [&](int value, int parent) {
        if (entry_count >= dictionary_size) {
            start();
            return true;
        }
        if ((entry_count & (entry_count - 1)) == 0) {
            ++current_bits;
        }
        SNode &parent_node = nodes[static_cast<std::size_t>(parent)];
        nodes[static_cast<std::size_t>(entry_count)] = {.code = value,
                                                        .next_sibling = parent_node.first_child};
        parent_node.first_child = entry_count++;
        return false;
    };
    start();
    int current = -1;
    int previous = -1;
    int previous_first = -1;
    const int mask = (1 << num_bits) - 1;
    for (const std::uint8_t byte : values) {
        const int value = byte & mask;
        const int found = find(value, current);
        if (found >= 0) {
            current = found;
            continue;
        }
        writeCode(current);
        if (previous >= 0 && add(previous_first, previous)) {
            previous = -1;
        } else {
            previous = current;
        }
        current = value;
        previous_first = value;
    }
    if (current >= 0) {
        writeCode(current);
    }
    if (pending_bits > 0) {
        output.push_back(static_cast<char>(pending));
    }
    return output;
}

} // namespace nocturne::support
