#pragma once

// Enum: BasicLengthFlags
typedef enum BasicLengthFlags {
    BASIC_I64_FLAG = 1,
    BASIC_LONG_FLAG = 2,
    BASIC_SHORT_FLAG = 4,
    BASIC_CHAR_FLAG = 8,
    BASIC_WIDE_FLAG = 16,
    BASIC_FAR_PTR_FLAG = 32,
    BASIC_NEAR_PTR_FLAG = 64,
    BASIC_RESERVED = 128
} BasicLengthFlags;

// Enum: ExtendedLengthFlags
typedef enum ExtendedLengthFlags {
    EXT_CHAR_MODIFIER = 65536,
    EXT_SHORT_MODIFIER = 1048576,
    EXT_I64_MODIFIER = 2097152,
    EXT_LONG_MODIFIER = 4194304,
    EXT_FAR_PTR_MODIFIER = 8388608,
    EXT_NEAR_PTR_MODIFIER = 16777216,
    EXT_WIDE_MODIFIER = 33554432,
    EXT_SIZE_T_MODIFIER = 67108864,
    EXT_PTRDIFF_MODIFIER = 134217728
} ExtendedLengthFlags;

// Enum: FormatFlags
typedef enum FormatFlags {
    ALTERNATE_FORM = 1,
    SPACE_SIGN = 2,
    FORCE_SIGN = 4,
    LEFT_ALIGN = 8,
    SHORT_MODIFIER = 16,
    LONG_MODIFIER = 32,
    NEAR_PTR = 64,
    FAR_PTR = 128
} FormatFlags;

