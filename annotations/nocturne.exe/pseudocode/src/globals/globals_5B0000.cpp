#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x5B0000
// =============================================================================

// CDemonMission*
CDemonMission* g_CDemonMission_PTR_005baf90 = (CDemonMission*)0x01CC9450; // DAT_01cc9450

// CDemonPod*
CDemonPod* g_CDemonPodPtr = (CDemonPod*)&g_CDemonPodInstance;

// CDemonSet*
CDemonSet* g_CDemonSetPtr = (CDemonSet*)&g_CDemonSetInstance;

// CEditorTools*
CEditorTools* g_CEditorToolsPtr = (CEditorTools*)&g_CEditorToolsInstance;

// CEventList*
CEventList* g_CEventList_PTR_005b7650 = (CEventList*)&g_CEventList_01c03a10;

// CFireEffect*
CFireEffect* g_CFireEffect_PTR_005b80f0 = (CFireEffect*)&g_CFireEffect_01c08d04;

// CForceFeedback*
CForceFeedback* g_CForceFeedback_PTR_005b9284 = (CForceFeedback*)&g_CForceFeedback_01c70f74;

// CGame*
CGame* g_CGamePtr = (CGame*)&g_CGameInstance;

// CGore*
CGore* g_CGorePtr = (CGore*)&g_CGoreInstance;

// CGround*
CGround* g_CGroundPtr = (CGround*)&g_CGroundInstance;

// CKeys*
CKeys* g_CKeys_PTR_005bac64 = (CKeys*)&g_CKeys_01cc30e4;

// CLevelLoader*
CLevelLoader* g_CLevelLoader_PTR_005baca0 = (CLevelLoader*)&g_CLevelLoader;

// CMouse*
CMouse* g_CMousePtr = (CMouse*)&g_CMouseInstance;

// CNetGame*
CNetGame* g_CNetGamePtr = (CNetGame*)&g_CNetGameInstance;

// CScript*
CScript* g_CScriptPtr = (CScript*)&g_CScriptInstance;

// CSound*
CSound* g_CSound_PTR_005bed68 = (CSound*)&g_CSound_02dc9450;

// CVector3f
CVector3f CVector3f_005b0678 = {
    .x = 5.0f,
    .y = 0.0f,
    .z = 0.0f
};

// CVector3i
CVector3i g_CVector3i_005be36c = {
    .x = 0x00000000,
    .y = -46333,
    .z = 0x0000B4FD
};

// GUID
GUID g_IID_IKsPropertySet = {0x31EFAC30, 0x515C, 0x11D0, {0xA9, 0xAA, 0x00, 0xAA, 0x00, 0x61, 0xBE, 0x93}};
GUID g_DSPROPSETID_VoiceManager = {0x62A69BAE, 0xDF9D, 0x11D1, {0x99, 0xA6, 0x00, 0xC0, 0x4F, 0xC9, 0x9D, 0x46}};
GUID g_DSPROPSETID_EAX_ReverbProperties = {0x4A4E6FC1, 0xC341, 0x11D1, {0xB7, 0x3A, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00}};

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

// SHuffmanTableSource[34]
SHuffmanTableSource g_SHuffmanTableSource_ARRAY_005bdba0[34] = {
    {
        .table_size = 0x00000000,
        .xlen = 0x00000000,
        .ylen = 0x00000000,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000007,
        .xlen = 0x00000002,
        .ylen = 0x00000002,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BC590
    },
    {
        .table_size = 0x00000011,
        .xlen = 0x00000003,
        .ylen = 0x00000003,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BC5A0
    },
    {
        .table_size = 0x00000011,
        .xlen = 0x00000003,
        .ylen = 0x00000003,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BC5C8
    },
    {
        .table_size = 0x00000000,
        .xlen = 0x00000000,
        .ylen = 0x00000000,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x0000001F,
        .xlen = 0x00000004,
        .ylen = 0x00000004,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BC5F0
    },
    {
        .table_size = 0x0000001F,
        .xlen = 0x00000004,
        .ylen = 0x00000004,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BC630
    },
    {
        .table_size = 0x00000047,
        .xlen = 0x00000006,
        .ylen = 0x00000006,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BC670
    },
    {
        .table_size = 0x00000047,
        .xlen = 0x00000006,
        .ylen = 0x00000006,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BC700
    },
    {
        .table_size = 0x00000047,
        .xlen = 0x00000006,
        .ylen = 0x00000006,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BC790
    },
    {
        .table_size = 0x0000007F,
        .xlen = 0x00000008,
        .ylen = 0x00000008,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BC820
    },
    {
        .table_size = 0x0000007F,
        .xlen = 0x00000008,
        .ylen = 0x00000008,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BC920
    },
    {
        .table_size = 0x0000007F,
        .xlen = 0x00000008,
        .ylen = 0x00000008,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BCA20
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BCB20
    },
    {
        .table_size = 0x00000000,
        .xlen = 0x00000000,
        .ylen = 0x00000000,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BCF20
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000001,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BD320
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000002,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000003,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000004,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000006,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000008,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x0000000A,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x000001FF,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x0000000D,
        .reference_index = 0x00000010,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000004,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BD720
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000005,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000006,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000007,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000008,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x00000009,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x0000000B,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x00000200,
        .xlen = 0x00000010,
        .ylen = 0x00000010,
        .bits = 0x0000000D,
        .reference_index = 0x00000018,
        .huffman_data_ptr = nullptr
    },
    {
        .table_size = 0x0000001F,
        .xlen = 0x00000001,
        .ylen = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BDB20
    },
    {
        .table_size = 0x0000001F,
        .xlen = 0x00000001,
        .ylen = 0x00000010,
        .bits = 0x00000000,
        .reference_index = -1,
        .huffman_data_ptr = (char *)0x005BDB60
    }
};

// SMRGLPrimitiveQuad[6]
SMRGLPrimitiveQuad g_SMRGLPrimitiveQuad_ARRAY_005be774[6] = {
    {
        .base = {
            .base = {.type = 0x00000000, .count = 0x00000004},
            .surface_normal = {
                .A = 0xFFFFFFFF,
                .B = 0x00000000,
                .C = 0x00000000,
                .D = 0x00000000
            }
        },
        .vertices = {{
            .vertex_index = 0x00000000,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000004,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000006,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000002,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }}
    },
    {
        .base = {
            .base = {.type = 0x00000000, .count = 0x00000004},
            .surface_normal = {
                .A = 0x00000001,
                .B = 0x00000000,
                .C = 0x00000000,
                .D = 0x00000000
            }
        },
        .vertices = {{
            .vertex_index = 0x00000001,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000003,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000007,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000005,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }}
    },
    {
        .base = {
            .base = {.type = 0x00000000, .count = 0x00000004},
            .surface_normal = {
                .A = 0x00000000,
                .B = 0xFFFFFFFF,
                .C = 0x00000000,
                .D = 0x00000000
            }
        },
        .vertices = {{
            .vertex_index = 0x00000000,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000001,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000005,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000004,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }}
    },
    {
        .base = {
            .base = {.type = 0x00000000, .count = 0x00000004},
            .surface_normal = {
                .A = 0x00000000,
                .B = 0x00000001,
                .C = 0x00000000,
                .D = 0x00000000
            }
        },
        .vertices = {{
            .vertex_index = 0x00000002,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000006,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000007,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000003,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }}
    },
    {
        .base = {
            .base = {.type = 0x00000000, .count = 0x00000004},
            .surface_normal = {
                .A = 0x00000000,
                .B = 0x00000000,
                .C = 0xFFFFFFFF,
                .D = 0x00000000
            }
        },
        .vertices = {{
            .vertex_index = 0x00000000,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000002,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000003,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000001,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }}
    },
    {
        .base = {
            .base = {.type = 0x00000000, .count = 0x00000004},
            .surface_normal = {
                .A = 0x00000000,
                .B = 0x00000000,
                .C = 0x00000001,
                .D = 0x00000000
            }
        },
        .vertices = {{
            .vertex_index = 0x00000004,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000005,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000007,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }, {
            .vertex_index = 0x00000006,
            .texture_u = 0x00000000,
            .texture_v = 0x00000000
        }}
    }
};

