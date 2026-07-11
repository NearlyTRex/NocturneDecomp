; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406c60(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c78
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   FUN_00404610
;   FUN_00432cd0
;   FUN_004349a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406c60
        ;   Label: FUN_00406c60
    PUSH ESI                            ; 00406c61
    PUSH EBP                            ; 00406c62
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406c63
    LEA ESI,[EBX + 0x18]                ; 00406c67
    LEA EAX,[EBX + 0x8]                 ; 00406c6a
    PUSH EAX                            ; 00406c6d
    CALL FUN_00404610                   ; 00406c6e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined FUN_00404610()
    ADD ESP,0x4                         ; 00406c73
    TEST EAX,EAX                        ; 00406c76
    JZ 0x00406cc5                       ; 00406c78
        ;   XREF to: 00406cc5 (CONDITIONAL_JUMP)  ; LAB_00406cc5
    CMP dword ptr [0x01c00c78],0x0      ; 00406c7a | DAT_01c00c78
    JZ 0x00406d01                       ; 00406c81
        ;   XREF to: 00406d01 (CONDITIONAL_JUMP)  ; LAB_00406d01
    CMP dword ptr [0x01c03948],0x0      ; 00406c87 | DAT_01c03948
    JNZ 0x00406ce0                      ; 00406c8e
        ;   XREF to: 00406ce0 (CONDITIONAL_JUMP)  ; LAB_00406ce0
    CMP dword ptr [0x005b7624],0x20     ; 00406c90 | DAT_005b7624
    JNZ 0x00406cd4                      ; 00406c97
        ;   XREF to: 00406cd4 (CONDITIONAL_JUMP)  ; LAB_00406cd4
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00406c99 | DAT_01c00c7c | LAB_005300ec
    MOV EBP,0xd                         ; 00406ca3
        ;   Label: LAB_00406ca3
    PUSH ESI                            ; 00406ca8
    MOV EDX,dword ptr [EBX + 0x4]       ; 00406ca9
    MOV EAX,0x4                         ; 00406cac
    PUSH EDX                            ; 00406cb1
    MOV dword ptr [0x01c039a0],EBP      ; 00406cb2 | DAT_01c039a0
    MOV [0x01c039a4],EAX                ; 00406cb8 | DAT_01c039a4
    CALL FUN_00432cd0                   ; 00406cbd
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00432cd0()
    ADD ESP,0x8                         ; 00406cc2
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406cc5
        ;   Label: LAB_00406cc5
    LEA EAX,[EBX + 0x18]                ; 00406cc8
    SHL ESI,0x2                         ; 00406ccb
    ADD EAX,ESI                         ; 00406cce
    POP EBP                             ; 00406cd0
    POP ESI                             ; 00406cd1
    POP EBX                             ; 00406cd2
    RET                                 ; 00406cd3
    MOV dword ptr [0x01c00c7c],0x530322 ; 00406cd4 | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_00406cd4
    JMP 0x00406ca3                      ; 00406cde
        ;   XREF to: 00406ca3 (UNCONDITIONAL_JUMP)  ; LAB_00406ca3
    CMP dword ptr [0x005b7624],0x20     ; 00406ce0 | DAT_005b7624
        ;   Label: LAB_00406ce0
    JNZ 0x00406cf5                      ; 00406ce7
        ;   XREF to: 00406cf5 (CONDITIONAL_JUMP)  ; LAB_00406cf5
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00406ce9 | DAT_01c00c7c | LAB_0052f031
    JMP 0x00406ca3                      ; 00406cf3
        ;   XREF to: 00406ca3 (UNCONDITIONAL_JUMP)  ; LAB_00406ca3
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00406cf5 | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_00406cf5
    JMP 0x00406ca3                      ; 00406cff
        ;   XREF to: 00406ca3 (UNCONDITIONAL_JUMP)  ; LAB_00406ca3
    CMP dword ptr [0x01c03948],0x0      ; 00406d01 | DAT_01c03948
        ;   Label: LAB_00406d01
    JNZ 0x00406d57                      ; 00406d08
        ;   XREF to: 00406d57 (CONDITIONAL_JUMP)  ; LAB_00406d57
    CMP dword ptr [0x005b7624],0x20     ; 00406d0a | DAT_005b7624
    JNZ 0x00406d4b                      ; 00406d11
        ;   XREF to: 00406d4b (CONDITIONAL_JUMP)  ; LAB_00406d4b
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00406d13 | DAT_01c00c7c | LAB_005300ec
    MOV EBP,0x20d                       ; 00406d1d
        ;   Label: LAB_00406d1d
    PUSH ESI                            ; 00406d22
    MOV EDX,dword ptr [EBX + 0x4]       ; 00406d23
    XOR EAX,EAX                         ; 00406d26
    PUSH EDX                            ; 00406d28
    MOV dword ptr [0x01c039a0],EBP      ; 00406d29 | DAT_01c039a0
    MOV [0x01c039a4],EAX                ; 00406d2f | DAT_01c039a4
    CALL FUN_004349a0                   ; 00406d34
        ;   XREF to: 004349a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004349a0()
    ADD ESP,0x8                         ; 00406d39
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406d3c
    LEA EAX,[EBX + 0x18]                ; 00406d3f
    SHL ESI,0x2                         ; 00406d42
    ADD EAX,ESI                         ; 00406d45
    POP EBP                             ; 00406d47
    POP ESI                             ; 00406d48
    POP EBX                             ; 00406d49
    RET                                 ; 00406d4a
    MOV dword ptr [0x01c00c7c],0x530322 ; 00406d4b | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_00406d4b
    JMP 0x00406d1d                      ; 00406d55
        ;   XREF to: 00406d1d (UNCONDITIONAL_JUMP)  ; LAB_00406d1d
    CMP dword ptr [0x005b7624],0x20     ; 00406d57 | DAT_005b7624
        ;   Label: LAB_00406d57
    JNZ 0x00406d6c                      ; 00406d5e
        ;   XREF to: 00406d6c (CONDITIONAL_JUMP)  ; LAB_00406d6c
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00406d60 | DAT_01c00c7c | LAB_0052f031
    JMP 0x00406d1d                      ; 00406d6a
        ;   XREF to: 00406d1d (UNCONDITIONAL_JUMP)  ; LAB_00406d1d
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00406d6c | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_00406d6c
    JMP 0x00406d1d                      ; 00406d76
        ;   XREF to: 00406d1d (UNCONDITIONAL_JUMP)  ; LAB_00406d1d

