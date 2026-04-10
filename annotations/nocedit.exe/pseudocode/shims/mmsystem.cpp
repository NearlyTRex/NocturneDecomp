#include "system/mmsystem.h"
#include <SDL.h>
#include <cstring>

// ---------------------------------------------------------------------------
// State
// ---------------------------------------------------------------------------
static SDL_Joystick* s_joystick = nullptr;

// ---------------------------------------------------------------------------
// Globals (function pointers wired by shims_init_mmsystem)
// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// MMRESULT constants
// ---------------------------------------------------------------------------
#ifndef MMSYSERR_NOERROR
#define MMSYSERR_NOERROR 0
#endif
#ifndef TIMERR_NOERROR
#define TIMERR_NOERROR 0
#endif

// ---------------------------------------------------------------------------
// Shim implementations
// ---------------------------------------------------------------------------

static MMRESULT shim_joyGetDevCapsA(unsigned int uJoyID, LPJOYCAPSA pjc,
                                     unsigned int cbjc) {
    if (!pjc) return 1;
    memset(pjc, 0, cbjc);
    int numJoy = SDL_NumJoysticks();
    if ((int)uJoyID >= numJoy) return 1; // JOYERR_PARMS
    return MMSYSERR_NOERROR;
}

static MMRESULT shim_joyGetPos(unsigned int uJoyID, LPJOYINFO pji) {
    if (!pji) return 1;
    memset(pji, 0, sizeof(joyinfo_tag));
    if (!s_joystick) {
        if (SDL_NumJoysticks() > 0) {
            s_joystick = SDL_JoystickOpen((int)uJoyID);
        }
    }
    if (s_joystick) {
        // Map SDL axis range (-32768..32767) to Win32 range (0..65535)
        int x = SDL_JoystickGetAxis(s_joystick, 0);
        int y = SDL_JoystickGetAxis(s_joystick, 1);
        int z = SDL_JoystickGetAxis(s_joystick, 2);
        pji->wXpos = (DWORD)(x + 32768);
        pji->wYpos = (DWORD)(y + 32768);
        pji->wZpos = (DWORD)(z + 32768);
        pji->wButtons = 0;
        for (int i = 0; i < SDL_JoystickNumButtons(s_joystick) && i < 32; i++) {
            if (SDL_JoystickGetButton(s_joystick, i))
                pji->wButtons |= (1u << i);
        }
        return MMSYSERR_NOERROR;
    }
    return 1; // JOYERR_UNPLUGGED
}

// MCI functions are implemented in mci_video.cpp (libav-backed AVI playback)
extern MCIERROR shim_mciSendStringA(LPCSTR lpstrCommand, LPSTR lpstrReturnString,
                                     UINT uReturnLength, HWND hwndCallback);
extern BOOL shim_mciGetErrorStringA(MCIERROR mcierr, LPSTR pszText, UINT cchText);

static MMRESULT shim_timeBeginPeriod(unsigned int uPeriod) {
    return TIMERR_NOERROR;
}

static MMRESULT shim_timeEndPeriod(unsigned int uPeriod) {
    return TIMERR_NOERROR;
}

static DWORD shim_timeGetTime(void) {
    return (DWORD)SDL_GetTicks();
}

// Wave-in stubs
static MMRESULT shim_waveInAddBuffer(HWAVEIN hwi, LPWAVEHDR pwh,
                                       unsigned int cbwh) {
    return MMSYSERR_NOERROR;
}

static MMRESULT shim_waveInClose(HWAVEIN hwi) {
    return MMSYSERR_NOERROR;
}

static MMRESULT shim_waveInGetDevCapsA(unsigned int uDeviceID,
                                         LPWAVEINCAPSA pwic,
                                         unsigned int cbwic) {
    if (pwic) memset(pwic, 0, cbwic);
    return MMSYSERR_NOERROR;
}

static MMRESULT shim_waveInOpen(HWAVEIN* phwi, unsigned int uDeviceID,
                                  const WAVEFORMATEX* pwfx,
                                  DWORD dwCallback, DWORD dwInstance,
                                  DWORD fdwOpen) {
    if (phwi) *phwi = (HWAVEIN)1;
    return MMSYSERR_NOERROR;
}

static MMRESULT shim_waveInPrepareHeader(HWAVEIN hwi, LPWAVEHDR pwh,
                                           unsigned int cbwh) {
    return MMSYSERR_NOERROR;
}

static MMRESULT shim_waveInReset(HWAVEIN hwi) {
    return MMSYSERR_NOERROR;
}

static MMRESULT shim_waveInStart(HWAVEIN hwi) {
    return MMSYSERR_NOERROR;
}

