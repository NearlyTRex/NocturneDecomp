; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406af0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5c8
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   FUN_00403920
;   FUN_004039d0
;   FUN_0043a840
;   FUN_0043bac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406af0
        ;   Label: FUN_00406af0
    PUSH ESI                            ; 00406af1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00406af2
    LEA ESI,[EBX + 0x18]                ; 00406af6
    LEA EAX,[EBX + 0x8]                 ; 00406af9
    PUSH EAX                            ; 00406afc
    CALL FUN_00403920                   ; 00406afd
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00406b02
    TEST EAX,EAX                        ; 00406b05
    JZ 0x00406b69                       ; 00406b07
        ;   XREF to: 00406b69 (CONDITIONAL_JUMP)  ; LAB_00406b69
    CMP dword ptr [0x01c6e2a0],0x0      ; 00406b09 | DAT_01c6e2a0
    JNZ 0x00406b83                      ; 00406b10
        ;   XREF to: 00406b83 (CONDITIONAL_JUMP)  ; LAB_00406b83
    CMP dword ptr [0x005fba20],0x20     ; 00406b12 | DAT_005fba20
    JNZ 0x00406b77                      ; 00406b19
        ;   XREF to: 00406b77 (CONDITIONAL_JUMP)  ; LAB_00406b77
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00406b1b | DAT_01c6b5cc
    CMP dword ptr [0x01c6b5c8],0x0      ; 00406b25 | DAT_01c6b5c8
        ;   Label: LAB_00406b25
    JZ 0x00406ba4                       ; 00406b2c
        ;   XREF to: 00406ba4 (CONDITIONAL_JUMP)  ; LAB_00406ba4
    MOV dword ptr [0x01c6e2b4],0x67     ; 00406b32 | DAT_01c6e2b4
    MOV EDX,0x1                         ; 00406b3c
        ;   Label: LAB_00406b3c
    PUSH EBX                            ; 00406b41
    MOV dword ptr [0x01c6e2b8],EDX      ; 00406b42 | DAT_01c6e2b8
    CALL FUN_004039d0                   ; 00406b48
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004039d0()
    MOV ECX,dword ptr [0x01c6b5c8]      ; 00406b4d | DAT_01c6b5c8
    ADD ESP,0x4                         ; 00406b53
    TEST ECX,ECX                        ; 00406b56
    JZ 0x00406bb0                       ; 00406b58
        ;   XREF to: 00406bb0 (CONDITIONAL_JUMP)  ; LAB_00406bb0
    PUSH EDI                            ; 00406b5a
    PUSH ESI                            ; 00406b5b
    MOV EDI,dword ptr [EBX + 0x4]       ; 00406b5c
    PUSH EDI                            ; 00406b5f
    CALL FUN_0043a840                   ; 00406b60
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0043a840()
    ADD ESP,0x8                         ; 00406b65
    POP EDI                             ; 00406b68
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406b69
        ;   Label: LAB_00406b69
    LEA EAX,[EBX + 0x18]                ; 00406b6c
    SHL ESI,0x2                         ; 00406b6f
    ADD EAX,ESI                         ; 00406b72
    POP ESI                             ; 00406b74
    POP EBX                             ; 00406b75
    RET                                 ; 00406b76
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00406b77 | DAT_01c6b5cc
        ;   Label: LAB_00406b77
    JMP 0x00406b25                      ; 00406b81
        ;   XREF to: 00406b25 (UNCONDITIONAL_JUMP)  ; LAB_00406b25
    CMP dword ptr [0x005fba20],0x20     ; 00406b83 | DAT_005fba20
        ;   Label: LAB_00406b83
    JNZ 0x00406b98                      ; 00406b8a
        ;   XREF to: 00406b98 (CONDITIONAL_JUMP)  ; LAB_00406b98
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00406b8c | DAT_01c6b5cc | LAB_00560f31
    JMP 0x00406b25                      ; 00406b96
        ;   XREF to: 00406b25 (UNCONDITIONAL_JUMP)  ; LAB_00406b25
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00406b98 | DAT_01c6b5cc | LAB_00561713
        ;   Label: LAB_00406b98
    JMP 0x00406b25                      ; 00406ba2
        ;   XREF to: 00406b25 (UNCONDITIONAL_JUMP)  ; LAB_00406b25
    MOV dword ptr [0x01c6e2b4],0x267    ; 00406ba4 | DAT_01c6e2b4
        ;   Label: LAB_00406ba4
    JMP 0x00406b3c                      ; 00406bae
        ;   XREF to: 00406b3c (UNCONDITIONAL_JUMP)  ; LAB_00406b3c
    PUSH ESI                            ; 00406bb0
        ;   Label: LAB_00406bb0
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406bb1
    PUSH ESI                            ; 00406bb4
    CALL FUN_0043bac0                   ; 00406bb5
        ;   XREF to: 0043bac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043bac0()
    ADD ESP,0x8                         ; 00406bba
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406bbd
    LEA EAX,[EBX + 0x18]                ; 00406bc0
    SHL ESI,0x2                         ; 00406bc3
    ADD EAX,ESI                         ; 00406bc6
    POP ESI                             ; 00406bc8
    POP EBX                             ; 00406bc9
    RET                                 ; 00406bca

