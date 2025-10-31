#pragma once

// Structure: FILE
typedef struct FILE {
    char* _ptr;
    int _cnt;
    streambuf* _link;
    uint _flag;
    int _handle;
    uint _bufsize;
    ushort _ungotten;
} FILE;

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

