; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00403c90(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   FUN_00403920
;   FUN_004039d0
;   FUN_0043cbf0
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
    CMP dword ptr [0x01c51d00],0x0      ; 00403caa | DAT_01c51d00
    JNZ 0x00403d0c                      ; 00403cb1
        ;   XREF to: 00403d0c (CONDITIONAL_JUMP)  ; LAB_00403d0c
    CMP dword ptr [0x0061b4a0],0x20     ; 00403cb3 | DAT_0061b4a0
    JNZ 0x00403d00                      ; 00403cba
        ;   XREF to: 00403d00 (CONDITIONAL_JUMP)  ; LAB_00403d00
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00403cbc | DAT_01c4f02c
    PUSH EDI                            ; 00403cc6
        ;   Label: LAB_00403cc6
    MOV EDI,0x1                         ; 00403cc7
    PUSH EBX                            ; 00403ccc
    XOR EBP,EBP                         ; 00403ccd
    MOV dword ptr [0x01c51d14],EDI      ; 00403ccf | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 00403cd5 | DAT_01c51d18
    CALL FUN_004039d0                   ; 00403cdb
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004039d0()
    ADD ESP,0x4                         ; 00403ce0
    PUSH ESI                            ; 00403ce3
    MOV EAX,dword ptr [EBX + 0x4]       ; 00403ce4
    PUSH EAX                            ; 00403ce7
    CALL FUN_0043cbf0                   ; 00403ce8
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043cbf0()
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
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00403d00 | DAT_01c4f02c
        ;   Label: LAB_00403d00
    JMP 0x00403cc6                      ; 00403d0a
        ;   XREF to: 00403cc6 (UNCONDITIONAL_JUMP)  ; LAB_00403cc6
    CMP dword ptr [0x0061b4a0],0x20     ; 00403d0c | DAT_0061b4a0
        ;   Label: LAB_00403d0c
    JNZ 0x00403d21                      ; 00403d13
        ;   XREF to: 00403d21 (CONDITIONAL_JUMP)  ; LAB_00403d21
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00403d15 | DAT_01c4f02c | LAB_0057de01
    JMP 0x00403cc6                      ; 00403d1f
        ;   XREF to: 00403cc6 (UNCONDITIONAL_JUMP)  ; LAB_00403cc6
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00403d21 | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_00403d21
    JMP 0x00403cc6                      ; 00403d2b
        ;   XREF to: 00403cc6 (UNCONDITIONAL_JUMP)  ; LAB_00403cc6

