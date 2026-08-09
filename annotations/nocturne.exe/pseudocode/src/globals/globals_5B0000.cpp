#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x5B0000
// =============================================================================

// CDemonMission*
CDemonMission* g_CDemonMission_PTR_005baf90 = (CDemonMission*)0x01CC9450; // DAT_01cc9450

// CDemonSet*
CDemonSet* g_CDemonSet_PTR_005be368 = (CDemonSet*)&g_CDemonSet_01e57284;

// CEditorTools*
CEditorTools* g_CEditorTools_PTR_005b6d50 = (CEditorTools*)&g_CEditorTools_01bcd074;

// CFireEffect*
CFireEffect* g_CFireEffect_PTR_005b80f0 = (CFireEffect*)&g_CFireEffect_01c08d04;

// CForceFeedback*
CForceFeedback* g_CForceFeedback_PTR_005b9284 = (CForceFeedback*)&g_CForceFeedback_01c70f74;

// CGame*
CGame* g_CGame_PTR_005b9354 = (CGame*)&g_CGame_01c775ec;

// CGore*
CGore* g_CGore_PTR_005b96c4 = (CGore*)&g_CGore_01c78c7c;

// CKeys*
CKeys* g_CKeys_PTR_005bac64 = (CKeys*)&g_CKeys_01cc30e4;

// CLevelLoader*
CLevelLoader* g_CLevelLoader_PTR_005baca0 = (CLevelLoader*)&g_CLevelLoader_01cc3160;

// CMouse*
CMouse* g_CMouse_PTR_005be060 = (CMouse*)&g_CMouse_01d465c0;

// CNetGame*
CNetGame* g_CNetGame_PTR_005bdee0 = (CNetGame*)&g_CNetGame_01cea280;

// CPod*
CPod* g_CPod_PTR_005be1cc = (CPod*)&g_CDemonPod_01e528d0;

// CSound*
CSound* g_CSound_PTR_005bed68 = (CSound*)&g_CSound_02dc9450;

