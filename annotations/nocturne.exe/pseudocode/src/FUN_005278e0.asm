; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005278e0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00527950 at 005279a4
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570
;   sound_sndmain.cpp_lockSound_FUN_00528800
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005278e0
        ;   Label: FUN_005278e0
    PUSH ESI                            ; 005278e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005278e2
    CALL sound_sndmain.cpp_lockSound_FUN_00528800 ; 005278e6
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_lockSound_FUN_00528800()
    XOR EBX,EBX                         ; 005278eb
    MOV EAX,dword ptr [EBX + 0x2dbd3e8] ; 005278ed
        ;   Label: LAB_005278ed
    TEST EAX,EAX                        ; 005278f3
    JNZ 0x0052790d                      ; 005278f5
        ;   XREF to: 0052790d (CONDITIONAL_JUMP)  ; LAB_0052790d
    ADD EBX,0x120                       ; 005278f7
        ;   Label: LAB_005278f7
    CMP EBX,0x4800                      ; 005278fd
    JNZ 0x005278ed                      ; 00527903
        ;   XREF to: 005278ed (CONDITIONAL_JUMP)  ; LAB_005278ed
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00527905
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_unlockSound_FUN_00528890()
    POP ESI                             ; 0052790a
    POP EBX                             ; 0052790b
    RET                                 ; 0052790c
    PUSH ESI                            ; 0052790d
        ;   Label: LAB_0052790d
    PUSH EAX                            ; 0052790e
    CALL crt_string.c__stricmp_FUN_00564520 ; 0052790f
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 00527914
    TEST EAX,EAX                        ; 00527917
    JNZ 0x005278f7                      ; 00527919
        ;   XREF to: 005278f7 (CONDITIONAL_JUMP)  ; LAB_005278f7
    MOV EAX,0x2dbd374                   ; 0052791b
    ADD EAX,EBX                         ; 00527920
    PUSH EAX                            ; 00527922
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570 ; 00527923
        ;   XREF to: 00525570 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570()
    ADD ESP,0x4                         ; 00527928
    JMP 0x005278f7                      ; 0052792b
        ;   XREF to: 005278f7 (UNCONDITIONAL_JUMP)  ; LAB_005278f7

