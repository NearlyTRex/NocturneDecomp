; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_00590650(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005eeb05
;   undefined4 DAT_01c2a370
;
; Called Functions:
;   wincore_winrun.cpp_FUN_005902a0
;   wincore_winrun.cpp_FUN_005907e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00590650
        ;   Label: wincore_winrun.cpp_FUN_00590650
    XOR EBX,EBX                         ; 00590651
    PUSH EBX                            ; 00590653
        ;   Label: LAB_00590653
    CALL wincore_winrun.cpp_FUN_005902a0 ; 00590654
        ;   XREF to: 005902a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005902a0()
    INC EBX                             ; 00590659
    ADD ESP,0x4                         ; 0059065a
    CMP EBX,0x4                         ; 0059065d
    JL 0x00590653                       ; 00590660
        ;   XREF to: 00590653 (CONDITIONAL_JUMP)  ; LAB_00590653
    FILD dword ptr [0x01c2a370]         ; 00590662 | DAT_01c2a370
    FMUL float ptr [0x005eeb05]         ; 00590668 | DAT_005eeb05
    SUB ESP,0x4                         ; 0059066e
    FSTP float ptr [ESP]                ; 00590671
    CALL wincore_winrun.cpp_FUN_005907e0 ; 00590674
        ;   XREF to: 005907e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005907e0()
    ADD ESP,0x4                         ; 00590679
    POP EBX                             ; 0059067c
    RET                                 ; 0059067d

