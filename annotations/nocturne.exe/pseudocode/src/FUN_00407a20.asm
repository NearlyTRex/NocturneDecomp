; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00407a20(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005acab0
;   undefined4 DAT_005b7624
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_006b0260
;   undefined4 DAT_006b0264
;   undefined4 DAT_006b0274
;   undefined4 DAT_006b0278
;   undefined4 DAT_006b029c
;   undefined4 DAT_006b02a0
;   undefined4 DAT_01c00c70
;   undefined4 DAT_01c00c74
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   ... and 1 more
;
; Called Functions:
;   FUN_00404610
;   FUN_00404680
;   FUN_00432cd0
;   FUN_004c6cc0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00407a20
        ;   Label: FUN_00407a20
    PUSH EDI                            ; 00407a21
    PUSH EBP                            ; 00407a22
    MOV EBP,dword ptr [0x006b0264]      ; 00407a23 | DAT_006b0264
    MOV EDI,dword ptr [ESP + 0x10]      ; 00407a29
    LEA ESI,[EDI + 0x18]                ; 00407a2d
    LEA EAX,[EDI + 0x8]                 ; 00407a30
    PUSH EAX                            ; 00407a33
    CALL FUN_00404610                   ; 00407a34
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined FUN_00404610()
    ADD ESP,0x4                         ; 00407a39
    TEST EAX,EAX                        ; 00407a3c
    JZ 0x00407c96                       ; 00407a3e
        ;   XREF to: 00407c96 (CONDITIONAL_JUMP)  ; LAB_00407c96
    PUSH EBX                            ; 00407a44
    MOV EDX,dword ptr [0x006b0278]      ; 00407a45 | DAT_006b0278
    MOV EBP,dword ptr [0x006b0264]      ; 00407a4b | DAT_006b0264
    TEST EDX,EDX                        ; 00407a51
    JZ 0x00407b14                       ; 00407a53
        ;   XREF to: 00407b14 (CONDITIONAL_JUMP)  ; LAB_00407b14
    CMP dword ptr [0x01c03948],0x0      ; 00407a59 | DAT_01c03948
    JNZ 0x00407aed                      ; 00407a60
        ;   XREF to: 00407aed (CONDITIONAL_JUMP)  ; LAB_00407aed
    CMP dword ptr [0x005b7624],0x20     ; 00407a66 | DAT_005b7624
    JNZ 0x00407ae1                      ; 00407a6d
        ;   XREF to: 00407ae1 (CONDITIONAL_JUMP)  ; LAB_00407ae1
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00407a6f | DAT_01c00c7c | LAB_005300ec
    XOR ECX,ECX                         ; 00407a79
        ;   Label: LAB_00407a79
    MOV dword ptr [0x006b0264],EBP      ; 00407a7b | DAT_006b0264
    MOV dword ptr [0x01c039a4],ECX      ; 00407a81 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],ECX      ; 00407a87 | DAT_01c039a0
        ;   Label: LAB_00407a87
    MOV EBX,0x6b029c                    ; 00407a8d | DAT_006b029c
        ;   Label: LAB_00407a8d
    MOV EBP,dword ptr [0x006b0264]      ; 00407a92 | DAT_006b0264
    MOV EAX,ESI                         ; 00407a98
    XOR ECX,ECX                         ; 00407a9a
    MOV EDX,dword ptr [EDI + 0x4]       ; 00407a9c
        ;   Label: LAB_00407a9c
    LEA EDX,[EDX + EDX*0x2]             ; 00407a9f
    MOV dword ptr [0x006b0264],EBP      ; 00407aa2 | DAT_006b0264
    CMP ECX,EDX                         ; 00407aa8
    JGE 0x00407c84                      ; 00407aaa
        ;   XREF to: 00407c84 (CONDITIONAL_JUMP)  ; LAB_00407c84
    MOV EDX,dword ptr [EAX]             ; 00407ab0
    ADD EDX,EBP                         ; 00407ab2
    MOV dword ptr [EBX],EDX             ; 00407ab4 | DAT_006b029c | DAT_006b02a0
    MOV EDX,dword ptr [EAX]             ; 00407ab6
    ADD EDX,EBP                         ; 00407ab8
    IMUL ESI,EDX,0x30                   ; 00407aba
    MOV EDX,dword ptr [EAX + 0x4]       ; 00407abd
    MOV dword ptr [ESI + 0x5c502c],EDX  ; 00407ac0 | DAT_005c502c
    MOV EDX,dword ptr [EAX]             ; 00407ac6
    ADD EDX,EBP                         ; 00407ac8
    IMUL ESI,EDX,0x30                   ; 00407aca
    ADD EAX,0xc                         ; 00407acd
    ADD EBX,0x4                         ; 00407ad0
    MOV EDX,dword ptr [EAX + -0x4]      ; 00407ad3
    ADD ECX,0x3                         ; 00407ad6
    MOV dword ptr [ESI + 0x5c5030],EDX  ; 00407ad9 | DAT_005c5030
    JMP 0x00407a9c                      ; 00407adf
        ;   XREF to: 00407a9c (UNCONDITIONAL_JUMP)  ; LAB_00407a9c
    MOV dword ptr [0x01c00c7c],0x530322 ; 00407ae1 | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_00407ae1
    JMP 0x00407a79                      ; 00407aeb
        ;   XREF to: 00407a79 (UNCONDITIONAL_JUMP)  ; LAB_00407a79
    CMP dword ptr [0x005b7624],0x20     ; 00407aed | DAT_005b7624
        ;   Label: LAB_00407aed
    JNZ 0x00407b05                      ; 00407af4
        ;   XREF to: 00407b05 (CONDITIONAL_JUMP)  ; LAB_00407b05
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00407af6 | DAT_01c00c7c | LAB_0052f031
    JMP 0x00407a79                      ; 00407b00
        ;   XREF to: 00407a79 (UNCONDITIONAL_JUMP)  ; LAB_00407a79
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00407b05 | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_00407b05
    JMP 0x00407a79                      ; 00407b0f
        ;   XREF to: 00407a79 (UNCONDITIONAL_JUMP)  ; LAB_00407a79
    CMP dword ptr [0x006b0274],0x0      ; 00407b14 | DAT_006b0274
        ;   Label: LAB_00407b14
    JNZ 0x00407bf2                      ; 00407b1b
        ;   XREF to: 00407bf2 (CONDITIONAL_JUMP)  ; LAB_00407bf2
    CMP dword ptr [0x01c03948],0x0      ; 00407b21 | DAT_01c03948
    JNZ 0x00407b8a                      ; 00407b28
        ;   XREF to: 00407b8a (CONDITIONAL_JUMP)  ; LAB_00407b8a
    CMP dword ptr [0x005b7624],0x20     ; 00407b2a | DAT_005b7624
    JNZ 0x00407b7e                      ; 00407b31
        ;   XREF to: 00407b7e (CONDITIONAL_JUMP)  ; LAB_00407b7e
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00407b33 | DAT_01c00c7c | LAB_005300ec
    CMP dword ptr [0x005acab0],0x0      ; 00407b3d | DAT_005acab0
        ;   Label: LAB_00407b3d
    JNZ 0x00407bd8                      ; 00407b44
        ;   XREF to: 00407bd8 (CONDITIONAL_JUMP)  ; LAB_00407bd8
    CMP dword ptr [0x01c03948],0x0      ; 00407b4a | DAT_01c03948
    JNZ 0x00407bb7                      ; 00407b51
        ;   XREF to: 00407bb7 (CONDITIONAL_JUMP)  ; LAB_00407bb7
    CMP dword ptr [0x005b7624],0x20     ; 00407b53 | DAT_005b7624
    JNZ 0x00407bab                      ; 00407b5a
        ;   XREF to: 00407bab (CONDITIONAL_JUMP)  ; LAB_00407bab
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00407b5c | DAT_01c00c7c | LAB_005300ec
    XOR EDX,EDX                         ; 00407b66
        ;   Label: LAB_00407b66
    MOV dword ptr [0x01c039a4],EDX      ; 00407b68 | DAT_01c039a4
    MOV ECX,0xc1                        ; 00407b6e
    MOV dword ptr [0x006b0264],EBP      ; 00407b73 | DAT_006b0264
    JMP 0x00407a87                      ; 00407b79
        ;   XREF to: 00407a87 (UNCONDITIONAL_JUMP)  ; LAB_00407a87
    MOV dword ptr [0x01c00c7c],0x530322 ; 00407b7e | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_00407b7e
    JMP 0x00407b3d                      ; 00407b88
        ;   XREF to: 00407b3d (UNCONDITIONAL_JUMP)  ; LAB_00407b3d
    CMP dword ptr [0x005b7624],0x20     ; 00407b8a | DAT_005b7624
        ;   Label: LAB_00407b8a
    JNZ 0x00407b9f                      ; 00407b91
        ;   XREF to: 00407b9f (CONDITIONAL_JUMP)  ; LAB_00407b9f
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00407b93 | DAT_01c00c7c | LAB_0052f031
    JMP 0x00407b3d                      ; 00407b9d
        ;   XREF to: 00407b3d (UNCONDITIONAL_JUMP)  ; LAB_00407b3d
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00407b9f | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_00407b9f
    JMP 0x00407b3d                      ; 00407ba9
        ;   XREF to: 00407b3d (UNCONDITIONAL_JUMP)  ; LAB_00407b3d
    MOV dword ptr [0x01c00c7c],0x530322 ; 00407bab | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_00407bab
    JMP 0x00407b66                      ; 00407bb5
        ;   XREF to: 00407b66 (UNCONDITIONAL_JUMP)  ; LAB_00407b66
    CMP dword ptr [0x005b7624],0x20     ; 00407bb7 | DAT_005b7624
        ;   Label: LAB_00407bb7
    JNZ 0x00407bcc                      ; 00407bbe
        ;   XREF to: 00407bcc (CONDITIONAL_JUMP)  ; LAB_00407bcc
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00407bc0 | DAT_01c00c7c | LAB_0052f031
    JMP 0x00407b66                      ; 00407bca
        ;   XREF to: 00407b66 (UNCONDITIONAL_JUMP)  ; LAB_00407b66
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00407bcc | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_00407bcc
    JMP 0x00407b66                      ; 00407bd6
        ;   XREF to: 00407b66 (UNCONDITIONAL_JUMP)  ; LAB_00407b66
    MOV dword ptr [0x01c039a4],0x1      ; 00407bd8 | DAT_01c039a4
        ;   Label: LAB_00407bd8
    MOV ECX,0xc1                        ; 00407be2
    MOV dword ptr [0x006b0264],EBP      ; 00407be7 | DAT_006b0264
    JMP 0x00407a87                      ; 00407bed
        ;   XREF to: 00407a87 (UNCONDITIONAL_JUMP)  ; LAB_00407a87
    CMP dword ptr [0x01c03948],0x0      ; 00407bf2 | DAT_01c03948
        ;   Label: LAB_00407bf2
    JNZ 0x00407c63                      ; 00407bf9
        ;   XREF to: 00407c63 (CONDITIONAL_JUMP)  ; LAB_00407c63
    CMP dword ptr [0x005b7624],0x20     ; 00407bfb | DAT_005b7624
    JNZ 0x00407c57                      ; 00407c02
        ;   XREF to: 00407c57 (CONDITIONAL_JUMP)  ; LAB_00407c57
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00407c04 | DAT_01c00c7c | LAB_005300ec
    MOV EAX,dword ptr [EDI + 0x10]      ; 00407c0e
        ;   Label: LAB_00407c0e
    MOV ECX,0xc0                        ; 00407c11
    PUSH EAX                            ; 00407c16
    MOV EDX,dword ptr [EDI + 0xc]       ; 00407c17
    MOV dword ptr [0x01c039a0],ECX      ; 00407c1a | DAT_01c039a0
    PUSH EDX                            ; 00407c20
    MOV ECX,dword ptr [EDI + 0x8]       ; 00407c21
    MOV EBX,0x1                         ; 00407c24
    PUSH ECX                            ; 00407c29
    MOV dword ptr [0x01c039a4],EBX      ; 00407c2a | DAT_01c039a4
    CALL FUN_004c6cc0                   ; 00407c30
        ;   XREF to: 004c6cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c6cc0()
    ADD ESP,0xc                         ; 00407c35
    MOV EBX,dword ptr [0x01c00c74]      ; 00407c38 | DAT_01c00c74
    PUSH EBX                            ; 00407c3e
    MOV EAX,[0x006b0260]                ; 00407c3f | DAT_006b0260
    PUSH EAX                            ; 00407c44
    CALL FUN_00404680                   ; 00407c45
        ;   XREF to: 00404680 (UNCONDITIONAL_CALL)  ; undefined FUN_00404680()
    ADD ESP,0x8                         ; 00407c4a
    MOV [0x01c00c70],EAX                ; 00407c4d | DAT_01c00c70
    JMP 0x00407a8d                      ; 00407c52
        ;   XREF to: 00407a8d (UNCONDITIONAL_JUMP)  ; LAB_00407a8d
    MOV dword ptr [0x01c00c7c],0x530322 ; 00407c57 | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_00407c57
    JMP 0x00407c0e                      ; 00407c61
        ;   XREF to: 00407c0e (UNCONDITIONAL_JUMP)  ; LAB_00407c0e
    CMP dword ptr [0x005b7624],0x20     ; 00407c63 | DAT_005b7624
        ;   Label: LAB_00407c63
    JNZ 0x00407c78                      ; 00407c6a
        ;   XREF to: 00407c78 (CONDITIONAL_JUMP)  ; LAB_00407c78
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00407c6c | DAT_01c00c7c | LAB_0052f031
    JMP 0x00407c0e                      ; 00407c76
        ;   XREF to: 00407c0e (UNCONDITIONAL_JUMP)  ; LAB_00407c0e
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00407c78 | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_00407c78
    JMP 0x00407c0e                      ; 00407c82
        ;   XREF to: 00407c0e (UNCONDITIONAL_JUMP)  ; LAB_00407c0e
    PUSH 0x6b029c                       ; 00407c84 | DAT_006b029c
        ;   Label: LAB_00407c84
    MOV ESI,dword ptr [EDI + 0x4]       ; 00407c89
    PUSH ESI                            ; 00407c8c
    CALL FUN_00432cd0                   ; 00407c8d
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00432cd0()
    ADD ESP,0x8                         ; 00407c92
    POP EBX                             ; 00407c95
    MOV EDX,dword ptr [EDI + 0x4]       ; 00407c96
        ;   Label: LAB_00407c96
    LEA EAX,[EDX*0x4 + 0x0]             ; 00407c99
    SUB EAX,EDX                         ; 00407ca0
    ADD EDI,0x18                        ; 00407ca2
    SHL EAX,0x2                         ; 00407ca5
    MOV EBP,dword ptr [0x006b0264]      ; 00407ca8 | DAT_006b0264
    ADD EAX,EDI                         ; 00407cae
    POP EBP                             ; 00407cb0
    POP EDI                             ; 00407cb1
    POP ESI                             ; 00407cb2
    RET                                 ; 00407cb3

