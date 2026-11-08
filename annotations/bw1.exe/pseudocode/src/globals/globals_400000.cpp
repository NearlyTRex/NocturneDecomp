#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x400000
// =============================================================================

// IMAGE_NT_HEADERS32
IMAGE_NT_HEADERS32 DAT_00400080 = {
    .Signature = "PE",
    .FileHeader = {
        .Machine = 0x014C,
        .NumberOfSections = 0x0006,
        .TimeDateStamp = 0x39BCF0F7,
        .PointerToSymbolTable = 0x00000000,
        .NumberOfSymbols = 0x00000000,
        .SizeOfOptionalHeader = 0x00E0,
        .Characteristics = 0x0182
    },
    .OptionalHeader = {
        .Magic = 0x010B,
        .MajorLinkerVersion = 0x02,
        .MinorLinkerVersion = 0x12,
        .SizeOfCode = 0x001CEA00,
        .SizeOfInitializedData = 0x00058400,
        .SizeOfUninitializedData = 0x02677000,
        .AddressOfEntryPoint = 0x001C3258,
        .BaseOfCode = 0x00001000,
        .BaseOfData = 0x001D0000,
        .ImageBase = (void*)0x00400000,
        .SectionAlignment = 0x00001000,
        .FileAlignment = 0x00000200,
        .MajorOperatingSystemVersion = 0x0001,
        .MinorOperatingSystemVersion = 0x000B,
        .MajorImageVersion = 0x0000,
        .MinorImageVersion = 0x0000,
        .MajorSubsystemVersion = 0x0003,
        .MinorSubsystemVersion = 0x000A,
        .Win32VersionValue = 0x00000000,
        .SizeOfImage = 0x028BF000,
        .SizeOfHeaders = 0x00000400,
        .CheckSum = 0x00000000,
        .Subsystem = 0x0002,
        .DllCharacteristics = 0x0000,
        .SizeOfStackReserve = 0x000F4240,
        .SizeOfStackCommit = 0x00010000,
        .SizeOfHeapReserve = 0x00002000,
        .SizeOfHeapCommit = 0x00001000,
        .LoaderFlags = 0x00000000,
        .NumberOfRvaAndSizes = 0x00000010,
        .DataDirectory = {{.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x001D0000, .Size = 0x00001327}, {.VirtualAddress = 0x028BE000, .Size = 0x00000800}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x028A0000, .Size = 0x0001D6B4}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}}
    }
};

// IMAGE_SECTION_HEADER
IMAGE_SECTION_HEADER DAT_00400178 = {
    .Name = "AUTO",
    .Misc = 0x00000000,
    .VirtualAddress = 0x00001000,
    .SizeOfRawData = 0x001CEA00,
    .PointerToRawData = 0x00000400,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0x60000020
};
IMAGE_SECTION_HEADER DAT_004001A0 = {
    .Name = ".idata",
    .Misc = 0x00000000,
    .VirtualAddress = 0x001D0000,
    .SizeOfRawData = 0x00001400,
    .PointerToRawData = 0x001CEE00,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0xC0000040
};
IMAGE_SECTION_HEADER DAT_004001C8 = {
    .Name = "DGROUP",
    .Misc = 0x00000000,
    .VirtualAddress = 0x001D2000,
    .SizeOfRawData = 0x00057000,
    .PointerToRawData = 0x001D0200,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0xC0000040
};
IMAGE_SECTION_HEADER DAT_004001F0 = {
    .Name = ".bss",
    .Misc = 0x00000000,
    .VirtualAddress = 0x00229000,
    .SizeOfRawData = 0x02677000,
    .PointerToRawData = 0x00000000,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0xC0000080
};
IMAGE_SECTION_HEADER DAT_00400218 = {
    .Name = ".reloc",
    .Misc = 0x00000000,
    .VirtualAddress = 0x028A0000,
    .SizeOfRawData = 0x0001D800,
    .PointerToRawData = 0x00227200,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0x42000040
};
IMAGE_SECTION_HEADER DAT_00400240 = {
    .Name = ".rsrc",
    .Misc = 0x00000000,
    .VirtualAddress = 0x028BE000,
    .SizeOfRawData = 0x00000800,
    .PointerToRawData = 0x00244A00,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0x40000040
};

// undefined1*
undefined1* switchdataD_0040f4b8 = (undefined1*)0x0040F9C4; // caseD_0

// void*
void* switchdataD_0040dda4 = (void*)0x0040DE12; // caseD_1

