; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_00527c30(void)
;
;
; XREF[2]:
;   FUN_00527e10 at 00527e29
;   core_sound.cpp_CSound_reset_FUN_0052e9c0 at 0052e9c5
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60
;   sound_sndmain.cpp_killAllSfx_FUN_005272b0
;   sound_sndmain.cpp_lockSound_FUN_00528800
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527c30
        ;   Label: sound_sndmain.cpp_freeAllSamples_FUN_00527c30
    PUSH ESI                            ; 00527c31
    CALL sound_sndmain.cpp_lockSound_FUN_00528800 ; 00527c32
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_lockSound_FUN_00528800()
    MOV EBX,0x2dc1edc                   ; 00527c37
    CALL sound_sndmain.cpp_killAllSfx_FUN_005272b0 ; 00527c3c
        ;   XREF to: 005272b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killAllSfx_FUN_005272b0()
    LEA ESI,[EBX + 0x5a00]              ; 00527c41
    PUSH EBX                            ; 00527c47
        ;   Label: LAB_00527c47
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60 ; 00527c48
        ;   XREF to: 00523a60 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60()
    ADD EBX,0x168                       ; 00527c4d
    ADD ESP,0x4                         ; 00527c53
    CMP EBX,ESI                         ; 00527c56
    JNZ 0x00527c47                      ; 00527c58
        ;   XREF to: 00527c47 (CONDITIONAL_JUMP)  ; LAB_00527c47
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00527c5a
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_unlockSound_FUN_00528890()
    POP ESI                             ; 00527c5f
    POP EBX                             ; 00527c60
    RET                                 ; 00527c61