// SMRGLTextureBasic
SMRGLTextureBasic g_SMRGLTextureBasic_005b84b4 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BHOLE.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005b84cc = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "SPARK.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005b84e4 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BLUSPARK.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005b8514 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "REDSPARK.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005b852c = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "LASER.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005b8544 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BEAMFUZZ.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005b855c = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "RETICLE.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005b8574 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "HEADLITE.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005b8afc = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BLAST1.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005b8ba4 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "POPCORN.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005b8bbc = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "RAINDRP1.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005b8de8 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "GLOW1.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005b9214 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BBWHITE.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005b9250 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = ""
};
SMRGLTextureBasic g_SMRGLTextureBasic_005b96d4 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BGLOB.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005ba84c = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "FOOTSTEP.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005bac34 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "INV3D.RAW"
};
SMRGLTextureBasic g_LoadingMoonGlowTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "MOONGLOW.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005badbc = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "SPARK.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005be090 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "HEADLITE.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005be680 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BACKGND.RAW"
};
SMRGLTextureBasic g_SMRGLTextureBasic_005be924 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "HEADLITE.RAW"
};

// SMRGLTextureBasic[116]
SMRGLTextureBasic g_SMRGLTextureBasic_ARRAY_005b9d4c[116] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL1-29.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL2-29.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL3-29.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-17.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-18.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-19.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-20.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-21.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-22.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-23.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-24.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-25.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-26.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-27.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-28.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BPOL4-29.RAW"
    }
};

// SMRGLTextureBasic[40]
SMRGLTextureBasic g_SMRGLTextureBasic_ARRAY_005b80f4[40] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0050.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0051.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0052.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0053.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0054.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0055.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0056.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0057.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0058.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0059.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0060.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0061.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0062.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0063.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0064.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0065.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0066.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0067.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0068.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0069.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0070.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0071.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0072.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0073.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0074.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0075.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0076.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0077.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0078.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0079.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0080.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0081.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0082.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0083.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0084.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0085.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0086.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0087.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0088.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SPFB0089.RAW"
    }
};

// SMRGLTextureBasic[4]
SMRGLTextureBasic g_SMRGLTextureBasic_ARRAY_005b96ec[4] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP1.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP2.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP3.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BHSP4.RAW"
    }
};

// SMRGLTextureBasic[54]
SMRGLTextureBasic g_SMRGLTextureBasic_ARRAY_005b858c[54] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01101.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01102.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01103.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01104.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01105.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01106.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01107.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01108.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01109.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01110.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01111.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01112.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01113.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01114.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01115.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01116.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01117.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01118.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01119.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01120.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01121.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01122.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01123.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01124.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01125.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01126.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01127.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01128.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01129.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01130.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01131.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01132.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01133.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01134.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01135.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01140.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01141.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01142.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01143.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01144.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01145.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01146.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01147.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01148.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01149.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01150.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01151.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01152.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01153.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01154.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01155.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01156.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "ZG01157.RAW"
    }
};

// SMRGLTextureBasic[64]
SMRGLTextureBasic g_SMRGLTextureBasic_ARRAY_005b974c[64] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP1-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP2-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP3-16.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-01.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-02.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-03.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-04.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-05.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-06.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-07.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-08.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-09.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-10.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-11.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-12.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-13.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-14.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-15.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BVSP4-16.RAW"
    }
};

// SMRGLTextureBasic[6]
SMRGLTextureBasic g_SMRGLTextureBasic_ARRAY_005b8b14[6] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT1.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT2.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT3.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT4.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT5.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT6.RAW"
    }
};

// SMRGLTextureBasic[8]
SMRGLTextureBasic g_SMRGLTextureBasic_ARRAY_005bae58[8] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F0100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F0300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F0500.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F0700.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F0900.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F1100.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F1300.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "F1500.RAW"
    }
};

// SMpegLayer3BandIndex[6]
SMpegLayer3BandIndex g_SMpegLayer3BandIndex_ARRAY_005bc0f8[6] = {
    {
        .l = {0x00000000, 0x00000006, 0x0000000C, 0x00000012, 0x00000018, 0x0000001E, 0x00000024, 0x0000002C, 0x00000036, 0x00000042, 0x00000050, 0x00000060, 0x00000074, 0x0000008C, 0x000000A8, 0x000000C8, 0x000000EE, 0x0000011C, 0x00000150, 0x0000018C, 0x000001D0, 0x0000020A, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000012, 0x00000018, 0x00000020, 0x0000002A, 0x00000038, 0x0000004A, 0x00000064, 0x00000084, 0x000000AE, 0x000000C0}
    },
    {
        .l = {0x00000000, 0x00000006, 0x0000000C, 0x00000012, 0x00000018, 0x0000001E, 0x00000024, 0x0000002C, 0x00000036, 0x00000042, 0x00000050, 0x00000060, 0x00000072, 0x00000088, 0x000000A2, 0x000000C2, 0x000000E8, 0x00000116, 0x0000014A, 0x0000018A, 0x000001D0, 0x0000021C, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000012, 0x0000001A, 0x00000024, 0x00000030, 0x0000003E, 0x00000050, 0x00000068, 0x00000088, 0x000000B4, 0x000000C0}
    },
    {
        .l = {0x00000000, 0x00000006, 0x0000000C, 0x00000012, 0x00000018, 0x0000001E, 0x00000024, 0x0000002C, 0x00000036, 0x00000042, 0x00000050, 0x00000060, 0x00000074, 0x0000008C, 0x000000A8, 0x000000C8, 0x000000EE, 0x0000011C, 0x00000150, 0x0000018C, 0x000001D0, 0x0000020A, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000012, 0x0000001A, 0x00000024, 0x00000030, 0x0000003E, 0x00000050, 0x00000068, 0x00000086, 0x000000AE, 0x000000C0}
    },
    {
        .l = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000014, 0x00000018, 0x0000001E, 0x00000024, 0x0000002C, 0x00000034, 0x0000003E, 0x0000004A, 0x0000005A, 0x0000006E, 0x00000086, 0x000000A2, 0x000000C4, 0x000000EE, 0x00000120, 0x00000156, 0x000001A2, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000016, 0x0000001E, 0x00000028, 0x00000034, 0x00000042, 0x00000054, 0x0000006A, 0x00000088, 0x000000C0}
    },
    {
        .l = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000014, 0x00000018, 0x0000001E, 0x00000024, 0x0000002A, 0x00000032, 0x0000003C, 0x00000048, 0x00000058, 0x0000006A, 0x00000080, 0x0000009C, 0x000000BE, 0x000000E6, 0x00000114, 0x0000014A, 0x00000180, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000016, 0x0000001C, 0x00000026, 0x00000032, 0x00000040, 0x00000050, 0x00000064, 0x0000007E, 0x000000C0}
    },
    {
        .l = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000014, 0x00000018, 0x0000001E, 0x00000024, 0x0000002C, 0x00000036, 0x00000042, 0x00000052, 0x00000066, 0x0000007E, 0x0000009C, 0x000000C2, 0x000000F0, 0x00000128, 0x0000016C, 0x000001C0, 0x00000226, 0x00000240},
        .s = {0x00000000, 0x00000004, 0x00000008, 0x0000000C, 0x00000010, 0x00000016, 0x0000001E, 0x0000002A, 0x0000003A, 0x0000004E, 0x00000068, 0x0000008A, 0x000000B4, 0x000000C0}
    }
};

