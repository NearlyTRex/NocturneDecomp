#pragma once

// =============================================================================
// ASCII CASE — one fold, used everywhere something is compared without case
// =============================================================================
//
// Comparing names without regard to case comes up all over this codebase: a
// path the game spelled differently from the installer, a wildcard against a
// filename, a DLL name against the registry of built-in ones, a key in an ini
// file. Each site had reached for whatever was nearest — two private helpers and
// two calls into POSIX — which is four implementations of one rule, and the last
// time this codebase had one behaviour implemented twice it cost a crash.
//
// The fold is ASCII and fixed, and that is a decision rather than a shortcut.
// The C library's strcasecmp follows the locale, and a locale can disagree about
// what these letters are: Turkish folds 'I' to a dotless 'ı', so ACT1.POD would
// stop matching act1.pod on a machine configured for Turkish and nowhere else.
// The strings being compared are asset names and ini keys from a 1999 Windows
// build — ASCII throughout — so a fixed rule is both portable and the more
// correct of the two. In the "C" locale the C library does exactly this anyway,
// which is what the game has been running under all along.
//
// Header-only: it is a few lines, and every shim directory wants it.

#include <cstddef>

inline char nocturne_ascii_lower(char c) {
    return (c >= 'A' && c <= 'Z') ? (char)(c - 'A' + 'a') : c;
}

// Ordering, for callers that want the sign. Matches what the C library returns
// in the "C" locale: the difference between the first pair of bytes that differ
// after folding, as unsigned char.
inline int nocturne_ascii_icompare(const char *a, const char *b) {
    if (a == nullptr || b == nullptr) return (a == b) ? 0 : (a == nullptr ? -1 : 1);
    for (;; ++a, ++b) {
        const unsigned char x = (unsigned char)nocturne_ascii_lower(*a);
        const unsigned char y = (unsigned char)nocturne_ascii_lower(*b);
        if (x != y) return (int)x - (int)y;
        if (x == '\0') return 0;
    }
}

inline int nocturne_ascii_icompare_n(const char *a, const char *b, size_t n) {
    if (a == nullptr || b == nullptr) return (a == b) ? 0 : (a == nullptr ? -1 : 1);
    for (size_t i = 0; i < n; ++i, ++a, ++b) {
        const unsigned char x = (unsigned char)nocturne_ascii_lower(*a);
        const unsigned char y = (unsigned char)nocturne_ascii_lower(*b);
        if (x != y) return (int)x - (int)y;
        if (x == '\0') return 0;
    }
    return 0;
}

// Equality, for the many callers that only ask whether two names are the same.
inline bool nocturne_ascii_iequals(const char *a, const char *b) {
    return nocturne_ascii_icompare(a, b) == 0;
}
