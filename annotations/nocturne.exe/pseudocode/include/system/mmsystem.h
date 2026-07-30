#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// MMSYSTEM - System Header
// =============================================================================

// Typedef: HWAVEIN
// pointer to HWAVEIN__
typedef struct HWAVEIN__* HWAVEIN;

// Structure: HWAVEIN__
typedef struct HWAVEIN__ {
    int unused;
} HWAVEIN__;

// Typedef: HWAVEOUT
// pointer to HWAVEOUT__
typedef struct HWAVEOUT__* HWAVEOUT;

// Structure: HWAVEOUT__
#pragma pack(push, 1)
typedef struct HWAVEOUT__ {
    int unused;
} HWAVEOUT__;
#pragma pack(pop)

// Structure: JOYINFOEX
#pragma pack(push, 1)
typedef struct JOYINFOEX {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwXpos;
    DWORD dwYpos;
    DWORD dwZpos;
    DWORD dwRpos;
    DWORD dwUpos;
    DWORD dwVpos;
    DWORD dwButtons;
    DWORD dwButtonNumber;
    DWORD dwPOV;
    DWORD dwReserved1;
    DWORD dwReserved2;
} JOYINFOEX;
#pragma pack(pop)

// Typedef: LPHWAVEIN
// pointer to HWAVEIN
typedef HWAVEIN* LPHWAVEIN;

// Typedef: LPHWAVEOUT
// pointer to HWAVEOUT
typedef HWAVEOUT* LPHWAVEOUT;

// Typedef: LPJOYCAPSA
// pointer to tagJOYCAPSA
typedef struct tagJOYCAPSA* LPJOYCAPSA;

// Typedef: LPJOYINFO
// pointer to joyinfo_tag
typedef struct joyinfo_tag* LPJOYINFO;

// Typedef: LPJOYINFOEX
// pointer to JOYINFOEX
typedef struct JOYINFOEX* LPJOYINFOEX;

// Typedef: LPWAVEFORMATEX
// pointer to tWAVEFORMATEX
typedef struct tWAVEFORMATEX* LPWAVEFORMATEX;

// Typedef: LPWAVEHDR
// pointer to wavehdr_tag
typedef struct wavehdr_tag* LPWAVEHDR;

// Typedef: LPWAVEINCAPSA
// pointer to tagWAVEINCAPSA
typedef struct tagWAVEINCAPSA* LPWAVEINCAPSA;

// Typedef: LPWAVEOUTCAPSA
// pointer to tagWAVEOUTCAPSA
typedef struct tagWAVEOUTCAPSA* LPWAVEOUTCAPSA;

// Typedef: MCIERROR
// Unsigned Long Integer (compiler-specific size)
typedef DWORD MCIERROR;

// Typedef: MMRESULT
// Unsigned Integer (compiler-specific size)
typedef UINT MMRESULT;

// Typedef: MMVERSION
// Unsigned Integer (compiler-specific size)
typedef UINT MMVERSION;

// Structure: joyinfo_tag
#pragma pack(push, 1)
typedef struct joyinfo_tag {
    UINT wXpos;
    UINT wYpos;
    UINT wZpos;
    UINT wButtons;
} joyinfo_tag;
#pragma pack(pop)

// Structure: tWAVEFORMATEX
typedef struct tWAVEFORMATEX {
    WORD wFormatTag;
    WORD nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
    WORD wBitsPerSample;
    WORD cbSize;
} tWAVEFORMATEX;

// Typedef: WAVEFORMATEX
typedef tWAVEFORMATEX WAVEFORMATEX;

// Typedef: LPCWAVEFORMATEX
// pointer to WAVEFORMATEX
typedef WAVEFORMATEX* LPCWAVEFORMATEX;

// Structure: tagJOYCAPSA
#pragma pack(push, 1)
typedef struct tagJOYCAPSA {
    WORD wMid;
    WORD wPid;
    CHAR szPname[32];
    UINT wXmin;
    UINT wXmax;
    UINT wYmin;
    UINT wYmax;
    UINT wZmin;
    UINT wZmax;
    UINT wNumButtons;
    UINT wPeriodMin;
    UINT wPeriodMax;
    UINT wRmin;
    UINT wRmax;
    UINT wUmin;
    UINT wUmax;
    UINT wVmin;
    UINT wVmax;
    UINT wCaps;
    UINT wMaxAxes;
    UINT wNumAxes;
    UINT wMaxButtons;
    CHAR szRegKey[32];
    CHAR szOEMVxD[260];
} tagJOYCAPSA;
#pragma pack(pop)

// Structure: tagWAVEINCAPSA
typedef struct tagWAVEINCAPSA {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[32];
    DWORD dwFormats;
    WORD wChannels;
    WORD wReserved1;
} tagWAVEINCAPSA;

// Structure: tagWAVEOUTCAPSA
#pragma pack(push, 1)
typedef struct tagWAVEOUTCAPSA {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[32];
    DWORD dwFormats;
    WORD wChannels;
    WORD wReserved1;
    DWORD dwSupport;
} tagWAVEOUTCAPSA;
#pragma pack(pop)

// Structure: wavehdr_tag
typedef struct wavehdr_tag {
    LPSTR lpData;
    DWORD dwBufferLength;
    DWORD dwBytesRecorded;
    DWORD_PTR dwUser;
    DWORD dwFlags;
    DWORD dwLoops;
    struct wavehdr_tag* lpNext;
    DWORD_PTR reserved;
} wavehdr_tag;

