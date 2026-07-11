#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2DF0000
// =============================================================================

// BYTE[11]
BYTE Rsrc_Icon_1_0[11] = {0x3C, 0x49, 0x63, 0x6F, 0x6E, 0x2D, 0x49, 0x6D, 0x61, 0x67, 0x65};

// BYTE[3]
BYTE Rsrc_Menu_66_0[3] = {0x4D, 0x65, 0x6E};

// BYTE[8]
BYTE Rsrc_GroupIcon_65_0[8] = {0x47, 0x72, 0x6F, 0x75, 0x70, 0x49, 0x63, 0x6F};

// IMAGE_RESOURCE_DATA_ENTRY
IMAGE_RESOURCE_DATA_ENTRY DAT_02DFF0F0 = {
    .OffsetToData = 0x029FF130,
    .Size = 0x000002E8,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_02DFF100 = {
    .OffsetToData = 0x029FF418,
    .Size = 0x00000022,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_02DFF110 = {
    .OffsetToData = 0x029FF43C,
    .Size = 0x00000014,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_02DFF120 = {
    .OffsetToData = 0x029FF450,
    .Size = 0x000002E4,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};

// IMAGE_RESOURCE_DIRECTORY
IMAGE_RESOURCE_DIRECTORY DAT_02DFF030 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x381F538F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02DFF048 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x381F538F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02DFF060 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x381F538F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02DFF078 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x381F538F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02DFF090 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x381F538F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02DFF0A8 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x381F538F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02DFF0C0 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x381F538F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_02DFF0D8 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x381F538F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};

// TerminatedUnicode
TerminatedUnicode DAT_02DFF4B2 = L"StringFileInfo";
TerminatedUnicode DAT_02DFF4D6 = L"040904b0";
TerminatedUnicode DAT_02DFF4EE = L"CompanyName";
TerminatedUnicode DAT_02DFF508 = L"Terminal Reality Inc.";
TerminatedUnicode DAT_02DFF53A = L"FileDescription";
TerminatedUnicode DAT_02DFF55C = L"Nocturne(TM)";
TerminatedUnicode DAT_02DFF57E = L"FileVersion";
TerminatedUnicode DAT_02DFF598 = L"1.00.52";
TerminatedUnicode DAT_02DFF5AE = L"InternalName";
TerminatedUnicode DAT_02DFF5C8 = L"Nocturne";
TerminatedUnicode DAT_02DFF5E2 = L"LegalCopyright";
TerminatedUnicode DAT_02DFF600 = L" 1995-1999 Terminal Reality Inc.";
TerminatedUnicode DAT_02DFF64A = L"OriginalFilename";
TerminatedUnicode DAT_02DFF66C = L"Nocturne.exe";
TerminatedUnicode DAT_02DFF68E = L"ProductName";
TerminatedUnicode DAT_02DFF6A8 = L"Nocturne";
TerminatedUnicode DAT_02DFF6C2 = L"ProductVersion";
TerminatedUnicode DAT_02DFF6E0 = L"1.00.52";
TerminatedUnicode DAT_02DFF6F6 = L"VarFileInfo";
TerminatedUnicode DAT_02DFF716 = L"Translation";

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
    .FileTimestamp = 0x381F538D
};

// word
word DAT_02DF00D6 = 0;
word DAT_02DF0236 = 0;
word DAT_02DF08C2 = 0;
word DAT_02DF097E = 0;
word DAT_02DF0A5A = 0;
word DAT_02DF0BD2 = 0;
word DAT_02DF0C5E = 0;
word DAT_02DF0EEA = 0;
word DAT_02DF1022 = 0;
word DAT_02DF1132 = 0;
word DAT_02DF11A2 = 0;
word DAT_02DF128E = 0;
word DAT_02DF14CA = 0;
word DAT_02DF1702 = 0;
word DAT_02DF19E6 = 0;
word DAT_02DF1C96 = 0;
word DAT_02DF1EFE = 0;
word DAT_02DF2496 = 0;
word DAT_02DF2556 = 0;
word DAT_02DF25B2 = 0;
word DAT_02DF26E6 = 0;
word DAT_02DF2A36 = 0;
word DAT_02DF2B8E = 0;
word DAT_02DF2BE2 = 0;
word DAT_02DF2FD6 = 0;
word DAT_02DF329E = 0;
word DAT_02DF3382 = 0;
word DAT_02DF3482 = 0;
word DAT_02DF356A = 0;
word DAT_02DF35FE = 0;
word DAT_02DF3722 = 0;
word DAT_02DF398E = 0;
word DAT_02DF3A76 = 0;
word DAT_02DF3E3E = 0;
word DAT_02DF4182 = 0;
word DAT_02DF4666 = 0;
word DAT_02DF481A = 0;
word DAT_02DF49B2 = 0;
word DAT_02DF4AE6 = 0;
word DAT_02DF4C2E = 0;
word DAT_02DF4E1A = 0;
word DAT_02DF4EE6 = 0;
word DAT_02DF4FA6 = 0;
word DAT_02DF4FEE = 0;
word DAT_02DF511E = 0;
word DAT_02DF525E = 0;
word DAT_02DF53C2 = 0;
word DAT_02DF550A = 0;
word DAT_02DF559A = 0;
word DAT_02DF567E = 0;
word DAT_02DF56AA = 0;
word DAT_02DF56CA = 0;
word DAT_02DF57DA = 0;
word DAT_02DF58E6 = 0;
word DAT_02DF5B52 = 0;
word DAT_02DF5CFA = 0;
word DAT_02DF5DFE = 0;
word DAT_02DF5F62 = 0;
word DAT_02DF620E = 0;
word DAT_02DF66BE = 0;
word DAT_02DF72B2 = 0;
word DAT_02DF7376 = 0;
word DAT_02DF74FA = 0;
word DAT_02DF7582 = 0;
word DAT_02DF7622 = 0;
word DAT_02DF76D2 = 0;
word DAT_02DF7786 = 0;
word DAT_02DF77EE = 0;
word DAT_02DF7C7A = 0;
word DAT_02DF7DEE = 0;
word DAT_02DF7E72 = 0;
word DAT_02DF7F2E = 0;
word DAT_02DF7FB2 = 0;
word DAT_02DF8196 = 0;
word DAT_02DF849E = 0;
word DAT_02DF87E6 = 0;
word DAT_02DF899E = 0;
word DAT_02DF8A02 = 0;
word DAT_02DF8A92 = 0;
word DAT_02DF8BF6 = 0;
word DAT_02DF8E92 = 0;
word DAT_02DF8F36 = 0;
word DAT_02DF9022 = 0;
word DAT_02DF92D6 = 0;
word DAT_02DF93CE = 0;
word DAT_02DF945A = 0;
word DAT_02DF94A2 = 0;
word DAT_02DF96D6 = 0;
word DAT_02DF97E2 = 0;
word DAT_02DF982A = 0;
word DAT_02DF9902 = 0;
word DAT_02DF9B86 = 0;
word DAT_02DF9CEE = 0;
word DAT_02DF9DFE = 0;
word DAT_02DF9F96 = 0;
word DAT_02DFA4D2 = 0;
word DAT_02DFAB3A = 0;
word DAT_02DFB0DA = 0;
word DAT_02DFD382 = 0;
word DAT_02DFD9C2 = 0;
word DAT_02DFE35E = 0;
word DAT_02DFE3EE = 0;
word DAT_02DFE432 = 0;
word DAT_02DFE452 = 0;
word DAT_02DFE462 = 0;
word DAT_02DFE4A6 = 0;
word DAT_02DFE4E6 = 0;
word DAT_02DFE62E = 0;
word DAT_02DFE702 = 0;
word DAT_02DFE98A = 0;
word DAT_02DFE9E6 = 0;