// UINT
UINT g_UINT_005bed44 = 0xFFFFFFFF;

// WatcomStaticDestructorNode
WatcomStaticDestructorNode g_CEditorToolsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059ca40,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CEditorToolsInstance
};
WatcomStaticDestructorNode g_CFireEffectStakesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d180,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_StakePool
};
WatcomStaticDestructorNode g_CFireEffectSparksDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d18c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SparkPool
};
WatcomStaticDestructorNode g_CFireEffectGlassParticlesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d198,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_GlassParticlePool
};
WatcomStaticDestructorNode g_CFireEffectFireballsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1a4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_FireballPool
};
WatcomStaticDestructorNode g_CFireEffectRocksDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1b0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_RockPool
};
WatcomStaticDestructorNode g_CFireEffectTossesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1bc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_TossPool
};
WatcomStaticDestructorNode g_CFireEffectCratersDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1c8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CraterPool
};
WatcomStaticDestructorNode g_CFireEffectShellsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1d4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_ShellPool
};
WatcomStaticDestructorNode g_CFireEffectPopcornsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1e0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_PopcornPool
};
WatcomStaticDestructorNode g_CFireEffectRainDropsDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059d1ec,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_RainDropPool
};
WatcomStaticDestructorNode g_CDemonLightDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059de60,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonLightInstance
};
WatcomStaticDestructorNode g_CGameDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059de6c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGameInstance
};
WatcomStaticDestructorNode g_CPickListDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059de78,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CPickList
};
WatcomStaticDestructorNode g_CGoreDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059e4b0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGoreInstance
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b96a4 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059e4bc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_BloodParticles
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005b96b4 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059e4c8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_Footsteps
};
WatcomStaticDestructorNode g_CGroundDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059e6d0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CGroundInstance
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baa80 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f730,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_InvBackgroundBitmap
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baa90 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f73c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_InvBackground2Bitmap
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baaa0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f748,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_WeapBackgroundBitmap
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baab0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f754,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_WeapBackground2Bitmap
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baac0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f760,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_BatteryIconBitmap
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baad0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f76c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_HealthBar1Bitmap
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baae0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f778,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_HealthBar2Bitmap
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005baaf0 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f784,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_TommyClipIconBitmap
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab00 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f790,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_BulletIconBitmap
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab10 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f79c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_LithiumIconBitmap
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab20 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f7a8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MercuryBulletIconBitmap
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab30 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f7b4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_ShotShellIconBitmap
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab40 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f7c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SilverBulletIconBitmap
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bab50 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059f7cc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_HolyBulletIconBitmap
};
WatcomStaticDestructorNode g_LoadingMoonModelDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059fbf0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_LoadingMoonModel
};
WatcomStaticDestructorNode g_LoadingScreenBitmap1DestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059ffd0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_LoadingScreenBitmap1
};
WatcomStaticDestructorNode g_LoadingScreenBitmap2DestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059ffdc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_LoadingScreenBitmap2
};
WatcomStaticDestructorNode g_LoadingScreenBitmap3DestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059ffe8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_LoadingScreenBitmap3
};
WatcomStaticDestructorNode g_LoadingScreenBitmap4DestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_0059fff4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_LoadingScreenBitmap4
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005badf8 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0510,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBitmaps
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bae08 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a051c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMoonInstance
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bae18 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0528,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurLeft
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bae28 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0534,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurMiddle
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bae38 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0540,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MenuBlurRight
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bae48 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a054c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CalibrationBitmap
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bb158 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0c30,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MoonCloudTexture
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bb168 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0c3c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MoonAnimTextures
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bb178 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0c48,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MoonBatCourses
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bb188 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0c54,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_MoonBatModel
};
WatcomStaticDestructorNode g_CNetGameInstanceDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0d90,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CNetGameInstance
};
WatcomStaticDestructorNode g_CMouseDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a0e40,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMouseInstance
};
WatcomStaticDestructorNode g_PathMapCacheDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a11d0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_PathMapCache
};
WatcomStaticDestructorNode g_CDemonPodMainDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_CDemonPodDestructorCall,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonPodInstance
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be200 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a16c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_ScriptPickList
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be210 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a16cc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CScriptInstance
};
WatcomStaticDestructorNode g_CDemonSetDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a18c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonSetInstance
};
WatcomStaticDestructorNode g_CDemonCameraDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a18cc,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonCameraInstance
};
WatcomStaticDestructorNode g_CDemonRaytraceDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a18d8,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDemonRaytraceInstance
};
WatcomStaticDestructorNode g_CKeyFramedModelDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a18e4,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CKeyFramedModelInstance
};
WatcomStaticDestructorNode g_DeformableModelPoolDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a1e90,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_DeformableModelPool
};
WatcomStaticDestructorNode g_SkeletonPoolDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a1e9c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SkeletonPool
};
WatcomStaticDestructorNode g_SfxSamplesDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a2120,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_SfxSamples
};
WatcomStaticDestructorNode g_CMP3DecoderDestructorNode1 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a212c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMP3DecoderInstance
};
WatcomStaticDestructorNode g_CMP3DecoderDestructorNode2 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a2138,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CMP3DecoderInstanceOther
};
WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005bed50 = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_WatcomDestructorCall_005a22c0,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CStrList_02dc9610
};

// _MMX_INTEGER
_MMX_INTEGER g_MMX_INTEGER_005b4748 = {};
_MMX_INTEGER g_MMX_INTEGER_005b4788 = {};
_MMX_INTEGER g_MMX_INTEGER_005b4790 = {0x0008000800080008ULL};
_MMX_INTEGER g_MMX_INTEGER_005b4798 = {0x0004000400040004ULL};
_MMX_INTEGER g_MMX_INTEGER_005b47a0 = {0x000C000C000C000CULL};
_MMX_INTEGER g_MMX_INTEGER_005b47a8 = {};
_MMX_INTEGER g_MMX_INTEGER_005b47b0 = {0x0040004000400040ULL};
_MMX_INTEGER g_MMX_INTEGER_005b47b8 = {0x0020002000200020ULL};
_MMX_INTEGER g_MMX_INTEGER_005b47c0 = {0x0060006000600060ULL};
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

// byte
byte g_BYTE_005bb11b = 0;

// char[100]
char g_CHAR_ARRAY_005b92f0[100] = "";
char g_IpAddress[100] = "10.0.0.105";

// char[104]
char g_CHAR_ARRAY_005bb000[104] = "";
char g_CHAR_ARRAY_005bb068[104] = "";
char g_CHAR_ARRAY_005bef20[104] = "";

// char[108]
char g_CHAR_ARRAY_005bef88[108] = "";

// char[112]
char g_CHAR_ARRAY_005b7720[112] = "";

