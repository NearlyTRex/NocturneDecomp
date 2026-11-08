; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406d90(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5c8
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   FUN_00403920
;   FUN_00405600
;   FUN_004057b0
;   FUN_0043a840
;   FUN_0043bac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406d90
        ;   Label: FUN_00406d90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00406d91
    CMP dword ptr [0x01c6cee8],0x0      ; 00406d95 | DAT_01c6cee8
    JZ 0x00406eb5                       ; 00406d9c
        ;   XREF to: 00406eb5 (CONDITIONAL_JUMP)  ; LAB_00406eb5
    PUSH ESI                            ; 00406da2
    LEA ESI,[EBX + 0x18]                ; 00406da3
    LEA EAX,[EBX + 0x8]                 ; 00406da6
    PUSH EAX                            ; 00406da9
    CALL FUN_00403920                   ; 00406daa
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00406daf
    TEST EAX,EAX                        ; 00406db2
    JZ 0x00406e01                       ; 00406db4
        ;   XREF to: 00406e01 (CONDITIONAL_JUMP)  ; LAB_00406e01
    CMP dword ptr [0x01c6b5c8],0x0      ; 00406db6 | DAT_01c6b5c8
    JZ 0x00406e3c                       ; 00406dbd
        ;   XREF to: 00406e3c (CONDITIONAL_JUMP)  ; LAB_00406e3c
    CMP dword ptr [0x01c6e2a0],0x0      ; 00406dc3 | DAT_01c6e2a0
    JNZ 0x00406e1b                      ; 00406dca
        ;   XREF to: 00406e1b (CONDITIONAL_JUMP)  ; LAB_00406e1b
    CMP dword ptr [0x005fba20],0x20     ; 00406dcc | DAT_005fba20
    JNZ 0x00406e0f                      ; 00406dd3
        ;   XREF to: 00406e0f (CONDITIONAL_JUMP)  ; LAB_00406e0f
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00406dd5 | DAT_01c6b5cc
    MOV EAX,0x8d                        ; 00406ddf
        ;   Label: LAB_00406ddf
    PUSH ESI                            ; 00406de4
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406de5
    MOV EDX,0x5                         ; 00406de8
    PUSH ECX                            ; 00406ded
    MOV [0x01c6e2b4],EAX                ; 00406dee | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDX      ; 00406df3 | DAT_01c6e2b8
    CALL FUN_0043a840                   ; 00406df9
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0043a840()
    ADD ESP,0x8                         ; 00406dfe
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406e01
        ;   Label: LAB_00406e01
    LEA EAX,[EBX + 0x18]                ; 00406e04
    SHL ESI,0x2                         ; 00406e07
    ADD EAX,ESI                         ; 00406e0a
    POP ESI                             ; 00406e0c
    POP EBX                             ; 00406e0d
    RET                                 ; 00406e0e
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00406e0f | DAT_01c6b5cc
        ;   Label: LAB_00406e0f
    JMP 0x00406ddf                      ; 00406e19
        ;   XREF to: 00406ddf (UNCONDITIONAL_JUMP)  ; LAB_00406ddf
    CMP dword ptr [0x005fba20],0x20     ; 00406e1b | DAT_005fba20
        ;   Label: LAB_00406e1b
    JNZ 0x00406e30                      ; 00406e22
        ;   XREF to: 00406e30 (CONDITIONAL_JUMP)  ; LAB_00406e30
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00406e24 | DAT_01c6b5cc | LAB_00560f31
    JMP 0x00406ddf                      ; 00406e2e
        ;   XREF to: 00406ddf (UNCONDITIONAL_JUMP)  ; LAB_00406ddf
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00406e30 | DAT_01c6b5cc | LAB_00561713
        ;   Label: LAB_00406e30
    JMP 0x00406ddf                      ; 00406e3a
        ;   XREF to: 00406ddf (UNCONDITIONAL_JUMP)  ; LAB_00406ddf
    CMP dword ptr [0x01c6e2a0],0x0      ; 00406e3c | DAT_01c6e2a0
        ;   Label: LAB_00406e3c
    JNZ 0x00406e94                      ; 00406e43
        ;   XREF to: 00406e94 (CONDITIONAL_JUMP)  ; LAB_00406e94
    CMP dword ptr [0x005fba20],0x20     ; 00406e45 | DAT_005fba20
    JNZ 0x00406e88                      ; 00406e4c
        ;   XREF to: 00406e88 (CONDITIONAL_JUMP)  ; LAB_00406e88
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00406e4e | DAT_01c6b5cc
    MOV EAX,0x28d                       ; 00406e58
        ;   Label: LAB_00406e58
    PUSH ESI                            ; 00406e5d
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406e5e
    MOV EDX,0x5                         ; 00406e61
    PUSH ECX                            ; 00406e66
    MOV [0x01c6e2b4],EAX                ; 00406e67 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDX      ; 00406e6c | DAT_01c6e2b8
    CALL FUN_0043bac0                   ; 00406e72
        ;   XREF to: 0043bac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043bac0()
    ADD ESP,0x8                         ; 00406e77
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406e7a
    LEA EAX,[EBX + 0x18]                ; 00406e7d
    SHL ESI,0x2                         ; 00406e80
    ADD EAX,ESI                         ; 00406e83
    POP ESI                             ; 00406e85
    POP EBX                             ; 00406e86
    RET                                 ; 00406e87
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00406e88 | DAT_01c6b5cc
        ;   Label: LAB_00406e88
    JMP 0x00406e58                      ; 00406e92
        ;   XREF to: 00406e58 (UNCONDITIONAL_JUMP)  ; LAB_00406e58
    CMP dword ptr [0x005fba20],0x20     ; 00406e94 | DAT_005fba20
        ;   Label: LAB_00406e94
    JNZ 0x00406ea9                      ; 00406e9b
        ;   XREF to: 00406ea9 (CONDITIONAL_JUMP)  ; LAB_00406ea9
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00406e9d | DAT_01c6b5cc | LAB_00560f31
    JMP 0x00406e58                      ; 00406ea7
        ;   XREF to: 00406e58 (UNCONDITIONAL_JUMP)  ; LAB_00406e58
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00406ea9 | DAT_01c6b5cc | LAB_00561713
        ;   Label: LAB_00406ea9
    JMP 0x00406e58                      ; 00406eb3
        ;   XREF to: 00406e58 (UNCONDITIONAL_JUMP)  ; LAB_00406e58
    PUSH EBX                            ; 00406eb5
        ;   Label: LAB_00406eb5
    CALL FUN_004057b0                   ; 00406eb6
        ;   XREF to: 004057b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004057b0()
    ADD ESP,0x4                         ; 00406ebb
    PUSH EBX                            ; 00406ebe
    CALL FUN_00405600                   ; 00406ebf
        ;   XREF to: 00405600 (UNCONDITIONAL_CALL)  ; undefined FUN_00405600()
    ADD ESP,0x4                         ; 00406ec4
    POP EBX                             ; 00406ec7
    RET                                 ; 00406ec8

