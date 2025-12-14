; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530(void)
;
;
; XREF[5]:
;   sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550 at 005ab550
;   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 at 005aaef4
;   sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0 at 005ab5a0
;   sound_sndmain.cpp_isSoundBusy_FUN_005ab540 at 005ab540
;   sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0 at 005ab4c5
;
; Referenced Globals:
;   CSoundDevice* g_CSoundDevicePtr
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f69268],0x0      ; 005ab530 | g_CSoundDevicePtr
        ;   Label: sound_sndmain.cpp_isSoundSystemActive_FUN_005ab530
    SETNZ AL                            ; 005ab537
    AND EAX,0xff                        ; 005ab53a
    RET                                 ; 005ab53f

