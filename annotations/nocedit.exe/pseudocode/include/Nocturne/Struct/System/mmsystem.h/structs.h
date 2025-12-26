#pragma once

// Structure: HWAVEIN__
typedef struct HWAVEIN__ {
    int unused;
} HWAVEIN__;

// Structure: HWAVEOUT__
typedef struct HWAVEOUT__ {
    int unused;
} HWAVEOUT__;

// Structure: JOYINFOEX
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

// Structure: joyinfo_tag
typedef struct joyinfo_tag {
    UINT wXpos;
    UINT wYpos;
    UINT wZpos;
    UINT wButtons;
} joyinfo_tag;

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

// Structure: tagJOYCAPSA
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

// Structure: wavehdr_tag
typedef struct wavehdr_tag {
    LPSTR lpData;
    DWORD dwBufferLength;
    DWORD dwBytesRecorded;
    DWORD_PTR dwUser;
    DWORD dwFlags;
    DWORD dwLoops;
    wavehdr_tag* lpNext;
    DWORD_PTR reserved;
} wavehdr_tag;

