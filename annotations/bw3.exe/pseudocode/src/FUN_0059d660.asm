; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0059d660(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e8310
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

    PUSH EBX                            ; 0059d660
        ;   Label: FUN_0059d660
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059d661
    TEST byte ptr [ESP + 0xc],0x4       ; 0059d665
    JNZ 0x0059d6bd                      ; 0059d66a
        ;   XREF to: 0059d6bd (CONDITIONAL_JUMP)  ; LAB_0059d6bd
    PUSH 0x0                            ; 0059d66c
    ADD EBX,0x385c                      ; 0059d66e
    PUSH EBX                            ; 0059d674
    CALL FUN_00410370                   ; 0059d675
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0059d67a
    PUSH 0x0                            ; 0059d67d
    SUB EAX,0x954                       ; 0059d67f
    PUSH EAX                            ; 0059d684
    CALL FUN_0043f900                   ; 0059d685
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0059d68a
    PUSH 0x0                            ; 0059d68d
    SUB EAX,0x2db0                      ; 0059d68f
    PUSH EAX                            ; 0059d694
    CALL FUN_0054bf80                   ; 0059d695
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0059d69a
    PUSH 0x1                            ; 0059d69d
    LEA EBX,[EAX + 0xfffffea8]          ; 0059d69f
    PUSH EBX                            ; 0059d6a5
    CALL FUN_00408770                   ; 0059d6a6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0059d6ab
    MOV DL,byte ptr [ESP + 0xc]         ; 0059d6ae
    MOV EBX,EAX                         ; 0059d6b2
    TEST DL,0x2                         ; 0059d6b4
    JNZ 0x0059d6d8                      ; 0059d6b7
        ;   XREF to: 0059d6d8 (CONDITIONAL_JUMP)  ; LAB_0059d6d8
    MOV EAX,EBX                         ; 0059d6b9
    POP EBX                             ; 0059d6bb
    RET                                 ; 0059d6bc
    PUSH 0x5e8310                       ; 0059d6bd | DAT_005e8310
        ;   Label: LAB_0059d6bd
    PUSH EBX                            ; 0059d6c2
    CALL FUN_005a308f                   ; 0059d6c3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0059d6c8
    PUSH EAX                            ; 0059d6cb
    CALL FUN_005a30b6                   ; 0059d6cc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0059d6d1
    MOV EAX,EBX                         ; 0059d6d4
    POP EBX                             ; 0059d6d6
    RET                                 ; 0059d6d7
    PUSH EAX                            ; 0059d6d8
        ;   Label: LAB_0059d6d8
    CALL FUN_005a30c4                   ; 0059d6d9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0059d6de
    MOV EAX,EBX                         ; 0059d6e1
    POP EBX                             ; 0059d6e3
    RET                                 ; 0059d6e4

