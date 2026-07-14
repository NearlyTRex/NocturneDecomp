#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x10000000
// =============================================================================

// IMAGE_NT_HEADERS32
IMAGE_NT_HEADERS32 DAT_10000080 = {
    .Signature = "PE",
    .FileHeader = {
        .Machine = 0x014C,
        .NumberOfSections = 0x0006,
        .TimeDateStamp = 0x37FCF2FB,
        .PointerToSymbolTable = 0x00000000,
        .NumberOfSymbols = 0x00000000,
        .SizeOfOptionalHeader = 0x00E0,
        .Characteristics = 0x210E
    },
    .OptionalHeader = {
        .Magic = 0x010B,
        .MajorLinkerVersion = 0x03,
        .MinorLinkerVersion = 0x0A,
        .SizeOfCode = 0x00010C00,
        .SizeOfInitializedData = 0x00232200,
        .SizeOfUninitializedData = 0x00000000,
        .AddressOfEntryPoint = 0x000057F0,
        .BaseOfCode = 0x00001000,
        .BaseOfData = 0x00012000,
        .ImageBase = (void*)0x10000000,
        .SectionAlignment = 0x00001000,
        .FileAlignment = 0x00000200,
        .MajorOperatingSystemVersion = 0x0004,
        .MinorOperatingSystemVersion = 0x0000,
        .MajorImageVersion = 0x0000,
        .MinorImageVersion = 0x0000,
        .MajorSubsystemVersion = 0x0004,
        .MinorSubsystemVersion = 0x0000,
        .Win32VersionValue = 0x00000000,
        .SizeOfImage = 0x00247000,
        .SizeOfHeaders = 0x00000400,
        .CheckSum = 0x00000000,
        .Subsystem = 0x0002,
        .DllCharacteristics = 0x0000,
        .SizeOfStackReserve = 0x00100000,
        .SizeOfStackCommit = 0x00001000,
        .SizeOfHeapReserve = 0x00100000,
        .SizeOfHeapCommit = 0x00001000,
        .LoaderFlags = 0x00000000,
        .NumberOfRvaAndSizes = 0x00000010,
        .DataDirectory = {{.VirtualAddress = 0x00012EB0, .Size = 0x00000456}, {.VirtualAddress = 0x00242000, .Size = 0x00000050}, {.VirtualAddress = 0x00243000, .Size = 0x000000CC}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00244000, .Size = 0x000013BC}, {.VirtualAddress = 0x00012000, .Size = 0x00000054}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00242178, .Size = 0x00000128}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}, {.VirtualAddress = 0x00000000, .Size = 0x00000000}}
    }
};

// IMAGE_SECTION_HEADER
IMAGE_SECTION_HEADER DAT_10000178 = {
    .Name = ".text",
    .Misc = 0x00010B9A,
    .VirtualAddress = 0x00001000,
    .SizeOfRawData = 0x00010C00,
    .PointerToRawData = 0x00000400,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0x60000020
};
IMAGE_SECTION_HEADER DAT_100001A0 = {
    .Name = ".rdata",
    .Misc = 0x00001306,
    .VirtualAddress = 0x00012000,
    .SizeOfRawData = 0x00001400,
    .PointerToRawData = 0x00011000,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0x40000040
};
IMAGE_SECTION_HEADER DAT_100001C8 = {
    .Name = ".data",
    .Misc = 0x0022D988,
    .VirtualAddress = 0x00014000,
    .SizeOfRawData = 0x00004800,
    .PointerToRawData = 0x00012400,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0xC0000040
};
IMAGE_SECTION_HEADER DAT_100001F0 = {
    .Name = ".idata",
    .Misc = 0x000007BC,
    .VirtualAddress = 0x00242000,
    .SizeOfRawData = 0x00000800,
    .PointerToRawData = 0x00016C00,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0xC0000040
};
IMAGE_SECTION_HEADER DAT_10000218 = {
    .Name = ".rsrc",
    .Misc = 0x000000CC,
    .VirtualAddress = 0x00243000,
    .SizeOfRawData = 0x00000200,
    .PointerToRawData = 0x00017400,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0x40000040
};
IMAGE_SECTION_HEADER DAT_10000240 = {
    .Name = ".reloc",
    .Misc = 0x0000299E,
    .VirtualAddress = 0x00244000,
    .SizeOfRawData = 0x00002A00,
    .PointerToRawData = 0x00017600,
    .PointerToRelocations = 0x00000000,
    .PointerToLinenumbers = 0x00000000,
    .NumberOfRelocations = 0x0000,
    .NumberOfLinenumbers = 0x0000,
    .Characteristics = 0x42000040
};

// byte
byte switchdataD_100014ec = 0;
byte switchdataD_10001648 = 0;
byte switchdataD_100022b0 = 0;
byte switchdataD_10003ca8 = 0;
byte switchdataD_10006848 = 0;
byte switchdataD_10006870 = 0;
byte switchdataD_100068e4 = 0;
byte switchdataD_10006bf4 = 0;
byte switchdataD_1000817c = 0;
byte switchdataD_1000981c = 0;
byte switchdataD_1000bb10 = 0;
byte switchdataD_1000bd88 = 0;
byte switchdataD_1000ce24 = 0;
byte BYTE_1000ce49 = 0x5;
byte switchdataD_1000ce74 = 0;
byte BYTE_1000ce99 = 0x4;
byte switchdataD_1000cec4 = 0;
byte switchdataD_1000f240 = 0;
byte switchdataD_1000f660 = 0;

// undefined1*
undefined1* switchdataD_1000bafc = (undefined1*)0x1000BAAC; // caseD_2
undefined1* switchdataD_1000bd68 = (undefined1*)0x1000BBF1; // caseD_2
undefined1* switchdataD_1000f1e0 = (undefined1*)0x1000ED5A; // caseD_25

// void*
void* switchdataD_100014d8 = (void*)0x10001493; // caseD_20
void* switchdataD_10001634 = (void*)0x100015F0; // caseD_20
void* switchdataD_100021d4 = (void*)0x10001E02; // caseD_887602bc
void* switchdataD_100022fc = (void*)0x1000203E; // caseD_88760817
void* switchdataD_10003c94 = (void*)0x10003ABD; // caseD_20
void* switchdataD_10006810 = (void*)0x10006124; // caseD_0
void* switchdataD_10006830 = (void*)0x10006019; // caseD_20
void* switchdataD_1000685c = (void*)0x100060FA; // caseD_49
void* switchdataD_100068a0 = (void*)0x100061D6; // caseD_43
void* switchdataD_10006bcc = (void*)0x10006AC4; // caseD_2b
void* switchdataD_10008168 = (void*)0x10008150; // caseD_3a4
void* switchdataD_10009808 = (void*)0x100094D6; // caseD_10
void* switchdataD_1000a4d8 = (void*)0x1000A510; // caseD_0
void* switchdataD_1000a570 = (void*)0x1000A5AE; // caseD_0
void* switchdataD_1000cddc = (void*)0x1000C81C; // caseD_0
void* switchdataD_1000ce0c = (void*)0x1000C8D1; // caseD_2b
void* switchdataD_1000ce60 = (void*)0x1000C9C0; // caseD_2b
void* switchdataD_1000ceb0 = (void*)0x1000CA67; // caseD_2b
void* switchdataD_1000f634 = (void*)0x1000F43D; // caseD_27
void* switchdataD_1000f6b4 = (void*)0x1000F50E; // caseD_0
void* switchdataD_1000f6c4 = (void*)0x1000F547; // caseD_0

