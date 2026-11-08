; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00405c70(int param_1)
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
;   FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405c70
        ;   Label: FUN_00405c70
    PUSH ESI                            ; 00405c71
    PUSH EBP                            ; 00405c72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405c73
    LEA ESI,[EBX + 0x18]                ; 00405c77
    LEA EAX,[EBX + 0x8]                 ; 00405c7a
    PUSH EAX                            ; 00405c7d
    CALL FUN_00403920                   ; 00405c7e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00405c83
    TEST EAX,EAX                        ; 00405c86
    JZ 0x00405ccb                       ; 00405c88
        ;   XREF to: 00405ccb (CONDITIONAL_JUMP)  ; LAB_00405ccb
    CMP dword ptr [0x01c51d00],0x0      ; 00405c8a | DAT_01c51d00
    JNZ 0x00405ce6                      ; 00405c91
        ;   XREF to: 00405ce6 (CONDITIONAL_JUMP)  ; LAB_00405ce6
    CMP dword ptr [0x0061b4a0],0x20     ; 00405c93 | DAT_0061b4a0
    JNZ 0x00405cda                      ; 00405c9a
        ;   XREF to: 00405cda (CONDITIONAL_JUMP)  ; LAB_00405cda
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00405c9c | DAT_01c4f02c
    PUSH EDI                            ; 00405ca6
        ;   Label: LAB_00405ca6
    MOV EDI,0x85                        ; 00405ca7
    PUSH ESI                            ; 00405cac
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405cad
    MOV EBP,0x1                         ; 00405cb0
    PUSH EAX                            ; 00405cb5
    MOV dword ptr [0x01c51d14],EDI      ; 00405cb6 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 00405cbc | DAT_01c51d18
    CALL FUN_0043cbf0                   ; 00405cc2
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043cbf0()
    ADD ESP,0x8                         ; 00405cc7
    POP EDI                             ; 00405cca
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405ccb
        ;   Label: LAB_00405ccb
    ADD EBX,0x18                        ; 00405cce
    SHL EAX,0x2                         ; 00405cd1
    ADD EAX,EBX                         ; 00405cd4
    POP EBP                             ; 00405cd6
    POP ESI                             ; 00405cd7
    POP EBX                             ; 00405cd8
    RET                                 ; 00405cd9
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00405cda | DAT_01c4f02c
        ;   Label: LAB_00405cda
    JMP 0x00405ca6                      ; 00405ce4
        ;   XREF to: 00405ca6 (UNCONDITIONAL_JUMP)  ; LAB_00405ca6
    CMP dword ptr [0x0061b4a0],0x20     ; 00405ce6 | DAT_0061b4a0
        ;   Label: LAB_00405ce6
    JNZ 0x00405cfb                      ; 00405ced
        ;   XREF to: 00405cfb (CONDITIONAL_JUMP)  ; LAB_00405cfb
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00405cef | DAT_01c4f02c | LAB_0057de01
    JMP 0x00405ca6                      ; 00405cf9
        ;   XREF to: 00405ca6 (UNCONDITIONAL_JUMP)  ; LAB_00405ca6
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00405cfb | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_00405cfb
    JMP 0x00405ca6                      ; 00405d05
        ;   XREF to: 00405ca6 (UNCONDITIONAL_JUMP)  ; LAB_00405ca6

