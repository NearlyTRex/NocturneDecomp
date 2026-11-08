; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00599d70(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe490
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

    PUSH EBX                            ; 00599d70
        ;   Label: FUN_00599d70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00599d71
    TEST byte ptr [ESP + 0xc],0x4       ; 00599d75
    JNZ 0x00599ddd                      ; 00599d7a
        ;   XREF to: 00599ddd (CONDITIONAL_JUMP)  ; LAB_00599ddd
    PUSH 0x0                            ; 00599d7c
    ADD EBX,0x3a20                      ; 00599d7e
    PUSH EBX                            ; 00599d84
    CALL FUN_0040f2b0                   ; 00599d85
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 00599d8a
    PUSH 0x0                            ; 00599d8d
    SUB EAX,0x9c8                       ; 00599d8f
    PUSH EAX                            ; 00599d94
    CALL FUN_0059df70                   ; 00599d95
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 00599d9a
    PUSH 0x0                            ; 00599d9d
    SUB EAX,0x34c                       ; 00599d9f
    PUSH EAX                            ; 00599da4
    CALL FUN_005b1480                   ; 00599da5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 00599daa
    PUSH 0x0                            ; 00599dad
    SUB EAX,0x2a58                      ; 00599daf
    PUSH EAX                            ; 00599db4
    CALL FUN_00544d50                   ; 00599db5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 00599dba
    PUSH 0x1                            ; 00599dbd
    LEA EBX,[EAX + 0xfffffd4c]          ; 00599dbf
    PUSH EBX                            ; 00599dc5
    CALL FUN_00408930                   ; 00599dc6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 00599dcb
    MOV DL,byte ptr [ESP + 0xc]         ; 00599dce
    MOV EBX,EAX                         ; 00599dd2
    TEST DL,0x2                         ; 00599dd4
    JNZ 0x00599df8                      ; 00599dd7
        ;   XREF to: 00599df8 (CONDITIONAL_JUMP)  ; LAB_00599df8
    MOV EAX,EBX                         ; 00599dd9
    POP EBX                             ; 00599ddb
    RET                                 ; 00599ddc
    PUSH 0x5fe490                       ; 00599ddd | DAT_005fe490
        ;   Label: LAB_00599ddd
    PUSH EBX                            ; 00599de2
    CALL FUN_005b7fa7                   ; 00599de3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00599de8
    PUSH EAX                            ; 00599deb
    CALL FUN_005b7fce                   ; 00599dec
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00599df1
    MOV EAX,EBX                         ; 00599df4
    POP EBX                             ; 00599df6
    RET                                 ; 00599df7
    PUSH EAX                            ; 00599df8
        ;   Label: LAB_00599df8
    CALL FUN_005b7fdc                   ; 00599df9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00599dfe
    MOV EAX,EBX                         ; 00599e01
    POP EBX                             ; 00599e03
    RET                                 ; 00599e04

