; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d64f0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e1e70
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d64f0
        ;   Label: FUN_004d64f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d64f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d64f5
    JNZ 0x004d654d                      ; 004d64fa
        ;   XREF to: 004d654d (CONDITIONAL_JUMP)  ; LAB_004d654d
    PUSH 0x0                            ; 004d64fc
    ADD EBX,0x385c                      ; 004d64fe
    PUSH EBX                            ; 004d6504
    CALL FUN_00410370                   ; 004d6505
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 004d650a
    PUSH 0x0                            ; 004d650d
    SUB EAX,0x954                       ; 004d650f
    PUSH EAX                            ; 004d6514
    CALL FUN_0043f900                   ; 004d6515
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 004d651a
    PUSH 0x0                            ; 004d651d
    SUB EAX,0x2db0                      ; 004d651f
    PUSH EAX                            ; 004d6524
    CALL FUN_0054bf80                   ; 004d6525
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 004d652a
    PUSH 0x1                            ; 004d652d
    LEA EBX,[EAX + 0xfffffea8]          ; 004d652f
    PUSH EBX                            ; 004d6535
    CALL FUN_00408770                   ; 004d6536
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004d653b
    MOV DL,byte ptr [ESP + 0xc]         ; 004d653e
    MOV EBX,EAX                         ; 004d6542
    TEST DL,0x2                         ; 004d6544
    JNZ 0x004d6568                      ; 004d6547
        ;   XREF to: 004d6568 (CONDITIONAL_JUMP)  ; LAB_004d6568
    MOV EAX,EBX                         ; 004d6549
    POP EBX                             ; 004d654b
    RET                                 ; 004d654c
    PUSH 0x5e1e70                       ; 004d654d | DAT_005e1e70
        ;   Label: LAB_004d654d
    PUSH EBX                            ; 004d6552
    CALL FUN_005a308f                   ; 004d6553
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004d6558
    PUSH EAX                            ; 004d655b
    CALL FUN_005a30b6                   ; 004d655c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004d6561
    MOV EAX,EBX                         ; 004d6564
    POP EBX                             ; 004d6566
    RET                                 ; 004d6567
    PUSH EAX                            ; 004d6568
        ;   Label: LAB_004d6568
    CALL FUN_005a30c4                   ; 004d6569
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004d656e
    MOV EAX,EBX                         ; 004d6571
    POP EBX                             ; 004d6573
    RET                                 ; 004d6574

