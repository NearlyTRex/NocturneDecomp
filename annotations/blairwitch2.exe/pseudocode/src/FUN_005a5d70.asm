; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a5d70(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ffc60
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

    PUSH EBX                            ; 005a5d70
        ;   Label: FUN_005a5d70
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a5d71
    TEST byte ptr [ESP + 0xc],0x4       ; 005a5d75
    JNZ 0x005a5ddd                      ; 005a5d7a
        ;   XREF to: 005a5ddd (CONDITIONAL_JUMP)  ; LAB_005a5ddd
    PUSH 0x0                            ; 005a5d7c
    ADD EBX,0x3a20                      ; 005a5d7e
    PUSH EBX                            ; 005a5d84
    CALL FUN_0040f2b0                   ; 005a5d85
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a5d8a
    PUSH 0x0                            ; 005a5d8d
    SUB EAX,0x9c8                       ; 005a5d8f
    PUSH EAX                            ; 005a5d94
    CALL FUN_0059df70                   ; 005a5d95
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 005a5d9a
    PUSH 0x0                            ; 005a5d9d
    SUB EAX,0x34c                       ; 005a5d9f
    PUSH EAX                            ; 005a5da4
    CALL FUN_005b1480                   ; 005a5da5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 005a5daa
    PUSH 0x0                            ; 005a5dad
    SUB EAX,0x2a58                      ; 005a5daf
    PUSH EAX                            ; 005a5db4
    CALL FUN_00544d50                   ; 005a5db5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 005a5dba
    PUSH 0x1                            ; 005a5dbd
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a5dbf
    PUSH EBX                            ; 005a5dc5
    CALL FUN_00408930                   ; 005a5dc6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 005a5dcb
    MOV DL,byte ptr [ESP + 0xc]         ; 005a5dce
    MOV EBX,EAX                         ; 005a5dd2
    TEST DL,0x2                         ; 005a5dd4
    JNZ 0x005a5df8                      ; 005a5dd7
        ;   XREF to: 005a5df8 (CONDITIONAL_JUMP)  ; LAB_005a5df8
    MOV EAX,EBX                         ; 005a5dd9
    POP EBX                             ; 005a5ddb
    RET                                 ; 005a5ddc
    PUSH 0x5ffc60                       ; 005a5ddd | DAT_005ffc60
        ;   Label: LAB_005a5ddd
    PUSH EBX                            ; 005a5de2
    CALL FUN_005b7fa7                   ; 005a5de3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a5de8
    PUSH EAX                            ; 005a5deb
    CALL FUN_005b7fce                   ; 005a5dec
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005a5df1
    MOV EAX,EBX                         ; 005a5df4
    POP EBX                             ; 005a5df6
    RET                                 ; 005a5df7
    PUSH EAX                            ; 005a5df8
        ;   Label: LAB_005a5df8
    CALL FUN_005b7fdc                   ; 005a5df9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a5dfe
    MOV EAX,EBX                         ; 005a5e01
    POP EBX                             ; 005a5e03
    RET                                 ; 005a5e04

