; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_killAllSfx_FUN_00573b00(void)
;
;
; XREF[5]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_load_FUN_00415fc0 at 00416527
;   core_game.cpp_FUN_004d9260 at 004d973f
;   core_mission.cpp_FUN_0051b610 at 0051b697
;   sound_sndmain.cpp_freeAllSamples_FUN_005746a0 at 005746ac
;   sound_sndmain.cpp_resetSoundDevice_FUN_005750e0 at 005750e0
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70
;   sound_sndmain.cpp_FUN_00573e70
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573b00
        ;   Label: sound_sndmain.cpp_killAllSfx_FUN_00573b00
    PUSH ESI                            ; 00573b01
    MOV EBX,0x2c745ec                   ; 00573b02
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00573b07
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    LEA ESI,[EBX + 0x4700]              ; 00573b0c
    PUSH EBX                            ; 00573b12
        ;   Label: LAB_00573b12
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70 ; 00573b13
        ;   XREF to: 00571d70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70(CSfxSlot * this_ptr)
    ADD EBX,0x11c                       ; 00573b18
    ADD ESP,0x4                         ; 00573b1e
    CMP EBX,ESI                         ; 00573b21
    JNZ 0x00573b12                      ; 00573b23
        ;   XREF to: 00573b12 (CONDITIONAL_JUMP)  ; LAB_00573b12
    CALL sound_sndmain.cpp_FUN_00573e70 ; 00573b25
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
    POP ESI                             ; 00573b2a
    POP EBX                             ; 00573b2b
    RET                                 ; 00573b2c

