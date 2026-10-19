#pragma once

#include "core/fwd.h"

#include <cstdint>
#include <memory>
#include <string_view>

namespace nocturne::core {

// One character folded into a class name's hash, as the CRT's tolower lowers it.
[[nodiscard]] constexpr std::uint32_t mixClassNameHash(std::uint32_t hash, char c) {
    const auto lowered = static_cast<std::uint32_t>(c >= 'A' && c <= 'Z' ? c - 'A' + 'a' : c);
    return (lowered * 0x20001U) + (hash * 0x80U) + (hash >> 25U);
}

[[nodiscard]] constexpr bool isClassNameCharacter(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
}

// A class name's hash: its letters and digits, in either case; anything else is skipped.
[[nodiscard]] constexpr std::uint32_t hashClassName(std::string_view class_name) {
    std::uint32_t hash = 0;
    for (const char c : class_name) {
        if (isClassNameCharacter(c)) {
            hash = mixClassNameHash(hash, c);
        }
    }
    return hash;
}

// An actor class as missions name it: its parent, how to make one, and the version of its
// fields that save files write.
struct CDemonActorType {
    using Factory = std::unique_ptr<CDemonActor> (*)();

    std::string_view class_name;
    const CDemonActorType *parent_type = nullptr;
    // Null for a class missions can't hold, as a base class.
    Factory factory_func = nullptr;
    // Of the class's fields.
    int latest_version = 0;
    std::uint32_t name_hash = 0;
};

// The record for a class, its hash worked out from its name.
[[nodiscard]] constexpr CDemonActorType makeActorType(std::string_view class_name,
                                                      const CDemonActorType *parent_type,
                                                      CDemonActorType::Factory factory_func,
                                                      int latest_version) {
    return {.class_name = class_name,
            .parent_type = parent_type,
            .factory_func = factory_func,
            .latest_version = latest_version,
            .name_hash = hashClassName(class_name)};
}

} // namespace nocturne::core
