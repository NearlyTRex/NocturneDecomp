#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2D40000
// =============================================================================

// BYTE[11]
BYTE Rsrc_Icon_1_0[11] = {0x3C, 0x49, 0x63, 0x6F, 0x6E, 0x2D, 0x49, 0x6D, 0x61, 0x67, 0x65};
BYTE Rsrc_Icon_2_0[11] = {0x3C, 0x49, 0x63, 0x6F, 0x6E, 0x2D, 0x49, 0x6D, 0x61, 0x67, 0x65};

// BYTE[3]
BYTE Rsrc_Menu_66_0[3] = {0x4D, 0x65, 0x6E};

// BYTE[8]
BYTE Rsrc_GroupIcon_65_0[8] = {0x47, 0x72, 0x6F, 0x75, 0x70, 0x49, 0x63, 0x6F};

// IMAGE_RESOURCE_DATA_ENTRY
IMAGE_RESOURCE_DATA_ENTRY DAT_02D44110 = {
    .OffsetToData = 0x02944160,
    .Size = 0x000002E8,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_02D44120 = {
    .OffsetToData = 0x02944448,
    .Size = 0x00000128,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_02D44130 = {
    .OffsetToData = 0x02944570,
    .Size = 0x00000022,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_02D44140 = {
    .OffsetToData = 0x02944594,
    .Size = 0x00000022,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_02D44150 = {
    .OffsetToData = 0x029445B8,
    .Size = 0x000002DC,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};

// IMAGE_RESOURCE_DIRECTORY
IMAGE_RESOURCE_DIRECTORY DAT_02D44030 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x3A01C835,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0002
};
IMAGE_RESOURCE_DIRECTORY DAT_02D44050 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x3A01C835,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02D44068 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x3A01C835,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02D44080 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x3A01C835,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02D44098 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x3A01C835,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02D440B0 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x3A01C835,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02D440C8 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x3A01C835,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02D440E0 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x3A01C835,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02D440F8 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x3A01C835,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};

// VS_VERSION_INFO
VS_VERSION_INFO Rsrc_Version_1_0 = {
    .StructLength = 0x02DC,
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
    .FileTimestamp = 0x39FC6803
};

// word
word DAT_02D415D6 = 0;
word DAT_02D41C12 = 0;
word DAT_02D42952 = 0;
word DAT_02D4338A = 0;
word DAT_02D4342E = 0;
word DAT_02D4346E = 0;
word DAT_02D43482 = 0;
word DAT_02D4348E = 0;
word DAT_02D4351A = 0;
word DAT_02D4368E = 0;
word DAT_02D436FE = 0;
word DAT_02D4375E = 0;
word DAT_02D4377E = 0;
word DAT_02D43A26 = 0;
word DAT_02D43A4A = 0;

