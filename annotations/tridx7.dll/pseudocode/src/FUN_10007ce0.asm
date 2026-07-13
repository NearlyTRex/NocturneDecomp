; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10007ce0(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)
;
;
; XREF[1]:
;   __setargv at 10007c7d
;
; Referenced Globals:
;   undefined4 DAT_10016dd8+1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x14]      ; 10007ce0
        ;   Label: FUN_10007ce0
    PUSH EBX                            ; 10007ce4
    MOV EDX,dword ptr [ESP + 0x14]      ; 10007ce5
    PUSH ESI                            ; 10007ce9
    MOV ECX,dword ptr [ESP + 0xc]       ; 10007cea
    PUSH EDI                            ; 10007cee
    MOV EDI,dword ptr [ESP + 0x18]      ; 10007cef
    PUSH EBP                            ; 10007cf3
    CMP dword ptr [ESP + 0x18],0x0      ; 10007cf4
    MOV dword ptr [EAX],0x0             ; 10007cf9
    MOV dword ptr [EDX],0x1             ; 10007cff
    JZ 0x10007d12                       ; 10007d05
        ;   XREF to: 10007d12 (CONDITIONAL_JUMP)  ; LAB_10007d12
    MOV EDX,dword ptr [ESP + 0x18]      ; 10007d07
    ADD dword ptr [ESP + 0x18],0x4      ; 10007d0b
    MOV dword ptr [EDX],EDI             ; 10007d10
    CMP byte ptr [ECX],0x22             ; 10007d12
        ;   Label: LAB_10007d12
    JZ 0x10007d5d                       ; 10007d15
        ;   XREF to: 10007d5d (CONDITIONAL_JUMP)  ; LAB_10007d5d
    INC dword ptr [EAX]                 ; 10007d17
        ;   Label: LAB_10007d17
    TEST EDI,EDI                        ; 10007d19
    JZ 0x10007d22                       ; 10007d1b
        ;   XREF to: 10007d22 (CONDITIONAL_JUMP)  ; LAB_10007d22
    MOV DL,byte ptr [ECX]               ; 10007d1d
    MOV byte ptr [EDI],DL               ; 10007d1f
    INC EDI                             ; 10007d21
    MOV DL,byte ptr [ECX]               ; 10007d22
        ;   Label: LAB_10007d22
    INC ECX                             ; 10007d24
    XOR EBX,EBX                         ; 10007d25
    MOV BL,DL                           ; 10007d27
    TEST byte ptr [EBX + 0x10016dd9],0x4 ; 10007d29 | DAT_10016dd8+1
    JZ 0x10007d3e                       ; 10007d30
        ;   XREF to: 10007d3e (CONDITIONAL_JUMP)  ; LAB_10007d3e
    INC dword ptr [EAX]                 ; 10007d32
    TEST EDI,EDI                        ; 10007d34
    JZ 0x10007d3d                       ; 10007d36
        ;   XREF to: 10007d3d (CONDITIONAL_JUMP)  ; LAB_10007d3d
    MOV BL,byte ptr [ECX]               ; 10007d38
    MOV byte ptr [EDI],BL               ; 10007d3a
    INC EDI                             ; 10007d3c
    INC ECX                             ; 10007d3d
        ;   Label: LAB_10007d3d
    CMP DL,0x20                         ; 10007d3e
        ;   Label: LAB_10007d3e
    JZ 0x10007d4c                       ; 10007d41
        ;   XREF to: 10007d4c (CONDITIONAL_JUMP)  ; LAB_10007d4c
    TEST DL,DL                          ; 10007d43
    JZ 0x10007d50                       ; 10007d45
        ;   XREF to: 10007d50 (CONDITIONAL_JUMP)  ; LAB_10007d50
    CMP DL,0x9                          ; 10007d47
    JNZ 0x10007d17                      ; 10007d4a
        ;   XREF to: 10007d17 (CONDITIONAL_JUMP)  ; LAB_10007d17
    TEST DL,DL                          ; 10007d4c
        ;   Label: LAB_10007d4c
    JNZ 0x10007d53                      ; 10007d4e
        ;   XREF to: 10007d53 (CONDITIONAL_JUMP)  ; LAB_10007d53
    DEC ECX                             ; 10007d50
        ;   Label: LAB_10007d50
    JMP 0x10007da3                      ; 10007d51
        ;   XREF to: 10007da3 (UNCONDITIONAL_JUMP)  ; LAB_10007da3
    TEST EDI,EDI                        ; 10007d53
        ;   Label: LAB_10007d53
    JZ 0x10007da3                       ; 10007d55
        ;   XREF to: 10007da3 (CONDITIONAL_JUMP)  ; LAB_10007da3
    MOV byte ptr [EDI + -0x1],0x0       ; 10007d57
    JMP 0x10007da3                      ; 10007d5b
        ;   XREF to: 10007da3 (UNCONDITIONAL_JUMP)  ; LAB_10007da3
    INC ECX                             ; 10007d5d
        ;   Label: LAB_10007d5d
    CMP byte ptr [ECX],0x22             ; 10007d5e
    JZ 0x10007d93                       ; 10007d61
        ;   XREF to: 10007d93 (CONDITIONAL_JUMP)  ; LAB_10007d93
    MOV BL,byte ptr [ECX]               ; 10007d63
        ;   Label: LAB_10007d63
    TEST BL,BL                          ; 10007d65
    JZ 0x10007d93                       ; 10007d67
        ;   XREF to: 10007d93 (CONDITIONAL_JUMP)  ; LAB_10007d93
    XOR EDX,EDX                         ; 10007d69
    MOV DL,BL                           ; 10007d6b
    TEST byte ptr [EDX + 0x10016dd9],0x4 ; 10007d6d | DAT_10016dd8+1
    JZ 0x10007d82                       ; 10007d74
        ;   XREF to: 10007d82 (CONDITIONAL_JUMP)  ; LAB_10007d82
    INC dword ptr [EAX]                 ; 10007d76
    TEST EDI,EDI                        ; 10007d78
    JZ 0x10007d82                       ; 10007d7a
        ;   XREF to: 10007d82 (CONDITIONAL_JUMP)  ; LAB_10007d82
    MOV DL,byte ptr [ECX]               ; 10007d7c
    INC ECX                             ; 10007d7e
    MOV byte ptr [EDI],DL               ; 10007d7f
    INC EDI                             ; 10007d81
    INC dword ptr [EAX]                 ; 10007d82
        ;   Label: LAB_10007d82
    TEST EDI,EDI                        ; 10007d84
    JZ 0x10007d8d                       ; 10007d86
        ;   XREF to: 10007d8d (CONDITIONAL_JUMP)  ; LAB_10007d8d
    MOV DL,byte ptr [ECX]               ; 10007d88
    MOV byte ptr [EDI],DL               ; 10007d8a
    INC EDI                             ; 10007d8c
    INC ECX                             ; 10007d8d
        ;   Label: LAB_10007d8d
    CMP byte ptr [ECX],0x22             ; 10007d8e
    JNZ 0x10007d63                      ; 10007d91
        ;   XREF to: 10007d63 (CONDITIONAL_JUMP)  ; LAB_10007d63
    INC dword ptr [EAX]                 ; 10007d93
        ;   Label: LAB_10007d93
    TEST EDI,EDI                        ; 10007d95
    JZ 0x10007d9d                       ; 10007d97
        ;   XREF to: 10007d9d (CONDITIONAL_JUMP)  ; LAB_10007d9d
    MOV byte ptr [EDI],0x0              ; 10007d99
    INC EDI                             ; 10007d9c
    CMP byte ptr [ECX],0x22             ; 10007d9d
        ;   Label: LAB_10007d9d
    JNZ 0x10007da3                      ; 10007da0
        ;   XREF to: 10007da3 (CONDITIONAL_JUMP)  ; LAB_10007da3
    INC ECX                             ; 10007da2
    XOR ESI,ESI                         ; 10007da3
        ;   Label: LAB_10007da3
    CMP byte ptr [ECX],0x0              ; 10007da5
        ;   Label: LAB_10007da5
    JZ 0x10007e94                       ; 10007da8
        ;   XREF to: 10007e94 (CONDITIONAL_JUMP)  ; LAB_10007e94
    MOV DL,byte ptr [ECX]               ; 10007dae
        ;   Label: LAB_10007dae
    CMP DL,0x20                         ; 10007db0
    JZ 0x10007dba                       ; 10007db3
        ;   XREF to: 10007dba (CONDITIONAL_JUMP)  ; LAB_10007dba
    CMP DL,0x9                          ; 10007db5
    JNZ 0x10007dbd                      ; 10007db8
        ;   XREF to: 10007dbd (CONDITIONAL_JUMP)  ; LAB_10007dbd
    INC ECX                             ; 10007dba
        ;   Label: LAB_10007dba
    JMP 0x10007dae                      ; 10007dbb
        ;   XREF to: 10007dae (UNCONDITIONAL_JUMP)  ; LAB_10007dae
    CMP byte ptr [ECX],0x0              ; 10007dbd
        ;   Label: LAB_10007dbd
    JZ 0x10007e94                       ; 10007dc0
        ;   XREF to: 10007e94 (CONDITIONAL_JUMP)  ; LAB_10007e94
    CMP dword ptr [ESP + 0x18],0x0      ; 10007dc6
    JZ 0x10007dd8                       ; 10007dcb
        ;   XREF to: 10007dd8 (CONDITIONAL_JUMP)  ; LAB_10007dd8
    MOV EDX,dword ptr [ESP + 0x18]      ; 10007dcd
    ADD dword ptr [ESP + 0x18],0x4      ; 10007dd1
    MOV dword ptr [EDX],EDI             ; 10007dd6
    MOV EDX,dword ptr [ESP + 0x20]      ; 10007dd8
        ;   Label: LAB_10007dd8
    INC dword ptr [EDX]                 ; 10007ddc
    MOV EBX,0x1                         ; 10007dde
        ;   Label: LAB_10007dde
    XOR EDX,EDX                         ; 10007de3
    CMP byte ptr [ECX],0x5c             ; 10007de5
    JNZ 0x10007df1                      ; 10007de8
        ;   XREF to: 10007df1 (CONDITIONAL_JUMP)  ; LAB_10007df1
    INC ECX                             ; 10007dea
        ;   Label: LAB_10007dea
    INC EDX                             ; 10007deb
    CMP byte ptr [ECX],0x5c             ; 10007dec
    JZ 0x10007dea                       ; 10007def
        ;   XREF to: 10007dea (CONDITIONAL_JUMP)  ; LAB_10007dea
    CMP byte ptr [ECX],0x22             ; 10007df1
        ;   Label: LAB_10007df1
    JNZ 0x10007e18                      ; 10007df4
        ;   XREF to: 10007e18 (CONDITIONAL_JUMP)  ; LAB_10007e18
    TEST DL,0x1                         ; 10007df6
    JNZ 0x10007e15                      ; 10007df9
        ;   XREF to: 10007e15 (CONDITIONAL_JUMP)  ; LAB_10007e15
    TEST ESI,ESI                        ; 10007dfb
    JZ 0x10007e0c                       ; 10007dfd
        ;   XREF to: 10007e0c (CONDITIONAL_JUMP)  ; LAB_10007e0c
    LEA EBP,[ECX + 0x1]                 ; 10007dff
    CMP byte ptr [EBP],0x22             ; 10007e02
    JNZ 0x10007e0c                      ; 10007e06
        ;   XREF to: 10007e0c (CONDITIONAL_JUMP)  ; LAB_10007e0c
    MOV ECX,EBP                         ; 10007e08
    JMP 0x10007e0e                      ; 10007e0a
        ;   XREF to: 10007e0e (UNCONDITIONAL_JUMP)  ; LAB_10007e0e
    XOR EBX,EBX                         ; 10007e0c
        ;   Label: LAB_10007e0c
    CMP ESI,0x1                         ; 10007e0e
        ;   Label: LAB_10007e0e
    SBB ESI,ESI                         ; 10007e11
    NEG ESI                             ; 10007e13
    SHR EDX,0x1                         ; 10007e15
        ;   Label: LAB_10007e15
    MOV EBP,EDX                         ; 10007e18
        ;   Label: LAB_10007e18
    DEC EDX                             ; 10007e1a
    TEST EBP,EBP                        ; 10007e1b
    JZ 0x10007e30                       ; 10007e1d
        ;   XREF to: 10007e30 (CONDITIONAL_JUMP)  ; LAB_10007e30
    TEST EDI,EDI                        ; 10007e1f
        ;   Label: LAB_10007e1f
    JZ 0x10007e27                       ; 10007e21
        ;   XREF to: 10007e27 (CONDITIONAL_JUMP)  ; LAB_10007e27
    MOV byte ptr [EDI],0x5c             ; 10007e23
    INC EDI                             ; 10007e26
    MOV EBP,EDX                         ; 10007e27
        ;   Label: LAB_10007e27
    INC dword ptr [EAX]                 ; 10007e29
    DEC EDX                             ; 10007e2b
    TEST EBP,EBP                        ; 10007e2c
    JNZ 0x10007e1f                      ; 10007e2e
        ;   XREF to: 10007e1f (CONDITIONAL_JUMP)  ; LAB_10007e1f
    MOV DL,byte ptr [ECX]               ; 10007e30
        ;   Label: LAB_10007e30
    TEST DL,DL                          ; 10007e32
    JZ 0x10007e85                       ; 10007e34
        ;   XREF to: 10007e85 (CONDITIONAL_JUMP)  ; LAB_10007e85
    TEST ESI,ESI                        ; 10007e36
    JNZ 0x10007e44                      ; 10007e38
        ;   XREF to: 10007e44 (CONDITIONAL_JUMP)  ; LAB_10007e44
    CMP DL,0x20                         ; 10007e3a
    JZ 0x10007e85                       ; 10007e3d
        ;   XREF to: 10007e85 (CONDITIONAL_JUMP)  ; LAB_10007e85
    CMP DL,0x9                          ; 10007e3f
    JZ 0x10007e85                       ; 10007e42
        ;   XREF to: 10007e85 (CONDITIONAL_JUMP)  ; LAB_10007e85
    TEST EBX,EBX                        ; 10007e44
        ;   Label: LAB_10007e44
    JZ 0x10007e7f                       ; 10007e46
        ;   XREF to: 10007e7f (CONDITIONAL_JUMP)  ; LAB_10007e7f
    TEST EDI,EDI                        ; 10007e48
    JZ 0x10007e6d                       ; 10007e4a
        ;   XREF to: 10007e6d (CONDITIONAL_JUMP)  ; LAB_10007e6d
    XOR EBX,EBX                         ; 10007e4c
    MOV BL,DL                           ; 10007e4e
    TEST byte ptr [EBX + 0x10016dd9],0x4 ; 10007e50 | DAT_10016dd8+1
    JZ 0x10007e5f                       ; 10007e57
        ;   XREF to: 10007e5f (CONDITIONAL_JUMP)  ; LAB_10007e5f
    MOV byte ptr [EDI],DL               ; 10007e59
    INC ECX                             ; 10007e5b
    INC EDI                             ; 10007e5c
    INC dword ptr [EAX]                 ; 10007e5d
    MOV DL,byte ptr [ECX]               ; 10007e5f
        ;   Label: LAB_10007e5f
    INC EDI                             ; 10007e61
    INC ECX                             ; 10007e62
    MOV byte ptr [EDI + -0x1],DL        ; 10007e63
    INC dword ptr [EAX]                 ; 10007e66
    JMP 0x10007dde                      ; 10007e68
        ;   XREF to: 10007dde (UNCONDITIONAL_JUMP)  ; LAB_10007dde
    XOR EBX,EBX                         ; 10007e6d
        ;   Label: LAB_10007e6d
    MOV BL,DL                           ; 10007e6f
    TEST byte ptr [EBX + 0x10016dd9],0x4 ; 10007e71 | DAT_10016dd8+1
    JZ 0x10007e7d                       ; 10007e78
        ;   XREF to: 10007e7d (CONDITIONAL_JUMP)  ; LAB_10007e7d
    INC ECX                             ; 10007e7a
    INC dword ptr [EAX]                 ; 10007e7b
    INC dword ptr [EAX]                 ; 10007e7d
        ;   Label: LAB_10007e7d
    INC ECX                             ; 10007e7f
        ;   Label: LAB_10007e7f
    JMP 0x10007dde                      ; 10007e80
        ;   XREF to: 10007dde (UNCONDITIONAL_JUMP)  ; LAB_10007dde
    TEST EDI,EDI                        ; 10007e85
        ;   Label: LAB_10007e85
    JZ 0x10007e8d                       ; 10007e87
        ;   XREF to: 10007e8d (CONDITIONAL_JUMP)  ; LAB_10007e8d
    MOV byte ptr [EDI],0x0              ; 10007e89
    INC EDI                             ; 10007e8c
    INC dword ptr [EAX]                 ; 10007e8d
        ;   Label: LAB_10007e8d
    JMP 0x10007da5                      ; 10007e8f
        ;   XREF to: 10007da5 (UNCONDITIONAL_JUMP)  ; LAB_10007da5
    CMP dword ptr [ESP + 0x18],0x0      ; 10007e94
        ;   Label: LAB_10007e94
    JZ 0x10007ea5                       ; 10007e99
        ;   XREF to: 10007ea5 (CONDITIONAL_JUMP)  ; LAB_10007ea5
    MOV EDX,dword ptr [ESP + 0x18]      ; 10007e9b
    MOV dword ptr [EDX],0x0             ; 10007e9f
    MOV EDX,dword ptr [ESP + 0x20]      ; 10007ea5
        ;   Label: LAB_10007ea5
    POP EBP                             ; 10007ea9
    POP EDI                             ; 10007eaa
    POP ESI                             ; 10007eab
    POP EBX                             ; 10007eac
    INC dword ptr [EDX]                 ; 10007ead
    RET                                 ; 10007eaf

