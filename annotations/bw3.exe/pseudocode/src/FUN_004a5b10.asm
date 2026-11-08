; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a5b10(int param_1,float param_2)
;
; Local Variables:
; undefined1[12]   Stack[-0x12c]:12  local_12c
; undefined        Stack[-0x110]:1  local_110
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_00415570 at 00415677
;   FUN_004a7160 at 004a71b2
;   FUN_005766b0 at 005769e7
;
; Referenced Globals:
;   TerminatedCString s_env_torch_wav_f_005c0b9b
;   undefined4 DAT_005c0bb4
;   undefined4 DAT_005c0bbc
;   undefined4 DAT_005c0bc4
;   undefined4 DAT_005c0bcc
;   undefined4 DAT_005c0bd4
;   undefined4 DAT_005fba60
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_00603b28
;   undefined4 DAT_006045f8
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_01ed78c8
;   undefined4 DAT_020288b4
;
; Called Functions:
;   FUN_0040ce40
;   FUN_0042fbd0
;   FUN_00491aa0
;   FUN_004a23c0
;   FUN_004a2560
;   FUN_004a6dd0
;   FUN_0053ed80
;   FUN_00555f60
;   FUN_00555fd0
;   FUN_00556050
;   FUN_00560af0
;   FUN_00560b00
;   FUN_005a28c0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5b10
        ;   Label: FUN_004a5b10
    PUSH ESI                            ; 004a5b11
    PUSH EDI                            ; 004a5b12
    PUSH EBP                            ; 004a5b13
    MOV EBP,ESP                         ; 004a5b14
    SUB ESP,0x110                       ; 004a5b16
    AND ESP,0xfffffff8                  ; 004a5b1c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a5b1f
    CMP byte ptr [EAX + 0x1b8],0x0      ; 004a5b22
    JZ 0x004a5bb7                       ; 004a5b29
        ;   XREF to: 004a5bb7 (CONDITIONAL_JUMP)  ; LAB_004a5bb7
    CMP dword ptr [EAX + 0x1b4],0x0     ; 004a5b2f
    JNZ 0x004a5bb7                      ; 004a5b36
        ;   XREF to: 004a5bb7 (CONDITIONAL_JUMP)  ; LAB_004a5bb7
    ADD EAX,0x1b8                       ; 004a5b3c
    PUSH EAX                            ; 004a5b41
    MOV ECX,dword ptr [0x005fba60]      ; 004a5b42 | DAT_005fba60
    PUSH ECX                            ; 004a5b48
    CALL FUN_00491aa0                   ; 004a5b49
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 004a5b4e
    TEST EAX,EAX                        ; 004a5b51
    JZ 0x004a5bb7                       ; 004a5b53
        ;   XREF to: 004a5bb7 (CONDITIONAL_JUMP)  ; LAB_004a5bb7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a5b55
    MOV EBX,dword ptr [EAX + 0x1a8]     ; 004a5b58
    CMP EBX,0x1                         ; 004a5b5e
    JZ 0x004a5ba0                       ; 004a5b61
        ;   XREF to: 004a5ba0 (CONDITIONAL_JUMP)  ; LAB_004a5ba0
    CMP EBX,0x3                         ; 004a5b63
    JZ 0x004a5ba0                       ; 004a5b66
        ;   XREF to: 004a5ba0 (CONDITIONAL_JUMP)  ; LAB_004a5ba0
    LEA ESI,[EAX + 0x20]                ; 004a5b68
    XOR EBX,EBX                         ; 004a5b6b
    PUSH 0xffff                         ; 004a5b6d
        ;   Label: LAB_004a5b6d
    PUSH 0x1                            ; 004a5b72
    PUSH 0x10000                        ; 004a5b74
    PUSH 0x4000                         ; 004a5b79
    PUSH 0x0                            ; 004a5b7e
    PUSH ESI                            ; 004a5b80
    MOV EDI,dword ptr [0x005fc5a0]      ; 004a5b81 | DAT_005fc5a0
    PUSH EDI                            ; 004a5b87
    INC EBX                             ; 004a5b88
    CALL FUN_004a23c0                   ; 004a5b89
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a23c0()
    ADD ESP,0x1c                        ; 004a5b8e
    CMP EBX,0xa                         ; 004a5b91
    JL 0x004a5b6d                       ; 004a5b94
        ;   XREF to: 004a5b6d (CONDITIONAL_JUMP)  ; LAB_004a5b6d
    LEA EAX,[EAX]                       ; 004a5b96
    LEA EDX,[EDX]                       ; 004a5b9c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a5ba0
        ;   Label: LAB_004a5ba0
    MOV dword ptr [EAX + 0x290],0x1     ; 004a5ba3
    MOV dword ptr [EAX + 0x1b4],0x1     ; 004a5bad
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a5bb7
        ;   Label: LAB_004a5bb7
    CMP byte ptr [EAX + 0x21c],0x0      ; 004a5bba
    JZ 0x004a5c29                       ; 004a5bc1
        ;   XREF to: 004a5c29 (CONDITIONAL_JUMP)  ; LAB_004a5c29
    CMP dword ptr [EAX + 0x1b4],0x0     ; 004a5bc3
    JZ 0x004a5c29                       ; 004a5bca
        ;   XREF to: 004a5c29 (CONDITIONAL_JUMP)  ; LAB_004a5c29
    ADD EAX,0x21c                       ; 004a5bcc
    PUSH EAX                            ; 004a5bd1
    MOV ECX,dword ptr [0x005fba60]      ; 004a5bd2 | DAT_005fba60
    PUSH ECX                            ; 004a5bd8
    CALL FUN_00491aa0                   ; 004a5bd9
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 004a5bde
    TEST EAX,EAX                        ; 004a5be1
    JZ 0x004a5c29                       ; 004a5be3
        ;   XREF to: 004a5c29 (CONDITIONAL_JUMP)  ; LAB_004a5c29
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a5be5
    MOV EBX,dword ptr [EAX + 0x1a8]     ; 004a5be8
    MOV dword ptr [EAX + 0x1b4],0x0     ; 004a5bee
    CMP EBX,0x3                         ; 004a5bf8
    JZ 0x004a5c29                       ; 004a5bfb
        ;   XREF to: 004a5c29 (CONDITIONAL_JUMP)  ; LAB_004a5c29
    PUSH 0x4000                         ; 004a5bfd
    FLD float ptr [EAX + 0x15c]         ; 004a5c02
    PUSH 0x0                            ; 004a5c08
    FMUL double ptr [0x005c0bb4]        ; 004a5c0a | DAT_005c0bb4
    SUB ESP,0x4                         ; 004a5c10
    ADD EAX,0x20                        ; 004a5c13
    FSTP float ptr [ESP]                ; 004a5c16
    PUSH EAX                            ; 004a5c19
    MOV ESI,dword ptr [0x005fc5a0]      ; 004a5c1a | DAT_005fc5a0
    PUSH ESI                            ; 004a5c20
    CALL FUN_004a2560                   ; 004a5c21
        ;   XREF to: 004a2560 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2560()
    ADD ESP,0x14                        ; 004a5c26
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a5c29
        ;   Label: LAB_004a5c29
    CMP dword ptr [EAX + 0x1b4],0x0     ; 004a5c2c
    JZ 0x004a5e56                       ; 004a5c33
        ;   XREF to: 004a5e56 (CONDITIONAL_JUMP)  ; LAB_004a5e56
    FLD float ptr [EBP + 0x18]          ; 004a5c39
    FMUL double ptr [0x005c0bbc]        ; 004a5c3c | DAT_005c0bbc
    FADD float ptr [EAX + 0x164]        ; 004a5c42
    FSTP float ptr [EAX + 0x164]        ; 004a5c48
    CMP dword ptr [EAX + 0x164],0x41000000 ; 004a5c4e
    JL 0x004a5c6c                       ; 004a5c58
        ;   XREF to: 004a5c6c (CONDITIONAL_JUMP)  ; LAB_004a5c6c
    FLD float ptr [EAX + 0x164]         ; 004a5c5a
    FADD float ptr [0x005c0bc4]         ; 004a5c60 | DAT_005c0bc4
    FSTP float ptr [EAX + 0x164]        ; 004a5c66
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a5c6c
        ;   Label: LAB_004a5c6c
    MOV dword ptr [EAX + 0x30],0x0      ; 004a5c6f
    MOV dword ptr [EAX + 0x38],0x0      ; 004a5c76
    PUSH EAX                            ; 004a5c7d
    MOV dword ptr [EAX + 0x34],0x0      ; 004a5c7e
    CALL FUN_004a6dd0                   ; 004a5c85
        ;   XREF to: 004a6dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6dd0()
    ADD ESP,0x4                         ; 004a5c8a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a5c8d
    MOV EBX,dword ptr [EAX + 0x2a0]     ; 004a5c90
    TEST EBX,EBX                        ; 004a5c96
    JZ 0x004a5eef                       ; 004a5c98
        ;   XREF to: 004a5eef (CONDITIONAL_JUMP)  ; LAB_004a5eef
    MOV EDX,dword ptr [EAX + 0x1b0]     ; 004a5c9e
    PUSH EDX                            ; 004a5ca4
    MOV ECX,dword ptr [0x006045f8]      ; 004a5ca5 | DAT_006045f8
    PUSH ECX                            ; 004a5cab
    CALL FUN_00560af0                   ; 004a5cac
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00560af0()
    ADD ESP,0x8                         ; 004a5cb1
    TEST EAX,EAX                        ; 004a5cb4
    JZ 0x004a5e5d                       ; 004a5cb6
        ;   XREF to: 004a5e5d (CONDITIONAL_JUMP)  ; LAB_004a5e5d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a5cbc
        ;   Label: LAB_004a5cbc
    CMP dword ptr [EAX + 0x288],0x0     ; 004a5cbf
    JZ 0x004a5e11                       ; 004a5cc6
        ;   XREF to: 004a5e11 (CONDITIONAL_JUMP)  ; LAB_004a5e11
    LEA EAX,[ESP + 0x74]                ; 004a5ccc
    PUSH EAX                            ; 004a5cd0
    CALL FUN_0053ed80                   ; 004a5cd1
        ;   XREF to: 0053ed80 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ed80()
    ADD ESP,0x4                         ; 004a5cd6
    LEA EDX,[ESP + 0x74]                ; 004a5cd9
    MOV EAX,[0x01d5ba14]                ; 004a5cdd | DAT_01d5ba14
    PUSH EDX                            ; 004a5ce2
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004a5ce3
    PUSH EAX                            ; 004a5cea
    MOV EBX,dword ptr [EAX + 0x154]     ; 004a5ceb
    CALL dword ptr [EBX + 0x3c]         ; 004a5cf1
    ADD ESP,0x8                         ; 004a5cf4
    CMP EAX,0x2                         ; 004a5cf7
    JNZ 0x004a5e11                      ; 004a5cfa
        ;   XREF to: 004a5e11 (CONDITIONAL_JUMP)  ; LAB_004a5e11
    MOV EDX,dword ptr [0x01d5ba14]      ; 004a5d00 | DAT_01d5ba14
    MOV EDX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 004a5d06
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a5d0d
    LEA EAX,[EDX + 0x20]                ; 004a5d10
    LEA EDI,[ESP + 0xc4]                ; 004a5d13
    LEA ESI,[ESP + 0xd0]                ; 004a5d1a
    FLD float ptr [EAX]                 ; 004a5d21
    FLD float ptr [EAX + 0x4]           ; 004a5d23
    FLD float ptr [EAX + 0x8]           ; 004a5d26
    FXCH ST2                            ; 004a5d29
    FSUB float ptr [EBX + 0x20]         ; 004a5d2b
    FXCH                                ; 004a5d2e
    FSUB float ptr [EBX + 0x24]         ; 004a5d30
    FXCH ST2                            ; 004a5d33
    FSUB float ptr [EBX + 0x28]         ; 004a5d35
    FXCH                                ; 004a5d38
    FSTP float ptr [ESP + 0xd0]         ; 004a5d3a
    FXCH                                ; 004a5d41
    FSTP float ptr [ESP + 0xd4]         ; 004a5d43
    FSTP float ptr [ESP + 0xd8]         ; 004a5d4a
    MOVSD ES:EDI,ESI                    ; 004a5d51
    MOVSD ES:EDI,ESI                    ; 004a5d52
    MOVSD ES:EDI,ESI                    ; 004a5d53
    ADD EBX,0x20                        ; 004a5d54
    FLD float ptr [ESP + 0xc8]          ; 004a5d57
    FCOMP double ptr [0x005c0bcc]       ; 004a5d5e | DAT_005c0bcc
    FNSTSW AX                           ; 004a5d64
    SAHF                                ; 004a5d66
    JBE 0x004a5e11                      ; 004a5d67
        ;   XREF to: 004a5e11 (CONDITIONAL_JUMP)  ; LAB_004a5e11
    FLD float ptr [ESP + 0xc8]          ; 004a5d6d
    FCOMP float ptr [ESP + 0x8c]        ; 004a5d74
    FNSTSW AX                           ; 004a5d7b
    SAHF                                ; 004a5d7d
    JNC 0x004a5e11                      ; 004a5d7e
        ;   XREF to: 004a5e11 (CONDITIONAL_JUMP)  ; LAB_004a5e11
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a5d84
    FLD float ptr [EAX + 0x158]         ; 004a5d87
    FADD float ptr [EAX + 0x160]        ; 004a5d8d
    FMUL double ptr [0x005c0bd4]        ; 004a5d93 | DAT_005c0bd4
    CALL FUN_005a3120                   ; 004a5d99
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x100]       ; 004a5d9e
    MOV EAX,dword ptr [ESP + 0x100]     ; 004a5da5
    FLD float ptr [ESP + 0xc4]          ; 004a5dac
    MOV dword ptr [ESP + 0x10c],EAX     ; 004a5db3
    FABS                                ; 004a5dba
    FLD float ptr [ESP + 0x90]          ; 004a5dbc
    FILD dword ptr [ESP + 0x10c]        ; 004a5dc3
    FSTP float ptr [ESP + 0xfc]         ; 004a5dca
    FADD float ptr [ESP + 0xfc]         ; 004a5dd1
    FSTP double ptr [ESP + 0x8]         ; 004a5dd8
    FCOMP double ptr [ESP + 0x8]        ; 004a5ddc
    FNSTSW AX                           ; 004a5de0
    SAHF                                ; 004a5de2
    JNC 0x004a5e11                      ; 004a5de3
        ;   XREF to: 004a5e11 (CONDITIONAL_JUMP)  ; LAB_004a5e11
    FLD float ptr [ESP + 0xcc]          ; 004a5de5
    FABS                                ; 004a5dec
    FCOMP double ptr [ESP + 0x8]        ; 004a5dee
    FNSTSW AX                           ; 004a5df2
    SAHF                                ; 004a5df4
    JNC 0x004a5e11                      ; 004a5df5
        ;   XREF to: 004a5e11 (CONDITIONAL_JUMP)  ; LAB_004a5e11
    PUSH 0x40000000                     ; 004a5df7
    PUSH 0x1                            ; 004a5dfc
    PUSH 0x40000000                     ; 004a5dfe
    PUSH 0x0                            ; 004a5e03
    PUSH 0x0                            ; 004a5e05
    PUSH EBX                            ; 004a5e07
    PUSH EDX                            ; 004a5e08
    CALL FUN_0042fbd0                   ; 004a5e09
        ;   XREF to: 0042fbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042fbd0()
    ADD ESP,0x1c                        ; 004a5e0e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a5e11
        ;   Label: LAB_004a5e11
    CMP dword ptr [EAX + 0x28c],0x0     ; 004a5e14
    JZ 0x004a5e56                       ; 004a5e1b
        ;   XREF to: 004a5e56 (CONDITIONAL_JUMP)  ; LAB_004a5e56
    CMP dword ptr [EAX + 0x29c],0x0     ; 004a5e1d
    JL 0x004a5f1a                       ; 004a5e24
        ;   XREF to: 004a5f1a (CONDITIONAL_JUMP)  ; LAB_004a5f1a
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a5e2a
        ;   Label: LAB_004a5e2a
    MOV EAX,[0x00603b28]                ; 004a5e2d | DAT_00603b28
    MOV EDX,dword ptr [EDX + 0x29c]     ; 004a5e32
    CMP EDX,dword ptr [EAX + 0x150fec]  ; 004a5e38 | DAT_020288b4
    JGE 0x004a5f29                      ; 004a5e3e
        ;   XREF to: 004a5f29 (CONDITIONAL_JUMP)  ; LAB_004a5f29
    MOV EAX,[0x00603b28]                ; 004a5e44 | DAT_00603b28 | DAT_01ed78c8
        ;   Label: LAB_004a5e44
    CMP dword ptr [EAX + 0x150fec],0x0  ; 004a5e49 | DAT_020288b4
    JG 0x004a5f3b                       ; 004a5e50
        ;   XREF to: 004a5f3b (CONDITIONAL_JUMP)  ; LAB_004a5f3b
    MOV ESP,EBP                         ; 004a5e56
        ;   Label: LAB_004a5e56
    POP EBP                             ; 004a5e58
    POP EDI                             ; 004a5e59
    POP ESI                             ; 004a5e5a
    POP EBX                             ; 004a5e5b
    RET                                 ; 004a5e5c
    PUSH 0x3f866666                     ; 004a5e5d
        ;   Label: LAB_004a5e5d
    PUSH 0x3f733333                     ; 004a5e62
    CALL FUN_0040ce40                   ; 004a5e67
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x114],EAX     ; 004a5e6c
    FLD float ptr [ESP + 0x114]         ; 004a5e73
    ADD ESP,0x8                         ; 004a5e7a
    SUB ESP,0x8                         ; 004a5e7d
    FSTP double ptr [ESP]               ; 004a5e80
    PUSH 0x5c0b9b                       ; 004a5e83 | = "env-torch.wav * %f"
    LEA EAX,[ESP + 0x1c]                ; 004a5e88
    PUSH EAX                            ; 004a5e8c
    CALL FUN_005a28c0                   ; 004a5e8d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 004a5e92
    CALL FUN_00555fd0                   ; 004a5e95
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555fd0()
    PUSH 0x2                            ; 004a5e9a
    PUSH 0x3f800000                     ; 004a5e9c
    PUSH 0x0                            ; 004a5ea1
    CALL FUN_0040ce40                   ; 004a5ea3
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x118],EAX     ; 004a5ea8
    FLD float ptr [ESP + 0x118]         ; 004a5eaf
    ADD ESP,0x8                         ; 004a5eb6
    SUB ESP,0x8                         ; 004a5eb9
    FSTP double ptr [ESP]               ; 004a5ebc
    CALL FUN_00555f60                   ; 004a5ebf
        ;   XREF to: 00555f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00555f60()
    ADD ESP,0xc                         ; 004a5ec4
    LEA EDX,[ESP + 0x10]                ; 004a5ec7
    PUSH EDX                            ; 004a5ecb
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a5ecc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a5ecf
    PUSH EBX                            ; 004a5ed2
    MOV EAX,dword ptr [EAX + 0x154]     ; 004a5ed3
    CALL dword ptr [EAX + 0x2c]         ; 004a5ed9
    ADD ESP,0x8                         ; 004a5edc
    MOV dword ptr [EBX + 0x1b0],EAX     ; 004a5edf
    CALL FUN_00556050                   ; 004a5ee5
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; undefined FUN_00556050()
    JMP 0x004a5cbc                      ; 004a5eea
        ;   XREF to: 004a5cbc (UNCONDITIONAL_JUMP)  ; LAB_004a5cbc
    MOV ESI,dword ptr [EAX + 0x1b0]     ; 004a5eef
        ;   Label: LAB_004a5eef
    TEST ESI,ESI                        ; 004a5ef5
    JZ 0x004a5cbc                       ; 004a5ef7
        ;   XREF to: 004a5cbc (CONDITIONAL_JUMP)  ; LAB_004a5cbc
    PUSH ESI                            ; 004a5efd
    MOV EAX,[0x006045f8]                ; 004a5efe | DAT_006045f8
    PUSH EAX                            ; 004a5f03
    CALL FUN_00560b00                   ; 004a5f04
        ;   XREF to: 00560b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00560b00()
    ADD ESP,0x8                         ; 004a5f09
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a5f0c
    MOV dword ptr [EAX + 0x1b0],EBX     ; 004a5f0f
    JMP 0x004a5cbc                      ; 004a5f15
        ;   XREF to: 004a5cbc (UNCONDITIONAL_JUMP)  ; LAB_004a5cbc
    MOV dword ptr [EAX + 0x29c],0x0     ; 004a5f1a
        ;   Label: LAB_004a5f1a
    JMP 0x004a5e2a                      ; 004a5f24
        ;   XREF to: 004a5e2a (UNCONDITIONAL_JUMP)  ; LAB_004a5e2a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a5f29
        ;   Label: LAB_004a5f29
    MOV dword ptr [EAX + 0x29c],0x0     ; 004a5f2c
    JMP 0x004a5e44                      ; 004a5f36
        ;   XREF to: 004a5e44 (UNCONDITIONAL_JUMP)  ; LAB_004a5e44
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a5f3b
        ;   Label: LAB_004a5f3b
    MOV EDX,dword ptr [EDX + 0x29c]     ; 004a5f3e
    MOV EBX,dword ptr [EAX + EDX*0x4 + 0x150ff0] ; 004a5f44
    LEA EAX,[ESP + 0x9c]                ; 004a5f4b
    PUSH EAX                            ; 004a5f52
    CALL FUN_0053ed80                   ; 004a5f53
        ;   XREF to: 0053ed80 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ed80()
    ADD ESP,0x4                         ; 004a5f58
    LEA EAX,[ESP + 0x9c]                ; 004a5f5b
    PUSH EAX                            ; 004a5f62
    MOV EDX,dword ptr [EBX + 0x154]     ; 004a5f63
    PUSH EBX                            ; 004a5f69
    CALL dword ptr [EDX + 0x3c]         ; 004a5f6a
    ADD ESP,0x8                         ; 004a5f6d
    CMP EAX,0x2                         ; 004a5f70
    JNZ 0x004a6074                      ; 004a5f73
        ;   XREF to: 004a6074 (CONDITIONAL_JUMP)  ; LAB_004a6074
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a5f79
    LEA EAX,[EBX + 0x20]                ; 004a5f7c
    LEA EDI,[ESP + 0xe8]                ; 004a5f7f
    LEA ESI,[ESP + 0xdc]                ; 004a5f86
    FLD float ptr [EAX + 0x4]           ; 004a5f8d
    FLD float ptr [EAX + 0x8]           ; 004a5f90
    FLD float ptr [EAX]                 ; 004a5f93
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a5f95
    FSUB float ptr [EDX + 0x20]         ; 004a5f98
    FXCH ST2                            ; 004a5f9b
    FSUB float ptr [EDX + 0x24]         ; 004a5f9d
    FXCH                                ; 004a5fa0
    FSUB float ptr [EDX + 0x28]         ; 004a5fa2
    FXCH ST2                            ; 004a5fa5
    FSTP float ptr [ESP + 0xdc]         ; 004a5fa7
    FSTP float ptr [ESP + 0xe0]         ; 004a5fae
    FSTP float ptr [ESP + 0xe4]         ; 004a5fb5
    MOVSD ES:EDI,ESI                    ; 004a5fbc
    MOVSD ES:EDI,ESI                    ; 004a5fbd
    MOVSD ES:EDI,ESI                    ; 004a5fbe
    FLD float ptr [EAX + 0x158]         ; 004a5fbf
    FADD float ptr [EAX + 0x160]        ; 004a5fc5
    FMUL double ptr [0x005c0bd4]        ; 004a5fcb | DAT_005c0bd4
    ADD EDX,0x20                        ; 004a5fd1
    FLD float ptr [ESP + 0xec]          ; 004a5fd4
    FXCH                                ; 004a5fdb
    CALL FUN_005a3120                   ; 004a5fdd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x104]       ; 004a5fe2
    FCOMP double ptr [0x005c0bcc]       ; 004a5fe9 | DAT_005c0bcc
    FNSTSW AX                           ; 004a5fef
    SAHF                                ; 004a5ff1
    JBE 0x004a6074                      ; 004a5ff2
        ;   XREF to: 004a6074 (CONDITIONAL_JUMP)  ; LAB_004a6074
    FLD float ptr [ESP + 0xec]          ; 004a5ff8
    FCOMP float ptr [ESP + 0xb4]        ; 004a5fff
    FNSTSW AX                           ; 004a6006
    SAHF                                ; 004a6008
    JNC 0x004a6074                      ; 004a6009
        ;   XREF to: 004a6074 (CONDITIONAL_JUMP)  ; LAB_004a6074
    MOV EAX,dword ptr [ESP + 0x104]     ; 004a600b
    FLD float ptr [ESP + 0xe8]          ; 004a6012
    MOV dword ptr [ESP + 0x10c],EAX     ; 004a6019
    FABS                                ; 004a6020
    FLD float ptr [ESP + 0xb8]          ; 004a6022
    FILD dword ptr [ESP + 0x10c]        ; 004a6029
    FSTP float ptr [ESP + 0x108]        ; 004a6030
    FADD float ptr [ESP + 0x108]        ; 004a6037
    FSTP double ptr [ESP]               ; 004a603e
    FCOMP double ptr [ESP]              ; 004a6041
    FNSTSW AX                           ; 004a6044
    SAHF                                ; 004a6046
    JNC 0x004a6074                      ; 004a6047
        ;   XREF to: 004a6074 (CONDITIONAL_JUMP)  ; LAB_004a6074
    FLD float ptr [ESP + 0xf0]          ; 004a6049
    FABS                                ; 004a6050
    FCOMP double ptr [ESP]              ; 004a6052
    FNSTSW AX                           ; 004a6055
    SAHF                                ; 004a6057
    JNC 0x004a6074                      ; 004a6058
        ;   XREF to: 004a6074 (CONDITIONAL_JUMP)  ; LAB_004a6074
    PUSH 0x40000000                     ; 004a605a
    PUSH 0x0                            ; 004a605f
    PUSH 0x40000000                     ; 004a6061
    PUSH 0x0                            ; 004a6066
    PUSH 0x0                            ; 004a6068
    PUSH EDX                            ; 004a606a
    PUSH EBX                            ; 004a606b
    CALL FUN_0042fbd0                   ; 004a606c
        ;   XREF to: 0042fbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042fbd0()
    ADD ESP,0x1c                        ; 004a6071
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6074
        ;   Label: LAB_004a6074
    INC dword ptr [EAX + 0x29c]         ; 004a6077
    MOV ESP,EBP                         ; 004a607d
    POP EBP                             ; 004a607f
    POP EDI                             ; 004a6080
    POP ESI                             ; 004a6081
    POP EBX                             ; 004a6082
    RET                                 ; 004a6083

