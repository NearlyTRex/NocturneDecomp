; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_killAllSfx_FUN_005510d0(void)
;
;
; XREF[2]:
;   sound_sndmain.cpp_freeAllSamples_FUN_00551c70 at 00551c7c
;   sound_sndmain.cpp_resetSoundDevice_FUN_005526b0 at 005526b0
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;   sound_sndmain.cpp_unlockSound_FUN_00551440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005510d0
        ;   Label: sound_sndmain.cpp_killAllSfx_FUN_005510d0
    PUSH ESI                            ; 005510d1
    MOV EBX,0x263cf1c                   ; 005510d2
    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 005510d7
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
    LEA ESI,[EBX + 0x4700]              ; 005510dc
    PUSH EBX                            ; 005510e2
        ;   Label: LAB_005510e2
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700 ; 005510e3
        ;   XREF to: 0054f700 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot * this_ptr)
    ADD EBX,0x11c                       ; 005510e8
    ADD ESP,0x4                         ; 005510ee
    CMP EBX,ESI                         ; 005510f1
    JNZ 0x005510e2                      ; 005510f3
        ;   XREF to: 005510e2 (CONDITIONAL_JUMP)  ; LAB_005510e2
    CALL sound_sndmain.cpp_unlockSound_FUN_00551440 ; 005510f5
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00551440()
    POP ESI                             ; 005510fa
    POP EBX                             ; 005510fb
    RET                                 ; 005510fc

