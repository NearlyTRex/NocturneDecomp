; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408c10(int param_1,uint param_2,int param_3)
;
;
; XREF[1]:
;   FUN_004911f0 at 00491656
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c74
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
;   FUN_004c6cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c10
        ;   Label: FUN_00408c10
    PUSH ESI                            ; 00408c11
    PUSH EDI                            ; 00408c12
    PUSH EBP                            ; 00408c13
    MOV EBX,dword ptr [ESP + 0x14]      ; 00408c14
    LEA EAX,[EBX + 0x8]                 ; 00408c18
    PUSH EAX                            ; 00408c1b
    CALL FUN_00404610                   ; 00408c1c
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined FUN_00404610()
    ADD ESP,0x4                         ; 00408c21
    TEST EAX,EAX                        ; 00408c24
    JZ 0x00408ca1                       ; 00408c26
        ;   XREF to: 00408ca1 (CONDITIONAL_JUMP)  ; LAB_00408ca1
    CMP dword ptr [0x01c03948],0x0      ; 00408c2c | DAT_01c03948
    JNZ 0x00408cb2                      ; 00408c33
        ;   XREF to: 00408cb2 (CONDITIONAL_JUMP)  ; LAB_00408cb2
    CMP dword ptr [0x005b7624],0x20     ; 00408c39 | DAT_005b7624
    JNZ 0x00408ca6                      ; 00408c40
        ;   XREF to: 00408ca6 (CONDITIONAL_JUMP)  ; LAB_00408ca6
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00408c42 | DAT_01c00c7c | LAB_005300ec
    MOV EAX,dword ptr [ESP + 0x18]      ; 00408c4c
        ;   Label: LAB_00408c4c
    MOV [0x01c039a0],EAX                ; 00408c50 | DAT_01c039a0
    TEST byte ptr [ESP + 0x18],0x10     ; 00408c55
    JZ 0x00408c75                       ; 00408c5a
        ;   XREF to: 00408c75 (CONDITIONAL_JUMP)  ; LAB_00408c75
    MOV ECX,dword ptr [EBX + 0x10]      ; 00408c5c
    PUSH ECX                            ; 00408c5f
    MOV ESI,dword ptr [EBX + 0xc]       ; 00408c60
    PUSH ESI                            ; 00408c63
    MOV EDI,dword ptr [EBX + 0x8]       ; 00408c64
    PUSH EDI                            ; 00408c67
    CALL FUN_004c6cc0                   ; 00408c68
        ;   XREF to: 004c6cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c6cc0()
    ADD ESP,0xc                         ; 00408c6d
    MOV [0x01c00c74],EAX                ; 00408c70 | DAT_01c00c74
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00408c75
        ;   Label: LAB_00408c75
    TEST EBP,EBP                        ; 00408c79
    JZ 0x00408cd6                       ; 00408c7b
        ;   XREF to: 00408cd6 (CONDITIONAL_JUMP)  ; LAB_00408cd6
    MOV dword ptr [0x01c039a4],0x5      ; 00408c7d | DAT_01c039a4
    MOV ESI,dword ptr [0x01c00c78]      ; 00408c87 | DAT_01c00c78
        ;   Label: LAB_00408c87
    LEA EAX,[EBX + 0x18]                ; 00408c8d
    TEST ESI,ESI                        ; 00408c90
    JZ 0x00408cf1                       ; 00408c92
        ;   XREF to: 00408cf1 (CONDITIONAL_JUMP)  ; LAB_00408cf1
    PUSH EAX                            ; 00408c94
    MOV EBP,dword ptr [EBX + 0x4]       ; 00408c95
    PUSH EBP                            ; 00408c98
    CALL FUN_00432cd0                   ; 00408c99
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00432cd0()
    ADD ESP,0x8                         ; 00408c9e
    POP EBP                             ; 00408ca1
        ;   Label: LAB_00408ca1
    POP EDI                             ; 00408ca2
    POP ESI                             ; 00408ca3
    POP EBX                             ; 00408ca4
    RET                                 ; 00408ca5
    MOV dword ptr [0x01c00c7c],0x530322 ; 00408ca6 | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_00408ca6
    JMP 0x00408c4c                      ; 00408cb0
        ;   XREF to: 00408c4c (UNCONDITIONAL_JUMP)  ; LAB_00408c4c
    CMP dword ptr [0x005b7624],0x20     ; 00408cb2 | DAT_005b7624
        ;   Label: LAB_00408cb2
    JNZ 0x00408cc7                      ; 00408cb9
        ;   XREF to: 00408cc7 (CONDITIONAL_JUMP)  ; LAB_00408cc7
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00408cbb | DAT_01c00c7c | LAB_0052f031
    JMP 0x00408c4c                      ; 00408cc5
        ;   XREF to: 00408c4c (UNCONDITIONAL_JUMP)  ; LAB_00408c4c
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00408cc7 | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_00408cc7
    JMP 0x00408c4c                      ; 00408cd1
        ;   XREF to: 00408c4c (UNCONDITIONAL_JUMP)  ; LAB_00408c4c
    TEST byte ptr [ESP + 0x18],0xc0     ; 00408cd6
        ;   Label: LAB_00408cd6
    JZ 0x00408ce9                       ; 00408cdb
        ;   XREF to: 00408ce9 (CONDITIONAL_JUMP)  ; LAB_00408ce9
    MOV dword ptr [0x01c039a4],0x1      ; 00408cdd | DAT_01c039a4
    JMP 0x00408c87                      ; 00408ce7
        ;   XREF to: 00408c87 (UNCONDITIONAL_JUMP)  ; LAB_00408c87
    MOV dword ptr [0x01c039a4],EBP      ; 00408ce9 | DAT_01c039a4
        ;   Label: LAB_00408ce9
    JMP 0x00408c87                      ; 00408cef
        ;   XREF to: 00408c87 (UNCONDITIONAL_JUMP)  ; LAB_00408c87
    PUSH EAX                            ; 00408cf1
        ;   Label: LAB_00408cf1
    MOV EDI,dword ptr [EBX + 0x4]       ; 00408cf2
    PUSH EDI                            ; 00408cf5
    CALL FUN_004349a0                   ; 00408cf6
        ;   XREF to: 004349a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004349a0()
    ADD ESP,0x8                         ; 00408cfb
    POP EBP                             ; 00408cfe
    POP EDI                             ; 00408cff
    POP ESI                             ; 00408d00
    POP EBX                             ; 00408d01
    RET                                 ; 00408d02

