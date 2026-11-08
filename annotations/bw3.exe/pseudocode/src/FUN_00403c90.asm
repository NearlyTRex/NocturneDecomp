; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00403c90(int param_1)
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
;   FUN_004039d0
;   FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403c90
        ;   Label: FUN_00403c90
    PUSH ESI                            ; 00403c91
    PUSH EBP                            ; 00403c92
    MOV EBX,dword ptr [ESP + 0x10]      ; 00403c93
    LEA ESI,[EBX + 0x18]                ; 00403c97
    LEA EAX,[EBX + 0x8]                 ; 00403c9a
    PUSH EAX                            ; 00403c9d
    CALL FUN_00403920                   ; 00403c9e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00403ca3
    TEST EAX,EAX                        ; 00403ca6
    JZ 0x00403cf1                       ; 00403ca8
        ;   XREF to: 00403cf1 (CONDITIONAL_JUMP)  ; LAB_00403cf1
    CMP dword ptr [0x01c6e2a0],0x0      ; 00403caa | DAT_01c6e2a0
    JNZ 0x00403d0c                      ; 00403cb1
        ;   XREF to: 00403d0c (CONDITIONAL_JUMP)  ; LAB_00403d0c
    CMP dword ptr [0x005fba20],0x20     ; 00403cb3 | DAT_005fba20
    JNZ 0x00403d00                      ; 00403cba
        ;   XREF to: 00403d00 (CONDITIONAL_JUMP)  ; LAB_00403d00
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00403cbc | DAT_01c6b5cc
    PUSH EDI                            ; 00403cc6
        ;   Label: LAB_00403cc6
    MOV EDI,0x1                         ; 00403cc7
    PUSH EBX                            ; 00403ccc
    XOR EBP,EBP                         ; 00403ccd
    MOV dword ptr [0x01c6e2b4],EDI      ; 00403ccf | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00403cd5 | DAT_01c6e2b8
    CALL FUN_004039d0                   ; 00403cdb
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004039d0()
    ADD ESP,0x4                         ; 00403ce0
    PUSH ESI                            ; 00403ce3
    MOV EAX,dword ptr [EBX + 0x4]       ; 00403ce4
    PUSH EAX                            ; 00403ce7
    CALL FUN_0043a840                   ; 00403ce8
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0043a840()
    ADD ESP,0x8                         ; 00403ced
    POP EDI                             ; 00403cf0
    MOV EAX,dword ptr [EBX + 0x4]       ; 00403cf1
        ;   Label: LAB_00403cf1
    ADD EBX,0x18                        ; 00403cf4
    SHL EAX,0x2                         ; 00403cf7
    ADD EAX,EBX                         ; 00403cfa
    POP EBP                             ; 00403cfc
    POP ESI                             ; 00403cfd
    POP EBX                             ; 00403cfe
    RET                                 ; 00403cff
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00403d00 | DAT_01c6b5cc
        ;   Label: LAB_00403d00
    JMP 0x00403cc6                      ; 00403d0a
        ;   XREF to: 00403cc6 (UNCONDITIONAL_JUMP)  ; LAB_00403cc6
    CMP dword ptr [0x005fba20],0x20     ; 00403d0c | DAT_005fba20
        ;   Label: LAB_00403d0c
    JNZ 0x00403d21                      ; 00403d13
        ;   XREF to: 00403d21 (CONDITIONAL_JUMP)  ; LAB_00403d21
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00403d15 | DAT_01c6b5cc | LAB_00560f31
    JMP 0x00403cc6                      ; 00403d1f
        ;   XREF to: 00403cc6 (UNCONDITIONAL_JUMP)  ; LAB_00403cc6
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00403d21 | DAT_01c6b5cc | LAB_00561713
        ;   Label: LAB_00403d21
    JMP 0x00403cc6                      ; 00403d2b
        ;   XREF to: 00403cc6 (UNCONDITIONAL_JUMP)  ; LAB_00403cc6

