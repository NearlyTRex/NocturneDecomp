#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/time.h"

// =============================================================================
// DOS - System Header
// =============================================================================

// Structure: IMAGE_DOS_HEADER
#pragma pack(push, 1)
typedef struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res_4[4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2_10[10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
} IMAGE_DOS_HEADER;
#pragma pack(pop)

// Structure: _find_t
typedef struct _find_t {
    uchar attrib;
    uchar padding_0x1[3];
    time_t wr_time;
    time_t cr_time;
    time_t ac_time;
    long size;
    char name[260];
} _find_t;

