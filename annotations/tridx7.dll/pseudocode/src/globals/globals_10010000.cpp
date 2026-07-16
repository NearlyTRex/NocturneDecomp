#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x10010000
// =============================================================================

// CDLLTextureCache
CDLLTextureCache CDLLTextureCache_10018660 = {};

// CDLLTextureCache*
CDLLTextureCache* g_TextureCache32 = (CDLLTextureCache*)&CDLLTextureCache_10060678;
CDLLTextureCache* g_TextureCache64 = (CDLLTextureCache*)&CDLLTextureCache_100a8688;
CDLLTextureCache* g_TextureCache128 = (CDLLTextureCache*)&CDLLTextureCache_100f0698;
CDLLTextureCache* g_TextureCache256 = (CDLLTextureCache*)&CDLLTextureCache_10018660;

// GUID
GUID g_IID_IDirectDraw4 = {0x9C59509A, 0x39BD, 0x11D1, {0x8C, 0x4A, 0x00, 0xC0, 0x4F, 0xD9, 0x30, 0xC5}};
GUID g_Direct3DDeviceGUID = {0x84E63DE0, 0x46AA, 0x11CF, {0x81, 0x6F, 0x00, 0x00, 0xC0, 0x20, 0x15, 0x6E}};
GUID g_IID_IDirect3DTexture2 = {0x93281502, 0x8CF8, 0x11D0, {0x89, 0xAB, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x29}};

// IDirect3D3*
IDirect3D3* g_Direct3D3 = nullptr;

// IDirect3DDevice3*
IDirect3DDevice3* g_Device = nullptr;

// IDirectDraw*
IDirectDraw* g_DirectDraw = nullptr;

// IDirectDraw4*
IDirectDraw4* g_DirectDraw4 = nullptr;

// IDirectDrawSurface*
IDirectDrawSurface* g_BackBufferSurface = nullptr;
IDirectDrawSurface* g_PrimarySurface = nullptr;
IDirectDrawSurface* g_ZBufferSurface = nullptr;

// IDirectDrawSurface*[8]
IDirectDrawSurface* g_MasterZBufferSurfaces[8] = {};

// IMAGE_DEBUG_DIRECTORY
IMAGE_DEBUG_DIRECTORY DAT_1001201C = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x37FCF2FB,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .Type = 0x00000003,
    .SizeOfData = 0x00001560,
    .AddressOfRawData = 0x00000000,
    .PointerToRawData = 0x0001A110
};
IMAGE_DEBUG_DIRECTORY DAT_10012038 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x37FCF2FB,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .Type = 0x00000002,
    .SizeOfData = 0x00000031,
    .AddressOfRawData = 0x00000000,
    .PointerToRawData = 0x0001B670
};

// LPCRITICAL_SECTION
LPCRITICAL_SECTION LPCRITICAL_SECTION_10016c7c = (LPCRITICAL_SECTION)0x10240630;
LPCRITICAL_SECTION LPCRITICAL_SECTION_10016c9c = (LPCRITICAL_SECTION)0x10240660;
LPCRITICAL_SECTION LPCRITICAL_SECTION_10016cac = (LPCRITICAL_SECTION)0x10240678;
LPCRITICAL_SECTION LPCRITICAL_SECTION_10016cbc = (LPCRITICAL_SECTION)0x10240648;

// int
int g_CurrentTextureIndex = 0;
int g_PremultiplyColorAndAlpha = 0;
int g_AllowAutoMipMapping = 0;
int g_FlyIniPresent = 0;
int g_ZBufferBitDepth = 0;
int g_ScreenWidth = 0x280;
int g_ScreenHeight = 0x1E0;
int g_ScreenBitDepth = 0x10;
int g_DirectTextureFlag = 0;
int g_FrameLocked = 0;
int g_InScene = 0;
int g_SelectedCardIndex = 0;
int g_TextureCount = 0;

// string
string DAT_10012397 = "?GetCurrentThread";
string DAT_10012410 = "runtime error ";
string DAT_10012424 = "TLOSS error\r\n";
string DAT_10012434 = "SING error\r\n";
string DAT_10012444 = "DOMAIN error\r\n";
string DAT_10012454 = "R6027\r\n- not enough space for lowio initialization\r\n";
string DAT_1001248C = "R6026\r\n- not enough space for stdio initialization\r\n";
string DAT_100124C4 = "R6025\r\n- pure virtual function call\r\n";
string DAT_100124EC = "R6024\r\n- not enough space for _onexit/atexit table\r\n";
string DAT_10012524 = "R6019\r\n- unable to open console device\r\n";
string DAT_10012550 = "R6018\r\n- unexpected heap error\r\n";
string DAT_10012574 = "R6017\r\n- unexpected multithread lock error\r\n";
string DAT_100125A4 = "R6016\r\n- not enough space for thread data\r\n";
string DAT_100125D0 = "\r\nabnormal program termination\r\n";
string DAT_100127F8 = "sweden";
string DAT_1001296C = "canada";

// uint
uint g_LocalVideoMem = 0;
uint g_NonLocalVideoMem = 0;

// undefined1
undefined1 DAT_1001277a = 0x00;
undefined1 DAT_10012792 = 0x00;
undefined1 DAT_10016db4 = 0x00;
undefined1 DAT_10016ddc = 0x00;
undefined1 DAT_10017694 = 0x2E;
undefined1 DAT_10017789 = 0x00;
undefined1 DAT_1001778a = 0x00;
undefined1 DAT_1001778b = 0x00;
undefined1 DAT_100177e8 = 0x43;
undefined1 DAT_100177e9 = 0x00;
undefined1 DAT_10017871 = 0x00;
undefined1 DAT_10018533 = 0x00;
undefined1 DAT_1001856f = 0x00;
undefined1 DAT_10018570 = 0x50;
undefined1 DAT_10018573 = 0x00;
undefined1 DAT_100185af = 0x00;

