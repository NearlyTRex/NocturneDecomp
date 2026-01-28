; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_005aaeb0(void)
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

    MOV EDX,dword ptr [0x03f5d87c]      ; 005aaeb0 | g_ShutdownInProgress
        ;   Label: sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0
    TEST EDX,EDX                        ; 005aaeb6
    JLE 0x005aaebb                      ; 005aaeb8
        ;   XREF to: 005aaebb (CONDITIONAL_JUMP)  ; LAB_005aaebb
    RET                                 ; 005aaeba
    LEA ECX,[EDX + 0x1]                 ; 005aaebb
        ;   Label: LAB_005aaebb
    MOV dword ptr [0x03f5d87c],ECX      ; 005aaebe | g_ShutdownInProgress
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 005aaec4
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_005ab660 ; 005aaec9
        ;   XREF to: 005ab660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_005ab660()
    CALL sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60 ; 005aaece
        ;   XREF to: 005abb60 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60()
    CALL sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930 ; 005aaed3
        ;   XREF to: 005ab930 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930()
    CALL sound_sndmain.cpp_freeAllSamples_FUN_005aa660 ; 005aaed8
        ;   XREF to: 005aa660 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_freeAllSamples_FUN_005aa660()
    DEC dword ptr [0x03f5d87c]          ; 005aaedd | g_ShutdownInProgress
    RET                                 ; 005aaee3