// char[128]
char g_CHAR_ARRAY_005bdf50[128] = {
    (char)0x82, (char)0x6C, (char)0x82, (char)0x72, (char)0x20, (char)0x82, (char)0x6F, (char)0x83, (char)0x53, (char)0x83, (char)0x56, (char)0x83,
    (char)0x62, (char)0x83, (char)0x4E, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00,
    (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00, (char)0x00
};

// char[200]
char g_CHAR_ARRAY_005b7658[200] = "";
char g_CHAR_ARRAY_005be230[200] = "";

// char[256]
char g_CHAR_ARRAY_005beba0[256] = "";

// char[260]
char g_CHAR_ARRAY_005b7478[260] = "";

// char[512]
char g_CHAR_ARRAY_005b7078[512] = "";
char g_CHAR_ARRAY_005b7278[512] = "";

// char[60]
char g_CHAR_ARRAY_005b8bd8[60] = "";

// double
double g_DOUBLE_005bea80 = 1;
double g_DOUBLE_005bea88 = 1;
double g_BufferFillZeroQword = 0;
double g_BufferFillFpuPopST0 = 0;

// float
float g_FLOAT_005bea98 = 0.5f;

// int
int g_INT_005b064c = 0x6;
int g_INT_005b0660 = 0x2;
int g_INT_005b06a4 = 0;
int g_INT_005b06a8 = 0;
int g_INT_005b06ac = 0;
int g_INT_005b06d4 = 0;
int g_INT_005b06d8 = 0;
int g_INT_005b06dc = 0;
int g_INT_005b06e4 = 0;
int g_INT_005b6d00 = 0x4;
int g_CursorSizeHorizontal = 0x9;
int g_CursorSizeVertical = 0x9;
int INT_005b6d60 = 0;
int INT_005b6d64 = 0;
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
int g_INT_005b7648 = 0x10000;
int g_INT_005b8018 = 0x2;
int g_INT_005b801c = 0x2;
int g_INT_005b91c0 = 0x7;
int g_INT_005b91c4 = 0x1;
int g_INT_005b91dc = 0x1;
int g_INT_005b91f8 = 0x1;
int g_INT_005b9210 = 0x3;
int g_INT_005b9288 = 0x1;
int INT_005b92a8 = 0x3;
int g_INT_005b9364 = 0x40;
int g_INT_005b9368 = 0x40;
int INT_005b9624 = 0x2;
int INT_005b9650 = 0x7;
int INT_005b9668 = 0x6;
int INT_005ba8c8 = 0x4;
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
int g_INT_005bacd0 = 0x8000;
int g_INT_005bacd4 = 0x1;
int g_INT_005bacd8 = 0x10000;
int g_INT_005bacdc = 0x10000;
int INT_005bacf8 = 0x2;
int g_INT_005bad50 = 0x3;
int g_INT_005bad54 = 0x1;
int INT_005bade4 = 0x7;
int INT_005baf48 = 0x3;
int g_INT_005bb110 = 0;
int g_INT_005bb114 = 0;
int g_INT_005bb124 = 0x7;
int g_INT_005bb144 = 0x1;
int g_INT_005bb210 = 0x1;
int g_INT_005bbba0 = 0x1;
int g_INT_005bbbfc = 0x1;
int g_INT_005bbc40 = 0x1;
int g_INT_005bdee4 = 0x1;
int INT_005be074 = 0x4;
int INT_005be078 = 0x6;
int INT_005be164 = 0x8;
int INT_005be19c = 0xB;
int INT_005be1e4 = 0x4B0;
int INT_005be310 = 0x2;
int g_INT_005be378 = 0x1;
int g_INT_005be950 = 0x1;
int g_INT_005be964 = 0x3;
int g_INT_005be978 = 0x3;
int g_INT_005be97c = 0x7;
int g_INT_005bea0c = 0x1;
int g_INT_005bea40 = 0x1;
int g_INT_005bea60 = 0x20;
int g_INT_005bea64 = 0x10;
int g_INT_005bea68 = 0x2;
int g_INT_005bea6c = 0x5622;
int g_INT_005bea70 = -1;
int g_INT_005bea74 = -1;
int g_INT_005bea78 = 0x1;
int g_INT_005bea90 = 0x200000;
int g_INT_005bea94 = 0x400000;
int g_INT_005bed40 = -1;
int g_ScanlinePixelCount = 0;
int g_StartTextureU = 0;
int g_StartTextureV = 0;
int g_StartDepthW = 0;
int g_HardwareDeltaTextureU = 0;
int g_HardwareDeltaTextureV = 0;
int g_HardwareDeltaDepthZ = 0;
int g_INT_005bf4a4 = 0;
int g_INT_005bf4a8 = 0;
int g_INT_005bf4ac = 0;
int g_INT_005bf4b0 = 0;
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

// int[12]
int g_INT_ARRAY_005be0b8[12] = {
    -1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000
};

// int[22]
int g_INT_ARRAY_005bbba4[22] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000002,
    0x00000002, 0x00000003, 0x00000003, 0x00000003, 0x00000002, 0x00000000
};

// int[2][16]
int g_INT_ARRAY_ARRAY_005bc078[2][16] = {
    {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000003, 0x00000001, 0x00000001, 0x00000001, 0x00000002, 0x00000002, 0x00000002, 0x00000003, 0x00000003, 0x00000003, 0x00000004, 0x00000004},
    {0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000001, 0x00000002, 0x00000003, 0x00000001, 0x00000002, 0x00000003, 0x00000002, 0x00000003}
};

// int[2][3][15]
int g_INT_ARRAY_ARRAY_ARRAY_005bbc88[2][3][15] = {
    {{0x00000000, 0x00000020, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0, 0x000000B0, 0x000000C0, 0x000000E0, 0x00000100}, {0x00000000, 0x00000008, 0x00000010, 0x00000018, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0}, {0x00000000, 0x00000008, 0x00000010, 0x00000018, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x00000090, 0x000000A0}},
    {{0x00000000, 0x00000020, 0x00000040, 0x00000060, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000120, 0x00000140, 0x00000160, 0x00000180, 0x000001A0, 0x000001C0}, {0x00000000, 0x00000020, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000140, 0x00000180}, {0x00000000, 0x00000020, 0x00000028, 0x00000030, 0x00000038, 0x00000040, 0x00000050, 0x00000060, 0x00000070, 0x00000080, 0x000000A0, 0x000000C0, 0x000000E0, 0x00000100, 0x00000140}}
};

// int[3]
int g_INT_ARRAY_005bc06c[3] = {0x00000000, 0x00000006, 0x0000000C};

// int[5]
int g_ChapterDisplayYears[5] = {0x00000787, 0x0000078B, 0x0000078D, 0x0000078F, 0x00000796};
int g_INT_ARRAY_005bc058[5] = {0x00000000, 0x00000006, 0x0000000B, 0x00000010, 0x00000015};

// int[6][3][4]
int g_INT_ARRAY_ARRAY_ARRAY_005bc470[6][3][4] = {
    {{0x00000006, 0x00000005, 0x00000005, 0x00000005}, {0x00000009, 0x00000009, 0x00000009, 0x00000009}, {0x00000006, 0x00000009, 0x00000009, 0x00000009}},
    {{0x00000006, 0x00000005, 0x00000007, 0x00000003}, {0x00000009, 0x00000009, 0x0000000C, 0x00000006}, {0x00000006, 0x00000009, 0x0000000C, 0x00000006}},
    {{0x0000000B, 0x0000000A, 0x00000000, 0x00000000}, {0x00000012, 0x00000012, 0x00000000, 0x00000000}, {0x0000000F, 0x00000012, 0x00000000, 0x00000000}},
    {{0x00000007, 0x00000007, 0x00000007, 0x00000000}, {0x0000000C, 0x0000000C, 0x0000000C, 0x00000000}, {0x00000006, 0x0000000F, 0x0000000C, 0x00000000}},
    {{0x00000006, 0x00000006, 0x00000006, 0x00000003}, {0x0000000C, 0x00000009, 0x00000009, 0x00000006}, {0x00000006, 0x0000000C, 0x00000009, 0x00000006}},
    {{0x00000008, 0x00000008, 0x00000005, 0x00000000}, {0x0000000F, 0x0000000C, 0x00000009, 0x00000000}, {0x00000006, 0x00000012, 0x00000009, 0x00000000}}
};

