#pragma once

// =============================================================================
// FNV-1a — the one hash the shims use
// =============================================================================
//
// 32-bit FNV-1a: cheap, byte-at-a-time, and the same on every machine, which is
// what the netplay sync check and its trace need from a hash, and all a texture
// name cache asks of one. The step is exposed as well as the range form, for a
// caller that stops at a terminator or folds in a value of its own.
//
// Header-only: it is a few lines.

#include <cstdint>

#define NOCTURNE_FNV1A_BASIS 2166136261u

inline uint32_t nocturne_fnv1a_step(uint32_t hash, unsigned char byte) {
    return (hash ^ (uint32_t)byte) * 16777619u;
}

// `hash` continued over `length` bytes of `data`.
inline uint32_t nocturne_fnv1a(uint32_t hash, const void *data, int length) {
    const unsigned char *p = (const unsigned char *)data;
    for (int i = 0; i < length; i++) {
        hash = nocturne_fnv1a_step(hash, p[i]);
    }
    return hash;
}