// SAlphaEntry[256]
SAlphaEntry g_AlphaTable[256] = {
    {
        .red = 0x0000,
        .green = 0x0000,
        .blue = 0x0000,
        .alignment = 0x0000
    },
    {
        .red = 0x0001,
        .green = 0x0001,
        .blue = 0x0001,
        .alignment = 0x0000
    },
    {
        .red = 0x0002,
        .green = 0x0002,
        .blue = 0x0002,
        .alignment = 0x0000
    },
    {
        .red = 0x0003,
        .green = 0x0003,
        .blue = 0x0003,
        .alignment = 0x0000
    },
    {
        .red = 0x0004,
        .green = 0x0004,
        .blue = 0x0004,
        .alignment = 0x0000
    },
    {
        .red = 0x0005,
        .green = 0x0005,
        .blue = 0x0005,
        .alignment = 0x0000
    },
    {
        .red = 0x0006,
        .green = 0x0006,
        .blue = 0x0006,
        .alignment = 0x0000
    },
    {
        .red = 0x0007,
        .green = 0x0007,
        .blue = 0x0007,
        .alignment = 0x0000
    },
    {
        .red = 0x0008,
        .green = 0x0008,
        .blue = 0x0008,
        .alignment = 0x0000
    },
    {
        .red = 0x0009,
        .green = 0x0009,
        .blue = 0x0009,
        .alignment = 0x0000
    },
    {
        .red = 0x000A,
        .green = 0x000A,
        .blue = 0x000A,
        .alignment = 0x0000
    },
    {
        .red = 0x000B,
        .green = 0x000B,
        .blue = 0x000B,
        .alignment = 0x0000
    },
    {
        .red = 0x000C,
        .green = 0x000C,
        .blue = 0x000C,
        .alignment = 0x0000
    },
    {
        .red = 0x000D,
        .green = 0x000D,
        .blue = 0x000D,
        .alignment = 0x0000
    },
    {
        .red = 0x000E,
        .green = 0x000E,
        .blue = 0x000E,
        .alignment = 0x0000
    },
    {
        .red = 0x000F,
        .green = 0x000F,
        .blue = 0x000F,
        .alignment = 0x0000
    },
    {
        .red = 0x0010,
        .green = 0x0010,
        .blue = 0x0010,
        .alignment = 0x0000
    },
    {
        .red = 0x0011,
        .green = 0x0011,
        .blue = 0x0011,
        .alignment = 0x0000
    },
    {
        .red = 0x0012,
        .green = 0x0012,
        .blue = 0x0012,
        .alignment = 0x0000
    },
    {
        .red = 0x0013,
        .green = 0x0013,
        .blue = 0x0013,
        .alignment = 0x0000
    },
    {
        .red = 0x0014,
        .green = 0x0014,
        .blue = 0x0014,
        .alignment = 0x0000
    },
    {
        .red = 0x0015,
        .green = 0x0015,
        .blue = 0x0015,
        .alignment = 0x0000
    },
    {
        .red = 0x0016,
        .green = 0x0016,
        .blue = 0x0016,
        .alignment = 0x0000
    },
    {
        .red = 0x0017,
        .green = 0x0017,
        .blue = 0x0017,
        .alignment = 0x0000
    },
    {
        .red = 0x0018,
        .green = 0x0018,
        .blue = 0x0018,
        .alignment = 0x0000
    },
    {
        .red = 0x0019,
        .green = 0x0019,
        .blue = 0x0019,
        .alignment = 0x0000
    },
    {
        .red = 0x001A,
        .green = 0x001A,
        .blue = 0x001A,
        .alignment = 0x0000
    },
    {
        .red = 0x001B,
        .green = 0x001B,
        .blue = 0x001B,
        .alignment = 0x0000
    },
    {
        .red = 0x001C,
        .green = 0x001C,
        .blue = 0x001C,
        .alignment = 0x0000
    },
    {
        .red = 0x001D,
        .green = 0x001D,
        .blue = 0x001D,
        .alignment = 0x0000
    },
    {
        .red = 0x001E,
        .green = 0x001E,
        .blue = 0x001E,
        .alignment = 0x0000
    },
    {
        .red = 0x001F,
        .green = 0x001F,
        .blue = 0x001F,
        .alignment = 0x0000
    },
    {
        .red = 0x0020,
        .green = 0x0020,
        .blue = 0x0020,
        .alignment = 0x0000
    },
    {
        .red = 0x0021,
        .green = 0x0021,
        .blue = 0x0021,
        .alignment = 0x0000
    },
    {
        .red = 0x0022,
        .green = 0x0022,
        .blue = 0x0022,
        .alignment = 0x0000
    },
    {
        .red = 0x0023,
        .green = 0x0023,
        .blue = 0x0023,
        .alignment = 0x0000
    },
    {
        .red = 0x0024,
        .green = 0x0024,
        .blue = 0x0024,
        .alignment = 0x0000
    },
    {
        .red = 0x0025,
        .green = 0x0025,
        .blue = 0x0025,
        .alignment = 0x0000
    },
    {
        .red = 0x0026,
        .green = 0x0026,
        .blue = 0x0026,
        .alignment = 0x0000
    },
    {
        .red = 0x0027,
        .green = 0x0027,
        .blue = 0x0027,
        .alignment = 0x0000
    },
    {
        .red = 0x0028,
        .green = 0x0028,
        .blue = 0x0028,
        .alignment = 0x0000
    },
    {
        .red = 0x0029,
        .green = 0x0029,
        .blue = 0x0029,
        .alignment = 0x0000
    },
    {
        .red = 0x002A,
        .green = 0x002A,
        .blue = 0x002A,
        .alignment = 0x0000
    },
    {
        .red = 0x002B,
        .green = 0x002B,
        .blue = 0x002B,
        .alignment = 0x0000
    },
    {
        .red = 0x002C,
        .green = 0x002C,
        .blue = 0x002C,
        .alignment = 0x0000
    },
    {
        .red = 0x002D,
        .green = 0x002D,
        .blue = 0x002D,
        .alignment = 0x0000
    },
    {
        .red = 0x002E,
        .green = 0x002E,
        .blue = 0x002E,
        .alignment = 0x0000
    },
    {
        .red = 0x002F,
        .green = 0x002F,
        .blue = 0x002F,
        .alignment = 0x0000
    },
    {
        .red = 0x0030,
        .green = 0x0030,
        .blue = 0x0030,
        .alignment = 0x0000
    },
    {
        .red = 0x0031,
        .green = 0x0031,
        .blue = 0x0031,
        .alignment = 0x0000
    },
    {
        .red = 0x0032,
        .green = 0x0032,
        .blue = 0x0032,
        .alignment = 0x0000
    },
    {
        .red = 0x0033,
        .green = 0x0033,
        .blue = 0x0033,
        .alignment = 0x0000
    },
    {
        .red = 0x0034,
        .green = 0x0034,
        .blue = 0x0034,
        .alignment = 0x0000
    },
    {
        .red = 0x0035,
        .green = 0x0035,
        .blue = 0x0035,
        .alignment = 0x0000
    },
    {
        .red = 0x0036,
        .green = 0x0036,
        .blue = 0x0036,
        .alignment = 0x0000
    },
    {
        .red = 0x0037,
        .green = 0x0037,
        .blue = 0x0037,
        .alignment = 0x0000
    },
    {
        .red = 0x0038,
        .green = 0x0038,
        .blue = 0x0038,
        .alignment = 0x0000
    },
    {
        .red = 0x0039,
        .green = 0x0039,
        .blue = 0x0039,
        .alignment = 0x0000
    },
    {
        .red = 0x003A,
        .green = 0x003A,
        .blue = 0x003A,
        .alignment = 0x0000
    },
    {
        .red = 0x003B,
        .green = 0x003B,
        .blue = 0x003B,
        .alignment = 0x0000
    },
    {
        .red = 0x003C,
        .green = 0x003C,
        .blue = 0x003C,
        .alignment = 0x0000
    },
    {
        .red = 0x003D,
        .green = 0x003D,
        .blue = 0x003D,
        .alignment = 0x0000
    },
    {
        .red = 0x003E,
        .green = 0x003E,
        .blue = 0x003E,
        .alignment = 0x0000
    },
    {
        .red = 0x003F,
        .green = 0x003F,
        .blue = 0x003F,
        .alignment = 0x0000
    },
    {
        .red = 0x0040,
        .green = 0x0040,
        .blue = 0x0040,
        .alignment = 0x0000
    },
    {
        .red = 0x0041,
        .green = 0x0041,
        .blue = 0x0041,
        .alignment = 0x0000
    },
    {
        .red = 0x0042,
        .green = 0x0042,
        .blue = 0x0042,
        .alignment = 0x0000
    },
    {
        .red = 0x0043,
        .green = 0x0043,
        .blue = 0x0043,
        .alignment = 0x0000
    },
    {
        .red = 0x0044,
        .green = 0x0044,
        .blue = 0x0044,
        .alignment = 0x0000
    },
    {
        .red = 0x0045,
        .green = 0x0045,
        .blue = 0x0045,
        .alignment = 0x0000
    },
    {
        .red = 0x0046,
        .green = 0x0046,
        .blue = 0x0046,
        .alignment = 0x0000
    },
    {
        .red = 0x0047,
        .green = 0x0047,
        .blue = 0x0047,
        .alignment = 0x0000
    },
    {
        .red = 0x0048,
        .green = 0x0048,
        .blue = 0x0048,
        .alignment = 0x0000
    },
    {
        .red = 0x0049,
        .green = 0x0049,
        .blue = 0x0049,
        .alignment = 0x0000
    },
    {
        .red = 0x004A,
        .green = 0x004A,
        .blue = 0x004A,
        .alignment = 0x0000
    },
    {
        .red = 0x004B,
        .green = 0x004B,
        .blue = 0x004B,
        .alignment = 0x0000
    },
    {
        .red = 0x004C,
        .green = 0x004C,
        .blue = 0x004C,
        .alignment = 0x0000
    },
    {
        .red = 0x004D,
        .green = 0x004D,
        .blue = 0x004D,
        .alignment = 0x0000
    },
    {
        .red = 0x004E,
        .green = 0x004E,
        .blue = 0x004E,
        .alignment = 0x0000
    },
    {
        .red = 0x004F,
        .green = 0x004F,
        .blue = 0x004F,
        .alignment = 0x0000
    },
    {
        .red = 0x0050,
        .green = 0x0050,
        .blue = 0x0050,
        .alignment = 0x0000
    },
    {
        .red = 0x0051,
        .green = 0x0051,
        .blue = 0x0051,
        .alignment = 0x0000
    },
    {
        .red = 0x0052,
        .green = 0x0052,
        .blue = 0x0052,
        .alignment = 0x0000
    },
    {
        .red = 0x0053,
        .green = 0x0053,
        .blue = 0x0053,
        .alignment = 0x0000
    },
    {
        .red = 0x0054,
        .green = 0x0054,
        .blue = 0x0054,
        .alignment = 0x0000
    },
    {
        .red = 0x0055,
        .green = 0x0055,
        .blue = 0x0055,
        .alignment = 0x0000
    },
    {
        .red = 0x0056,
        .green = 0x0056,
        .blue = 0x0056,
        .alignment = 0x0000
    },
    {
        .red = 0x0057,
        .green = 0x0057,
        .blue = 0x0057,
        .alignment = 0x0000
    },
    {
        .red = 0x0058,
        .green = 0x0058,
        .blue = 0x0058,
        .alignment = 0x0000
    },
    {
        .red = 0x0059,
        .green = 0x0059,
        .blue = 0x0059,
        .alignment = 0x0000
    },
    {
        .red = 0x005A,
        .green = 0x005A,
        .blue = 0x005A,
        .alignment = 0x0000
    },
    {
        .red = 0x005B,
        .green = 0x005B,
        .blue = 0x005B,
        .alignment = 0x0000
    },
    {
        .red = 0x005C,
        .green = 0x005C,
        .blue = 0x005C,
        .alignment = 0x0000
    },
    {
        .red = 0x005D,
        .green = 0x005D,
        .blue = 0x005D,
        .alignment = 0x0000
    },
    {
        .red = 0x005E,
        .green = 0x005E,
        .blue = 0x005E,
        .alignment = 0x0000
    },
    {
        .red = 0x005F,
        .green = 0x005F,
        .blue = 0x005F,
        .alignment = 0x0000
    },
    {
        .red = 0x0060,
        .green = 0x0060,
        .blue = 0x0060,
        .alignment = 0x0000
    },
    {
        .red = 0x0061,
        .green = 0x0061,
        .blue = 0x0061,
        .alignment = 0x0000
    },
    {
        .red = 0x0062,
        .green = 0x0062,
        .blue = 0x0062,
        .alignment = 0x0000
    },
    {
        .red = 0x0063,
        .green = 0x0063,
        .blue = 0x0063,
        .alignment = 0x0000
    },
    {
        .red = 0x0064,
        .green = 0x0064,
        .blue = 0x0064,
        .alignment = 0x0000
    },
    {
        .red = 0x0065,
        .green = 0x0065,
        .blue = 0x0065,
        .alignment = 0x0000
    },
    {
        .red = 0x0066,
        .green = 0x0066,
        .blue = 0x0066,
        .alignment = 0x0000
    },
    {
        .red = 0x0067,
        .green = 0x0067,
        .blue = 0x0067,
        .alignment = 0x0000
    },
    {
        .red = 0x0068,
        .green = 0x0068,
        .blue = 0x0068,
        .alignment = 0x0000
    },
    {
        .red = 0x0069,
        .green = 0x0069,
        .blue = 0x0069,
        .alignment = 0x0000
    },
    {
        .red = 0x006A,
        .green = 0x006A,
        .blue = 0x006A,
        .alignment = 0x0000
    },
    {
        .red = 0x006B,
        .green = 0x006B,
        .blue = 0x006B,
        .alignment = 0x0000
    },
    {
        .red = 0x006C,
        .green = 0x006C,
        .blue = 0x006C,
        .alignment = 0x0000
    },
    {
        .red = 0x006D,
        .green = 0x006D,
        .blue = 0x006D,
        .alignment = 0x0000
    },
    {
        .red = 0x006E,
        .green = 0x006E,
        .blue = 0x006E,
        .alignment = 0x0000
    },
    {
        .red = 0x006F,
        .green = 0x006F,
        .blue = 0x006F,
        .alignment = 0x0000
    },
    {
        .red = 0x0070,
        .green = 0x0070,
        .blue = 0x0070,
        .alignment = 0x0000
    },
    {
        .red = 0x0071,
        .green = 0x0071,
        .blue = 0x0071,
        .alignment = 0x0000
    },
    {
        .red = 0x0072,
        .green = 0x0072,
        .blue = 0x0072,
        .alignment = 0x0000
    },
    {
        .red = 0x0073,
        .green = 0x0073,
        .blue = 0x0073,
        .alignment = 0x0000
    },
    {
        .red = 0x0074,
        .green = 0x0074,
        .blue = 0x0074,
        .alignment = 0x0000
    },
    {
        .red = 0x0075,
        .green = 0x0075,
        .blue = 0x0075,
        .alignment = 0x0000
    },
    {
        .red = 0x0076,
        .green = 0x0076,
        .blue = 0x0076,
        .alignment = 0x0000
    },
    {
        .red = 0x0077,
        .green = 0x0077,
        .blue = 0x0077,
        .alignment = 0x0000
    },
    {
        .red = 0x0078,
        .green = 0x0078,
        .blue = 0x0078,
        .alignment = 0x0000
    },
    {
        .red = 0x0079,
        .green = 0x0079,
        .blue = 0x0079,
        .alignment = 0x0000
    },
    {
        .red = 0x007A,
        .green = 0x007A,
        .blue = 0x007A,
        .alignment = 0x0000
    },
    {
        .red = 0x007B,
        .green = 0x007B,
        .blue = 0x007B,
        .alignment = 0x0000
    },
    {
        .red = 0x007C,
        .green = 0x007C,
        .blue = 0x007C,
        .alignment = 0x0000
    },
    {
        .red = 0x007D,
        .green = 0x007D,
        .blue = 0x007D,
        .alignment = 0x0000
    },
    {
        .red = 0x007E,
        .green = 0x007E,
        .blue = 0x007E,
        .alignment = 0x0000
    },
    {
        .red = 0x007F,
        .green = 0x007F,
        .blue = 0x007F,
        .alignment = 0x0000
    },
    {
        .red = 0x0080,
        .green = 0x0080,
        .blue = 0x0080,
        .alignment = 0x0000
    },
    {
        .red = 0x0081,
        .green = 0x0081,
        .blue = 0x0081,
        .alignment = 0x0000
    },
    {
        .red = 0x0082,
        .green = 0x0082,
        .blue = 0x0082,
        .alignment = 0x0000
    },
    {
        .red = 0x0083,
        .green = 0x0083,
        .blue = 0x0083,
        .alignment = 0x0000
    },
    {
        .red = 0x0084,
        .green = 0x0084,
        .blue = 0x0084,
        .alignment = 0x0000
    },
    {
        .red = 0x0085,
        .green = 0x0085,
        .blue = 0x0085,
        .alignment = 0x0000
    },
    {
        .red = 0x0086,
        .green = 0x0086,
        .blue = 0x0086,
        .alignment = 0x0000
    },
    {
        .red = 0x0087,
        .green = 0x0087,
        .blue = 0x0087,
        .alignment = 0x0000
    },
    {
        .red = 0x0088,
        .green = 0x0088,
        .blue = 0x0088,
        .alignment = 0x0000
    },
    {
        .red = 0x0089,
        .green = 0x0089,
        .blue = 0x0089,
        .alignment = 0x0000
    },
    {
        .red = 0x008A,
        .green = 0x008A,
        .blue = 0x008A,
        .alignment = 0x0000
    },
    {
        .red = 0x008B,
        .green = 0x008B,
        .blue = 0x008B,
        .alignment = 0x0000
    },
    {
        .red = 0x008C,
        .green = 0x008C,
        .blue = 0x008C,
        .alignment = 0x0000
    },
    {
        .red = 0x008D,
        .green = 0x008D,
        .blue = 0x008D,
        .alignment = 0x0000
    },
    {
        .red = 0x008E,
        .green = 0x008E,
        .blue = 0x008E,
        .alignment = 0x0000
    },
    {
        .red = 0x008F,
        .green = 0x008F,
        .blue = 0x008F,
        .alignment = 0x0000
    },
    {
        .red = 0x0090,
        .green = 0x0090,
        .blue = 0x0090,
        .alignment = 0x0000
    },
    {
        .red = 0x0091,
        .green = 0x0091,
        .blue = 0x0091,
        .alignment = 0x0000
    },
    {
        .red = 0x0092,
        .green = 0x0092,
        .blue = 0x0092,
        .alignment = 0x0000
    },
    {
        .red = 0x0093,
        .green = 0x0093,
        .blue = 0x0093,
        .alignment = 0x0000
    },
    {
        .red = 0x0094,
        .green = 0x0094,
        .blue = 0x0094,
        .alignment = 0x0000
    },
    {
        .red = 0x0095,
        .green = 0x0095,
        .blue = 0x0095,
        .alignment = 0x0000
    },
    {
        .red = 0x0096,
        .green = 0x0096,
        .blue = 0x0096,
        .alignment = 0x0000
    },
    {
        .red = 0x0097,
        .green = 0x0097,
        .blue = 0x0097,
        .alignment = 0x0000
    },
    {
        .red = 0x0098,
        .green = 0x0098,
        .blue = 0x0098,
        .alignment = 0x0000
    },
    {
        .red = 0x0099,
        .green = 0x0099,
        .blue = 0x0099,
        .alignment = 0x0000
    },
    {
        .red = 0x009A,
        .green = 0x009A,
        .blue = 0x009A,
        .alignment = 0x0000
    },
    {
        .red = 0x009B,
        .green = 0x009B,
        .blue = 0x009B,
        .alignment = 0x0000
    },
    {
        .red = 0x009C,
        .green = 0x009C,
        .blue = 0x009C,
        .alignment = 0x0000
    },
    {
        .red = 0x009D,
        .green = 0x009D,
        .blue = 0x009D,
        .alignment = 0x0000
    },
    {
        .red = 0x009E,
        .green = 0x009E,
        .blue = 0x009E,
        .alignment = 0x0000
    },
    {
        .red = 0x009F,
        .green = 0x009F,
        .blue = 0x009F,
        .alignment = 0x0000
    },
    {
        .red = 0x00A0,
        .green = 0x00A0,
        .blue = 0x00A0,
        .alignment = 0x0000
    },
    {
        .red = 0x00A1,
        .green = 0x00A1,
        .blue = 0x00A1,
        .alignment = 0x0000
    },
    {
        .red = 0x00A2,
        .green = 0x00A2,
        .blue = 0x00A2,
        .alignment = 0x0000
    },
    {
        .red = 0x00A3,
        .green = 0x00A3,
        .blue = 0x00A3,
        .alignment = 0x0000
    },
    {
        .red = 0x00A4,
        .green = 0x00A4,
        .blue = 0x00A4,
        .alignment = 0x0000
    },
    {
        .red = 0x00A5,
        .green = 0x00A5,
        .blue = 0x00A5,
        .alignment = 0x0000
    },
    {
        .red = 0x00A6,
        .green = 0x00A6,
        .blue = 0x00A6,
        .alignment = 0x0000
    },
    {
        .red = 0x00A7,
        .green = 0x00A7,
        .blue = 0x00A7,
        .alignment = 0x0000
    },
    {
        .red = 0x00A8,
        .green = 0x00A8,
        .blue = 0x00A8,
        .alignment = 0x0000
    },
    {
        .red = 0x00A9,
        .green = 0x00A9,
        .blue = 0x00A9,
        .alignment = 0x0000
    },
    {
        .red = 0x00AA,
        .green = 0x00AA,
        .blue = 0x00AA,
        .alignment = 0x0000
    },
    {
        .red = 0x00AB,
        .green = 0x00AB,
        .blue = 0x00AB,
        .alignment = 0x0000
    },
    {
        .red = 0x00AC,
        .green = 0x00AC,
        .blue = 0x00AC,
        .alignment = 0x0000
    },
    {
        .red = 0x00AD,
        .green = 0x00AD,
        .blue = 0x00AD,
        .alignment = 0x0000
    },
    {
        .red = 0x00AE,
        .green = 0x00AE,
        .blue = 0x00AE,
        .alignment = 0x0000
    },
    {
        .red = 0x00AF,
        .green = 0x00AF,
        .blue = 0x00AF,
        .alignment = 0x0000
    },
    {
        .red = 0x00B0,
        .green = 0x00B0,
        .blue = 0x00B0,
        .alignment = 0x0000
    },
    {
        .red = 0x00B1,
        .green = 0x00B1,
        .blue = 0x00B1,
        .alignment = 0x0000
    },
    {
        .red = 0x00B2,
        .green = 0x00B2,
        .blue = 0x00B2,
        .alignment = 0x0000
    },
    {
        .red = 0x00B3,
        .green = 0x00B3,
        .blue = 0x00B3,
        .alignment = 0x0000
    },
    {
        .red = 0x00B4,
        .green = 0x00B4,
        .blue = 0x00B4,
        .alignment = 0x0000
    },
    {
        .red = 0x00B5,
        .green = 0x00B5,
        .blue = 0x00B5,
        .alignment = 0x0000
    },
    {
        .red = 0x00B6,
        .green = 0x00B6,
        .blue = 0x00B6,
        .alignment = 0x0000
    },
    {
        .red = 0x00B7,
        .green = 0x00B7,
        .blue = 0x00B7,
        .alignment = 0x0000
    },
    {
        .red = 0x00B8,
        .green = 0x00B8,
        .blue = 0x00B8,
        .alignment = 0x0000
    },
    {
        .red = 0x00B9,
        .green = 0x00B9,
        .blue = 0x00B9,
        .alignment = 0x0000
    },
    {
        .red = 0x00BA,
        .green = 0x00BA,
        .blue = 0x00BA,
        .alignment = 0x0000
    },
    {
        .red = 0x00BB,
        .green = 0x00BB,
        .blue = 0x00BB,
        .alignment = 0x0000
    },
    {
        .red = 0x00BC,
        .green = 0x00BC,
        .blue = 0x00BC,
        .alignment = 0x0000
    },
    {
        .red = 0x00BD,
        .green = 0x00BD,
        .blue = 0x00BD,
        .alignment = 0x0000
    },
    {
        .red = 0x00BE,
        .green = 0x00BE,
        .blue = 0x00BE,
        .alignment = 0x0000
    },
    {
        .red = 0x00BF,
        .green = 0x00BF,
        .blue = 0x00BF,
        .alignment = 0x0000
    },
    {
        .red = 0x00C0,
        .green = 0x00C0,
        .blue = 0x00C0,
        .alignment = 0x0000
    },
    {
        .red = 0x00C1,
        .green = 0x00C1,
        .blue = 0x00C1,
        .alignment = 0x0000
    },
    {
        .red = 0x00C2,
        .green = 0x00C2,
        .blue = 0x00C2,
        .alignment = 0x0000
    },
    {
        .red = 0x00C3,
        .green = 0x00C3,
        .blue = 0x00C3,
        .alignment = 0x0000
    },
    {
        .red = 0x00C4,
        .green = 0x00C4,
        .blue = 0x00C4,
        .alignment = 0x0000
    },
    {
        .red = 0x00C5,
        .green = 0x00C5,
        .blue = 0x00C5,
        .alignment = 0x0000
    },
    {
        .red = 0x00C6,
        .green = 0x00C6,
        .blue = 0x00C6,
        .alignment = 0x0000
    },
    {
        .red = 0x00C7,
        .green = 0x00C7,
        .blue = 0x00C7,
        .alignment = 0x0000
    },
    {
        .red = 0x00C8,
        .green = 0x00C8,
        .blue = 0x00C8,
        .alignment = 0x0000
    },
    {
        .red = 0x00C9,
        .green = 0x00C9,
        .blue = 0x00C9,
        .alignment = 0x0000
    },
    {
        .red = 0x00CA,
        .green = 0x00CA,
        .blue = 0x00CA,
        .alignment = 0x0000
    },
    {
        .red = 0x00CB,
        .green = 0x00CB,
        .blue = 0x00CB,
        .alignment = 0x0000
    },
    {
        .red = 0x00CC,
        .green = 0x00CC,
        .blue = 0x00CC,
        .alignment = 0x0000
    },
    {
        .red = 0x00CD,
        .green = 0x00CD,
        .blue = 0x00CD,
        .alignment = 0x0000
    },
    {
        .red = 0x00CE,
        .green = 0x00CE,
        .blue = 0x00CE,
        .alignment = 0x0000
    },
    {
        .red = 0x00CF,
        .green = 0x00CF,
        .blue = 0x00CF,
        .alignment = 0x0000
    },
    {
        .red = 0x00D0,
        .green = 0x00D0,
        .blue = 0x00D0,
        .alignment = 0x0000
    },
    {
        .red = 0x00D1,
        .green = 0x00D1,
        .blue = 0x00D1,
        .alignment = 0x0000
    },
    {
        .red = 0x00D2,
        .green = 0x00D2,
        .blue = 0x00D2,
        .alignment = 0x0000
    },
    {
        .red = 0x00D3,
        .green = 0x00D3,
        .blue = 0x00D3,
        .alignment = 0x0000
    },
    {
        .red = 0x00D4,
        .green = 0x00D4,
        .blue = 0x00D4,
        .alignment = 0x0000
    },
    {
        .red = 0x00D5,
        .green = 0x00D5,
        .blue = 0x00D5,
        .alignment = 0x0000
    },
    {
        .red = 0x00D6,
        .green = 0x00D6,
        .blue = 0x00D6,
        .alignment = 0x0000
    },
    {
        .red = 0x00D7,
        .green = 0x00D7,
        .blue = 0x00D7,
        .alignment = 0x0000
    },
    {
        .red = 0x00D8,
        .green = 0x00D8,
        .blue = 0x00D8,
        .alignment = 0x0000
    },
    {
        .red = 0x00D9,
        .green = 0x00D9,
        .blue = 0x00D9,
        .alignment = 0x0000
    },
    {
        .red = 0x00DA,
        .green = 0x00DA,
        .blue = 0x00DA,
        .alignment = 0x0000
    },
    {
        .red = 0x00DB,
        .green = 0x00DB,
        .blue = 0x00DB,
        .alignment = 0x0000
    },
    {
        .red = 0x00DC,
        .green = 0x00DC,
        .blue = 0x00DC,
        .alignment = 0x0000
    },
    {
        .red = 0x00DD,
        .green = 0x00DD,
        .blue = 0x00DD,
        .alignment = 0x0000
    },
    {
        .red = 0x00DE,
        .green = 0x00DE,
        .blue = 0x00DE,
        .alignment = 0x0000
    },
    {
        .red = 0x00DF,
        .green = 0x00DF,
        .blue = 0x00DF,
        .alignment = 0x0000
    },
    {
        .red = 0x00E0,
        .green = 0x00E0,
        .blue = 0x00E0,
        .alignment = 0x0000
    },
    {
        .red = 0x00E1,
        .green = 0x00E1,
        .blue = 0x00E1,
        .alignment = 0x0000
    },
    {
        .red = 0x00E2,
        .green = 0x00E2,
        .blue = 0x00E2,
        .alignment = 0x0000
    },
    {
        .red = 0x00E3,
        .green = 0x00E3,
        .blue = 0x00E3,
        .alignment = 0x0000
    },
    {
        .red = 0x00E4,
        .green = 0x00E4,
        .blue = 0x00E4,
        .alignment = 0x0000
    },
    {
        .red = 0x00E5,
        .green = 0x00E5,
        .blue = 0x00E5,
        .alignment = 0x0000
    },
    {
        .red = 0x00E6,
        .green = 0x00E6,
        .blue = 0x00E6,
        .alignment = 0x0000
    },
    {
        .red = 0x00E7,
        .green = 0x00E7,
        .blue = 0x00E7,
        .alignment = 0x0000
    },
    {
        .red = 0x00E8,
        .green = 0x00E8,
        .blue = 0x00E8,
        .alignment = 0x0000
    },
    {
        .red = 0x00E9,
        .green = 0x00E9,
        .blue = 0x00E9,
        .alignment = 0x0000
    },
    {
        .red = 0x00EA,
        .green = 0x00EA,
        .blue = 0x00EA,
        .alignment = 0x0000
    },
    {
        .red = 0x00EB,
        .green = 0x00EB,
        .blue = 0x00EB,
        .alignment = 0x0000
    },
    {
        .red = 0x00EC,
        .green = 0x00EC,
        .blue = 0x00EC,
        .alignment = 0x0000
    },
    {
        .red = 0x00ED,
        .green = 0x00ED,
        .blue = 0x00ED,
        .alignment = 0x0000
    },
    {
        .red = 0x00EE,
        .green = 0x00EE,
        .blue = 0x00EE,
        .alignment = 0x0000
    },
    {
        .red = 0x00EF,
        .green = 0x00EF,
        .blue = 0x00EF,
        .alignment = 0x0000
    },
    {
        .red = 0x00F0,
        .green = 0x00F0,
        .blue = 0x00F0,
        .alignment = 0x0000
    },
    {
        .red = 0x00F1,
        .green = 0x00F1,
        .blue = 0x00F1,
        .alignment = 0x0000
    },
    {
        .red = 0x00F2,
        .green = 0x00F2,
        .blue = 0x00F2,
        .alignment = 0x0000
    },
    {
        .red = 0x00F3,
        .green = 0x00F3,
        .blue = 0x00F3,
        .alignment = 0x0000
    },
    {
        .red = 0x00F4,
        .green = 0x00F4,
        .blue = 0x00F4,
        .alignment = 0x0000
    },
    {
        .red = 0x00F5,
        .green = 0x00F5,
        .blue = 0x00F5,
        .alignment = 0x0000
    },
    {
        .red = 0x00F6,
        .green = 0x00F6,
        .blue = 0x00F6,
        .alignment = 0x0000
    },
    {
        .red = 0x00F7,
        .green = 0x00F7,
        .blue = 0x00F7,
        .alignment = 0x0000
    },
    {
        .red = 0x00F8,
        .green = 0x00F8,
        .blue = 0x00F8,
        .alignment = 0x0000
    },
    {
        .red = 0x00F9,
        .green = 0x00F9,
        .blue = 0x00F9,
        .alignment = 0x0000
    },
    {
        .red = 0x00FA,
        .green = 0x00FA,
        .blue = 0x00FA,
        .alignment = 0x0000
    },
    {
        .red = 0x00FB,
        .green = 0x00FB,
        .blue = 0x00FB,
        .alignment = 0x0000
    },
    {
        .red = 0x00FC,
        .green = 0x00FC,
        .blue = 0x00FC,
        .alignment = 0x0000
    },
    {
        .red = 0x00FD,
        .green = 0x00FD,
        .blue = 0x00FD,
        .alignment = 0x0000
    },
    {
        .red = 0x00FE,
        .green = 0x00FE,
        .blue = 0x00FE,
        .alignment = 0x0000
    },
    {
        .red = 0x00FF,
        .green = 0x00FF,
        .blue = 0x00FF,
        .alignment = 0x0000
    }
};

