#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3FB0000
// =============================================================================

// BYTE[11]
BYTE Rsrc_Icon_1_0[11] = {0x3C, 0x49, 0x63, 0x6F, 0x6E, 0x2D, 0x49, 0x6D, 0x61, 0x67, 0x65};

// BYTE[3]
BYTE Rsrc_Menu_66_0[3] = {0x4D, 0x65, 0x6E};

// BYTE[8]
BYTE Rsrc_GroupIcon_65_0[8] = {0x47, 0x72, 0x6F, 0x75, 0x70, 0x49, 0x63, 0x6F};

// IMAGE_RESOURCE_DATA_ENTRY
IMAGE_RESOURCE_DATA_ENTRY DAT_03FBF0F0 = {
    .OffsetToData = 0x03BBF130,
    .Size = 0x000002E8,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_03FBF100 = {
    .OffsetToData = 0x03BBF418,
    .Size = 0x00000022,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_03FBF110 = {
    .OffsetToData = 0x03BBF43C,
    .Size = 0x00000014,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};
IMAGE_RESOURCE_DATA_ENTRY DAT_03FBF120 = {
    .OffsetToData = 0x03BBF450,
    .Size = 0x000002F8,
    .CodePage = 0x00000000,
    .Reserved = 0x00000000
};

// IMAGE_RESOURCE_DIRECTORY
IMAGE_RESOURCE_DIRECTORY DAT_03FBF030 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x387A4F8F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_03FBF048 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x387A4F8F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_03FBF060 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x387A4F8F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_03FBF078 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x387A4F8F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_03FBF090 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x387A4F8F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_03FBF0A8 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x387A4F8F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_03FBF0C0 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x387A4F8F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};
IMAGE_RESOURCE_DIRECTORY DAT_03FBF0D8 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x387A4F8F,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .NumberOfNamedEntries = 0x0000,
    .NumberOfIdEntries = 0x0001
};

// TerminatedUnicode
TerminatedUnicode DAT_03FBF4B2 = L"StringFileInfo";
TerminatedUnicode DAT_03FBF4D6 = L"040904b0";
TerminatedUnicode DAT_03FBF4EE = L"CompanyName";
TerminatedUnicode DAT_03FBF508 = L"Terminal Reality Inc.";
TerminatedUnicode DAT_03FBF53A = L"InternalName";
TerminatedUnicode DAT_03FBF554 = L"Nocturne";
TerminatedUnicode DAT_03FBF56E = L"LegalCopyright";
TerminatedUnicode DAT_03FBF58C = L" 1995-2000 Terminal Reality Inc.";
TerminatedUnicode DAT_03FBF5D6 = L"FileDescription";
TerminatedUnicode DAT_03FBF5F8 = L"Nocturne(TM) Editor";
TerminatedUnicode DAT_03FBF626 = L"OriginalFilename";
TerminatedUnicode DAT_03FBF648 = L"NocEdit.exe";
TerminatedUnicode DAT_03FBF666 = L"ProductName";
TerminatedUnicode DAT_03FBF680 = L"Nocturne Editor";
TerminatedUnicode DAT_03FBF6A6 = L"FileVersion";
TerminatedUnicode DAT_03FBF6C0 = L"1.00.50";
TerminatedUnicode DAT_03FBF6D6 = L"ProductVersion";
TerminatedUnicode DAT_03FBF6F4 = L"1.00.50";
TerminatedUnicode DAT_03FBF70A = L"VarFileInfo";
TerminatedUnicode DAT_03FBF72A = L"Translation";

// VS_VERSION_INFO
VS_VERSION_INFO Rsrc_Version_1_0 = {
    .StructLength = 0x02F8,
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
    .FileTimestamp = 0x387A0DEE
};

