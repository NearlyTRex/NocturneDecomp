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
        .TimeDateStamp = 0x381F538F,
        .PointerToSymbolTable = 0x00000000,
        .NumberOfSymbols = 0x00000000,
        .SizeOfOptionalHeader = 0x00E0,
        .Characteristics = 0x0182
    },
    .OptionalHeader = {
        .Magic = 0x010B,
        .MajorLinkerVersion = 0x02,
        .MinorLinkerVersion = 0x12,
        .SizeOfCode = 0x00173E00,
        .SizeOfInitializedData = 0x0004E600,
        .SizeOfUninitializedData = 0x02820E00,
        .AddressOfEntryPoint = 0x00167152,
        .BaseOfCode = 0x00001000,
        .BaseOfData = 0x00175000,
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
        .SizeOfImage = 0x02A00000,
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
        .DataDirectory = {{.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00175000, .Size = 0x0000115D}, {.VirtualAddress = 0x029FF000, .Size = 0x00000800}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x029E6000, .Size = 0x000189E8}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}}
    }
};

// IMAGE_SECTION_HEADER
IMAGE_SECTION_HEADER DAT_00400178 = {
    .Name = "AUTO",
    .Misc = 0x00000000,
    .VirtualAddress = 0x00001000,
    .SizeOfRawData = 0x00173E00,
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
    .VirtualAddress = 0x00175000,
    .SizeOfRawData = 0x00001200,
    .PointerToRawData = 0x00174200,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0xC0000040
};
IMAGE_SECTION_HEADER DAT_004001C8 = {
    .Name = "DGROUP",
    .Misc = 0x00000000,
    .VirtualAddress = 0x00177000,
    .SizeOfRawData = 0x0004D400,
    .PointerToRawData = 0x00175400,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0xC0000040
};
IMAGE_SECTION_HEADER DAT_004001F0 = {
    .Name = ".bss",
    .Misc = 0x00000000,
    .VirtualAddress = 0x001C5000,
    .SizeOfRawData = 0x02820E00,
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
    .VirtualAddress = 0x029E6000,
    .SizeOfRawData = 0x00018A00,
    .PointerToRawData = 0x001C2800,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0x42000040
};
IMAGE_SECTION_HEADER DAT_00400240 = {
    .Name = ".rsrc",
    .Misc = 0x00000000,
    .VirtualAddress = 0x029FF000,
    .SizeOfRawData = 0x00000800,
    .PointerToRawData = 0x001DB200,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0x40000040
};

// void*
void* switchdataD_0040db0c = (void*)0x0040DC5B; // caseD_0
void* switchdataD_0040ed54 = (void*)0x0040EDC2; // caseD_1