// WatcomStaticDestructorNode
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b6d40 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059ca40,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CEditorTools_01bcd074
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b8050 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d180,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CStake_ARRAY_01c23d50
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b8060 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d18c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CSpark_ARRAY_01c49d54
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b8070 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d198,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGlassParticle_ARRAY_01c4f08c
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b8080 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1a4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CFireball_ARRAY_01c58dfc
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b8090 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1b0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CRock_ARRAY_01c5b500
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b80a0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1bc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CToss_ARRAY_01c5d824
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b80b0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1c8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CCrater_ARRAY_01c625f8
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b80c0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1d4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CShell_ARRAY_01c684e0
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b80d0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1e0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CPopcorn_ARRAY_01c69614
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b80e0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1ec,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CRainDrop_ARRAY_01c6ce18
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b92c0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059de60,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonLight_01c74640
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b92d0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059de6c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGame_01c775ec
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b92e0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059de78,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CPickList_01c78424
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b9694 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059e4b0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGore_01c78c7c
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b96a4 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059e4bc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CBloodParticle_ARRAY_01c78cec
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b96b4 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059e4c8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CFootstep_ARRAY_01c9e544
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005ba8dc = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059e6d0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGround_01cadf80
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baa80 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f730,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cb0380
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baa90 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f73c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cb0394
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baaa0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f748,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cb03a8
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baab0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f754,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cb03bc
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baac0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f760,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc2fd8
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baad0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f76c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc2fec
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baae0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f778,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc3000
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baaf0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f784,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc3014
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab00 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f790,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc3028
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab10 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f79c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc303c
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab20 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f7a8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc3050
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab30 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f7b4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc3064
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab40 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f7c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc3078
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab50 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f7cc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc308c
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bac90 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059fbf0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CKeyFramedModel_01cc3290
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bad0e = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059ffd0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc480c
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bad1e = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059ffdc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc4820
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bad2e = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059ffe8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc4834
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bad3e = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059fff4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc4848
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005badf8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0510,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_ARRAY_01cc56e0
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bae08 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a051c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMoon_01cc5780
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bae18 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0528,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc5b20
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bae28 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0534,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc5b34
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bae38 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0540,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc5b48
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bae48 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a054c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01cc5b6c
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bb158 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0c30,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_01ccdc50
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bb168 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0c3c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CAlphaBitmap_ARRAY_01ccdc64
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bb178 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0c48,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CCourse_ARRAY_01ccdec8
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bb188 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0c54,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CKeyFramedModel_01cce1bc
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bded0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0d90,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CNetGame_01cea280
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be050 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0e40,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMouse_01d465c0
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be0a8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a11d0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CPathMap_ARRAY_01d468a0
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be1bc = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a14e0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonPod_01e528d0
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be200 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a16c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CPickList_01e56c30
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be210 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a16cc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CScript_01e56da0
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be328 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a18c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonSet_01e57284
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be338 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a18cc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonCamera_01fb8508
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be348 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a18d8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonRaytrace_01fba938
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be358 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a18e4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CKeyFramedModel_01fbacc8
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be980 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a1e90,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDeformableModel_ARRAY_0268cef4
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be990 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a1e9c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CSkeleton_ARRAY_02737ef8
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bea20 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a2120,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CSfxSample_ARRAY_02dc1edc
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bea30 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a212c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMP3Decoder_02da8ae0
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bea44 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a2138,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMP3Decoder_02db4d18
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bed50 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a22c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CStrList_02dc9610
};