static MMRESULT shim_waveInUnprepareHeader(HWAVEIN hwi, LPWAVEHDR pwh,
                                             unsigned int cbwh) {
    return MMSYSERR_NOERROR;
}

// Wave-out stubs
static MMRESULT shim_waveOutClose(HWAVEOUT hwo) {
    return MMSYSERR_NOERROR;
}

static MMRESULT shim_waveOutGetDevCapsA(unsigned int uDeviceID,
                                          LPWAVEOUTCAPSA pwoc,
                                          unsigned int cbwoc) {
    if (pwoc) memset(pwoc, 0, cbwoc);
    return MMSYSERR_NOERROR;
}

static MMRESULT shim_waveOutOpen(HWAVEOUT* phwo, unsigned int uDeviceID,
                                   const WAVEFORMATEX* pwfx,
                                   DWORD dwCallback, DWORD dwInstance,
                                   DWORD fdwOpen) {
    if (phwo) *phwo = (HWAVEOUT)1;
    return MMSYSERR_NOERROR;
}

static MMRESULT shim_waveOutPrepareHeader(HWAVEOUT hwo, LPWAVEHDR pwh,
                                            unsigned int cbwh) {
    return MMSYSERR_NOERROR;
}

static MMRESULT shim_waveOutReset(HWAVEOUT hwo) {
    return MMSYSERR_NOERROR;
}

static MMRESULT shim_waveOutUnprepareHeader(HWAVEOUT hwo, LPWAVEHDR pwh,
                                              unsigned int cbwh) {
    return MMSYSERR_NOERROR;
}

static MMRESULT shim_waveOutWrite(HWAVEOUT hwo, LPWAVEHDR pwh,
                                    unsigned int cbwh) {
    return MMSYSERR_NOERROR;
}

// ---------------------------------------------------------------------------
// Init
// ---------------------------------------------------------------------------
#include "globals/globals_610000.h"

void shims_init_mmsystem(void) {
    g_joyGetDevCapsAFunc = (decltype(g_joyGetDevCapsAFunc))shim_joyGetDevCapsA;
    g_joyGetPosFunc = (decltype(g_joyGetPosFunc))shim_joyGetPos;
    g_mciGetErrorStringAFunc = (decltype(g_mciGetErrorStringAFunc))shim_mciGetErrorStringA;
    g_mciSendStringAFunc = (decltype(g_mciSendStringAFunc))shim_mciSendStringA;
    g_timeBeginPeriodFunc = (decltype(g_timeBeginPeriodFunc))shim_timeBeginPeriod;
    g_timeEndPeriodFunc = (decltype(g_timeEndPeriodFunc))shim_timeEndPeriod;
    g_timeGetTimeFunc = (decltype(g_timeGetTimeFunc))shim_timeGetTime;
    g_waveInAddBufferFunc = (decltype(g_waveInAddBufferFunc))shim_waveInAddBuffer;
    g_waveInCloseFunc = (decltype(g_waveInCloseFunc))shim_waveInClose;
    g_waveInGetDevCapsAFunc = (decltype(g_waveInGetDevCapsAFunc))shim_waveInGetDevCapsA;
    g_waveInOpenFunc = (decltype(g_waveInOpenFunc))shim_waveInOpen;
    g_waveInPrepareHeaderFunc = (decltype(g_waveInPrepareHeaderFunc))shim_waveInPrepareHeader;
    g_waveInResetFunc = (decltype(g_waveInResetFunc))shim_waveInReset;
    g_waveInStartFunc = (decltype(g_waveInStartFunc))shim_waveInStart;
    g_waveInUnprepareHeaderFunc = (decltype(g_waveInUnprepareHeaderFunc))shim_waveInUnprepareHeader;
    g_waveOutCloseFunc = (decltype(g_waveOutCloseFunc))shim_waveOutClose;
    g_waveOutGetDevCapsAFunc = (decltype(g_waveOutGetDevCapsAFunc))shim_waveOutGetDevCapsA;
    g_waveOutOpenFunc = (decltype(g_waveOutOpenFunc))shim_waveOutOpen;
    g_waveOutPrepareHeaderFunc = (decltype(g_waveOutPrepareHeaderFunc))shim_waveOutPrepareHeader;
    g_waveOutResetFunc = (decltype(g_waveOutResetFunc))shim_waveOutReset;
    g_waveOutUnprepareHeaderFunc = (decltype(g_waveOutUnprepareHeaderFunc))shim_waveOutUnprepareHeader;
    g_waveOutWriteFunc = (decltype(g_waveOutWriteFunc))shim_waveOutWrite;
}
