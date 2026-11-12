; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_00552470(void)
;
;
; XREF[1]:
;   core_sound.cpp_shutdownSoundSystem_FUN_0055a160 at 0055a160
;
; Referenced Globals:
;   undefined4 DAT_0263ceec
;
; Called Functions:
;   sound_sndmain.cpp_closeSoundDevice_FUN_00552c40
;   sound_sndmain.cpp_freeAllSamples_FUN_00551c70
;   sound_sndmain.cpp_releaseRecordingDevice_FUN_00552f10
;   sound_sndmain.cpp_resetSoundDevice_FUN_005526b0
;   sound_sndmain.cpp_stopRecordingDevice_FUN_00553140
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0263ceec]      ; 00552470 | DAT_0263ceec
        ;   Label: sound_sndmain.cpp_shutdownSoundSystem_FUN_00552470
    TEST EDX,EDX                        ; 00552476
    JLE 0x0055247b                      ; 00552478
        ;   XREF to: 0055247b (CONDITIONAL_JUMP)  ; LAB_0055247b
    RET                                 ; 0055247a
    LEA ECX,[EDX + 0x1]                 ; 0055247b
        ;   Label: LAB_0055247b
    MOV dword ptr [0x0263ceec],ECX      ; 0055247e | DAT_0263ceec
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005526b0 ; 00552484
        ;   XREF to: 005526b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005526b0()
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_00552c40 ; 00552489
        ;   XREF to: 00552c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_00552c40()
    CALL sound_sndmain.cpp_stopRecordingDevice_FUN_00553140 ; 0055248e
        ;   XREF to: 00553140 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_stopRecordingDevice_FUN_00553140()
    CALL sound_sndmain.cpp_releaseRecordingDevice_FUN_00552f10 ; 00552493
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_releaseRecordingDevice_FUN_00552f10()
    CALL sound_sndmain.cpp_freeAllSamples_FUN_00551c70 ; 00552498
        ;   XREF to: 00551c70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_freeAllSamples_FUN_00551c70()
    DEC dword ptr [0x0263ceec]          ; 0055249d | DAT_0263ceec
    RET                                 ; 005524a3

