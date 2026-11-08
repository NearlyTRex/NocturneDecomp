#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x26A0000
// =============================================================================

// BYTE[11]
BYTE Rsrc_Icon_1_0[11] = {0x3C, 0x49, 0x63, 0x6F, 0x6E, 0x2D, 0x49, 0x6D, 0x61, 0x67, 0x65};

// BYTE[3]
BYTE Rsrc_Menu_66_0[3] = {0x4D, 0x65, 0x6E};

// BYTE[8]
BYTE Rsrc_GroupIcon_65_0[8] = {0x47, 0x72, 0x6F, 0x75, 0x70, 0x49, 0x63, 0x6F};

// IMAGE_RESOURCE_DATA_ENTRY
IMAGE_RESOURCE_DATA_ENTRY DAT_026A00F0 = {
    .OffsetToData = 0x022A0130,
    .Size = 0x000008A8,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_026A0100 = {
    .OffsetToData = 0x022A09D8,
    .Size = 0x00000022,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_026A0110 = {
    .OffsetToData = 0x022A09FC,
    .Size = 0x00000014,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_026A0120 = {
    .OffsetToData = 0x022A0A10,
    .Size = 0x00000338,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};

// IMAGE_RESOURCE_DIRECTORY
IMAGE_RESOURCE_DIRECTORY DAT_026A0030 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39EBCF6D,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_026A0048 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39EBCF6D,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_026A0060 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39EBCF6D,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_026A0078 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39EBCF6D,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_026A0090 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39EBCF6D,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_026A00A8 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39EBCF6D,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_026A00C0 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39EBCF6D,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_026A00D8 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39EBCF6D,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};

// VS_VERSION_INFO
VS_VERSION_INFO Rsrc_Version_1_0 = {
    .StructLength = 0x0338,
    .ValueLength = 0x0034,
    .StructType = 0x0000,
    .Info = {0x0056, 0x0053, 0x005F, 0x0056, 0x0045, 0x0052, 0x0053, 0x0049, 0x004F, 0x004E, 0x005F, 0x0049, 0x004E, 0x0046, 0x004F, 0x0000},
    .Padding = 0x0000,
    .Signature = 0xFEEF04BD,
    .StructVersion = {0x0000, 0x0001},
    .FileVersion = {0x0000, 0x0002, 0x0000, 0x0001},
    .ProductVersion = {0x0000, 0x0002, 0x0000, 0x0001},
    .FileFlagsMask = {0x0000003F, 0x00000000},
    .FileFlags = 0x00000004,
    .FileOS = 0x00000001,
    .FileType = 0x00000000,
    .FileSubtype = 0x00000000,
    .FileTimestamp = 0x39E808AB
};

