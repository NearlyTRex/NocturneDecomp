; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_00437cfc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f010
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00437270
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00437cfc
        ;   Label: cockpit_ckptutil.c_FUN_00437cfc
    PUSH EBX                            ; 00437d00
    PUSH ESI                            ; 00437d01
    PUSH EDI                            ; 00437d02
    PUSH EBP                            ; 00437d03
    SUB ESP,0x2c                        ; 00437d04
    MOV EDX,dword ptr [ESP + 0x48]      ; 00437d07
    MOV EBP,dword ptr [ESP + 0x40]      ; 00437d0b
    MOV EBX,dword ptr [0x01c4f010]      ; 00437d0f | DAT_01c4f010
    MOV EAX,[0x01c43550]                ; 00437d15 | DAT_01c43550
    MOV EDI,dword ptr [0x01c4354c]      ; 00437d1a | DAT_01c4354c
    MOV ESI,dword ptr [0x01c4f008]      ; 00437d20 | DAT_01c4f008
    SUB EBX,EDX                         ; 00437d26
    SUB EAX,EDI                         ; 00437d28
    SUB ESI,EDX                         ; 00437d2a
    MOV dword ptr [ESP + 0xc],EAX       ; 00437d2c
    TEST EBP,EBP                        ; 00437d30
    JNZ 0x00437d3c                      ; 00437d32
        ;   XREF to: 00437d3c (CONDITIONAL_JUMP)  ; LAB_00437d3c
    ADD ESP,0x2c                        ; 00437d34
        ;   Label: LAB_00437d34
    POP EBP                             ; 00437d37
    POP EDI                             ; 00437d38
    POP ESI                             ; 00437d39
    POP EBX                             ; 00437d3a
    RET                                 ; 00437d3b
    CALL cockpit_ckptutil.c_FUN_00437270 ; 00437d3c
        ;   XREF to: 00437270 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00437270()
        ;   Label: LAB_00437d3c
    MOV EDX,dword ptr [ESP + 0x54]      ; 00437d41
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00437d45
    MOV EDI,EDX                         ; 00437d49
    MOV dword ptr [ESP + 0x28],EAX      ; 00437d4b
    SHL EDI,0x5                         ; 00437d4f
    MOV EAX,[0x0061b4a0]                ; 00437d52 | DAT_0061b4a0
    ADD EDI,EDX                         ; 00437d57
    SHL EBP,0x2                         ; 00437d59
    SHL EDI,0x2                         ; 00437d5c
    CMP EAX,0x8                         ; 00437d5f
    JNZ 0x00437e3e                      ; 00437d62
        ;   XREF to: 00437e3e (CONDITIONAL_JUMP)  ; LAB_00437e3e
    MOV EDX,dword ptr [ESP + 0x48]      ; 00437d68
    MOV EAX,dword ptr [EBP + 0x1c4354c] ; 00437d6c
    ADD EDX,EAX                         ; 00437d72
    MOV ECX,dword ptr [ESP + 0x54]      ; 00437d74
    MOV dword ptr [ESP + 0x24],EDX      ; 00437d78
    TEST ECX,ECX                        ; 00437d7c
    JLE 0x00437d34                      ; 00437d7e
        ;   XREF to: 00437d34 (CONDITIONAL_JUMP)  ; LAB_00437d34
    XOR ECX,ECX                         ; 00437d80
    MOV dword ptr [ESP + 0x8],EDI       ; 00437d82
    MOV dword ptr [ESP + 0x14],ECX      ; 00437d86
    CMP dword ptr [ESP + 0x44],0x0      ; 00437d8a
        ;   Label: LAB_00437d8a
    JZ 0x00437dfa                       ; 00437d8f
        ;   XREF to: 00437dfa (CONDITIONAL_JUMP)  ; LAB_00437dfa
    MOV EAX,dword ptr [ESP + 0x14]      ; 00437d91
    XOR EBP,EBP                         ; 00437d95
    XOR EDI,EDI                         ; 00437d97
    MOV dword ptr [ESP + 0x1c],EAX      ; 00437d99
    MOV EDX,dword ptr [ESP + 0x44]      ; 00437d9d
        ;   Label: LAB_00437d9d
    ADD EDX,dword ptr [ESP + 0x1c]      ; 00437da1
    CMP EDI,dword ptr [EDX]             ; 00437da5
    JGE 0x00437dc2                      ; 00437da7
        ;   XREF to: 00437dc2 (CONDITIONAL_JUMP)  ; LAB_00437dc2
    MOV EAX,dword ptr [EDX + EBP*0x1 + 0x4] ; 00437da9
    MOV EDX,dword ptr [EDX + EBP*0x1 + 0x44] ; 00437dad
    ADD EDX,EAX                         ; 00437db1
    DEC EDX                             ; 00437db3
    CMP EAX,ESI                         ; 00437db4
    JGE 0x00437e14                      ; 00437db6
        ;   XREF to: 00437e14 (CONDITIONAL_JUMP)  ; LAB_00437e14
    CMP EDX,ESI                         ; 00437db8
    JGE 0x00437e12                      ; 00437dba
        ;   XREF to: 00437e12 (CONDITIONAL_JUMP)  ; LAB_00437e12
    INC EDI                             ; 00437dbc
        ;   Label: LAB_00437dbc
    ADD EBP,0x4                         ; 00437dbd
    JMP 0x00437d9d                      ; 00437dc0
        ;   XREF to: 00437d9d (UNCONDITIONAL_JUMP)  ; LAB_00437d9d
    MOV ECX,dword ptr [ESP + 0x14]      ; 00437dc2
        ;   Label: LAB_00437dc2
    MOV EAX,dword ptr [ESP + 0xc]       ; 00437dc6
    MOV EDI,dword ptr [ESP + 0x24]      ; 00437dca
    MOV EBP,dword ptr [ESP + 0x40]      ; 00437dce
    MOV EDX,dword ptr [ESP + 0x8]       ; 00437dd2
    ADD ECX,0x84                        ; 00437dd6
    ADD EDI,EAX                         ; 00437ddc
    MOV EAX,dword ptr [ESP + 0x50]      ; 00437dde
    MOV dword ptr [ESP + 0x14],ECX      ; 00437de2
    ADD EBP,EAX                         ; 00437de6
    MOV dword ptr [ESP + 0x24],EDI      ; 00437de8
    MOV dword ptr [ESP + 0x40],EBP      ; 00437dec
    CMP ECX,EDX                         ; 00437df0
    JGE 0x00437d34                      ; 00437df2
        ;   XREF to: 00437d34 (CONDITIONAL_JUMP)  ; LAB_00437d34
    JMP 0x00437d8a                      ; 00437df8
        ;   XREF to: 00437d8a (UNCONDITIONAL_JUMP)  ; LAB_00437d8a
    MOV EBP,dword ptr [ESP + 0x50]      ; 00437dfa
        ;   Label: LAB_00437dfa
    PUSH EBP                            ; 00437dfe
    MOV EAX,dword ptr [ESP + 0x44]      ; 00437dff
    PUSH EAX                            ; 00437e03
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00437e04
    PUSH EDX                            ; 00437e08
    CALL dword ptr [ESP + 0x34]         ; 00437e09
    ADD ESP,0xc                         ; 00437e0d
    JMP 0x00437dc2                      ; 00437e10
        ;   XREF to: 00437dc2 (UNCONDITIONAL_JUMP)  ; LAB_00437dc2
    MOV EAX,ESI                         ; 00437e12
        ;   Label: LAB_00437e12
    CMP EDX,EBX                         ; 00437e14
        ;   Label: LAB_00437e14
    JLE 0x00437e1e                      ; 00437e16
        ;   XREF to: 00437e1e (CONDITIONAL_JUMP)  ; LAB_00437e1e
    CMP EAX,EBX                         ; 00437e18
    JG 0x00437dbc                       ; 00437e1a
        ;   XREF to: 00437dbc (CONDITIONAL_JUMP)  ; LAB_00437dbc
    MOV EDX,EBX                         ; 00437e1c
    SUB EDX,EAX                         ; 00437e1e
        ;   Label: LAB_00437e1e
    INC EDX                             ; 00437e20
    PUSH EDX                            ; 00437e21
    MOV EDX,dword ptr [ESP + 0x44]      ; 00437e22
    ADD EDX,EAX                         ; 00437e26
    PUSH EDX                            ; 00437e28
    ADD EAX,dword ptr [ESP + 0x2c]      ; 00437e29
    PUSH EAX                            ; 00437e2d
    CALL dword ptr [ESP + 0x34]         ; 00437e2e
    ADD ESP,0xc                         ; 00437e32
    INC EDI                             ; 00437e35
    ADD EBP,0x4                         ; 00437e36
    JMP 0x00437d9d                      ; 00437e39
        ;   XREF to: 00437d9d (UNCONDITIONAL_JUMP)  ; LAB_00437d9d
    MOV EAX,dword ptr [ESP + 0x48]      ; 00437e3e
        ;   Label: LAB_00437e3e
    MOV EDX,dword ptr [EBP + 0x1c4354c] ; 00437e42
    ADD EAX,EAX                         ; 00437e48
    ADD EDX,EAX                         ; 00437e4a
    MOV EAX,dword ptr [ESP + 0xc]       ; 00437e4c
    MOV dword ptr [ESP + 0x20],EDX      ; 00437e50
    MOV EDX,EAX                         ; 00437e54
    SAR EDX,0x1f                        ; 00437e56
    SUB EAX,EDX                         ; 00437e59
    SAR EAX,0x1                         ; 00437e5b
    MOV EDX,dword ptr [ESP + 0x54]      ; 00437e5d
    MOV dword ptr [ESP + 0xc],EAX       ; 00437e61
    TEST EDX,EDX                        ; 00437e65
    JLE 0x00437d34                      ; 00437e67
        ;   XREF to: 00437d34 (CONDITIONAL_JUMP)  ; LAB_00437d34
    MOV dword ptr [ESP + 0x4],EDI       ; 00437e6d
    XOR EBP,EBP                         ; 00437e71
    ADD EAX,EAX                         ; 00437e73
    MOV dword ptr [ESP + 0x10],EBP      ; 00437e75
    MOV dword ptr [ESP],EAX             ; 00437e79
    CMP dword ptr [ESP + 0x44],0x0      ; 00437e7c
        ;   Label: LAB_00437e7c
    JZ 0x00437eeb                       ; 00437e81
        ;   XREF to: 00437eeb (CONDITIONAL_JUMP)  ; LAB_00437eeb
    MOV EAX,dword ptr [ESP + 0x10]      ; 00437e83
    XOR EBP,EBP                         ; 00437e87
    XOR EDI,EDI                         ; 00437e89
    MOV dword ptr [ESP + 0x18],EAX      ; 00437e8b
    MOV EDX,dword ptr [ESP + 0x44]      ; 00437e8f
        ;   Label: LAB_00437e8f
    ADD EDX,dword ptr [ESP + 0x18]      ; 00437e93
    CMP EDI,dword ptr [EDX]             ; 00437e97
    JGE 0x00437eb4                      ; 00437e99
        ;   XREF to: 00437eb4 (CONDITIONAL_JUMP)  ; LAB_00437eb4
    MOV EAX,dword ptr [EDX + EBP*0x1 + 0x4] ; 00437e9b
    MOV EDX,dword ptr [EDX + EBP*0x1 + 0x44] ; 00437e9f
    ADD EDX,EAX                         ; 00437ea3
    DEC EDX                             ; 00437ea5
    CMP EAX,ESI                         ; 00437ea6
    JGE 0x00437f05                      ; 00437ea8
        ;   XREF to: 00437f05 (CONDITIONAL_JUMP)  ; LAB_00437f05
    CMP EDX,ESI                         ; 00437eaa
    JGE 0x00437f03                      ; 00437eac
        ;   XREF to: 00437f03 (CONDITIONAL_JUMP)  ; LAB_00437f03
    INC EDI                             ; 00437eae
        ;   Label: LAB_00437eae
    ADD EBP,0x4                         ; 00437eaf
    JMP 0x00437e8f                      ; 00437eb2
        ;   XREF to: 00437e8f (UNCONDITIONAL_JUMP)  ; LAB_00437e8f
    MOV EDI,dword ptr [ESP + 0x10]      ; 00437eb4
        ;   Label: LAB_00437eb4
    MOV EAX,dword ptr [ESP]             ; 00437eb8
    MOV EBP,dword ptr [ESP + 0x20]      ; 00437ebb
    MOV EDX,dword ptr [ESP + 0x40]      ; 00437ebf
    MOV ECX,dword ptr [ESP + 0x4]       ; 00437ec3
    ADD EDI,0x84                        ; 00437ec7
    ADD EBP,EAX                         ; 00437ecd
    MOV EAX,dword ptr [ESP + 0x50]      ; 00437ecf
    MOV dword ptr [ESP + 0x10],EDI      ; 00437ed3
    ADD EDX,EAX                         ; 00437ed7
    MOV dword ptr [ESP + 0x20],EBP      ; 00437ed9
    MOV dword ptr [ESP + 0x40],EDX      ; 00437edd
    CMP EDI,ECX                         ; 00437ee1
    JGE 0x00437d34                      ; 00437ee3
        ;   XREF to: 00437d34 (CONDITIONAL_JUMP)  ; LAB_00437d34
    JMP 0x00437e7c                      ; 00437ee9
        ;   XREF to: 00437e7c (UNCONDITIONAL_JUMP)  ; LAB_00437e7c
    MOV EDX,dword ptr [ESP + 0x50]      ; 00437eeb
        ;   Label: LAB_00437eeb
    PUSH EDX                            ; 00437eef
    MOV ECX,dword ptr [ESP + 0x44]      ; 00437ef0
    PUSH ECX                            ; 00437ef4
    MOV EDI,dword ptr [ESP + 0x28]      ; 00437ef5
    PUSH EDI                            ; 00437ef9
    CALL dword ptr [ESP + 0x34]         ; 00437efa
    ADD ESP,0xc                         ; 00437efe
    JMP 0x00437eb4                      ; 00437f01
        ;   XREF to: 00437eb4 (UNCONDITIONAL_JUMP)  ; LAB_00437eb4
    MOV EAX,ESI                         ; 00437f03
        ;   Label: LAB_00437f03
    CMP EDX,EBX                         ; 00437f05
        ;   Label: LAB_00437f05
    JLE 0x00437f0f                      ; 00437f07
        ;   XREF to: 00437f0f (CONDITIONAL_JUMP)  ; LAB_00437f0f
    CMP EAX,EBX                         ; 00437f09
    JG 0x00437eae                       ; 00437f0b
        ;   XREF to: 00437eae (CONDITIONAL_JUMP)  ; LAB_00437eae
    MOV EDX,EBX                         ; 00437f0d
    SUB EDX,EAX                         ; 00437f0f
        ;   Label: LAB_00437f0f
    INC EDX                             ; 00437f11
    PUSH EDX                            ; 00437f12
    MOV EDX,dword ptr [ESP + 0x44]      ; 00437f13
    ADD EDX,EAX                         ; 00437f17
    PUSH EDX                            ; 00437f19
    ADD EAX,EAX                         ; 00437f1a
    ADD EAX,dword ptr [ESP + 0x28]      ; 00437f1c
    PUSH EAX                            ; 00437f20
    CALL dword ptr [ESP + 0x34]         ; 00437f21
    ADD ESP,0xc                         ; 00437f25
    INC EDI                             ; 00437f28
    ADD EBP,0x4                         ; 00437f29
    JMP 0x00437e8f                      ; 00437f2c
        ;   XREF to: 00437e8f (UNCONDITIONAL_JUMP)  ; LAB_00437e8f

