#pragma once

// =============================================================================
// LIBC FAULTS — C library calls a test can make fail once
// =============================================================================
//
// On glibc the test binary's own definitions of these come before the C
// library's, so the shims under test call them; each forwards to the real one
// unless a test has asked for the next call to fail. Elsewhere there is no
// seam, and the cases that use these are glibc-only.

namespace libc_faults {

extern bool fail_next_fopencookie; // returns NULL, as on ENOMEM
extern bool fail_next_localtime;   // returns NULL, as for a time it cannot represent

} // namespace libc_faults
