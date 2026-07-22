#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// STDLIB - System Header
// =============================================================================

// Structure: Heap
#pragma pack(push, 1)
typedef struct Heap {
    int heap_size;
    void* heap_base;
    struct Heap* next_heap_block;
} Heap;
#pragma pack(pop)

// Structure: HeapBlock
typedef struct HeapBlock {
    uint size;
    struct HeapBlock* prev;
    struct HeapBlock* next;
    uint heap_info;
    uint largest_free;
    uint block_size;
    uint alloc_count;
    uint free_count;
    uchar free_list_area[8];
    uchar* data_area;
} HeapBlock;

// Structure: HeapState
#pragma pack(push, 1)
typedef struct HeapState {
    void* current_block_ptr;
    short segment_selector;
    int block_size;
    int allocation_status;
} HeapState;
#pragma pack(pop)

// Function Definition: QSORT_COMPARATOR_FUNC
typedef int QSORT_COMPARATOR_FUNC(void* a, void* b);

// Typedef: QSORT_COMPARATOR
// pointer to QSORT_COMPARATOR_FUNC
typedef QSORT_COMPARATOR_FUNC* QSORT_COMPARATOR;

// Function Definition: RUNTIME_HANDLER_FUNC
typedef void RUNTIME_HANDLER_FUNC(void);

// Structure: RuntimeHandlerEntry
#pragma pack(push, 1)
typedef struct RuntimeHandlerEntry {
    BYTE status;
    BYTE priority;
    RUNTIME_HANDLER_FUNC* func;
} RuntimeHandlerEntry;
#pragma pack(pop)

