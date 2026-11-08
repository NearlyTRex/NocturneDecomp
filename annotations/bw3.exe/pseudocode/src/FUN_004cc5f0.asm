; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cc5f0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e0cc0
;
; Called Functions:
;   FUN_00408770
;   FUN_004f3fe0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc5f0
        ;   Label: FUN_004cc5f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cc5f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004cc5f5
    JNZ 0x004cc62d                      ; 004cc5fa
        ;   XREF to: 004cc62d (CONDITIONAL_JUMP)  ; LAB_004cc62d
    PUSH 0x0                            ; 004cc5fc
    ADD EBX,0x21c                       ; 004cc5fe
    PUSH EBX                            ; 004cc604
    CALL FUN_004f3fe0                   ; 004cc605
        ;   XREF to: 004f3fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3fe0()
    ADD ESP,0x8                         ; 004cc60a
    PUSH 0x1                            ; 004cc60d
    LEA EBX,[EAX + 0xfffffde4]          ; 004cc60f
    PUSH EBX                            ; 004cc615
    CALL FUN_00408770                   ; 004cc616
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004cc61b
    MOV DL,byte ptr [ESP + 0xc]         ; 004cc61e
    MOV EBX,EAX                         ; 004cc622
    TEST DL,0x2                         ; 004cc624
    JNZ 0x004cc648                      ; 004cc627
        ;   XREF to: 004cc648 (CONDITIONAL_JUMP)  ; LAB_004cc648
    MOV EAX,EBX                         ; 004cc629
    POP EBX                             ; 004cc62b
    RET                                 ; 004cc62c
    PUSH 0x5e0cc0                       ; 004cc62d | DAT_005e0cc0
        ;   Label: LAB_004cc62d
    PUSH EBX                            ; 004cc632
    CALL FUN_005a308f                   ; 004cc633
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004cc638
    PUSH EAX                            ; 004cc63b
    CALL FUN_005a30b6                   ; 004cc63c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004cc641
    MOV EAX,EBX                         ; 004cc644
    POP EBX                             ; 004cc646
    RET                                 ; 004cc647
    PUSH EAX                            ; 004cc648
        ;   Label: LAB_004cc648
    CALL FUN_005a30c4                   ; 004cc649
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004cc64e
    MOV EAX,EBX                         ; 004cc651
    POP EBX                             ; 004cc653
    RET                                 ; 004cc654

