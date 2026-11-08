; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e3b10(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc0da
;   undefined4 DAT_005dc0e2
;   undefined4 DAT_005dc0ea
;   undefined4 DAT_005dc0f2
;   undefined4 DAT_005f95d4
;   undefined4 DAT_0060b280
;   undefined4 DAT_00614d30
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_00408cf0
;   FUN_00408d70
;   FUN_0040cf60
;   FUN_0046b960
;   FUN_0049d090
;   FUN_0049d7e0
;   FUN_0058a440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3b10
        ;   Label: FUN_004e3b10
    PUSH ESI                            ; 004e3b11
    PUSH EDI                            ; 004e3b12
    PUSH EBP                            ; 004e3b13
    MOV EBP,ESP                         ; 004e3b14
    SUB ESP,0x124                       ; 004e3b16
    AND ESP,0xfffffff8                  ; 004e3b1c
    MOV EDX,dword ptr [0x0060b280]      ; 004e3b1f | DAT_0060b280
    PUSH EDX                            ; 004e3b25 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 004e3b26
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 004e3b2b
    TEST EAX,EAX                        ; 004e3b2e
    JNZ 0x004e4040                      ; 004e3b30
        ;   XREF to: 004e4040 (CONDITIONAL_JUMP)  ; LAB_004e4040
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3b36
    CMP dword ptr [EAX + 0x6e4],0x0     ; 004e3b39
    JZ 0x004e4047                       ; 004e3b40
        ;   XREF to: 004e4047 (CONDITIONAL_JUMP)  ; LAB_004e4047
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e3b46
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004e3b49
    PUSH ESI                            ; 004e3b4f
    LEA ESI,[ESP + 0x74]                ; 004e3b50
    LEA EDI,[ESP + 0x20]                ; 004e3b54
    CALL dword ptr [EAX + 0xe8]         ; 004e3b58
    LEA ESI,[ESP + 0x74]                ; 004e3b5e
    ADD ESP,0x4                         ; 004e3b62
    LEA EAX,[ESP + 0x1c]                ; 004e3b65
    MOVSD ES:EDI,ESI                    ; 004e3b69
    MOVSD ES:EDI,ESI                    ; 004e3b6a
    MOVSD ES:EDI,ESI                    ; 004e3b6b
    PUSH EAX                            ; 004e3b6c
    MOV EDI,dword ptr [EBP + 0x14]      ; 004e3b6d
    PUSH EDI                            ; 004e3b70
    LEA ESI,[ESP + 0xc]                 ; 004e3b71
    CALL FUN_00408d70                   ; 004e3b75
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA EDI,[ESP + 0xcc]                ; 004e3b7a
    ADD ESP,0x8                         ; 004e3b81
    LEA ESI,[ESP + 0x4]                 ; 004e3b84
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3b88
    MOVSD ES:EDI,ESI                    ; 004e3b8b
    MOVSD ES:EDI,ESI                    ; 004e3b8c
    MOVSD ES:EDI,ESI                    ; 004e3b8d
    MOV EAX,dword ptr [EAX + 0x444]     ; 004e3b8e
    MOV dword ptr [ESP + 0x110],EAX     ; 004e3b94
    XOR EAX,EAX                         ; 004e3b9b
    MOV dword ptr [ESP + 0xac],EAX      ; 004e3b9d
    MOV dword ptr [ESP + 0xb0],EAX      ; 004e3ba4
    MOV EAX,dword ptr [ESP + 0x110]     ; 004e3bab
    MOV dword ptr [ESP + 0xb4],EAX      ; 004e3bb2
    LEA EAX,[ESP + 0xac]                ; 004e3bb9
    PUSH EAX                            ; 004e3bc0
    MOV ECX,dword ptr [EBP + 0x14]      ; 004e3bc1
    LEA EBX,[ESP + 0x8c]                ; 004e3bc4
    PUSH ECX                            ; 004e3bcb
    LEA ESI,[ESP + 0xe4]                ; 004e3bcc
    LEA EDI,[ESP + 0x18]                ; 004e3bd3
    CALL FUN_00408cf0                   ; 004e3bd7
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cf0()
    LEA ESI,[ESP + 0xe4]                ; 004e3bdc
    ADD ESP,0x8                         ; 004e3be3
    LEA EAX,[ESP + 0xf4]                ; 004e3be6
    FLD float ptr [ESP + 0xc4]          ; 004e3bed
    FLD float ptr [ESP + 0xc8]          ; 004e3bf4
    MOVSD ES:EDI,ESI                    ; 004e3bfb
    MOVSD ES:EDI,ESI                    ; 004e3bfc
    MOVSD ES:EDI,ESI                    ; 004e3bfd
    FLD float ptr [ESP + 0xcc]          ; 004e3bfe
    FLD float ptr [ESP + 0x10]          ; 004e3c05
    FLD float ptr [ESP + 0x14]          ; 004e3c09
    FLD float ptr [ESP + 0x18]          ; 004e3c0d
    LEA EDI,[ESP + 0x4c]                ; 004e3c11
    LEA ESI,[ESP + 0xb8]                ; 004e3c15
    FXCH ST2                            ; 004e3c1c
    FCHS                                ; 004e3c1e
    FXCH                                ; 004e3c20
    FCHS                                ; 004e3c22
    FXCH ST2                            ; 004e3c24
    FCHS                                ; 004e3c26
    FXCH ST5                            ; 004e3c28
    FADD float ptr [ESP + 0x10]         ; 004e3c2a
    FXCH ST4                            ; 004e3c2e
    FADD float ptr [ESP + 0x14]         ; 004e3c30
    FXCH ST3                            ; 004e3c34
    FADD float ptr [ESP + 0x18]         ; 004e3c36
    FXCH                                ; 004e3c3a
    FSTP float ptr [ESP + 0x58]         ; 004e3c3c
    FXCH ST3                            ; 004e3c40
    FSTP float ptr [ESP + 0xb8]         ; 004e3c42
    FXCH                                ; 004e3c49
    FSTP float ptr [ESP + 0xbc]         ; 004e3c4b
    FXCH                                ; 004e3c52
    FSTP float ptr [ESP + 0xc0]         ; 004e3c54
    MOVSD ES:EDI,ESI                    ; 004e3c5b
    MOVSD ES:EDI,ESI                    ; 004e3c5c
    MOVSD ES:EDI,ESI                    ; 004e3c5d
    FSTP float ptr [ESP + 0x5c]         ; 004e3c5e
    LEA EDI,[ESP + 0xf4]                ; 004e3c62
    LEA ESI,[ESP + 0x58]                ; 004e3c69
    FSTP float ptr [ESP + 0x60]         ; 004e3c6d
    MOVSD ES:EDI,ESI                    ; 004e3c71
    MOVSD ES:EDI,ESI                    ; 004e3c72
    MOVSD ES:EDI,ESI                    ; 004e3c73
    CMP EBX,EAX                         ; 004e3c74
    JZ 0x004e3ca2                       ; 004e3c76
        ;   XREF to: 004e3ca2 (CONDITIONAL_JUMP)  ; LAB_004e3ca2
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004e3c78
    MOV dword ptr [ESP + 0x88],EAX      ; 004e3c7f
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004e3c86
    MOV dword ptr [ESP + 0x8c],EAX      ; 004e3c8d
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004e3c94
    MOV dword ptr [ESP + 0x90],EAX      ; 004e3c9b
    FLD float ptr [ESP + 0x8c]          ; 004e3ca2
        ;   Label: LAB_004e3ca2
    FMUL ST0                            ; 004e3ca9
    FLD float ptr [ESP + 0x88]          ; 004e3cab
    FMUL ST0                            ; 004e3cb2
    FADDP                               ; 004e3cb4
    FLD float ptr [ESP + 0x90]          ; 004e3cb6
    FMUL ST0                            ; 004e3cbd
    FADDP                               ; 004e3cbf
    FSQRT                               ; 004e3cc1
    FLDZ                                ; 004e3cc3
    FXCH                                ; 004e3cc5
    FSTP float ptr [ESP + 0x118]        ; 004e3cc7
    FCOMP float ptr [ESP + 0x118]       ; 004e3cce
    FNSTSW AX                           ; 004e3cd5
    SAHF                                ; 004e3cd7
    JNC 0x004e4057                      ; 004e3cd8
        ;   XREF to: 004e4057 (CONDITIONAL_JUMP)  ; LAB_004e4057
    FLD1                                ; 004e3cde
    FLD float ptr [ESP + 0x88]          ; 004e3ce0
    FXCH                                ; 004e3ce7
    FDIV float ptr [ESP + 0x118]        ; 004e3ce9
    FXCH                                ; 004e3cf0
    FMUL ST1                            ; 004e3cf2
    FLD float ptr [ESP + 0x8c]          ; 004e3cf4
    FMUL ST2                            ; 004e3cfb
    FLD float ptr [ESP + 0x90]          ; 004e3cfd
    FMULP ST3                           ; 004e3d04
    FXCH                                ; 004e3d06
    FSTP float ptr [ESP + 0x88]         ; 004e3d08
    FSTP float ptr [ESP + 0x8c]         ; 004e3d0f
    FSTP float ptr [ESP + 0x90]         ; 004e3d16
    FLD float ptr [0x005f95d4]          ; 004e3d1d | DAT_005f95d4
        ;   Label: LAB_004e3d1d
    FDIVR double ptr [0x005dc0da]       ; 004e3d23 | DAT_005dc0da
    FLD1                                ; 004e3d29
    FPATAN                              ; 004e3d2b
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e3d2d
    LEA ESI,[ESP + 0xe8]                ; 004e3d30
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3d37
    LEA EDI,[ESP + 0xd0]                ; 004e3d3a
    PUSH EDX                            ; 004e3d41
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004e3d42
    FSTP float ptr [ESP + 0x4]          ; 004e3d48
    CALL dword ptr [EAX + 0xe8]         ; 004e3d4c
    LEA ESI,[ESP + 0xec]                ; 004e3d52
    ADD ESP,0x4                         ; 004e3d59
    LEA EAX,[ESP + 0xd0]                ; 004e3d5c
    MOV ECX,dword ptr [EBP + 0x14]      ; 004e3d63
    PUSH EAX                            ; 004e3d66
    MOVSD ES:EDI,ESI                    ; 004e3d67
    MOVSD ES:EDI,ESI                    ; 004e3d68
    MOVSD ES:EDI,ESI                    ; 004e3d69
    PUSH ECX                            ; 004e3d6a
    LEA ESI,[ESP + 0x3c]                ; 004e3d6b
    CALL FUN_00408d70                   ; 004e3d6f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 004e3d74
    PUSH dword ptr [ESP]                ; 004e3d77
    PUSH 0x0                            ; 004e3d7a
    PUSH 0x0                            ; 004e3d7c
    PUSH 0xff                           ; 004e3d7e
    LEA EAX,[ESP + 0x5c]                ; 004e3d83
    PUSH 0x3f800000                     ; 004e3d87
    PUSH EAX                            ; 004e3d8c
    LEA EAX,[ESP + 0xdc]                ; 004e3d8d
    PUSH EAX                            ; 004e3d94
    MOV EBX,dword ptr [0x00614d30]      ; 004e3d95 | DAT_00614d30
    PUSH EBX                            ; 004e3d9b
    CALL FUN_0049d7e0                   ; 004e3d9c
        ;   XREF to: 0049d7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d7e0()
    ADD ESP,0x20                        ; 004e3da1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3da4
    CMP dword ptr [EAX + 0x6e4],0x0     ; 004e3da7
    JZ 0x004e4040                       ; 004e3dae
        ;   XREF to: 004e4040 (CONDITIONAL_JUMP)  ; LAB_004e4040
    MOV EBX,0x1                         ; 004e3db4
    MOV dword ptr [EAX + 0x6e4],0x0     ; 004e3db9
    XOR ESI,ESI                         ; 004e3dc3
    FLD float ptr [ESP]                 ; 004e3dc5
        ;   Label: LAB_004e3dc5
    FMUL double ptr [0x005dc0e2]        ; 004e3dc8 | DAT_005dc0e2
    MOV dword ptr [ESP + 0x120],EBX     ; 004e3dce
    FILD dword ptr [ESP + 0x120]        ; 004e3dd5
    FMULP                               ; 004e3ddc
    SUB ESP,0x4                         ; 004e3dde
    FSTP float ptr [ESP]                ; 004e3de1
    PUSH ESI                            ; 004e3de4
    PUSH ESI                            ; 004e3de5
    PUSH 0xff                           ; 004e3de6
    LEA EAX,[ESP + 0x5c]                ; 004e3deb
    PUSH 0x3f800000                     ; 004e3def
    PUSH EAX                            ; 004e3df4
    LEA EAX,[ESP + 0xdc]                ; 004e3df5
    PUSH EAX                            ; 004e3dfc
    MOV EDI,dword ptr [0x00614d30]      ; 004e3dfd | DAT_00614d30
    PUSH EDI                            ; 004e3e03
    INC EBX                             ; 004e3e04
    CALL FUN_0049d7e0                   ; 004e3e05
        ;   XREF to: 0049d7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d7e0()
    ADD ESP,0x20                        ; 004e3e0a
    CMP EBX,0xa                         ; 004e3e0d
    JL 0x004e3dc5                       ; 004e3e10
        ;   XREF to: 004e3dc5 (CONDITIONAL_JUMP)  ; LAB_004e3dc5
    FLD float ptr [ESP + 0x4c]          ; 004e3e12
    FLD float ptr [ESP + 0x50]          ; 004e3e16
    FLD float ptr [ESP + 0x54]          ; 004e3e1a
    LEA EDI,[ESP + 0x40]                ; 004e3e1e
    LEA ESI,[ESP + 0xc4]                ; 004e3e22
    FXCH ST2                            ; 004e3e29
    FSUB float ptr [ESP + 0xc4]         ; 004e3e2b
    FXCH                                ; 004e3e32
    FSUB float ptr [ESP + 0xc8]         ; 004e3e34
    FXCH ST2                            ; 004e3e3b
    FSUB float ptr [ESP + 0xcc]         ; 004e3e3d
    MOVSD ES:EDI,ESI                    ; 004e3e44
    MOVSD ES:EDI,ESI                    ; 004e3e45
    MOVSD ES:EDI,ESI                    ; 004e3e46
    FXCH                                ; 004e3e47
    FSTP float ptr [ESP + 0x7c]         ; 004e3e49
    FXCH                                ; 004e3e4d
    FSTP float ptr [ESP + 0x80]         ; 004e3e4f
    LEA EDI,[ESP + 0xa0]                ; 004e3e56
    LEA ESI,[ESP + 0x7c]                ; 004e3e5d
    FSTP float ptr [ESP + 0x84]         ; 004e3e61
    MOVSD ES:EDI,ESI                    ; 004e3e68
    MOVSD ES:EDI,ESI                    ; 004e3e69
    MOVSD ES:EDI,ESI                    ; 004e3e6a
    FLD float ptr [ESP + 0xa4]          ; 004e3e6b
    FMUL ST0                            ; 004e3e72
    FLD float ptr [ESP + 0xa0]          ; 004e3e74
    FMUL ST0                            ; 004e3e7b
    FADDP                               ; 004e3e7d
    FLD float ptr [ESP + 0xa8]          ; 004e3e7f
    FMUL ST0                            ; 004e3e86
    FADDP                               ; 004e3e88
    FSQRT                               ; 004e3e8a
    FLDZ                                ; 004e3e8c
    FXCH                                ; 004e3e8e
    FSTP float ptr [ESP + 0x114]        ; 004e3e90
    FCOMP float ptr [ESP + 0x114]       ; 004e3e97
    FNSTSW AX                           ; 004e3e9e
    SAHF                                ; 004e3ea0
    JC 0x004e4073                       ; 004e3ea1
        ;   XREF to: 004e4073 (CONDITIONAL_JUMP)  ; LAB_004e4073
    XOR EAX,EAX                         ; 004e3ea7
    MOV dword ptr [ESP + 0xa4],EAX      ; 004e3ea9
    MOV dword ptr [ESP + 0xa0],EAX      ; 004e3eb0
    MOV dword ptr [ESP + 0xa8],EAX      ; 004e3eb7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3ebe
        ;   Label: LAB_004e3ebe
    FLD float ptr [EAX + 0x6f0]         ; 004e3ec1
    FMUL double ptr [0x005dc0ea]        ; 004e3ec7 | DAT_005dc0ea
    FLD float ptr [ESP + 0xa0]          ; 004e3ecd
    FXCH                                ; 004e3ed4
    FSTP float ptr [ESP + 0x11c]        ; 004e3ed6
    FMUL float ptr [ESP + 0x11c]        ; 004e3edd
    FLD float ptr [ESP + 0xa4]          ; 004e3ee4
    FMUL float ptr [ESP + 0x11c]        ; 004e3eeb
    FLD float ptr [ESP + 0xa8]          ; 004e3ef2
    FMUL float ptr [ESP + 0x11c]        ; 004e3ef9
    LEA EDI,[ESP + 0x64]                ; 004e3f00
    LEA ESI,[ESP + 0x28]                ; 004e3f04
    LEA EBX,[ESP + 0xa0]                ; 004e3f08
    LEA EAX,[ESP + 0x64]                ; 004e3f0f
    FXCH ST2                            ; 004e3f13
    FSTP float ptr [ESP + 0x28]         ; 004e3f15
    FSTP float ptr [ESP + 0x2c]         ; 004e3f19
    FSTP float ptr [ESP + 0x30]         ; 004e3f1d
    MOVSD ES:EDI,ESI                    ; 004e3f21
    MOVSD ES:EDI,ESI                    ; 004e3f22
    MOVSD ES:EDI,ESI                    ; 004e3f23
    CMP EBX,EAX                         ; 004e3f24
    JNZ 0x004e40b7                      ; 004e3f26
        ;   XREF to: 004e40b7 (CONDITIONAL_JUMP)  ; LAB_004e40b7
    XOR EBX,EBX                         ; 004e3f2c
        ;   Label: LAB_004e3f2c
    MOV ESI,0x1388                      ; 004e3f2e
    PUSH 0x40a00000                     ; 004e3f33
        ;   Label: LAB_004e3f33
    PUSH 0xc0a00000                     ; 004e3f38
    CALL FUN_0040cf60                   ; 004e3f3d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x128],EAX     ; 004e3f42
    FLD float ptr [ESP + 0x128]         ; 004e3f49
    ADD ESP,0x8                         ; 004e3f50
    MOV dword ptr [ESP + 0x120],EBX     ; 004e3f53
    FILD dword ptr [ESP + 0x120]        ; 004e3f5a
    FMUL double ptr [0x005dc0f2]        ; 004e3f61 | DAT_005dc0f2
    FSTP double ptr [ESP + 0x100]       ; 004e3f67
    FMUL double ptr [ESP + 0x100]       ; 004e3f6e
    PUSH 0x40a00000                     ; 004e3f75
    PUSH 0xc0a00000                     ; 004e3f7a
    FSTP float ptr [ESP + 0x9c]         ; 004e3f7f
    CALL FUN_0040cf60                   ; 004e3f86
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x128],EAX     ; 004e3f8b
    FLD float ptr [ESP + 0x128]         ; 004e3f92
    ADD ESP,0x8                         ; 004e3f99
    FMUL double ptr [ESP + 0x100]       ; 004e3f9c
    PUSH 0x40a00000                     ; 004e3fa3
    PUSH 0xc0a00000                     ; 004e3fa8
    FSTP float ptr [ESP + 0xa0]         ; 004e3fad
    CALL FUN_0040cf60                   ; 004e3fb4
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x128],EAX     ; 004e3fb9
    FLD float ptr [ESP + 0x128]         ; 004e3fc0
    ADD ESP,0x8                         ; 004e3fc7
    PUSH ESI                            ; 004e3fca
    PUSH 0x3                            ; 004e3fcb
    PUSH ESI                            ; 004e3fcd
    PUSH 0xffdc                         ; 004e3fce
    LEA EAX,[ESP + 0xa4]                ; 004e3fd3
    PUSH EAX                            ; 004e3fda
    LEA EAX,[ESP + 0x54]                ; 004e3fdb
    MOV EDI,dword ptr [0x00614d30]      ; 004e3fdf | DAT_00614d30
    PUSH EAX                            ; 004e3fe5
    FMUL double ptr [ESP + 0x118]       ; 004e3fe6
    PUSH EDI                            ; 004e3fed
    FSTP float ptr [ESP + 0xb8]         ; 004e3fee
    CALL FUN_0049d090                   ; 004e3ff5
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d090()
    ADD ESP,0x1c                        ; 004e3ffa
    INC EBX                             ; 004e3ffd
    FLD float ptr [ESP + 0x40]          ; 004e3ffe
    FLD float ptr [ESP + 0x44]          ; 004e4002
    FLD float ptr [ESP + 0x48]          ; 004e4006
    FXCH ST2                            ; 004e400a
    FADD float ptr [ESP + 0xa0]         ; 004e400c
    FXCH                                ; 004e4013
    FADD float ptr [ESP + 0xa4]         ; 004e4015
    FXCH ST2                            ; 004e401c
    FADD float ptr [ESP + 0xa8]         ; 004e401e
    FXCH                                ; 004e4025
    FSTP float ptr [ESP + 0x40]         ; 004e4027
    FXCH                                ; 004e402b
    FSTP float ptr [ESP + 0x44]         ; 004e402d
    FSTP float ptr [ESP + 0x48]         ; 004e4031
    CMP EBX,0x40                        ; 004e4035
    JL 0x004e3f33                       ; 004e4038
        ;   XREF to: 004e3f33 (CONDITIONAL_JUMP)  ; LAB_004e3f33
    MOV EAX,EAX                         ; 004e403e
    MOV ESP,EBP                         ; 004e4040
        ;   Label: LAB_004e4040
    POP EBP                             ; 004e4042
    POP EDI                             ; 004e4043
    POP ESI                             ; 004e4044
    POP EBX                             ; 004e4045
    RET                                 ; 004e4046
    PUSH EAX                            ; 004e4047
        ;   Label: LAB_004e4047
    CALL FUN_0058a440                   ; 004e4048
        ;   XREF to: 0058a440 (UNCONDITIONAL_CALL)  ; undefined FUN_0058a440()
    ADD ESP,0x4                         ; 004e404d
    MOV ESP,EBP                         ; 004e4050
    POP EBP                             ; 004e4052
    POP EDI                             ; 004e4053
    POP ESI                             ; 004e4054
    POP EBX                             ; 004e4055
    RET                                 ; 004e4056
    XOR EBX,EBX                         ; 004e4057
        ;   Label: LAB_004e4057
    MOV dword ptr [ESP + 0x8c],EBX      ; 004e4059
    MOV dword ptr [ESP + 0x88],EBX      ; 004e4060
    MOV dword ptr [ESP + 0x90],EBX      ; 004e4067
    JMP 0x004e3d1d                      ; 004e406e
        ;   XREF to: 004e3d1d (UNCONDITIONAL_JUMP)  ; LAB_004e3d1d
    FLD1                                ; 004e4073
        ;   Label: LAB_004e4073
    FLD float ptr [ESP + 0xa0]          ; 004e4075
    FXCH                                ; 004e407c
    FDIV float ptr [ESP + 0x114]        ; 004e407e
    FXCH                                ; 004e4085
    FMUL ST1                            ; 004e4087
    FLD float ptr [ESP + 0xa4]          ; 004e4089
    FMUL ST2                            ; 004e4090
    FLD float ptr [ESP + 0xa8]          ; 004e4092
    FMULP ST3                           ; 004e4099
    FXCH                                ; 004e409b
    FSTP float ptr [ESP + 0xa0]         ; 004e409d
    FSTP float ptr [ESP + 0xa4]         ; 004e40a4
    FSTP float ptr [ESP + 0xa8]         ; 004e40ab
    JMP 0x004e3ebe                      ; 004e40b2
        ;   XREF to: 004e3ebe (UNCONDITIONAL_JUMP)  ; LAB_004e3ebe
    MOV EAX,dword ptr [ESP + 0x64]      ; 004e40b7
        ;   Label: LAB_004e40b7
    MOV dword ptr [ESP + 0xa0],EAX      ; 004e40bb
    MOV EAX,dword ptr [ESP + 0x68]      ; 004e40c2
    MOV dword ptr [ESP + 0xa4],EAX      ; 004e40c6
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004e40cd
    MOV dword ptr [ESP + 0xa8],EAX      ; 004e40d1
    JMP 0x004e3f2c                      ; 004e40d8
        ;   XREF to: 004e3f2c (UNCONDITIONAL_JUMP)  ; LAB_004e3f2c