// word
word DAT_03FB00DE = 0x0;
word DAT_03FB0202 = 0x0;
word DAT_03FB02B2 = 0x0;
word DAT_03FB036A = 0x0;
word DAT_03FB04D2 = 0x0;
word DAT_03FB0592 = 0x0;
word DAT_03FB0746 = 0x0;
word DAT_03FB0952 = 0x0;
word DAT_03FB0A9E = 0x0;
word DAT_03FB0BEA = 0x0;
word DAT_03FB0D56 = 0x0;
word DAT_03FB0F22 = 0x0;
word DAT_03FB102A = 0x0;
word DAT_03FB12EE = 0x0;
word DAT_03FB1436 = 0x0;
word DAT_03FB162A = 0x0;
word DAT_03FB196A = 0x0;
word DAT_03FB1AC6 = 0x0;
word DAT_03FB1B72 = 0x0;
word DAT_03FB1FD6 = 0x0;
word DAT_03FB22E6 = 0x0;
word DAT_03FB234E = 0x0;
word DAT_03FB2422 = 0x0;
word DAT_03FB25B2 = 0x0;
word DAT_03FB267A = 0x0;
word DAT_03FB278A = 0x0;
word DAT_03FB285A = 0x0;
word DAT_03FB298A = 0x0;
word DAT_03FB2B3A = 0x0;
word DAT_03FB2CDE = 0x0;
word DAT_03FB2DBE = 0x0;
word DAT_03FB2E76 = 0x0;
word DAT_03FB31BE = 0x0;
word DAT_03FB328E = 0x0;
word DAT_03FB3346 = 0x0;
word DAT_03FB3402 = 0x0;
word DAT_03FB38D2 = 0x0;
word DAT_03FB394E = 0x0;
word DAT_03FB3B46 = 0x0;
word DAT_03FB3D96 = 0x0;
word DAT_03FB3F4E = 0x0;
word DAT_03FB414A = 0x0;
word DAT_03FB43C6 = 0x0;
word DAT_03FB43E6 = 0x0;
word DAT_03FB4426 = 0x0;
word DAT_03FB45DA = 0x0;
word DAT_03FB46FA = 0x0;
word DAT_03FB4862 = 0x0;
word DAT_03FB4952 = 0x0;
word DAT_03FB4BF6 = 0x0;
word DAT_03FB4CCE = 0x0;
word DAT_03FB4E96 = 0x0;
word DAT_03FB4F96 = 0x0;
word DAT_03FB509A = 0x0;
word DAT_03FB547E = 0x0;
word DAT_03FB587A = 0x0;
word DAT_03FB6346 = 0x0;
word DAT_03FB6606 = 0x0;
word DAT_03FB66CE = 0x0;
word DAT_03FB676E = 0x0;
word DAT_03FB69C6 = 0x0;
word DAT_03FB6A3A = 0x0;
word DAT_03FB6AC6 = 0x0;
word DAT_03FB6BCA = 0x0;
word DAT_03FB6C16 = 0x0;
word DAT_03FB6C36 = 0x0;
word DAT_03FB6C9A = 0x0;
word DAT_03FB6E4A = 0x0;
word DAT_03FB6EC2 = 0x0;
word DAT_03FB727E = 0x0;
word DAT_03FB73EE = 0x0;
word DAT_03FB74CE = 0x0;
word DAT_03FB7726 = 0x0;
word DAT_03FB7782 = 0x0;
word DAT_03FB7952 = 0x0;
word DAT_03FB7B6A = 0x0;
word DAT_03FB80E2 = 0x0;
word DAT_03FB8176 = 0x0;
word DAT_03FB849A = 0x0;
word DAT_03FB8856 = 0x0;
word DAT_03FB896E = 0x0;
word DAT_03FB89C2 = 0x0;
word DAT_03FB8B62 = 0x0;
word DAT_03FB8DF6 = 0x0;
word DAT_03FB8FFA = 0x0;
word DAT_03FB919E = 0x0;
word DAT_03FB949A = 0x0;
word DAT_03FB97FA = 0x0;
word DAT_03FB9B52 = 0x0;
word DAT_03FBA1FA = 0x0;
word DAT_03FBADB2 = 0x0;
word DAT_03FBC67E = 0x0;
word DAT_03FBCC1E = 0x0;
word DAT_03FBD1C2 = 0x0;
word DAT_03FBE3FA = 0x0;
word DAT_03FBE4FE = 0x0;
word DAT_03FBE532 = 0x0;
word DAT_03FBE53E = 0x0;
word DAT_03FBE54E = 0x0;
word DAT_03FBE5F6 = 0x0;
word DAT_03FBE662 = 0x0;
word DAT_03FBE8D6 = 0x0;
word DAT_03FBE986 = 0x0;
word DAT_03FBEC8E = 0x0;

