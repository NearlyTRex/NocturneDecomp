; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00404070(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   FUN_00403920
;   FUN_00406bf0
;   FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404070
        ;   Label: FUN_00404070
    PUSH ESI                            ; 00404071
    PUSH EBP                            ; 00404072
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404073
    LEA ESI,[EBX + 0x18]                ; 00404077
    LEA EAX,[EBX + 0x8]                 ; 0040407a
    PUSH EAX                            ; 0040407d
    CALL FUN_00403920                   ; 0040407e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00404083
    TEST EAX,EAX                        ; 00404086
    JZ 0x004040d5                       ; 00404088
        ;   XREF to: 004040d5 (CONDITIONAL_JUMP)  ; LAB_004040d5
    CMP dword ptr [0x01c6e2a0],0x0      ; 0040408a | DAT_01c6e2a0
    JNZ 0x004040f0                      ; 00404091
        ;   XREF to: 004040f0 (CONDITIONAL_JUMP)  ; LAB_004040f0
    CMP dword ptr [0x005fba20],0x20     ; 00404093 | DAT_005fba20
    JNZ 0x004040e4                      ; 0040409a
        ;   XREF to: 004040e4 (CONDITIONAL_JUMP)  ; LAB_004040e4
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 0040409c | DAT_01c6b5cc
    PUSH EDI                            ; 004040a6
        ;   Label: LAB_004040a6
    MOV EDI,0x3                         ; 004040a7
    PUSH 0xffff                         ; 004040ac
    MOV dword ptr [0x01c6e2b4],EDI      ; 004040b1 | DAT_01c6e2b4
    CALL FUN_00406bf0                   ; 004040b7
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bf0()
    ADD ESP,0x4                         ; 004040bc
    PUSH ESI                            ; 004040bf
    MOV EAX,dword ptr [EBX + 0x4]       ; 004040c0
    XOR EBP,EBP                         ; 004040c3
    PUSH EAX                            ; 004040c5
    MOV dword ptr [0x01c6e2b8],EBP      ; 004040c6 | DAT_01c6e2b8
    CALL FUN_0043a840                   ; 004040cc
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0043a840()
    ADD ESP,0x8                         ; 004040d1
    POP EDI                             ; 004040d4
    MOV EAX,dword ptr [EBX + 0x4]       ; 004040d5
        ;   Label: LAB_004040d5
    ADD EBX,0x18                        ; 004040d8
    SHL EAX,0x2                         ; 004040db
    ADD EAX,EBX                         ; 004040de
    POP EBP                             ; 004040e0
    POP ESI                             ; 004040e1
    POP EBX                             ; 004040e2
    RET                                 ; 004040e3
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 004040e4 | DAT_01c6b5cc
        ;   Label: LAB_004040e4
    JMP 0x004040a6                      ; 004040ee
        ;   XREF to: 004040a6 (UNCONDITIONAL_JUMP)  ; LAB_004040a6
    CMP dword ptr [0x005fba20],0x20     ; 004040f0 | DAT_005fba20
        ;   Label: LAB_004040f0
    JNZ 0x00404105                      ; 004040f7
        ;   XREF to: 00404105 (CONDITIONAL_JUMP)  ; LAB_00404105
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 004040f9 | DAT_01c6b5cc | LAB_00560f31
    JMP 0x004040a6                      ; 00404103
        ;   XREF to: 004040a6 (UNCONDITIONAL_JUMP)  ; LAB_004040a6
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00404105 | DAT_01c6b5cc | LAB_00561713
        ;   Label: LAB_00404105
    JMP 0x004040a6                      ; 0040410f
        ;   XREF to: 004040a6 (UNCONDITIONAL_JUMP)  ; LAB_004040a6

