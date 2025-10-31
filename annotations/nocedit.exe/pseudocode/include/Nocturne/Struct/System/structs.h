#pragma once

// Structure: FORMAT_OUTPUT_CONTEXT
typedef struct FORMAT_OUTPUT_CONTEXT {
    FILE* output_file;
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
    FileBase* base;
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
    FILE* stream;
    uint field_8;
    uint field_c;
    uint state_field;
    uint error_mask;
} FileEmbeddedData;

// Structure: FileListNode
typedef struct FileListNode {
    FileListNode* next;
    FILE* file_struct;
    void* back_pointer;
    uint flags;
    char reserved[17];
} FileListNode;

// Structure: FileTrackingEntry
typedef struct FileTrackingEntry {
    char filename[260];
    char directory[260];
    char mode[20];
    char source_file[260];
    int line_number;
    FILE* file_ptr;
} FileTrackingEntry;

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
    ExtendedLengthFlags extended_length_flags;
    char unknown_0x1C[2];
    FormatFlags flags;
    BasicLengthFlags length_flags;
    int output_length;
    int padding_needed;
    int content_length;
    int prefix_length;
    int suffix_length;
    int alternate_form_length;
    uint length_modifier_flags;
} FormatSpec;

// Structure: Heap
typedef struct Heap {
    int heap_size;
    void* heap_base;
    Heap* next_heap_block;
} Heap;

// Structure: HeapBlock
typedef struct HeapBlock {
    uint size;
    HeapBlock* prev;
    HeapBlock* next;
    uint heap_info;
    uint largest_free;
    uint block_size;
    uint alloc_count;
    uint free_count;
    uchar free_list_area[8];
    uchar* data_area;
} HeapBlock;

// Structure: HeapState
typedef struct HeapState {
    void* current_block_ptr;
    short segment_selector;
    int block_size;
    int allocation_status;
} HeapState;

// Structure: IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct
typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
} IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

// Structure: LocalFrame
typedef struct LocalFrame {
} LocalFrame;

// Structure: MathErrorContext
typedef struct MathErrorContext {
    int errorType;
    char* errorData;
    double inputValue1;
    double inputValue2;
    double resultValue;
} MathErrorContext;

// Structure: RuntimeHandlerEntry
typedef struct RuntimeHandlerEntry {
    BYTE status;
    BYTE priority;
    RUNTIME_HANDLER_FUNC* func;
} RuntimeHandlerEntry;

// Structure: SIOControlBlock
typedef struct SIOControlBlock {
    HANDLE standard_handles[5];
    dword console_mode;
    dword io_flags;
    HANDLE extended_handles[15];
} SIOControlBlock;

// Structure: SignalHandlerEntry
typedef struct SignalHandlerEntry {
    int flags;
    SIGNAL_HANDLER handler;
} SignalHandlerEntry;

// Structure: StringOutputContext
typedef struct StringOutputContext {
    char* buffer_ptr;
    char unknown[12];
    int chars_written;
} StringOutputContext;