// int[96]
int g_INT_ARRAY_005be37c[96] = {
    0x00000180, 0x00000200, 0x00000180, 0x00000200, 0x00000000, 0x00000080, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};

// int[97]
int g_INT_ARRAY_005be4fc[97] = {
    0x00000000, 0x00000000, 0x00000080, 0x00000080, 0x00000160, 0x00000160, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x477FFF00
};

// int[9]
int g_INT_ARRAY_005be0e8[9] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000001, -1, 0x00000001, -1, 0x00000001,
    -1
};
int g_INT_ARRAY_005be10c[9] = {
    0x00000000, 0x00000001, -1, 0x00000000, 0x00000000, 0x00000001, 0x00000001, -1,
    -1
};

// uchar
uchar g_UCHAR_005bb118 = '\0';
uchar g_UCHAR_005bb119 = '\0';
uchar g_UCHAR_005bb11a = '\0';
uchar g_UCHAR_005bb11c = '\0';
uchar g_UCHAR_005bb121 = '\0';

// uint
uint g_UINT_005b0684 = 0;
uint g_UINT_005b0688 = 0;
uint g_UINT_005b068c = 0;
uint g_UINT_005b0690 = 0;
uint g_UINT_005b0694 = 0;
uint g_UINT_005b0698 = 0;
uint g_UINT_005b069c = 0;
uint g_UINT_005b06a0 = 0;
uint g_UINT_005b06b0 = 0;
uint g_UINT_005b06b4 = 0;
uint g_UINT_005b06b8 = 0;
uint g_UINT_005b06bc = 0;
uint g_UINT_005b06c4 = 0;
uint g_UINT_005bb11d = 0;

// uint*
uint* g_UINT_PTR_005b06e8 = nullptr;

// uint[18]
uint g_UINT_ARRAY_005bc010[18] = {
    0x00000000, 0x00000001, 0x00000003, 0x00000007, 0x0000000F, 0x0000001F, 0x0000003F, 0x0000007F,
    0x000000FF, 0x000000FF, 0x000000FE, 0x000000FC, 0x000000F8, 0x000000F0, 0x000000E0, 0x000000C0,
    0x00000080, 0x00000000
};

// uint[640]
uint g_UINT_ARRAY_005b06ec[640] = {};

// uint[8]
uint g_UINT_ARRAY_005bbff0[8] = {0x00000001, 0x00000002, 0x00000004, 0x00000008, 0x00000010, 0x00000020, 0x00000040, 0x00000080};

