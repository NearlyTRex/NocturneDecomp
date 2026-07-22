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

// Typedef: MMVERSION
// Unsigned Integer (compiler-specific size)
typedef UINT MMVERSION;

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

