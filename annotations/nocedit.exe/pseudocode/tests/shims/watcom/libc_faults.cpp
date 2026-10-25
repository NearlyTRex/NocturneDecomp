// =============================================================================
// LIBC FAULTS — see libc_faults.h
// =============================================================================

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#include "libc_faults.h"

#include <stdio.h>
#include <time.h>

namespace libc_faults {

bool fail_next_fopencookie = false;
bool fail_next_localtime = false;

} // namespace libc_faults

#if defined(__GLIBC__)

#include <dlfcn.h>

namespace {

// Takes the request, so one failure is one call.
bool take(bool &flag) {
    const bool was = flag;
    flag = false;
    return was;
}

template <typename Fn>
Fn real(const char *name) {
    return (Fn)dlsym(RTLD_NEXT, name);
}

} // namespace

extern "C" FILE *fopencookie(void *cookie, const char *mode, cookie_io_functions_t io) noexcept {
    typedef FILE *(*Fn)(void *, const char *, cookie_io_functions_t);
    static const Fn forward = real<Fn>("fopencookie");
    if (take(libc_faults::fail_next_fopencookie))
        return nullptr;
    return forward(cookie, mode, io);
}

extern "C" struct tm *localtime(const time_t *timer) noexcept {
    typedef struct tm *(*Fn)(const time_t *);
    static const Fn forward = real<Fn>("localtime");
    if (take(libc_faults::fail_next_localtime))
        return nullptr;
    return forward(timer);
}

#endif