// _MMX_INTEGER
_MMX_INTEGER g_VertexRedStart = {};
_MMX_INTEGER g_VertexGreenStart = {};
_MMX_INTEGER g_VertexBlueStart = {};
_MMX_INTEGER g_VertexRedDelta = {};
_MMX_INTEGER g_VertexGreenDelta = {};
_MMX_INTEGER g_VertexBlueDelta = {};
_MMX_INTEGER g_TextureShift1 = {0x0000000000000010ULL};
_MMX_INTEGER g_TextureShift2 = {0x0000000000000008ULL};
_MMX_INTEGER g_TextureMask1 = {0x00000000000000FFULL};
_MMX_INTEGER g_TextureMask2 = {0x000000000000FF00ULL};
_MMX_INTEGER g_RedMask16 = {0x000000000000F800ULL};
_MMX_INTEGER g_GreenMask16 = {0x00000000000007E0ULL};
_MMX_INTEGER g_BlueMask16 = {0x000000000000001FULL};
_MMX_INTEGER g_RedMask32 = {0x0000000000F80000ULL};
_MMX_INTEGER g_GreenMask32 = {0x000000000000FC00ULL};
_MMX_INTEGER g_BlueMask32 = {0x00000000000000F8ULL};
_MMX_INTEGER g_TotalDitherShift = {0x0000000000000008ULL};
_MMX_INTEGER g_GreenBlueDitherShift = {0x0000000000000005ULL};
_MMX_INTEGER g_BlueBitShift = {0x0000000000000003ULL};