// ulonglong[256]
ulonglong g_ULONGLONG_ARRAY_005b7790[256] = {
    0x0000000000000000, 0x0101010101010101, 0x0202020202020202, 0x0303030303030303, 0x0404040404040404, 0x0505050505050505, 0x0606060606060606, 0x0707070707070707,
    0x0808080808080808, 0x0909090909090909, 0x0A0A0A0A0A0A0A0A, 0x0B0B0B0B0B0B0B0B, 0x0C0C0C0C0C0C0C0C, 0x0D0D0D0D0D0D0D0D, 0x0E0E0E0E0E0E0E0E, 0x0F0F0F0F0F0F0F0F,
    0x1010101010101010, 0x1111111111111111, 0x1212121212121212, 0x1313131313131313, 0x1414141414141414, 0x1515151515151515, 0x1616161616161616, 0x1717171717171717,
    0x1818181818181818, 0x1919191919191919, 0x1A1A1A1A1A1A1A1A, 0x1B1B1B1B1B1B1B1B, 0x1C1C1C1C1C1C1C1C, 0x1D1D1D1D1D1D1D1D, 0x1E1E1E1E1E1E1E1E, 0x1F1F1F1F1F1F1F1F,
    0x2020202020202020, 0x2121212121212121, 0x2222222222222222, 0x2323232323232323, 0x2424242424242424, 0x2525252525252525, 0x2626262626262626, 0x2727272727272727,
    0x2828282828282828, 0x2929292929292929, 0x2A2A2A2A2A2A2A2A, 0x2B2B2B2B2B2B2B2B, 0x2C2C2C2C2C2C2C2C, 0x2D2D2D2D2D2D2D2D, 0x2E2E2E2E2E2E2E2E, 0x2F2F2F2F2F2F2F2F,
    0x3030303030303030, 0x3131313131313131, 0x3232323232323232, 0x3333333333333333, 0x3434343434343434, 0x3535353535353535, 0x3636363636363636, 0x3737373737373737,
    0x3838383838383838, 0x3939393939393939, 0x3A3A3A3A3A3A3A3A, 0x3B3B3B3B3B3B3B3B, 0x3C3C3C3C3C3C3C3C, 0x3D3D3D3D3D3D3D3D, 0x3E3E3E3E3E3E3E3E, 0x3F3F3F3F3F3F3F3F,
    0x4040404040404040, 0x4141414141414141, 0x4242424242424242, 0x4343434343434343, 0x4444444444444444, 0x4545454545454545, 0x4646464646464646, 0x4747474747474747,
    0x4848484848484848, 0x4949494949494949, 0x4A4A4A4A4A4A4A4A, 0x4B4B4B4B4B4B4B4B, 0x4C4C4C4C4C4C4C4C, 0x4D4D4D4D4D4D4D4D, 0x4E4E4E4E4E4E4E4E, 0x4F4F4F4F4F4F4F4F,
    0x5050505050505050, 0x5151515151515151, 0x5252525252525252, 0x5353535353535353, 0x5454545454545454, 0x5555555555555555, 0x5656565656565656, 0x5757575757575757,
    0x5858585858585858, 0x5959595959595959, 0x5A5A5A5A5A5A5A5A, 0x5B5B5B5B5B5B5B5B, 0x5C5C5C5C5C5C5C5C, 0x5D5D5D5D5D5D5D5D, 0x5E5E5E5E5E5E5E5E, 0x5F5F5F5F5F5F5F5F,
    0x6060606060606060, 0x6161616161616161, 0x6262626262626262, 0x6363636363636363, 0x6464646464646464, 0x6565656565656565, 0x6666666666666666, 0x6767676767676767,
    0x6868686868686868, 0x6969696969696969, 0x6A6A6A6A6A6A6A6A, 0x6B6B6B6B6B6B6B6B, 0x6C6C6C6C6C6C6C6C, 0x6D6D6D6D6D6D6D6D, 0x6E6E6E6E6E6E6E6E, 0x6F6F6F6F6F6F6F6F,
    0x7070707070707070, 0x7171717171717171, 0x7272727272727272, 0x7373737373737373, 0x7474747474747474, 0x7575757575757575, 0x7676767676767676, 0x7777777777777777,
    0x7878787878787878, 0x7979797979797979, 0x7A7A7A7A7A7A7A7A, 0x7B7B7B7B7B7B7B7B, 0x7C7C7C7C7C7C7C7C, 0x7D7D7D7D7D7D7D7D, 0x7E7E7E7E7E7E7E7E, 0x7F7F7F7F7F7F7F7F,
    0x8080808080808080, 0x8181818181818181, 0x8282828282828282, 0x8383838383838383, 0x8484848484848484, 0x8585858585858585, 0x8686868686868686, 0x8787878787878787,
    0x8888888888888888, 0x8989898989898989, 0x8A8A8A8A8A8A8A8A, 0x8B8B8B8B8B8B8B8B, 0x8C8C8C8C8C8C8C8C, 0x8D8D8D8D8D8D8D8D, 0x8E8E8E8E8E8E8E8E, 0x8F8F8F8F8F8F8F8F,
    0x9090909090909090, 0x9191919191919191, 0x9292929292929292, 0x9393939393939393, 0x9494949494949494, 0x9595959595959595, 0x9696969696969696, 0x9797979797979797,
    0x9898989898989898, 0x9999999999999999, 0x9A9A9A9A9A9A9A9A, 0x9B9B9B9B9B9B9B9B, 0x9C9C9C9C9C9C9C9C, 0x9D9D9D9D9D9D9D9D, 0x9E9E9E9E9E9E9E9E, 0x9F9F9F9F9F9F9F9F,
    0xA0A0A0A0A0A0A0A0, 0xA1A1A1A1A1A1A1A1, 0xA2A2A2A2A2A2A2A2, 0xA3A3A3A3A3A3A3A3, 0xA4A4A4A4A4A4A4A4, 0xA5A5A5A5A5A5A5A5, 0xA6A6A6A6A6A6A6A6, 0xA7A7A7A7A7A7A7A7,
    0xA8A8A8A8A8A8A8A8, 0xA9A9A9A9A9A9A9A9, 0xAAAAAAAAAAAAAAAA, 0xABABABABABABABAB, 0xACACACACACACACAC, 0xADADADADADADADAD, 0xAEAEAEAEAEAEAEAE, 0xAFAFAFAFAFAFAFAF,
    0xB0B0B0B0B0B0B0B0, 0xB1B1B1B1B1B1B1B1, 0xB2B2B2B2B2B2B2B2, 0xB3B3B3B3B3B3B3B3, 0xB4B4B4B4B4B4B4B4, 0xB5B5B5B5B5B5B5B5, 0xB6B6B6B6B6B6B6B6, 0xB7B7B7B7B7B7B7B7,
    0xB8B8B8B8B8B8B8B8, 0xB9B9B9B9B9B9B9B9, 0xBABABABABABABABA, 0xBBBBBBBBBBBBBBBB, 0xBCBCBCBCBCBCBCBC, 0xBDBDBDBDBDBDBDBD, 0xBEBEBEBEBEBEBEBE, 0xBFBFBFBFBFBFBFBF,
    0xC0C0C0C0C0C0C0C0, 0xC1C1C1C1C1C1C1C1, 0xC2C2C2C2C2C2C2C2, 0xC3C3C3C3C3C3C3C3, 0xC4C4C4C4C4C4C4C4, 0xC5C5C5C5C5C5C5C5, 0xC6C6C6C6C6C6C6C6, 0xC7C7C7C7C7C7C7C7,
    0xC8C8C8C8C8C8C8C8, 0xC9C9C9C9C9C9C9C9, 0xCACACACACACACACA, 0xCBCBCBCBCBCBCBCB, 0xCCCCCCCCCCCCCCCC, 0xCDCDCDCDCDCDCDCD, 0xCECECECECECECECE, 0xCFCFCFCFCFCFCFCF,
    0xD0D0D0D0D0D0D0D0, 0xD1D1D1D1D1D1D1D1, 0xD2D2D2D2D2D2D2D2, 0xD3D3D3D3D3D3D3D3, 0xD4D4D4D4D4D4D4D4, 0xD5D5D5D5D5D5D5D5, 0xD6D6D6D6D6D6D6D6, 0xD7D7D7D7D7D7D7D7,
    0xD8D8D8D8D8D8D8D8, 0xD9D9D9D9D9D9D9D9, 0xDADADADADADADADA, 0xDBDBDBDBDBDBDBDB, 0xDCDCDCDCDCDCDCDC, 0xDDDDDDDDDDDDDDDD, 0xDEDEDEDEDEDEDEDE, 0xDFDFDFDFDFDFDFDF,
    0xE0E0E0E0E0E0E0E0, 0xE1E1E1E1E1E1E1E1, 0xE2E2E2E2E2E2E2E2, 0xE3E3E3E3E3E3E3E3, 0xE4E4E4E4E4E4E4E4, 0xE5E5E5E5E5E5E5E5, 0xE6E6E6E6E6E6E6E6, 0xE7E7E7E7E7E7E7E7,
    0xE8E8E8E8E8E8E8E8, 0xE9E9E9E9E9E9E9E9, 0xEAEAEAEAEAEAEAEA, 0xEBEBEBEBEBEBEBEB, 0xECECECECECECECEC, 0xEDEDEDEDEDEDEDED, 0xEEEEEEEEEEEEEEEE, 0xEFEFEFEFEFEFEFEF,
    0xF0F0F0F0F0F0F0F0, 0xF1F1F1F1F1F1F1F1, 0xF2F2F2F2F2F2F2F2, 0xF3F3F3F3F3F3F3F3, 0xF4F4F4F4F4F4F4F4, 0xF5F5F5F5F5F5F5F5, 0xF6F6F6F6F6F6F6F6, 0xF7F7F7F7F7F7F7F7,
    0xF8F8F8F8F8F8F8F8, 0xF9F9F9F9F9F9F9F9, 0xFAFAFAFAFAFAFAFA, 0xFBFBFBFBFBFBFBFB, 0xFCFCFCFCFCFCFCFC, 0xFDFDFDFDFDFDFDFD, 0xFEFEFEFEFEFEFEFE, 0xFFFFFFFFFFFFFFFF
};

// undefined1
undefined1 DAT_005be184 = 0x00;

// undefined4
undefined4 DAT_005b6f70 = 0x00000000;
undefined4 DAT_005b6f74 = 0x00000000;
undefined4 DAT_005b9418 = 0x00000000;
undefined4 DAT_005beaa0 = 0x00000000;
undefined4 DAT_005beaa4 = 0x00000000;

