#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/iostream.h"
#include "system/stdarg.h"

// =============================================================================
// STDIO - System Header
// =============================================================================

// Forward declarations
struct scanf_state_t;

// Enum: BASIC_LENGTH_FLAGS
enum {
    BASIC_I64_FLAG = 1,
    BASIC_LONG_FLAG = 2,
    BASIC_SHORT_FLAG = 4,
    BASIC_CHAR_FLAG = 8,
    BASIC_WIDE_FLAG = 16,
    BASIC_FAR_PTR_FLAG = 32,
    BASIC_NEAR_PTR_FLAG = 64,
    BASIC_RESERVED = 128
};
typedef uchar BASIC_LENGTH_FLAGS;

// Enum: EXTENDED_LENGTH_FLAGS
enum {
    EXT_CHAR_MODIFIER = 65536,
    EXT_SHORT_MODIFIER = 1048576,
    EXT_I64_MODIFIER = 2097152,
    EXT_LONG_MODIFIER = 4194304,
    EXT_FAR_PTR_MODIFIER = 8388608,
    EXT_NEAR_PTR_MODIFIER = 16777216,
    EXT_WIDE_MODIFIER = 33554432,
    EXT_SIZE_T_MODIFIER = 67108864,
    EXT_PTRDIFF_MODIFIER = 134217728
};
typedef int EXTENDED_LENGTH_FLAGS;

// Enum: FORMAT_FLAGS
enum {
    ALTERNATE_FORM = 1,
    SPACE_SIGN = 2,
    FORCE_SIGN = 4,
    LEFT_ALIGN = 8,
    SHORT_MODIFIER = 16,
    LONG_MODIFIER = 32,
    NEAR_PTR = 64,
    FAR_PTR = 128
};
typedef uchar FORMAT_FLAGS;

// Structure: FORMAT_OUTPUT_CONTEXT
typedef struct FORMAT_OUTPUT_CONTEXT {
    struct _FILE* output_file;
    char* format_ptr;
    va_list_t args;
    int field_width;
    int char_count;
    int precision;
    uint format_flags;
    int error_status;
    char* buffer_ptr;
    SIZE_T buffer_limit;
} FORMAT_OUTPUT_CONTEXT;

// Structure: FileBase
typedef struct FileBase {
    uint type_or_magic;
    uint data_offset;
} FileBase;

// Structure: FileContext
typedef struct FileContext {
    struct FileBase* base;
} FileContext;

// Structure: FileDescriptor
typedef struct FileDescriptor {
    byte file_type;
    byte device_flags;
    byte access_flags;
    byte extended_flags;
} FileDescriptor;

// Structure: FileEmbeddedData
typedef struct FileEmbeddedData {
    uint field_0;
    struct _FILE* stream;
    uint field_8;
    uint field_c;
    uint state_field;
    uint error_mask;
} FileEmbeddedData;

// Structure: FileListNode
#pragma pack(push, 1)
typedef struct FileListNode {
    struct FileListNode* next;
    struct _FILE* file_struct;
    void* back_pointer;
    uint flags;
    char reserved[17];
} FileListNode;
#pragma pack(pop)

// Structure: FormatSpec
typedef struct FormatSpec {
    char unknown_0x00[4];
    int width;
    int precision;
    int total_output_count;
    char padding1;
    char format_char;
    char padding_char;
    char padding2[2];
    char conversion_char;
    char zerofill;
    char unknown_0x17;
    EXTENDED_LENGTH_FLAGS extended_length_flags;
    char unknown_0x1C[2];
    FORMAT_FLAGS flags;
    BASIC_LENGTH_FLAGS length_flags;
    int output_length;
    int padding_needed;
    int content_length;
    int prefix_length;
    int suffix_length;
    int alternate_form_length;
    uint length_modifier_flags;
} FormatSpec;

// Function Definition: INVALIDATE_HANDLE_FUNC
typedef void INVALIDATE_HANDLE_FUNC(int handle_index);

// Function Definition: OUTPUT_CALLBACK_FUNC
typedef int OUTPUT_CALLBACK_FUNC(void* output_context, int character);

// Typedef: OUTPUT_CALLBACK
// pointer to OUTPUT_CALLBACK_FUNC
typedef OUTPUT_CALLBACK_FUNC* OUTPUT_CALLBACK;

// Function Definition: REGISTER_HANDLE_FUNC
typedef int REGISTER_HANDLE_FUNC(HANDLE file_handle);

// Function Definition: SCANF_GETC_FUNC
typedef int SCANF_GETC_FUNC(struct scanf_state_t* state);

// Function Definition: SCANF_UNGETC_FUNC
typedef int SCANF_UNGETC_FUNC(int character, struct scanf_state_t* state);

// Structure: StringOutputContext
typedef struct StringOutputContext {
    char* buffer_ptr;
    char unknown[12];
    int chars_written;
} StringOutputContext;

// Structure: _FILE
#pragma pack(push, 1)
typedef struct _FILE {
    char* _ptr;
    int _cnt;
    struct streambuf* _link;
    uint _flag;
    int _handle;
    uint _bufsize;
    ushort _ungotten;
} _FILE;
#pragma pack(pop)

// Structure: scanf_state_t
typedef struct scanf_state_t {
    SCANF_GETC_FUNC* getc_func;
    SCANF_UNGETC_FUNC* ungetc_func;
    void* input_ptr;
    int field_width;
    uchar flags;
    uchar conversion;
    uchar base;
    uchar reserved;
    int assignments_made;
    int chars_consumed;
    int unget_char;
    uchar* char_table;
    void* current_arg;
    char* scan_set;
    ushort state_flags;
    uchar input_base;
    uchar pad;
} scanf_state_t;