// double
double g_BufferFillZeroQword = 0;
double g_BufferFillFpuPopST0 = 0;

// int
int g_INT_005b064c = 0x6;
int g_INT_005b0660 = 0x2;
int INT_005b75dc = 0x7;
int INT_005b7604 = 0xA;
int g_WindowWidth = 0x140;
int g_WindowHeight = 0xC8;
int g_BitsPerPixel = 0x8;
int g_TextureFilteringEnabled = 0x1;
int g_CurrentTextureDimension = 0x100;
int INT_005b7630 = 0x7F;
int INT_005b7634 = 0x4;
int INT_005b7638 = 0x5;
int g_CurrentAlphaValue = 0xFF;
int g_RenderingQuality = 0x1;
int INT_005b7644 = 0x1;
int g_INT_005b8018 = 0x2;
int g_INT_005b801c = 0x2;
int g_INT_005b91c0 = 0x7;
int g_INT_005b91c4 = 0x1;
int g_INT_005b91dc = 0x1;
int g_INT_005b91f8 = 0x1;
int g_INT_005b9210 = 0x3;
int g_INT_005b9288 = 0x1;
int INT_005b92a8 = 0x3;
int INT_005b9624 = 0x2;
int INT_005b9650 = 0x7;
int INT_005b9668 = 0x6;
int INT_005ba8c8 = 0x4;
int INT_005ba8ec = 0x1CADF80;
int INT_005ba928 = 0x3;
int g_INT_005ba940 = 0xC;
int g_INT_005ba944 = 0x1;
int g_INT_005ba960 = 0x1;
int g_INT_005ba980 = 0xC;
int g_INT_005ba994 = 0x1;
int g_INT_005ba9ac = 0x1;
int g_INT_005ba9cc = 0x1;
int g_INT_005ba9e0 = 0x1;
int INT_005bab60 = 0xD0;
int INT_005bab64 = 0x60;
int INT_005bab68 = 0;
int INT_005bab6c = 0;
int INT_005babd0 = 0;
int INT_005babd4 = 0;
int INT_005bac4c = 0x3;
int INT_005bac68 = 0x2;
int INT_005bac7c = 0x2;
int INT_005bacbc = 0x8;
int INT_005bacf8 = 0x2;
int g_INT_005bad50 = 0x3;
int g_INT_005bad54 = 0x1;
int INT_005bade4 = 0x7;
int INT_005baf48 = 0x3;
int g_INT_005bb124 = 0x7;
int g_INT_005bb144 = 0x1;
int g_INT_005bdee4 = 0x1;
int INT_005be074 = 0x4;
int INT_005be078 = 0x6;
int INT_005be164 = 0x8;
int INT_005be19c = 0xB;
int INT_005be1e4 = 0x4B0;
int INT_005be310 = 0x2;
int g_INT_005be950 = 0x1;
int g_INT_005be964 = 0x3;
int g_INT_005bea0c = 0x1;
int g_INT_005bea40 = 0x1;
int g_ScanlinePixelCount = 0;
int g_StartTextureU = 0;
int g_StartTextureV = 0;
int g_StartDepthW = 0;
int g_HardwareDeltaTextureU = 0;
int g_HardwareDeltaTextureV = 0;
int g_HardwareDeltaDepthZ = 0;
int g_TempX = 0;
int g_TempY = 0;
int g_TempZ = 0;
int g_TempTransformedX = 0;
int g_TempTransformedY = 0;
int g_TempTransformedZ = 0;
int g_VertexAlphaStart = 0;
int g_VertexAlphaDelta = 0;
int g_SpecialColor = 0xFFFFFF;

