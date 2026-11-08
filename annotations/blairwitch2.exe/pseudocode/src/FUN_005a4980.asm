; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a4980(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ff8b0
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005b1480
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4980
        ;   Label: FUN_005a4980
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a4981
    TEST byte ptr [ESP + 0xc],0x4       ; 005a4985
    JNZ 0x005a49ed                      ; 005a498a
        ;   XREF to: 005a49ed (CONDITIONAL_JUMP)  ; LAB_005a49ed
    PUSH 0x0                            ; 005a498c
    ADD EBX,0x3a20                      ; 005a498e
    PUSH EBX                            ; 005a4994
    CALL FUN_0040f2b0                   ; 005a4995
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a499a
    PUSH 0x0                            ; 005a499d
    SUB EAX,0x9c8                       ; 005a499f
    PUSH EAX                            ; 005a49a4
    CALL FUN_0059df70                   ; 005a49a5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 005a49aa
    PUSH 0x0                            ; 005a49ad
    SUB EAX,0x34c                       ; 005a49af
    PUSH EAX                            ; 005a49b4
    CALL FUN_005b1480                   ; 005a49b5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 005a49ba
    PUSH 0x0                            ; 005a49bd
    SUB EAX,0x2a58                      ; 005a49bf
    PUSH EAX                            ; 005a49c4
    CALL FUN_00544d50                   ; 005a49c5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 005a49ca
    PUSH 0x1                            ; 005a49cd
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a49cf
    PUSH EBX                            ; 005a49d5
    CALL FUN_00408930                   ; 005a49d6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 005a49db
    MOV DL,byte ptr [ESP + 0xc]         ; 005a49de
    MOV EBX,EAX                         ; 005a49e2
    TEST DL,0x2                         ; 005a49e4
    JNZ 0x005a4a08                      ; 005a49e7
        ;   XREF to: 005a4a08 (CONDITIONAL_JUMP)  ; LAB_005a4a08
    MOV EAX,EBX                         ; 005a49e9
    POP EBX                             ; 005a49eb
    RET                                 ; 005a49ec
    PUSH 0x5ff8b0                       ; 005a49ed | DAT_005ff8b0
        ;   Label: LAB_005a49ed
    PUSH EBX                            ; 005a49f2
    CALL FUN_005b7fa7                   ; 005a49f3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a49f8
    PUSH EAX                            ; 005a49fb
    CALL FUN_005b7fce                   ; 005a49fc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005a4a01
    MOV EAX,EBX                         ; 005a4a04
    POP EBX                             ; 005a4a06
    RET                                 ; 005a4a07
    PUSH EAX                            ; 005a4a08
        ;   Label: LAB_005a4a08
    CALL FUN_005b7fdc                   ; 005a4a09
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a4a0e
    MOV EAX,EBX                         ; 005a4a11
    POP EBX                             ; 005a4a13
    RET                                 ; 005a4a14

