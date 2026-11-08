; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00428cb0(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00428c9c = 00428d3e
;   undefined4 DAT_005b7e9f
;   undefined4 DAT_005b7ea7
;   undefined4 DAT_005b7eaf
;
; Called Functions:
;   FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428cb0
        ;   Label: FUN_00428cb0
    PUSH ESI                            ; 00428cb1
    PUSH EDI                            ; 00428cb2
    PUSH EBP                            ; 00428cb3
    MOV EBP,ESP                         ; 00428cb4
    SUB ESP,0x90                        ; 00428cb6
    AND ESP,0xfffffff8                  ; 00428cbc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00428cbf
    MOV EDX,dword ptr [EBX + 0xd09c]    ; 00428cc2
    PUSH EDX                            ; 00428cc8
    LEA EAX,[EBX + 0x158]               ; 00428cc9
    PUSH EAX                            ; 00428ccf
    LEA ESI,[ESP + 0x20]                ; 00428cd0
    LEA EDI,[ESP + 0x2c]                ; 00428cd4
    CALL FUN_0054dcc0                   ; 00428cd8
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x20]                ; 00428cdd
    ADD ESP,0x8                         ; 00428ce1
    LEA EAX,[ESP + 0x24]                ; 00428ce4
    MOV ECX,dword ptr [EBP + 0x18]      ; 00428ce8
    MOVSD ES:EDI,ESI                    ; 00428ceb
    MOVSD ES:EDI,ESI                    ; 00428cec
    MOVSD ES:EDI,ESI                    ; 00428ced
    CMP EAX,ECX                         ; 00428cee
    JNZ 0x00428e28                      ; 00428cf0
        ;   XREF to: 00428e28 (CONDITIONAL_JUMP)  ; LAB_00428e28
    MOV ESI,0x1                         ; 00428cf6
        ;   Label: LAB_00428cf6
    XOR EDI,EDI                         ; 00428cfb
    LEA EAX,[EBX + 0x158]               ; 00428cfd
    MOV dword ptr [ESP + 0x84],EDI      ; 00428d03
    MOV dword ptr [ESP + 0x88],EAX      ; 00428d0a
    MOV dword ptr [ESP + 0x8c],ESI      ; 00428d11
    MOV EDX,dword ptr [ESP + 0x84]      ; 00428d18
        ;   Label: LAB_00428d18
    ADD EDX,dword ptr [EBX + 0x6c]      ; 00428d1f
    MOV ESI,0x4                         ; 00428d22
    MOV EAX,EDX                         ; 00428d27
    SAR EDX,0x1f                        ; 00428d29
    IDIV ESI                            ; 00428d2c
    CMP EDX,0x3                         ; 00428d2e
    JA 0x00428e02                       ; 00428d31
        ;   XREF to: 00428e02 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x428c9c]  ; 00428d37 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xd0a4]    ; 00428d3e
        ;   Label: caseD_0
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00428d44
    JZ 0x00428e02                       ; 00428d4c
        ;   XREF to: 00428e02 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xd08c]    ; 00428d52
    PUSH ECX                            ; 00428d58
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00428d59
    PUSH ESI                            ; 00428d60
    LEA ESI,[ESP + 0x74]                ; 00428d61
    LEA EDI,[ESP + 0x68]                ; 00428d65
    CALL FUN_0054dcc0                   ; 00428d69
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x74]                ; 00428d6e
    LEA EAX,[ESP + 0x68]                ; 00428d72
    ADD ESP,0x8                         ; 00428d76
    LEA EDX,[ESP + 0x30]                ; 00428d79
    MOVSD ES:EDI,ESI                    ; 00428d7d
    MOVSD ES:EDI,ESI                    ; 00428d7e
    MOVSD ES:EDI,ESI                    ; 00428d7f
    CMP EDX,EAX                         ; 00428d80
    JZ 0x00428d9c                       ; 00428d82
        ;   XREF to: 00428d9c (CONDITIONAL_JUMP)  ; LAB_00428d9c
    MOV EAX,dword ptr [ESP + 0x60]      ; 00428d84
    MOV dword ptr [ESP + 0x30],EAX      ; 00428d88
    MOV EAX,dword ptr [ESP + 0x64]      ; 00428d8c
    MOV dword ptr [ESP + 0x34],EAX      ; 00428d90
    MOV EAX,dword ptr [ESP + 0x68]      ; 00428d94
    MOV dword ptr [ESP + 0x38],EAX      ; 00428d98
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 00428d9c
        ;   Label: LAB_00428d9c
    FLD double ptr [0x005b7e9f]         ; 00428da4 | DAT_005b7e9f
    FLD float ptr [ESP + 0x30]          ; 00428daa
    FMUL ST1                            ; 00428dae
    FLD float ptr [ESP + 0x34]          ; 00428db0
    FMUL double ptr [0x005b7ea7]        ; 00428db4 | DAT_005b7ea7
    FLD float ptr [ESP + 0x24]          ; 00428dba
    FMULP ST3                           ; 00428dbe
    FLD float ptr [ESP + 0x28]          ; 00428dc0
    FMUL double ptr [0x005b7eaf]        ; 00428dc4 | DAT_005b7eaf
    MOV EAX,dword ptr [EBP + 0x18]      ; 00428dca
    FADDP                               ; 00428dcd
    FXCH ST2                            ; 00428dcf
    FADDP                               ; 00428dd1
    FXCH                                ; 00428dd3
    FSTP float ptr [ESP + 0x34]         ; 00428dd5
    ADD EDX,EAX                         ; 00428dd9
    LEA EAX,[ESP + 0x30]                ; 00428ddb
    FSTP float ptr [ESP + 0x30]         ; 00428ddf
        ;   Label: LAB_00428ddf
    CMP EDX,EAX                         ; 00428de3
    JZ 0x00428dfb                       ; 00428de5
        ;   XREF to: 00428dfb (CONDITIONAL_JUMP)  ; LAB_00428dfb
    MOV EAX,dword ptr [ESP + 0x30]      ; 00428de7
    MOV dword ptr [EDX],EAX             ; 00428deb
    MOV EAX,dword ptr [ESP + 0x34]      ; 00428ded
    MOV dword ptr [EDX + 0x4],EAX       ; 00428df1
    MOV EAX,dword ptr [ESP + 0x38]      ; 00428df4
    MOV dword ptr [EDX + 0x8],EAX       ; 00428df8
        ;   Label: LAB_00428df8
    INC dword ptr [ESP + 0x8c]          ; 00428dfb
        ;   Label: LAB_00428dfb
    MOV ECX,dword ptr [ESP + 0x84]      ; 00428e02
        ;   Label: default
    INC ECX                             ; 00428e09
    MOV dword ptr [ESP + 0x84],ECX      ; 00428e0a
    CMP ECX,0x4                         ; 00428e11
    JL 0x00428d18                       ; 00428e14
        ;   XREF to: 00428d18 (CONDITIONAL_JUMP)  ; LAB_00428d18
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00428e1a
    MOV ESP,EBP                         ; 00428e21
    POP EBP                             ; 00428e23
    POP EDI                             ; 00428e24
    POP ESI                             ; 00428e25
    POP EBX                             ; 00428e26
    RET                                 ; 00428e27
    MOV EAX,dword ptr [ESP + 0x24]      ; 00428e28
        ;   Label: LAB_00428e28
    MOV dword ptr [ECX],EAX             ; 00428e2c
    MOV EAX,dword ptr [ESP + 0x28]      ; 00428e2e
    MOV dword ptr [ECX + 0x4],EAX       ; 00428e32
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00428e35
    MOV dword ptr [ECX + 0x8],EAX       ; 00428e39
    JMP 0x00428cf6                      ; 00428e3c
        ;   XREF to: 00428cf6 (UNCONDITIONAL_JUMP)  ; LAB_00428cf6
    MOV EAX,dword ptr [EBX + 0xd0ac]    ; 00428e41
        ;   Label: caseD_1
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00428e47
    JZ 0x00428e02                       ; 00428e4f
        ;   XREF to: 00428e02 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0xd090]    ; 00428e51
    PUSH EAX                            ; 00428e57
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00428e58
    PUSH EDX                            ; 00428e5f
    LEA ESI,[ESP + 0x50]                ; 00428e60
    LEA EDI,[ESP + 0x14]                ; 00428e64
    CALL FUN_0054dcc0                   ; 00428e68
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x50]                ; 00428e6d
    LEA EAX,[ESP + 0x14]                ; 00428e71
    ADD ESP,0x8                         ; 00428e75
    LEA EDX,[ESP + 0x30]                ; 00428e78
    MOVSD ES:EDI,ESI                    ; 00428e7c
    MOVSD ES:EDI,ESI                    ; 00428e7d
    MOVSD ES:EDI,ESI                    ; 00428e7e
    CMP EDX,EAX                         ; 00428e7f
    JZ 0x00428e9b                       ; 00428e81
        ;   XREF to: 00428e9b (CONDITIONAL_JUMP)  ; LAB_00428e9b
    MOV EAX,dword ptr [ESP + 0xc]       ; 00428e83
    MOV dword ptr [ESP + 0x30],EAX      ; 00428e87
    MOV EAX,dword ptr [ESP + 0x10]      ; 00428e8b
    MOV dword ptr [ESP + 0x34],EAX      ; 00428e8f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00428e93
    MOV dword ptr [ESP + 0x38],EAX      ; 00428e97
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 00428e9b
        ;   Label: LAB_00428e9b
    FLD double ptr [0x005b7e9f]         ; 00428ea3 | DAT_005b7e9f
    FLD float ptr [ESP + 0x30]          ; 00428ea9
    FMUL ST1                            ; 00428ead
    FLD float ptr [ESP + 0x34]          ; 00428eaf
    FMUL double ptr [0x005b7ea7]        ; 00428eb3 | DAT_005b7ea7
    FLD float ptr [ESP + 0x24]          ; 00428eb9
    FMULP ST3                           ; 00428ebd
    FLD float ptr [ESP + 0x28]          ; 00428ebf
    FMUL double ptr [0x005b7eaf]        ; 00428ec3 | DAT_005b7eaf
    MOV ESI,dword ptr [EBP + 0x18]      ; 00428ec9
    LEA EAX,[ESP + 0x30]                ; 00428ecc
    FADDP                               ; 00428ed0
    FXCH ST2                            ; 00428ed2
    FADDP                               ; 00428ed4
    FXCH                                ; 00428ed6
    FSTP float ptr [ESP + 0x34]         ; 00428ed8
    ADD EDX,ESI                         ; 00428edc
    JMP 0x00428ddf                      ; 00428ede
        ;   XREF to: 00428ddf (UNCONDITIONAL_JUMP)  ; LAB_00428ddf
    MOV EAX,dword ptr [EBX + 0xd0bc]    ; 00428ee3
        ;   Label: caseD_2
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00428ee9
    JZ 0x00428e02                       ; 00428ef1
        ;   XREF to: 00428e02 (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBX + 0xd078]    ; 00428ef7
    PUSH ESI                            ; 00428efd
    MOV EDI,dword ptr [ESP + 0x8c]      ; 00428efe
    PUSH EDI                            ; 00428f05
    LEA ESI,[ESP + 0x8]                 ; 00428f06
    CALL FUN_0054dcc0                   ; 00428f0a
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    ADD ESP,0x8                         ; 00428f0f
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 00428f12
    LEA EDI,[ESP + 0x78]                ; 00428f1a
    MOV ESI,ESP                         ; 00428f1e
    MOV ECX,dword ptr [EBP + 0x18]      ; 00428f20
    LEA EAX,[ESP + 0x78]                ; 00428f23
    ADD EDX,ECX                         ; 00428f27
    MOVSD ES:EDI,ESI                    ; 00428f29
    MOVSD ES:EDI,ESI                    ; 00428f2a
    MOVSD ES:EDI,ESI                    ; 00428f2b
    CMP EDX,EAX                         ; 00428f2c
    JZ 0x00428dfb                       ; 00428f2e
        ;   XREF to: 00428dfb (CONDITIONAL_JUMP)  ; LAB_00428dfb
    MOV EAX,dword ptr [ESP + 0x78]      ; 00428f34
    MOV dword ptr [EDX],EAX             ; 00428f38
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00428f3a
    MOV dword ptr [EDX + 0x4],EAX       ; 00428f3e
    MOV EAX,dword ptr [ESP + 0x80]      ; 00428f41
    JMP 0x00428df8                      ; 00428f48
        ;   XREF to: 00428df8 (UNCONDITIONAL_JUMP)  ; LAB_00428df8
    MOV EAX,dword ptr [EBX + 0xd0b8]    ; 00428f4d
        ;   Label: caseD_3
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00428f53
    JZ 0x00428e02                       ; 00428f5b
        ;   XREF to: 00428e02 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xd0a0]    ; 00428f61
    PUSH ECX                            ; 00428f67
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00428f68
    PUSH ESI                            ; 00428f6f
    LEA ESI,[ESP + 0x44]                ; 00428f70
    LEA EDI,[ESP + 0x5c]                ; 00428f74
    CALL FUN_0054dcc0                   ; 00428f78
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x44]                ; 00428f7d
    ADD ESP,0x8                         ; 00428f81
    MOVSD ES:EDI,ESI                    ; 00428f84
    MOVSD ES:EDI,ESI                    ; 00428f85
    MOVSD ES:EDI,ESI                    ; 00428f86
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 00428f87
    ADD EDX,dword ptr [EBP + 0x18]      ; 00428f8f
    LEA EAX,[ESP + 0x54]                ; 00428f92
    CMP EDX,EAX                         ; 00428f96
    JZ 0x00428dfb                       ; 00428f98
        ;   XREF to: 00428dfb (CONDITIONAL_JUMP)  ; LAB_00428dfb
    MOV EAX,dword ptr [ESP + 0x54]      ; 00428f9e
    MOV dword ptr [EDX],EAX             ; 00428fa2
    MOV EAX,dword ptr [ESP + 0x58]      ; 00428fa4
    MOV dword ptr [EDX + 0x4],EAX       ; 00428fa8
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00428fab
    JMP 0x00428df8                      ; 00428faf
        ;   XREF to: 00428df8 (UNCONDITIONAL_JUMP)  ; LAB_00428df8

