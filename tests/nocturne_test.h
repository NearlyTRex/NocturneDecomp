#pragma once

// =============================================================================
// NOCTURNE TEST — a test harness small enough to read in one sitting
// =============================================================================
//
// Header-only, no dependency. The project builds SDL and FFmpeg from source
// already; a unit test framework would be a third external tree to fetch, pin
// and cross-build for the -m32 lane, to gain assertion macros and a runner.
// This is those two things.
//
// Usage:
//
//     #include "nocturne_test.h"
//
//     NOCTURNE_TEST(flags_map_to_depth_state) {
//         CHECK_EQ(f(0), 1);
//         CHECK(p != nullptr);
//     }
//
//     NOCTURNE_TEST_MAIN()
//
// A failing check reports file, line, expression and both values, then lets the
// rest of the test body run — one broken case in a loop over 256 flag words
// should print all 256 failures, not the first. A test that throws is caught
// and reported as a failure rather than taking the process down.

#include <cstdio>
#include <cstring>
#include <exception>
#include <string>
#include <vector>

namespace nocturne_test {

struct Case {
    const char *name;
    void (*fn)();
};

inline std::vector<Case> &registry() {
    static std::vector<Case> cases;
    return cases;
}

inline int &failures() {
    static int n = 0;
    return n;
}

inline int &checks() {
    static int n = 0;
    return n;
}

struct Registrar {
    Registrar(const char *name, void (*fn)()) { registry().push_back({name, fn}); }
};

inline void fail(const char *file, int line, const char *expr,
                 const std::string &detail) {
    ++failures();
    std::fprintf(stderr, "  FAIL %s:%d\n    %s\n", file, line, expr);
    if (!detail.empty()) {
        std::fprintf(stderr, "    %s\n", detail.c_str());
    }
}

// Rendered into failure output. Overload for any type a test compares; the
// generic form says nothing rather than refusing to compile, so a test can
// compare a struct without first teaching the harness about it.
inline std::string show(int v) { return std::to_string(v); }
inline std::string show(unsigned v) { return std::to_string(v); }
inline std::string show(long v) { return std::to_string(v); }
inline std::string show(unsigned long v) { return std::to_string(v); }
inline std::string show(float v) { return std::to_string(v); }
inline std::string show(double v) { return std::to_string(v); }
inline std::string show(const char *v) { return v ? std::string(v) : "(null)"; }
inline std::string show(const std::string &v) { return v; }
template <typename T>
inline std::string show(const T &) { return "<value>"; }

}  // namespace nocturne_test

#define NOCTURNE_TEST(name)                                                     \
    static void nocturne_test_##name();                                         \
    static ::nocturne_test::Registrar nocturne_test_reg_##name(                 \
        #name, &nocturne_test_##name);                                          \
    static void nocturne_test_##name()

#define CHECK(expr)                                                             \
    do {                                                                        \
        ++::nocturne_test::checks();                                            \
        if (!(expr)) {                                                          \
            ::nocturne_test::fail(__FILE__, __LINE__, #expr, "");               \
        }                                                                       \
    } while (0)

#define CHECK_EQ(a, b)                                                          \
    do {                                                                        \
        ++::nocturne_test::checks();                                            \
        auto _na = (a);                                                         \
        auto _nb = (b);                                                         \
        if (!(_na == _nb)) {                                                    \
            ::nocturne_test::fail(__FILE__, __LINE__, #a " == " #b,             \
                                  "got " + ::nocturne_test::show(_na) +         \
                                  ", want " + ::nocturne_test::show(_nb));      \
        }                                                                       \
    } while (0)

// Same, with a caller-supplied note naming the case — for checks inside a loop,
// where the line number alone does not say which iteration failed.
#define CHECK_EQ_AT(a, b, note)                                                 \
    do {                                                                        \
        ++::nocturne_test::checks();                                            \
        auto _na = (a);                                                         \
        auto _nb = (b);                                                         \
        if (!(_na == _nb)) {                                                    \
            ::nocturne_test::fail(__FILE__, __LINE__, #a " == " #b,             \
                                  std::string(note) + ": got " +                \
                                  ::nocturne_test::show(_na) + ", want " +      \
                                  ::nocturne_test::show(_nb));                  \
        }                                                                       \
    } while (0)

#define CHECK_NEAR(a, b, tol)                                                   \
    do {                                                                        \
        ++::nocturne_test::checks();                                            \
        double _na = (double)(a);                                               \
        double _nb = (double)(b);                                               \
        double _nd = _na - _nb;                                                 \
        if (_nd < 0) _nd = -_nd;                                                \
        if (!(_nd <= (double)(tol))) {                                          \
            ::nocturne_test::fail(__FILE__, __LINE__, #a " ~= " #b,             \
                                  "got " + ::nocturne_test::show(_na) +         \
                                  ", want " + ::nocturne_test::show(_nb) +      \
                                  " +/- " + ::nocturne_test::show((double)(tol))); \
        }                                                                       \
    } while (0)

#define NOCTURNE_TEST_MAIN()                                                    \
    int main(int argc, char **argv) {                                           \
        const char *only = (argc > 1) ? argv[1] : nullptr;                      \
        int ran = 0;                                                            \
        for (const auto &c : ::nocturne_test::registry()) {                     \
            if (only && std::strstr(c.name, only) == nullptr) continue;         \
            ++ran;                                                              \
            int before = ::nocturne_test::failures();                           \
            std::fprintf(stderr, "%s\n", c.name);                               \
            try {                                                               \
                c.fn();                                                         \
            } catch (const std::exception &e) {                                 \
                ::nocturne_test::fail(__FILE__, __LINE__, c.name,               \
                                      std::string("threw: ") + e.what());       \
            } catch (...) {                                                     \
                ::nocturne_test::fail(__FILE__, __LINE__, c.name, "threw");     \
            }                                                                   \
            if (::nocturne_test::failures() == before) {                        \
                std::fprintf(stderr, "  ok\n");                                 \
            }                                                                   \
        }                                                                       \
        std::fprintf(stderr, "\n%d test(s), %d check(s), %d failure(s)\n",      \
                     ran, ::nocturne_test::checks(),                            \
                     ::nocturne_test::failures());                              \
        return ::nocturne_test::failures() == 0 ? 0 : 1;                        \
    }
