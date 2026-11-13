; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_00551c70(void)
;
;
; XREF[2]:
;   core_sound.cpp_CSound_reset_FUN_0055adb0 at 0055adb5
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_00552470 at 00552498
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0
;   sound_sndmain.cpp_killAllSfx_FUN_005510d0
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;   sound_sndmain.cpp_unlockSound_FUN_00551440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551c70
        ;   Label: sound_sndmain.cpp_freeAllSamples_FUN_00551c70
    PUSH ESI                            ; 00551c71
    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 00551c72
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
    MOV EBX,0x2641924                   ; 00551c77
    CALL sound_sndmain.cpp_killAllSfx_FUN_005510d0 ; 00551c7c
        ;   XREF to: 005510d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_killAllSfx_FUN_005510d0()
    LEA ESI,[EBX + 0x6b00]              ; 00551c81
    PUSH EBX                            ; 00551c87
        ;   Label: LAB_00551c87
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0 ; 00551c88
        ;   XREF to: 0054d9b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_0054d9b0(CSfxSample * this_ptr)
    ADD EBX,0x1ac                       ; 00551c8d
    ADD ESP,0x4                         ; 00551c93
    CMP EBX,ESI                         ; 00551c96
    JNZ 0x00551c87                      ; 00551c98
        ;   XREF to: 00551c87 (CONDITIONAL_JUMP)  ; LAB_00551c87
    CALL sound_sndmain.cpp_unlockSound_FUN_00551440 ; 00551c9a
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00551440()
    POP ESI                             ; 00551c9f
    POP EBX                             ; 00551ca0
    RET                                 ; 00551ca1