// ushort[2048]
ushort g_USHORT_ARRAY_005b5d00[2048] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0040, 0x0040, 0x0040, 0x0040,
    0x0080, 0x0080, 0x0080, 0x0080, 0x00C0, 0x00C0, 0x00C0, 0x00C0,
    0x0100, 0x0100, 0x0100, 0x0100, 0x0140, 0x0140, 0x0140, 0x0140,
    0x0180, 0x0180, 0x0180, 0x0180, 0x01C0, 0x01C0, 0x01C0, 0x01C0,
    0x0200, 0x0200, 0x0200, 0x0200, 0x0240, 0x0240, 0x0240, 0x0240,
    0x0280, 0x0280, 0x0280, 0x0280, 0x02C0, 0x02C0, 0x02C0, 0x02C0,
    0x0300, 0x0300, 0x0300, 0x0300, 0x0340, 0x0340, 0x0340, 0x0340,
    0x0380, 0x0380, 0x0380, 0x0380, 0x03C0, 0x03C0, 0x03C0, 0x03C0,
    0x0400, 0x0400, 0x0400, 0x0400, 0x0440, 0x0440, 0x0440, 0x0440,
    0x0480, 0x0480, 0x0480, 0x0480, 0x04C0, 0x04C0, 0x04C0, 0x04C0,
    0x0500, 0x0500, 0x0500, 0x0500, 0x0540, 0x0540, 0x0540, 0x0540,
    0x0580, 0x0580, 0x0580, 0x0580, 0x05C0, 0x05C0, 0x05C0, 0x05C0,
    0x0600, 0x0600, 0x0600, 0x0600, 0x0640, 0x0640, 0x0640, 0x0640,
    0x0680, 0x0680, 0x0680, 0x0680, 0x06C0, 0x06C0, 0x06C0, 0x06C0,
    0x0700, 0x0700, 0x0700, 0x0700, 0x0740, 0x0740, 0x0740, 0x0740,
    0x0780, 0x0780, 0x0780, 0x0780, 0x07C0, 0x07C0, 0x07C0, 0x07C0,
    0x0800, 0x0800, 0x0800, 0x0800, 0x0840, 0x0840, 0x0840, 0x0840,
    0x0880, 0x0880, 0x0880, 0x0880, 0x08C0, 0x08C0, 0x08C0, 0x08C0,
    0x0900, 0x0900, 0x0900, 0x0900, 0x0940, 0x0940, 0x0940, 0x0940,
    0x0980, 0x0980, 0x0980, 0x0980, 0x09C0, 0x09C0, 0x09C0, 0x09C0,
    0x0A00, 0x0A00, 0x0A00, 0x0A00, 0x0A40, 0x0A40, 0x0A40, 0x0A40,
    0x0A80, 0x0A80, 0x0A80, 0x0A80, 0x0AC0, 0x0AC0, 0x0AC0, 0x0AC0,
    0x0B00, 0x0B00, 0x0B00, 0x0B00, 0x0B40, 0x0B40, 0x0B40, 0x0B40,
    0x0B80, 0x0B80, 0x0B80, 0x0B80, 0x0BC0, 0x0BC0, 0x0BC0, 0x0BC0,
    0x0C00, 0x0C00, 0x0C00, 0x0C00, 0x0C40, 0x0C40, 0x0C40, 0x0C40,
    0x0C80, 0x0C80, 0x0C80, 0x0C80, 0x0CC0, 0x0CC0, 0x0CC0, 0x0CC0,
    0x0D00, 0x0D00, 0x0D00, 0x0D00, 0x0D40, 0x0D40, 0x0D40, 0x0D40,
    0x0D80, 0x0D80, 0x0D80, 0x0D80, 0x0DC0, 0x0DC0, 0x0DC0, 0x0DC0,
    0x0E00, 0x0E00, 0x0E00, 0x0E00, 0x0E40, 0x0E40, 0x0E40, 0x0E40,
    0x0E80, 0x0E80, 0x0E80, 0x0E80, 0x0EC0, 0x0EC0, 0x0EC0, 0x0EC0,
    0x0F00, 0x0F00, 0x0F00, 0x0F00, 0x0F40, 0x0F40, 0x0F40, 0x0F40,
    0x0F80, 0x0F80, 0x0F80, 0x0F80, 0x0FC0, 0x0FC0, 0x0FC0, 0x0FC0,
    0x1000, 0x1000, 0x1000, 0x1000, 0x1040, 0x1040, 0x1040, 0x1040,
    0x1080, 0x1080, 0x1080, 0x1080, 0x10C0, 0x10C0, 0x10C0, 0x10C0,
    0x1100, 0x1100, 0x1100, 0x1100, 0x1140, 0x1140, 0x1140, 0x1140,
    0x1180, 0x1180, 0x1180, 0x1180, 0x11C0, 0x11C0, 0x11C0, 0x11C0,
    0x1200, 0x1200, 0x1200, 0x1200, 0x1240, 0x1240, 0x1240, 0x1240,
    0x1280, 0x1280, 0x1280, 0x1280, 0x12C0, 0x12C0, 0x12C0, 0x12C0,
    0x1300, 0x1300, 0x1300, 0x1300, 0x1340, 0x1340, 0x1340, 0x1340,
    0x1380, 0x1380, 0x1380, 0x1380, 0x13C0, 0x13C0, 0x13C0, 0x13C0,
    0x1400, 0x1400, 0x1400, 0x1400, 0x1440, 0x1440, 0x1440, 0x1440,
    0x1480, 0x1480, 0x1480, 0x1480, 0x14C0, 0x14C0, 0x14C0, 0x14C0,
    0x1500, 0x1500, 0x1500, 0x1500, 0x1540, 0x1540, 0x1540, 0x1540,
    0x1580, 0x1580, 0x1580, 0x1580, 0x15C0, 0x15C0, 0x15C0, 0x15C0,
    0x1600, 0x1600, 0x1600, 0x1600, 0x1640, 0x1640, 0x1640, 0x1640,
    0x1680, 0x1680, 0x1680, 0x1680, 0x16C0, 0x16C0, 0x16C0, 0x16C0,
    0x1700, 0x1700, 0x1700, 0x1700, 0x1740, 0x1740, 0x1740, 0x1740,
    0x1780, 0x1780, 0x1780, 0x1780, 0x17C0, 0x17C0, 0x17C0, 0x17C0,
    0x1800, 0x1800, 0x1800, 0x1800, 0x1840, 0x1840, 0x1840, 0x1840,
    0x1880, 0x1880, 0x1880, 0x1880, 0x18C0, 0x18C0, 0x18C0, 0x18C0,
    0x1900, 0x1900, 0x1900, 0x1900, 0x1940, 0x1940, 0x1940, 0x1940,
    0x1980, 0x1980, 0x1980, 0x1980, 0x19C0, 0x19C0, 0x19C0, 0x19C0,
    0x1A00, 0x1A00, 0x1A00, 0x1A00, 0x1A40, 0x1A40, 0x1A40, 0x1A40,
    0x1A80, 0x1A80, 0x1A80, 0x1A80, 0x1AC0, 0x1AC0, 0x1AC0, 0x1AC0,
    0x1B00, 0x1B00, 0x1B00, 0x1B00, 0x1B40, 0x1B40, 0x1B40, 0x1B40,
    0x1B80, 0x1B80, 0x1B80, 0x1B80, 0x1BC0, 0x1BC0, 0x1BC0, 0x1BC0,
    0x1C00, 0x1C00, 0x1C00, 0x1C00, 0x1C40, 0x1C40, 0x1C40, 0x1C40,
    0x1C80, 0x1C80, 0x1C80, 0x1C80, 0x1CC0, 0x1CC0, 0x1CC0, 0x1CC0,
    0x1D00, 0x1D00, 0x1D00, 0x1D00, 0x1D40, 0x1D40, 0x1D40, 0x1D40,
    0x1D80, 0x1D80, 0x1D80, 0x1D80, 0x1DC0, 0x1DC0, 0x1DC0, 0x1DC0,
    0x1E00, 0x1E00, 0x1E00, 0x1E00, 0x1E40, 0x1E40, 0x1E40, 0x1E40,
    0x1E80, 0x1E80, 0x1E80, 0x1E80, 0x1EC0, 0x1EC0, 0x1EC0, 0x1EC0,
    0x1F00, 0x1F00, 0x1F00, 0x1F00, 0x1F40, 0x1F40, 0x1F40, 0x1F40,
    0x1F80, 0x1F80, 0x1F80, 0x1F80, 0x1FC0, 0x1FC0, 0x1FC0, 0x1FC0,
    0x2000, 0x2000, 0x2000, 0x2000, 0x2040, 0x2040, 0x2040, 0x2040,
    0x2080, 0x2080, 0x2080, 0x2080, 0x20C0, 0x20C0, 0x20C0, 0x20C0,
    0x2100, 0x2100, 0x2100, 0x2100, 0x2140, 0x2140, 0x2140, 0x2140,
    0x2180, 0x2180, 0x2180, 0x2180, 0x21C0, 0x21C0, 0x21C0, 0x21C0,
    0x2200, 0x2200, 0x2200, 0x2200, 0x2240, 0x2240, 0x2240, 0x2240,
    0x2280, 0x2280, 0x2280, 0x2280, 0x22C0, 0x22C0, 0x22C0, 0x22C0,
    0x2300, 0x2300, 0x2300, 0x2300, 0x2340, 0x2340, 0x2340, 0x2340,
    0x2380, 0x2380, 0x2380, 0x2380, 0x23C0, 0x23C0, 0x23C0, 0x23C0,
    0x2400, 0x2400, 0x2400, 0x2400, 0x2440, 0x2440, 0x2440, 0x2440,
    0x2480, 0x2480, 0x2480, 0x2480, 0x24C0, 0x24C0, 0x24C0, 0x24C0,
    0x2500, 0x2500, 0x2500, 0x2500, 0x2540, 0x2540, 0x2540, 0x2540,
    0x2580, 0x2580, 0x2580, 0x2580, 0x25C0, 0x25C0, 0x25C0, 0x25C0,
    0x2600, 0x2600, 0x2600, 0x2600, 0x2640, 0x2640, 0x2640, 0x2640,
    0x2680, 0x2680, 0x2680, 0x2680, 0x26C0, 0x26C0, 0x26C0, 0x26C0,
    0x2700, 0x2700, 0x2700, 0x2700, 0x2740, 0x2740, 0x2740, 0x2740,
    0x2780, 0x2780, 0x2780, 0x2780, 0x27C0, 0x27C0, 0x27C0, 0x27C0,
    0x2800, 0x2800, 0x2800, 0x2800, 0x2840, 0x2840, 0x2840, 0x2840,
    0x2880, 0x2880, 0x2880, 0x2880, 0x28C0, 0x28C0, 0x28C0, 0x28C0,
    0x2900, 0x2900, 0x2900, 0x2900, 0x2940, 0x2940, 0x2940, 0x2940,
    0x2980, 0x2980, 0x2980, 0x2980, 0x29C0, 0x29C0, 0x29C0, 0x29C0,
    0x2A00, 0x2A00, 0x2A00, 0x2A00, 0x2A40, 0x2A40, 0x2A40, 0x2A40,
    0x2A80, 0x2A80, 0x2A80, 0x2A80, 0x2AC0, 0x2AC0, 0x2AC0, 0x2AC0,
    0x2B00, 0x2B00, 0x2B00, 0x2B00, 0x2B40, 0x2B40, 0x2B40, 0x2B40,
    0x2B80, 0x2B80, 0x2B80, 0x2B80, 0x2BC0, 0x2BC0, 0x2BC0, 0x2BC0,
    0x2C00, 0x2C00, 0x2C00, 0x2C00, 0x2C40, 0x2C40, 0x2C40, 0x2C40,
    0x2C80, 0x2C80, 0x2C80, 0x2C80, 0x2CC0, 0x2CC0, 0x2CC0, 0x2CC0,
    0x2D00, 0x2D00, 0x2D00, 0x2D00, 0x2D40, 0x2D40, 0x2D40, 0x2D40,
    0x2D80, 0x2D80, 0x2D80, 0x2D80, 0x2DC0, 0x2DC0, 0x2DC0, 0x2DC0,
    0x2E00, 0x2E00, 0x2E00, 0x2E00, 0x2E40, 0x2E40, 0x2E40, 0x2E40,
    0x2E80, 0x2E80, 0x2E80, 0x2E80, 0x2EC0, 0x2EC0, 0x2EC0, 0x2EC0,
    0x2F00, 0x2F00, 0x2F00, 0x2F00, 0x2F40, 0x2F40, 0x2F40, 0x2F40,
    0x2F80, 0x2F80, 0x2F80, 0x2F80, 0x2FC0, 0x2FC0, 0x2FC0, 0x2FC0,
    0x3000, 0x3000, 0x3000, 0x3000, 0x3040, 0x3040, 0x3040, 0x3040,
    0x3080, 0x3080, 0x3080, 0x3080, 0x30C0, 0x30C0, 0x30C0, 0x30C0,
    0x3100, 0x3100, 0x3100, 0x3100, 0x3140, 0x3140, 0x3140, 0x3140,
    0x3180, 0x3180, 0x3180, 0x3180, 0x31C0, 0x31C0, 0x31C0, 0x31C0,
    0x3200, 0x3200, 0x3200, 0x3200, 0x3240, 0x3240, 0x3240, 0x3240,
    0x3280, 0x3280, 0x3280, 0x3280, 0x32C0, 0x32C0, 0x32C0, 0x32C0,
    0x3300, 0x3300, 0x3300, 0x3300, 0x3340, 0x3340, 0x3340, 0x3340,
    0x3380, 0x3380, 0x3380, 0x3380, 0x33C0, 0x33C0, 0x33C0, 0x33C0,
    0x3400, 0x3400, 0x3400, 0x3400, 0x3440, 0x3440, 0x3440, 0x3440,
    0x3480, 0x3480, 0x3480, 0x3480, 0x34C0, 0x34C0, 0x34C0, 0x34C0,
    0x3500, 0x3500, 0x3500, 0x3500, 0x3540, 0x3540, 0x3540, 0x3540,
    0x3580, 0x3580, 0x3580, 0x3580, 0x35C0, 0x35C0, 0x35C0, 0x35C0,
    0x3600, 0x3600, 0x3600, 0x3600, 0x3640, 0x3640, 0x3640, 0x3640,
    0x3680, 0x3680, 0x3680, 0x3680, 0x36C0, 0x36C0, 0x36C0, 0x36C0,
    0x3700, 0x3700, 0x3700, 0x3700, 0x3740, 0x3740, 0x3740, 0x3740,
    0x3780, 0x3780, 0x3780, 0x3780, 0x37C0, 0x37C0, 0x37C0, 0x37C0,
    0x3800, 0x3800, 0x3800, 0x3800, 0x3840, 0x3840, 0x3840, 0x3840,
    0x3880, 0x3880, 0x3880, 0x3880, 0x38C0, 0x38C0, 0x38C0, 0x38C0,
    0x3900, 0x3900, 0x3900, 0x3900, 0x3940, 0x3940, 0x3940, 0x3940,
    0x3980, 0x3980, 0x3980, 0x3980, 0x39C0, 0x39C0, 0x39C0, 0x39C0,
    0x3A00, 0x3A00, 0x3A00, 0x3A00, 0x3A40, 0x3A40, 0x3A40, 0x3A40,
    0x3A80, 0x3A80, 0x3A80, 0x3A80, 0x3AC0, 0x3AC0, 0x3AC0, 0x3AC0,
    0x3B00, 0x3B00, 0x3B00, 0x3B00, 0x3B40, 0x3B40, 0x3B40, 0x3B40,
    0x3B80, 0x3B80, 0x3B80, 0x3B80, 0x3BC0, 0x3BC0, 0x3BC0, 0x3BC0,
    0x3C00, 0x3C00, 0x3C00, 0x3C00, 0x3C40, 0x3C40, 0x3C40, 0x3C40,
    0x3C80, 0x3C80, 0x3C80, 0x3C80, 0x3CC0, 0x3CC0, 0x3CC0, 0x3CC0,
    0x3D00, 0x3D00, 0x3D00, 0x3D00, 0x3D40, 0x3D40, 0x3D40, 0x3D40,
    0x3D80, 0x3D80, 0x3D80, 0x3D80, 0x3DC0, 0x3DC0, 0x3DC0, 0x3DC0,
    0x3E00, 0x3E00, 0x3E00, 0x3E00, 0x3E40, 0x3E40, 0x3E40, 0x3E40,
    0x3E80, 0x3E80, 0x3E80, 0x3E80, 0x3EC0, 0x3EC0, 0x3EC0, 0x3EC0,
    0x3F00, 0x3F00, 0x3F00, 0x3F00, 0x3F40, 0x3F40, 0x3F40, 0x3F40,
    0x3F80, 0x3F80, 0x3F80, 0x3F80, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0,
    0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0, 0x3FC0
};

// void*
void* g_PTR_005b06e0 = nullptr;
void* switchdataD_005b7f90 = (void*)0x004819BC; // caseD_0
void* switchdataD_005b7fd4 = (void*)0x00481A4B; // caseD_0

