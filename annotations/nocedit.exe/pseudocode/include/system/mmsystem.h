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
#pragma pack(push, 1)
typedef struct HWAVEIN__ {
    int unused;
} __attribute__((aligned(4))) HWAVEIN__;
#pragma pack(pop)

// Typedef: HWAVEOUT
// pointer to HWAVEOUT__
typedef struct HWAVEOUT__* HWAVEOUT;

// Structure: HWAVEOUT__
#pragma pack(push, 1)
typedef struct HWAVEOUT__ {
    int unused;
} __attribute__((aligned(4))) HWAVEOUT__;
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

// Function Definition: MCI_GET_ERROR_STRING_A_FUNC
typedef BOOL MCI_GET_ERROR_STRING_A_FUNC(MCIERROR mcierr, LPSTR pszText, UINT cchText);

// Function Definition: MCI_SEND_STRING_A_FUNC
typedef MCIERROR MCI_SEND_STRING_A_FUNC(LPCSTR lpstrCommand, LPSTR lpstrReturnString, UINT uReturnLength, HWND hwndCallback);

// Typedef: MMRESULT
// Unsigned Integer (compiler-specific size)
typedef UINT MMRESULT;

// Function Definition: JOY_GET_POS_EX_FUNC
typedef MMRESULT JOY_GET_POS_EX_FUNC(UINT uJoyID, LPJOYINFOEX pji);

// Typedef: MMVERSION
// Unsigned Integer (compiler-specific size)
typedef UINT MMVERSION;

// Function Definition: TIME_BEGIN_PERIOD_FUNC
typedef MMRESULT TIME_BEGIN_PERIOD_FUNC(UINT uPeriod);

// Function Definition: TIME_END_PERIOD_FUNC
typedef MMRESULT TIME_END_PERIOD_FUNC(UINT uPeriod);

// Function Definition: TIME_GET_TIME_FUNC
typedef DWORD TIME_GET_TIME_FUNC(void);

// Function Definition: WAVE_IN_CLOSE_FUNC
typedef MMRESULT WAVE_IN_CLOSE_FUNC(HWAVEIN hwi);

// Function Definition: WAVE_IN_RESET_FUNC
typedef MMRESULT WAVE_IN_RESET_FUNC(HWAVEIN hwi);

// Function Definition: WAVE_IN_START_FUNC
typedef MMRESULT WAVE_IN_START_FUNC(HWAVEIN hwi);

// Function Definition: WAVE_OUT_CLOSE_FUNC
typedef MMRESULT WAVE_OUT_CLOSE_FUNC(HWAVEOUT hwo);

// Function Definition: WAVE_OUT_RESET_FUNC
typedef MMRESULT WAVE_OUT_RESET_FUNC(HWAVEOUT hwo);

// Structure: joyinfo_tag
#pragma pack(push, 1)
typedef struct joyinfo_tag {
    UINT wXpos;
    UINT wYpos;
    UINT wZpos;
    UINT wButtons;
} __attribute__((aligned(4))) joyinfo_tag;
#pragma pack(pop)

// Function Definition: JOY_GET_POS_FUNC
typedef MMRESULT JOY_GET_POS_FUNC(UINT uJoyID, LPJOYINFO pji);

// Structure: tWAVEFORMATEX
#pragma pack(push, 1)
typedef struct tWAVEFORMATEX {
    WORD wFormatTag;
    WORD nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
    WORD wBitsPerSample;
    WORD cbSize;
} __attribute__((aligned(4))) tWAVEFORMATEX;
#pragma pack(pop)

// Typedef: WAVEFORMATEX
typedef tWAVEFORMATEX WAVEFORMATEX;

// Typedef: LPCWAVEFORMATEX
// pointer to WAVEFORMATEX
typedef WAVEFORMATEX* LPCWAVEFORMATEX;

// Function Definition: WAVE_IN_OPEN_FUNC
typedef MMRESULT WAVE_IN_OPEN_FUNC(LPHWAVEIN phwi, UINT uDeviceID, LPCWAVEFORMATEX pwfx, DWORD dwCallback, DWORD dwInstance, DWORD fdwOpen);

// Function Definition: WAVE_OUT_OPEN_FUNC
typedef MMRESULT WAVE_OUT_OPEN_FUNC(LPHWAVEOUT phwo, UINT uDeviceID, LPCWAVEFORMATEX pwfx, DWORD dwCallback, DWORD dwInstance, DWORD fdwOpen);

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
} __attribute__((aligned(4))) tagJOYCAPSA;
#pragma pack(pop)

// Function Definition: JOY_GET_DEV_CAPS_A_FUNC
typedef MMRESULT JOY_GET_DEV_CAPS_A_FUNC(UINT uJoyID, LPJOYCAPSA pjc, UINT cbjc);

// Structure: tagWAVEINCAPSA
#pragma pack(push, 1)
typedef struct tagWAVEINCAPSA {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[32];
    DWORD dwFormats;
    WORD wChannels;
    WORD wReserved1;
} __attribute__((aligned(4))) tagWAVEINCAPSA;
#pragma pack(pop)

// Function Definition: WAVE_IN_GET_DEV_CAPS_A_FUNC
typedef MMRESULT WAVE_IN_GET_DEV_CAPS_A_FUNC(UINT uDeviceID, LPWAVEINCAPSA pwic, UINT cbwic);

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
} __attribute__((aligned(4))) tagWAVEOUTCAPSA;
#pragma pack(pop)

// Function Definition: WAVE_OUT_GET_DEV_CAPS_A_FUNC
typedef MMRESULT WAVE_OUT_GET_DEV_CAPS_A_FUNC(UINT uDeviceID, LPWAVEOUTCAPSA pwoc, UINT cbwoc);

// Structure: wavehdr_tag
#pragma pack(push, 1)
typedef struct wavehdr_tag {
    LPSTR lpData;
    DWORD dwBufferLength;
    DWORD dwBytesRecorded;
    DWORD_PTR dwUser;
    DWORD dwFlags;
    DWORD dwLoops;
    struct wavehdr_tag* lpNext;
    DWORD_PTR reserved;
} __attribute__((aligned(4))) wavehdr_tag;
#pragma pack(pop)

// Function Definition: WAVE_IN_ADD_BUFFER_FUNC
typedef MMRESULT WAVE_IN_ADD_BUFFER_FUNC(HWAVEIN hwi, LPWAVEHDR pwh, UINT cbwh);

// Function Definition: WAVE_IN_PREPARE_HEADER_FUNC
typedef MMRESULT WAVE_IN_PREPARE_HEADER_FUNC(HWAVEIN hwi, LPWAVEHDR pwh, UINT cbwh);

// Function Definition: WAVE_IN_UNPREPARE_HEADER_FUNC
typedef MMRESULT WAVE_IN_UNPREPARE_HEADER_FUNC(HWAVEIN hwi, LPWAVEHDR pwh, UINT cbwh);

// Function Definition: WAVE_OUT_PREPARE_HEADER_FUNC
typedef MMRESULT WAVE_OUT_PREPARE_HEADER_FUNC(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh);

// Function Definition: WAVE_OUT_UNPREPARE_HEADER_FUNC
typedef MMRESULT WAVE_OUT_UNPREPARE_HEADER_FUNC(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh);

// Function Definition: WAVE_OUT_WRITE_FUNC
typedef MMRESULT WAVE_OUT_WRITE_FUNC(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh);

