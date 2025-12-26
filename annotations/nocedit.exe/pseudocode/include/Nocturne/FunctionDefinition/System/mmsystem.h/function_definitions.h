#pragma once

// Function Definition: joyGetDevCapsA
typedef MMRESULT (*joyGetDevCapsA)(UINT uJoyID, LPJOYCAPSA pjc, UINT cbjc);

// Function Definition: joyGetPos
typedef MMRESULT (*joyGetPos)(UINT uJoyID, LPJOYINFO pji);

// Function Definition: joyGetPosEx
typedef MMRESULT (*joyGetPosEx)(UINT uJoyID, LPJOYINFOEX pji);

// Function Definition: mciGetErrorStringA
typedef BOOL (*mciGetErrorStringA)(MCIERROR mcierr, LPSTR pszText, UINT cchText);

// Function Definition: mciSendStringA
typedef MCIERROR (*mciSendStringA)(LPCSTR lpstrCommand, LPSTR lpstrReturnString, UINT uReturnLength, HWND hwndCallback);

// Function Definition: timeBeginPeriod
typedef MMRESULT (*timeBeginPeriod)(UINT uPeriod);

// Function Definition: timeEndPeriod
typedef MMRESULT (*timeEndPeriod)(UINT uPeriod);

// Function Definition: timeGetTime
typedef DWORD (*timeGetTime)(void);

// Function Definition: waveInAddBuffer
typedef MMRESULT (*waveInAddBuffer)(HWAVEIN hwi, LPWAVEHDR pwh, UINT cbwh);

// Function Definition: waveInClose
typedef MMRESULT (*waveInClose)(HWAVEIN hwi);

// Function Definition: waveInGetDevCapsA
typedef MMRESULT (*waveInGetDevCapsA)(UINT uDeviceID, LPWAVEINCAPSA pwic, UINT cbwic);

// Function Definition: waveInOpen
typedef MMRESULT (*waveInOpen)(LPHWAVEIN phwi, UINT uDeviceID, LPCWAVEFORMATEX pwfx, DWORD dwCallback, DWORD dwInstance, DWORD fdwOpen);

// Function Definition: waveInPrepareHeader
typedef MMRESULT (*waveInPrepareHeader)(HWAVEIN hwi, LPWAVEHDR pwh, UINT cbwh);

// Function Definition: waveInReset
typedef MMRESULT (*waveInReset)(HWAVEIN hwi);

// Function Definition: waveInStart
typedef MMRESULT (*waveInStart)(HWAVEIN hwi);

// Function Definition: waveInUnprepareHeader
typedef MMRESULT (*waveInUnprepareHeader)(HWAVEIN hwi, LPWAVEHDR pwh, UINT cbwh);

// Function Definition: waveOutClose
typedef MMRESULT (*waveOutClose)(HWAVEOUT hwo);

// Function Definition: waveOutGetDevCapsA
typedef MMRESULT (*waveOutGetDevCapsA)(UINT uDeviceID, LPWAVEOUTCAPSA pwoc, UINT cbwoc);

// Function Definition: waveOutOpen
typedef MMRESULT (*waveOutOpen)(LPHWAVEOUT phwo, UINT uDeviceID, LPCWAVEFORMATEX pwfx, DWORD dwCallback, DWORD dwInstance, DWORD fdwOpen);

// Function Definition: waveOutPrepareHeader
typedef MMRESULT (*waveOutPrepareHeader)(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh);

// Function Definition: waveOutReset
typedef MMRESULT (*waveOutReset)(HWAVEOUT hwo);

// Function Definition: waveOutUnprepareHeader
typedef MMRESULT (*waveOutUnprepareHeader)(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh);

// Function Definition: waveOutWrite
typedef MMRESULT (*waveOutWrite)(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh);

