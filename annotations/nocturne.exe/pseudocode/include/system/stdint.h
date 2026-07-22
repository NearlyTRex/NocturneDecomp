#pragma once

// =============================================================================
// STDINT - System Header
// =============================================================================
//
// Defer to the host <stdint.h> rather than redefine intptr_t / uintptr_t /
// uint{8,16,32}_t with project base types. Redefining these with different
// underlying types (e.g. `typedef int intptr_t` vs glibc's `__intptr_t` alias)
// collides in any translation unit that also pulls in <unistd.h>.

#include <stdint.h>

