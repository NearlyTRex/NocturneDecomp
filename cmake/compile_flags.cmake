# -----------------------------------------------------------------------------
# The flags every target shares: the warning set, the architecture-independent
# code generation that rides on it, the include flags the check lane passes,
# and the sanitizers.
# -----------------------------------------------------------------------------

# Warning set — mirrors compiler_config.py so the two pipelines agree on what
# counts as an error.
set(NOCTURNE_COMMON_WARNINGS
    -Wno-everything
    -Warray-bounds
    -Wformat
    -Wformat-overflow
    -Werror=format
    -Werror=format-overflow
    -Wno-format-security
    -Wno-format-extra-args
    -Wincompatible-pointer-types
    -Wint-conversion
    -Wreturn-type
    -Wtautological-compare
    # Ghidra splitting one reused register into two locals and leaving one
    # uninitialized (docs/decompiler-artifacts.md §13) — an error because the garbage it
    # feeds downstream surfaces far from its cause. Deliberately not the broader
    # -Wuninitialized, which also fires on in_ST0/in_ST1 x87 phantoms (a missing
    # CUSTOM_STORAGE signature in Ghidra, not a code defect).
    -Werror=sometimes-uninitialized
)

# Code generation that must not depend on the architecture. Watcom's char is
# signed and arm64 Linux's is not. Lockstep netplay needs every build to round
# alike, and arm64 fuses a multiply and an add into one rounding by default,
# which the x86_64 baseline (no FMA) cannot. The Microsoft ABI's char is signed
# everywhere, so clang-cl needs only the second. They ride on the warning list
# because every target, the tests and the check lane already take it.
if(CMAKE_CXX_COMPILER_FRONTEND_VARIANT STREQUAL "MSVC")
    set(NOCTURNE_CODEGEN_FLAGS /clang:-ffp-contract=off)
else()
    set(NOCTURNE_CODEGEN_FLAGS -fsigned-char -ffp-contract=off)
endif()
list(APPEND NOCTURNE_COMMON_WARNINGS ${NOCTURNE_CODEGEN_FLAGS})

set(NOCTURNE_INCLUDE_FLAGS
    -I "${NOCTURNE_INCLUDE_DIR}"
    -I "${NOCTURNE_SHIMS_DIR}"
)

# Sanitizer flags (applied to compile AND link for every exe-side target).
# Empty list when disabled — keeps the option a single toggle.
set(NOCTURNE_SANITIZE_FLAGS "")
if(NOCTURNE_BUILD_EXE AND NOCTURNE_ASAN)
    list(APPEND NOCTURNE_SANITIZE_FLAGS
        -fsanitize=address,undefined
        -fno-sanitize=function,shift,signed-integer-overflow,alignment
        -fwrapv
        -fno-omit-frame-pointer
        -fno-sanitize-recover=all)
    # -fno-sanitize=function: vtable dispatch type mismatches (normal C++ covariance)
    # -fno-sanitize=shift: fixed-point math left-shifts negative values pervasively
    # -fno-sanitize=signed-integer-overflow + -fwrapv: Watcom-compiled arithmetic
    #   assumes x86 two's-complement wrap (e.g. INT_MIN - N), pervasive in the binary
    # -fno-sanitize=alignment: structs are #pragma pack(1) to preserve the 32-bit
    #   Watcom layout, so 8-byte pointer fields land at 4-mod-8 offsets at 64-bit;
    #   misaligned scalar/pointer access is benign on x86-64 and pervasive/intentional
    message(STATUS "AddressSanitizer + UBSan enabled (function-type, shift, signed-overflow, and alignment checks disabled)")
endif()