// undefined2
undefined2 DAT_100177dc = 0x0000;
undefined2 DAT_1001794c = 0x0000;
undefined2 DAT_10017954 = 0x0000;
undefined2 DAT_1001795a = 0x0000;
undefined2 DAT_1001795e = 0x0000;
undefined2 DAT_10017960 = 0x0000;

// undefined4
undefined4 DAT_100141b8 = 0x00000000;
undefined4 DAT_100141bc = 0x000000FF;
undefined4 DAT_100141c0 = 0x000000FF;
undefined4 DAT_100141d4 = 0x00000000;
undefined4 DAT_100141e4 = 0x00000000;
undefined4 DAT_100141e8 = 0x00000000;
undefined4 DAT_100141f4 = 0x00000000;
undefined4 DAT_100141fc = 0x00000000;
undefined4 DAT_1001421c = 0x00000000;
undefined4 DAT_10014220 = 0x00000000;
undefined4 DAT_10014224 = 0x00000001;
undefined4 DAT_10014228 = 0x00000000;
undefined4 DAT_1001422c = 0x00000000;
undefined4 DAT_10014230 = 0x00000000;
undefined4 DAT_10014234 = 0x00000000;
undefined4 DAT_10016c60 = 0x00000000;
undefined4 DAT_10016c64 = 0x00000000;
undefined4 DAT_10016c70 = 0x00000000;
undefined4 DAT_10016c74 = 0x00000000;
undefined4 DAT_10016c78 = 0x00000000;
undefined4 DAT_10016d38 = 0x00000000;
undefined4 DAT_10016d60 = 0x00000000;
undefined4 DAT_10016d64 = 0x00000000;
undefined4 DAT_10016d80 = 0x00000000;
undefined4 DAT_10016d84 = 0x00000000;
undefined4 DAT_10016d88 = 0x00000000;
undefined4 DAT_10016d9c = 0x00000000;
undefined4 DAT_10016da0 = 0x00000000;
undefined4 DAT_10016da4 = 0xFFFFFFFF;
undefined4 DAT_10016dd8 = 0x00000000;
undefined4 DAT_10016edc = 0x00000000;
undefined4 DAT_10016ee0 = 0x00000000;
undefined4 DAT_10016ee8 = 0x00000000;
undefined4 DAT_10016eec = 0x00000000;
undefined4 DAT_10016ef0 = 0x00000000;
undefined4 DAT_10016ef4 = 0x00000000;
undefined4 DAT_10016ff0 = 0x00000000;
undefined4 DAT_10016ff4 = 0x00000000;
undefined4 DAT_10017080 = 0x00000000;
undefined4 DAT_10017098 = 0x00000000;
undefined4 DAT_100170b8 = 0x00000001;
undefined4 DAT_1001768c = 0x00000000;
undefined4 DAT_10017690 = 0x00000001;
undefined4 DAT_10017760 = 0x00000000;
undefined4 DAT_10017764 = 0x00000000;
undefined4 DAT_10017768 = 0x00000000;
undefined4 DAT_1001776c = 0x00000000;
undefined4 DAT_10017770 = 0x00000000;
undefined4 DAT_10017774 = 0x00000000;
undefined4 DAT_10017778 = 0x00000000;
undefined4 DAT_1001777c = 0x00000000;
undefined4 DAT_10017780 = 0x00000000;
undefined4 DAT_10017794 = 0x00000000;
undefined4 DAT_100177d8 = 0x00000000;
undefined4 DAT_100177e0 = 0x00000000;
undefined4 DAT_100178f4 = 0x00000000;
undefined4 DAT_100178f8 = 0x00000000;
undefined4 DAT_100178fc = 0x00000000;
undefined4 DAT_10017900 = 0x00000000;
undefined4 DAT_10017904 = 0x00000000;
undefined4 DAT_10017908 = 0x00000000;
undefined4 DAT_1001790c = 0x00000000;
undefined4 DAT_10017910 = 0x00000000;
undefined4 DAT_10017914 = 0x00000000;
undefined4 DAT_10017918 = 0x00000000;
undefined4 DAT_1001791c = 0x00000000;
undefined4 DAT_10017920 = 0x00000000;
undefined4 DAT_10017924 = 0x00000000;
undefined4 DAT_10017928 = 0x00000000;
undefined4 DAT_1001792c = 0x00000000;
undefined4 DAT_10017930 = 0x00000000;
undefined4 DAT_10017934 = 0x00000000;
undefined4 DAT_10018210 = 0x00000000;
undefined4 DAT_10018214 = 0x00000000;
undefined4 DAT_10018254 = 0x00000000;
undefined4 DAT_10018258 = 0x00000000;
undefined4 DAT_10018520 = 0x00007080;
undefined4 DAT_10018524 = 0x00000001;
undefined4 DAT_100185b8 = 0x00000000;
undefined4 DAT_100185c0 = 0xFFFFFFFF;
undefined4 DAT_100185c4 = 0x00000000;
undefined4 DAT_100185c8 = 0x00000000;
undefined4 DAT_100185d0 = 0xFFFFFFFF;
undefined4 DAT_100185d4 = 0x00000000;
undefined4 DAT_100185d8 = 0x00000000;
undefined4 DAT_100185dc = 0x00000000;
undefined4 DAT_1001864c = 0x00000000;
undefined4 DAT_10018650 = 0x00000000;

// unicode
unicode u_null_1001230a = L"null)";

// word
word WORD_10013000 = 0;

