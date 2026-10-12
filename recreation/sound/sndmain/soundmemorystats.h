#pragma once

#include <cstddef>

namespace nocturne::sound {

// What the loaded samples hold against the sound memory budget, in bytes.
struct SSoundMemoryStats {
    int referenced_count = 0;
    std::size_t total_bytes_referenced = 0;
    // Samples nothing plays, kept until the budget needs their room.
    int unreferenced_count = 0;
    std::size_t total_bytes_unreferenced = 0;
    int free_slots = 0;
    // What the budget has left, never below zero.
    std::size_t available_memory = 0;
};

} // namespace nocturne::sound
