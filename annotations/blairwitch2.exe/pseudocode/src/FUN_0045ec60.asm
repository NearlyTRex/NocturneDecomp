; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0045ec60(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f54a0
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

    PUSH EBX                            ; 0045ec60
        ;   Label: FUN_0045ec60
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045ec61
    TEST byte ptr [ESP + 0xc],0x4       ; 0045ec65
    JNZ 0x0045eccd                      ; 0045ec6a
        ;   XREF to: 0045eccd (CONDITIONAL_JUMP)  ; LAB_0045eccd
    PUSH 0x0                            ; 0045ec6c
    ADD EBX,0x3a20                      ; 0045ec6e
    PUSH EBX                            ; 0045ec74
    CALL FUN_0040f2b0                   ; 0045ec75
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 0045ec7a
    PUSH 0x0                            ; 0045ec7d
    SUB EAX,0x9c8                       ; 0045ec7f
    PUSH EAX                            ; 0045ec84
    CALL FUN_0059df70                   ; 0045ec85
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 0045ec8a
    PUSH 0x0                            ; 0045ec8d
    SUB EAX,0x34c                       ; 0045ec8f
    PUSH EAX                            ; 0045ec94
    CALL FUN_005b1480                   ; 0045ec95
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 0045ec9a
    PUSH 0x0                            ; 0045ec9d
    SUB EAX,0x2a58                      ; 0045ec9f
    PUSH EAX                            ; 0045eca4
    CALL FUN_00544d50                   ; 0045eca5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 0045ecaa
    PUSH 0x1                            ; 0045ecad
    LEA EBX,[EAX + 0xfffffd4c]          ; 0045ecaf
    PUSH EBX                            ; 0045ecb5
    CALL FUN_00408930                   ; 0045ecb6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0045ecbb
    MOV DL,byte ptr [ESP + 0xc]         ; 0045ecbe
    MOV EBX,EAX                         ; 0045ecc2
    TEST DL,0x2                         ; 0045ecc4
    JNZ 0x0045ece8                      ; 0045ecc7
        ;   XREF to: 0045ece8 (CONDITIONAL_JUMP)  ; LAB_0045ece8
    MOV EAX,EBX                         ; 0045ecc9
    POP EBX                             ; 0045eccb
    RET                                 ; 0045eccc
    PUSH 0x5f54a0                       ; 0045eccd | DAT_005f54a0
        ;   Label: LAB_0045eccd
    PUSH EBX                            ; 0045ecd2
    CALL FUN_005b7fa7                   ; 0045ecd3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0045ecd8
    PUSH EAX                            ; 0045ecdb
    CALL FUN_005b7fce                   ; 0045ecdc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0045ece1
    MOV EAX,EBX                         ; 0045ece4
    POP EBX                             ; 0045ece6
    RET                                 ; 0045ece7
    PUSH EAX                            ; 0045ece8
        ;   Label: LAB_0045ece8
    CALL FUN_005b7fdc                   ; 0045ece9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0045ecee
    MOV EAX,EBX                         ; 0045ecf1
    POP EBX                             ; 0045ecf3
    RET                                 ; 0045ecf4