// int*
int* g_CurrentScreenPtr = nullptr;
int* g_CurrentZBufferPtr = nullptr;

// undefined1
undefined1 DAT_005b9258 = 0x00;
undefined1 DAT_005b9259 = 0x00;
undefined1 DAT_005b925a = 0x00;
undefined1 DAT_005b925b = 0x00;
undefined1 DAT_005bb118 = 0x00;
undefined1 DAT_005bb11c = 0x00;
undefined1 DAT_005bb121 = 0x00;
undefined1 DAT_005be184 = 0x00;

// undefined2
undefined2 DAT_005b8bdc = 0x0000;

// undefined4
undefined4 DAT_005b0680 = 0x00000000;
undefined4 DAT_005b0684 = 0x00000000;
undefined4 DAT_005b0688 = 0x00000000;
undefined4 DAT_005b068c = 0x00000000;
undefined4 DAT_005b0690 = 0x00000000;
undefined4 DAT_005b0694 = 0x00000000;
undefined4 DAT_005b0698 = 0x00000000;
undefined4 DAT_005b069c = 0x00000000;
undefined4 DAT_005b06a0 = 0x00000000;
undefined4 DAT_005b06ac = 0x00000000;
undefined4 DAT_005b06b0 = 0x00000000;
undefined4 DAT_005b06b4 = 0x00000000;
undefined4 DAT_005b06b8 = 0x00000000;
undefined4 DAT_005b06bc = 0x00000000;
undefined4 DAT_005b06c4 = 0x00000000;
undefined4 DAT_005b06e0 = 0x00000000;
undefined4 DAT_005b06e4 = 0x00000000;
undefined4 DAT_005b06e8 = 0x00000000;
undefined4 DAT_005b06ec = 0x00000000;
undefined4 DAT_005b06f0 = 0x00000000;
undefined4 DAT_005b06f4 = 0x00000000;
undefined4 DAT_005b06f8 = 0x00000000;
undefined4 DAT_005b06fc = 0x00000000;
undefined4 DAT_005b0700 = 0x00000000;
undefined4 DAT_005b0704 = 0x00000000;
undefined4 DAT_005b0708 = 0x00000000;
undefined4 DAT_005b070c = 0x00000000;
undefined4 DAT_005b0710 = 0x00000000;
undefined4 DAT_005b0714 = 0x00000000;
undefined4 DAT_005b0718 = 0x00000000;
undefined4 DAT_005b071c = 0x00000000;
undefined4 DAT_005b0720 = 0x00000000;
undefined4 DAT_005b0724 = 0x00000000;
undefined4 DAT_005b0728 = 0x00000000;
undefined4 DAT_005b072c = 0x00000000;
undefined4 DAT_005b0730 = 0x00000000;
undefined4 DAT_005b0734 = 0x00000000;
undefined4 DAT_005b0738 = 0x00000000;
undefined4 DAT_005b073c = 0x00000000;
undefined4 DAT_005b0740 = 0x00000000;
undefined4 DAT_005b0744 = 0x00000000;
undefined4 DAT_005b0748 = 0x00000000;
undefined4 DAT_005b074c = 0x00000000;
undefined4 DAT_005b0750 = 0x00000000;
undefined4 DAT_005b0754 = 0x00000000;
undefined4 DAT_005b0758 = 0x00000000;
undefined4 DAT_005b075c = 0x00000000;
undefined4 DAT_005b0760 = 0x00000000;
undefined4 DAT_005b0764 = 0x00000000;
undefined4 DAT_005b0768 = 0x00000000;
undefined4 DAT_005b5d00 = 0x00000000;
undefined4 DAT_005b6d54 = 0x00000009;
undefined4 DAT_005b6d58 = 0x00000009;
undefined4 DAT_005b6d60 = 0x00000000;
undefined4 DAT_005b6d64 = 0x00000000;
undefined4 DAT_005b6f70 = 0x00000000;
undefined4 DAT_005b6f74 = 0x00000000;
undefined4 DAT_005b7078 = 0x00000000;
undefined4 DAT_005b707c = 0x00000000;
undefined4 DAT_005b7278 = 0x00000000;
undefined4 DAT_005b727c = 0x00000000;
undefined4 DAT_005b7478 = 0x00000000;
undefined4 DAT_005b747c = 0x00000000;
undefined4 DAT_005b7648 = 0x00010000;
undefined4 DAT_005b7658 = 0x00000000;
undefined4 DAT_005b765c = 0x00000000;
undefined4 DAT_005b7720 = 0x00000000;
undefined4 DAT_005b7724 = 0x00000000;
undefined4 DAT_005b8bd8 = 0x00000000;
undefined4 DAT_005b9418 = 0x00000000;
undefined4 DAT_005bacd0 = 0x00008000;
undefined4 DAT_005bacd4 = 0x00000001;
undefined4 DAT_005bacd8 = 0x00010000;
undefined4 DAT_005bacdc = 0x00010000;
undefined4 DAT_005bb000 = 0x00000000;
undefined4 DAT_005bb004 = 0x00000000;
undefined4 DAT_005bb068 = 0x00000000;
undefined4 DAT_005bb06c = 0x00000000;
undefined4 DAT_005bb11d = 0x00000000;
undefined4 DAT_005bb210 = 0x00000001;
undefined4 DAT_005bbba0 = 0x00000001;
undefined4 DAT_005bbbb4 = 0x00000000;
undefined4 DAT_005bbbfc = 0x00000001;
undefined4 DAT_005bbc40 = 0x00000001;
undefined4 DAT_005be0b8 = 0xFFFFFFFF;
undefined4 DAT_005be0bc = 0x00000000;
undefined4 DAT_005be230 = 0x00000000;
undefined4 DAT_005be234 = 0x00000000;
undefined4 DAT_005be378 = 0x00000001;
undefined4 DAT_005be4fc = 0x00000000;
undefined4 DAT_005be500 = 0x00000000;
undefined4 DAT_005be780 = 0x00000000;
undefined4 DAT_005be784 = 0x00000000;
undefined4 DAT_005be788 = 0x00000000;
undefined4 DAT_005be78c = 0x00000000;
undefined4 DAT_005be7c8 = 0x00000000;
undefined4 DAT_005be7cc = 0x00000000;
undefined4 DAT_005be7d0 = 0x00000000;
undefined4 DAT_005bea60 = 0x00000020;
undefined4 DAT_005bea64 = 0x00000010;
undefined4 DAT_005bea68 = 0x00000002;
undefined4 DAT_005bea6c = 0x00005622;
undefined4 DAT_005bea70 = 0xFFFFFFFF;
undefined4 DAT_005bea74 = 0xFFFFFFFF;
undefined4 DAT_005bea78 = 0x00000001;
undefined4 DAT_005bea80 = 0x00000000;
undefined4 DAT_005bea84 = 0x3FF00000;
undefined4 DAT_005bea94 = 0x00400000;
undefined4 DAT_005bea98 = 0x3F000000;
undefined4 DAT_005beaa0 = 0x00000000;
undefined4 DAT_005beaa4 = 0x00000000;
undefined4 DAT_005beba0 = 0x00000000;
undefined4 DAT_005beba4 = 0x00000000;
undefined4 DAT_005bed40 = 0xFFFFFFFF;
undefined4 DAT_005bed44 = 0xFFFFFFFF;
undefined4 DAT_005bef20 = 0x00000000;
undefined4 DAT_005bef24 = 0x00000000;
undefined4 DAT_005bef88 = 0x00000000;
undefined4 DAT_005bef8c = 0x00000000;

// undefined8
undefined8 DAT_005b4748 = 0x0000000000000000;
undefined8 DAT_005b4788 = 0x0000000000000000;
undefined8 DAT_005b47a8 = 0x0000000000000000;

// void*
void* switchdataD_005b7f90 = (void*)0x004819BC; // caseD_0
void* switchdataD_005b7fd4 = (void*)0x00481A4B; // caseD_0

