#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winuser.h"

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

// Function Definition: joyGetPosEx
typedef MMRESULT (*joyGetPosEx)(UINT uJoyID, LPJOYINFOEX pji);

// Structure: joyinfo_tag
typedef struct joyinfo_tag {
    UINT wXpos;
    UINT wYpos;
    UINT wZpos;
    UINT wButtons;
} joyinfo_tag;

// Function Definition: joyGetPos
typedef MMRESULT (*joyGetPos)(UINT uJoyID, LPJOYINFO pji);

// Function Definition: mciGetErrorStringA
typedef BOOL (*mciGetErrorStringA)(MCIERROR mcierr, LPSTR pszText, UINT cchText);

// Function Definition: mciSendStringA
typedef MCIERROR (*mciSendStringA)(LPCSTR lpstrCommand, LPSTR lpstrReturnString, UINT uReturnLength, HWND hwndCallback);

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

// Function Definition: joyGetDevCapsA
typedef MMRESULT (*joyGetDevCapsA)(UINT uJoyID, LPJOYCAPSA pjc, UINT cbjc);

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

// Function Definition: timeBeginPeriod
typedef MMRESULT (*timeBeginPeriod)(UINT uPeriod);

// Function Definition: timeEndPeriod
typedef MMRESULT (*timeEndPeriod)(UINT uPeriod);

// Function Definition: timeGetTime
typedef DWORD (*timeGetTime)(void);

// Function Definition: waveInClose
typedef MMRESULT (*waveInClose)(HWAVEIN hwi);

// Function Definition: waveInGetDevCapsA
typedef MMRESULT (*waveInGetDevCapsA)(UINT uDeviceID, LPWAVEINCAPSA pwic, UINT cbwic);

// Function Definition: waveInOpen
typedef MMRESULT (*waveInOpen)(LPHWAVEIN phwi, UINT uDeviceID, LPCWAVEFORMATEX pwfx, DWORD dwCallback, DWORD dwInstance, DWORD fdwOpen);

// Function Definition: waveInReset
typedef MMRESULT (*waveInReset)(HWAVEIN hwi);

// Function Definition: waveInStart
typedef MMRESULT (*waveInStart)(HWAVEIN hwi);

// Function Definition: waveOutClose
typedef MMRESULT (*waveOutClose)(HWAVEOUT hwo);

// Function Definition: waveOutGetDevCapsA
typedef MMRESULT (*waveOutGetDevCapsA)(UINT uDeviceID, LPWAVEOUTCAPSA pwoc, UINT cbwoc);

// Function Definition: waveOutOpen
typedef MMRESULT (*waveOutOpen)(LPHWAVEOUT phwo, UINT uDeviceID, LPCWAVEFORMATEX pwfx, DWORD dwCallback, DWORD dwInstance, DWORD fdwOpen);

// Function Definition: waveOutReset
typedef MMRESULT (*waveOutReset)(HWAVEOUT hwo);

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

// Function Definition: waveInAddBuffer
typedef MMRESULT (*waveInAddBuffer)(HWAVEIN hwi, LPWAVEHDR pwh, UINT cbwh);

// Function Definition: waveInPrepareHeader
typedef MMRESULT (*waveInPrepareHeader)(HWAVEIN hwi, LPWAVEHDR pwh, UINT cbwh);

// Function Definition: waveInUnprepareHeader
typedef MMRESULT (*waveInUnprepareHeader)(HWAVEIN hwi, LPWAVEHDR pwh, UINT cbwh);

// Function Definition: waveOutPrepareHeader
typedef MMRESULT (*waveOutPrepareHeader)(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh);

// Function Definition: waveOutUnprepareHeader
typedef MMRESULT (*waveOutUnprepareHeader)(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh);

// Function Definition: waveOutWrite
typedef MMRESULT (*waveOutWrite)(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh);

