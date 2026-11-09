#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2CB0000
// =============================================================================

// BYTE[11]
BYTE Rsrc_Icon_1_0[11] = {0x3C, 0x49, 0x63, 0x6F, 0x6E, 0x2D, 0x49, 0x6D, 0x61, 0x67, 0x65};

// BYTE[3]
BYTE Rsrc_Menu_66_0[3] = {0x4D, 0x65, 0x6E};

// BYTE[8]
BYTE Rsrc_GroupIcon_65_0[8] = {0x47, 0x72, 0x6F, 0x75, 0x70, 0x49, 0x63, 0x6F};

// IMAGE_RESOURCE_DATA_ENTRY
IMAGE_RESOURCE_DATA_ENTRY DAT_02CBE0F0 = {
    .OffsetToData = 0x028BE130,
    .Size = 0x000002E8,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_02CBE100 = {
    .OffsetToData = 0x028BE418,
    .Size = 0x00000022,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_02CBE110 = {
    .OffsetToData = 0x028BE43C,
    .Size = 0x00000014,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_02CBE120 = {
    .OffsetToData = 0x028BE450,
    .Size = 0x000002E4,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};

// IMAGE_RESOURCE_DIRECTORY
IMAGE_RESOURCE_DIRECTORY DAT_02CBE030 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39BCF0F7,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02CBE048 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39BCF0F7,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02CBE060 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39BCF0F7,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02CBE078 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39BCF0F7,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02CBE090 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39BCF0F7,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02CBE0A8 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39BCF0F7,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02CBE0C0 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39BCF0F7,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02CBE0D8 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x39BCF0F7,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};

// VS_VERSION_INFO
VS_VERSION_INFO Rsrc_Version_1_0 = {
    .StructLength = 0x02E4,
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
    .FileTimestamp = 0x39BCF0F3
};

// word
word DAT_02CB001E = 0;
word DAT_02CB03FA = 0;
word DAT_02CB062E = 0;
word DAT_02CB090E = 0;
word DAT_02CB0A52 = 0;
word DAT_02CB0B5A = 0;
word DAT_02CB0BFA = 0;
word DAT_02CB0D4A = 0;
word DAT_02CB0F9E = 0;
word DAT_02CB156E = 0;
word DAT_02CB167E = 0;
word DAT_02CB19F6 = 0;
word DAT_02CB1B56 = 0;
word DAT_02CB1EBE = 0;
word DAT_02CB1F9E = 0;
word DAT_02CB20C6 = 0;
word DAT_02CB2282 = 0;
word DAT_02CB22D2 = 0;
word DAT_02CB2372 = 0;
word DAT_02CB24AA = 0;
word DAT_02CB2562 = 0;
word DAT_02CB2652 = 0;
word DAT_02CB26A6 = 0;
word DAT_02CB2872 = 0;
word DAT_02CB28FA = 0;
word DAT_02CB2B46 = 0;
word DAT_02CB2B82 = 0;
word DAT_02CB2BBE = 0;
word DAT_02CB2BCA = 0;
word DAT_02CB2D52 = 0;
word DAT_02CB2EE2 = 0;
word DAT_02CB302E = 0;
word DAT_02CB31CE = 0;
word DAT_02CB365A = 0;
word DAT_02CB375A = 0;
word DAT_02CB3872 = 0;
word DAT_02CB397A = 0;
word DAT_02CB3A2A = 0;
word DAT_02CB4D2E = 0;
word DAT_02CB4FB6 = 0;
word DAT_02CB5032 = 0;
word DAT_02CB50F6 = 0;
word DAT_02CB5166 = 0;
word DAT_02CB518A = 0;
word DAT_02CB51FA = 0;
word DAT_02CB5342 = 0;
word DAT_02CB53AE = 0;
word DAT_02CB55A2 = 0;
word DAT_02CB5692 = 0;
word DAT_02CB5756 = 0;
word DAT_02CB5992 = 0;
word DAT_02CB59F2 = 0;
word DAT_02CB5AB2 = 0;
word DAT_02CB5BAA = 0;
word DAT_02CB5D7E = 0;
word DAT_02CB5E02 = 0;
word DAT_02CB5E6E = 0;
word DAT_02CB602A = 0;
word DAT_02CB63C2 = 0;
word DAT_02CB65F6 = 0;
word DAT_02CB67FA = 0;
word DAT_02CB6872 = 0;
word DAT_02CB696A = 0;
word DAT_02CB6CC2 = 0;
word DAT_02CB6F8A = 0;
word DAT_02CB723E = 0;
word DAT_02CB72B2 = 0;
word DAT_02CB7382 = 0;
word DAT_02CB746A = 0;
word DAT_02CB74DA = 0;
word DAT_02CB7596 = 0;
word DAT_02CB75BA = 0;
word DAT_02CB77BE = 0;
word DAT_02CB7892 = 0;
word DAT_02CB7A92 = 0;
word DAT_02CB7BB2 = 0;
word DAT_02CB7DBE = 0;
word DAT_02CB84C2 = 0;
word DAT_02CB8B3E = 0;
word DAT_02CB9142 = 0;
word DAT_02CB973A = 0;
word DAT_02CBA272 = 0;
word DAT_02CBA8DA = 0;
word DAT_02CBBB1E = 0;
word DAT_02CBCD8E = 0;
word DAT_02CBCFA6 = 0;
word DAT_02CBD04A = 0;
word DAT_02CBD08A = 0;
word DAT_02CBD09E = 0;
word DAT_02CBD0AA = 0;
word DAT_02CBD0BA = 0;
word DAT_02CBD132 = 0;
word DAT_02CBD142 = 0;
word DAT_02CBD202 = 0;
word DAT_02CBD2E2 = 0;
word DAT_02CBD352 = 0;
word DAT_02CBD3B2 = 0;
word DAT_02CBD3D2 = 0;
word DAT_02CBD61A = 0;

