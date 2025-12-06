; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0(void)
;
;
; XREF[1]:
;   core_sound.cpp_CSound_dtor_FUN_005aaeb0 at 005b2d60
;
; Referenced Globals:
;   int g_ShutdownInProgress
;
; Called Functions:
;   sound_sndmain.cpp_closeSoundDevice_FUN_005ab660
;   sound_sndmain.cpp_freeAllSamples_FUN_005aa660
;   sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930
;   sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
;   sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x03f5d87c]      ; 005aaeb0 | int g_ShutdownInProgress
        ;   Label: sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0
    TEST EDX,EDX                        ; 005aaeb6
    JLE 0x005aaebb                      ; 005aaeb8 | LAB_005aaebb
        ;   XREF to: 005aaebb (CONDITIONAL_JUMP)
    RET                                 ; 005aaeba
    LEA ECX,[EDX + 0x1]                 ; 005aaebb
        ;   Label: LAB_005aaebb
    MOV dword ptr [0x03f5d87c],ECX      ; 005aaebe | int g_ShutdownInProgress
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 005aaec4 | int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_005ab660 ; 005aaec9 | int sound_sndmain.cpp_closeSoundDevice_FUN_005ab660()
        ;   XREF to: 005ab660 (UNCONDITIONAL_CALL)
    CALL sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60 ; 005aaece | int sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60()
        ;   XREF to: 005abb60 (UNCONDITIONAL_CALL)
    CALL sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930 ; 005aaed3 | int sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930()
        ;   XREF to: 005ab930 (UNCONDITIONAL_CALL)
    CALL sound_sndmain.cpp_freeAllSamples_FUN_005aa660 ; 005aaed8 | void sound_sndmain.cpp_freeAllSamples_FUN_005aa660()
        ;   XREF to: 005aa660 (UNCONDITIONAL_CALL)
    DEC dword ptr [0x03f5d87c]          ; 005aaedd | int g_ShutdownInProgress
    RET                                 ; 005aaee3

