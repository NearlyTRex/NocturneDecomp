; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flies_cpp_FUN_004a6c30(CFlies *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d66d9
;   undefined4 DAT_005d66e1
;
; Called Functions:
;   core_actor.cpp_FUN_00408d30
;   core_flies.cpp_FUN_004a7560
;   core_flies.cpp_FUN_004a7660
;   crt_math.c_floor_FUN_005b84d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6c30
        ;   Label: core_flies.cpp_FUN_004a6c30
    PUSH ESI                            ; 004a6c31
    PUSH EDI                            ; 004a6c32
    PUSH EBP                            ; 004a6c33
    MOV EBP,ESP                         ; 004a6c34
    SUB ESP,0x78                        ; 004a6c36
    AND ESP,0xfffffff8                  ; 004a6c39
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6c3c
    CMP dword ptr [EAX + 0x2b78],0x0    ; 004a6c3f
    JZ 0x004a6ec1                       ; 004a6c46
        ;   XREF to: 004a6ec1 (CONDITIONAL_JUMP)  ; LAB_004a6ec1
    MOV ECX,dword ptr [EAX + 0x2b64]    ; 004a6c4c
    TEST ECX,ECX                        ; 004a6c52
    JZ 0x004a6e24                       ; 004a6c54
        ;   XREF to: 004a6e24 (CONDITIONAL_JUMP)  ; LAB_004a6e24
    MOV EBX,dword ptr [ECX + 0x70]      ; 004a6c5a
    MOV EDX,ECX                         ; 004a6c5d
    CMP EBX,0x1                         ; 004a6c5f
    JNZ 0x004a6ec8                      ; 004a6c62
        ;   XREF to: 004a6ec8 (CONDITIONAL_JUMP)  ; LAB_004a6ec8
    FLD float ptr [EDX + 0x20]          ; 004a6c68
    FLD float ptr [EDX + 0x24]          ; 004a6c6b
    FLD float ptr [EDX + 0x28]          ; 004a6c6e
    LEA EDI,[ESP + 0x8]                 ; 004a6c71
    LEA ESI,[ESP + 0x44]                ; 004a6c75
    FXCH ST2                            ; 004a6c79
    FSUB float ptr [EAX + 0x20]         ; 004a6c7b
    FXCH                                ; 004a6c7e
    FSUB float ptr [EAX + 0x24]         ; 004a6c80
    FXCH ST2                            ; 004a6c83
    FSUB float ptr [EAX + 0x28]         ; 004a6c85
    FXCH                                ; 004a6c88
    FSTP float ptr [ESP + 0x44]         ; 004a6c8a
    FXCH                                ; 004a6c8e
    FSTP float ptr [ESP + 0x48]         ; 004a6c90
    FSTP float ptr [ESP + 0x4c]         ; 004a6c94
    MOVSD ES:EDI,ESI                    ; 004a6c98
    MOVSD ES:EDI,ESI                    ; 004a6c99
    MOVSD ES:EDI,ESI                    ; 004a6c9a
    FLD float ptr [ESP + 0xc]           ; 004a6c9b
    FMUL ST0                            ; 004a6c9f
    FLD float ptr [ESP + 0x8]           ; 004a6ca1
    FMUL ST0                            ; 004a6ca5
    FADDP                               ; 004a6ca7
    FLD float ptr [ESP + 0x10]          ; 004a6ca9
    FMUL ST0                            ; 004a6cad
    FADDP                               ; 004a6caf
    FSQRT                               ; 004a6cb1
    FLDZ                                ; 004a6cb3
    FCOMPP                              ; 004a6cb5
    FNSTSW AX                           ; 004a6cb7
    SAHF                                ; 004a6cb9
    JNC 0x004a6e00                      ; 004a6cba
        ;   XREF to: 004a6e00 (CONDITIONAL_JUMP)  ; LAB_004a6e00
    LEA EAX,[ESP + 0x8]                 ; 004a6cc0
    PUSH EAX                            ; 004a6cc4
    MOV ESI,dword ptr [EBP + 0x14]      ; 004a6cc5
    PUSH ESI                            ; 004a6cc8
    LEA ESI,[ESP + 0x58]                ; 004a6cc9
    LEA EDI,[ESP + 0x28]                ; 004a6ccd
    CALL core_actor.cpp_FUN_00408d30    ; 004a6cd1
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA ESI,[ESP + 0x58]                ; 004a6cd6
    ADD ESP,0x8                         ; 004a6cda
    MOVSD ES:EDI,ESI                    ; 004a6cdd
    MOVSD ES:EDI,ESI                    ; 004a6cde
    MOVSD ES:EDI,ESI                    ; 004a6cdf
    FLD float ptr [0x005d66d9]          ; 004a6ce0 | DAT_005d66d9
    FLD float ptr [ESP + 0x20]          ; 004a6ce6
    FMUL ST1                            ; 004a6cea
    FLD float ptr [ESP + 0x24]          ; 004a6cec
    FMUL ST2                            ; 004a6cf0
    FLD float ptr [ESP + 0x28]          ; 004a6cf2
    FMULP ST3                           ; 004a6cf6
    LEA EAX,[ESP + 0x14]                ; 004a6cf8
    LEA EDX,[ESP + 0x8]                 ; 004a6cfc
    LEA EDI,[ESP + 0x14]                ; 004a6d00
    LEA ESI,[ESP + 0x5c]                ; 004a6d04
    FXCH                                ; 004a6d08
    FSTP float ptr [ESP + 0x5c]         ; 004a6d0a
    FSTP float ptr [ESP + 0x60]         ; 004a6d0e
    FSTP float ptr [ESP + 0x64]         ; 004a6d12
    MOVSD ES:EDI,ESI                    ; 004a6d16
    MOVSD ES:EDI,ESI                    ; 004a6d17
    MOVSD ES:EDI,ESI                    ; 004a6d18
    CMP EDX,EAX                         ; 004a6d19
    JZ 0x004a6d35                       ; 004a6d1b
        ;   XREF to: 004a6d35 (CONDITIONAL_JUMP)  ; LAB_004a6d35
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a6d1d
    MOV dword ptr [ESP + 0x8],EAX       ; 004a6d21
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a6d25
    MOV dword ptr [ESP + 0xc],EAX       ; 004a6d29
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a6d2d
    MOV dword ptr [ESP + 0x10],EAX      ; 004a6d31
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6d35
        ;   Label: LAB_004a6d35
    MOV EDI,dword ptr [EAX + 0x2c0]     ; 004a6d38
    XOR EBX,EBX                         ; 004a6d3e
    TEST EDI,EDI                        ; 004a6d40
    JLE 0x004a6e00                      ; 004a6d42
        ;   XREF to: 004a6e00 (CONDITIONAL_JUMP)  ; LAB_004a6e00
    LEA EDX,[EAX + 0x2e0]               ; 004a6d48
    MOV ESI,dword ptr [EBP + 0x14]      ; 004a6d4e
    ADD EAX,0x2c8                       ; 004a6d51
    FLD float ptr [EAX]                 ; 004a6d56
        ;   Label: LAB_004a6d56
    FSUB float ptr [ESP + 0x8]          ; 004a6d58
    FLD float ptr [EAX + 0x4]           ; 004a6d5c
    FXCH                                ; 004a6d5f
    FSTP float ptr [EAX]                ; 004a6d61
    FSUB float ptr [ESP + 0xc]          ; 004a6d63
    FLD float ptr [EAX + 0x8]           ; 004a6d67
    FXCH                                ; 004a6d6a
    FSTP float ptr [EAX + 0x4]          ; 004a6d6c
    FSUB float ptr [ESP + 0x10]         ; 004a6d6f
    FLD float ptr [EAX + 0xc]           ; 004a6d73
    FXCH                                ; 004a6d76
    FSTP float ptr [EAX + 0x8]          ; 004a6d78
    FSUB float ptr [ESP + 0x8]          ; 004a6d7b
    FLD float ptr [EAX + 0x10]          ; 004a6d7f
    FXCH                                ; 004a6d82
    FSTP float ptr [EAX + 0xc]          ; 004a6d84
    FSUB float ptr [ESP + 0xc]          ; 004a6d87
    FLD float ptr [EAX + 0x14]          ; 004a6d8b
    FXCH                                ; 004a6d8e
    FSTP float ptr [EAX + 0x10]         ; 004a6d90
    FSUB float ptr [ESP + 0x10]         ; 004a6d93
    ADD EDX,0x34                        ; 004a6d97
    FSTP float ptr [EAX + 0x14]         ; 004a6d9a
    FLD float ptr [EDX + -0x34]         ; 004a6d9d
    FSUB float ptr [ESP + 0x8]          ; 004a6da0
    FLD float ptr [EDX + -0x30]         ; 004a6da4
    FXCH                                ; 004a6da7
    FSTP float ptr [EDX + -0x34]        ; 004a6da9
    FSUB float ptr [ESP + 0xc]          ; 004a6dac
    FLD float ptr [EDX + -0x2c]         ; 004a6db0
    FXCH                                ; 004a6db3
    FSTP float ptr [EDX + -0x30]        ; 004a6db5
    FSUB float ptr [ESP + 0x10]         ; 004a6db8
    FLD float ptr [EDX + -0x28]         ; 004a6dbc
    FXCH                                ; 004a6dbf
    FSTP float ptr [EDX + -0x2c]        ; 004a6dc1
    FSUB float ptr [ESP + 0x8]          ; 004a6dc4
    FLD float ptr [EDX + -0x24]         ; 004a6dc8
    FXCH                                ; 004a6dcb
    FSTP float ptr [EDX + -0x28]        ; 004a6dcd
    FSUB float ptr [ESP + 0xc]          ; 004a6dd0
    FLD float ptr [EDX + -0x20]         ; 004a6dd4
    FXCH                                ; 004a6dd7
    FSTP float ptr [EDX + -0x24]        ; 004a6dd9
    FSUB float ptr [ESP + 0x10]         ; 004a6ddc
    INC EBX                             ; 004a6de0
    FSTP float ptr [EDX + -0x20]        ; 004a6de1
    MOV ECX,dword ptr [ESI + 0x2c0]     ; 004a6de4
    ADD EAX,0x34                        ; 004a6dea
    CMP EBX,ECX                         ; 004a6ded
    JL 0x004a6d56                       ; 004a6def
        ;   XREF to: 004a6d56 (CONDITIONAL_JUMP)  ; LAB_004a6d56
    LEA EAX,[EAX]                       ; 004a6df5
    LEA EDX,[EDX]                       ; 004a6dfb
    MOV EBX,EBX                         ; 004a6dfe
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a6e00
        ;   Label: LAB_004a6e00
    MOV EDX,dword ptr [EDX + 0x2b64]    ; 004a6e03
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6e09
    MOV ECX,dword ptr [EDX + 0x20]      ; 004a6e0c
    MOV dword ptr [EAX + 0x20],ECX      ; 004a6e0f
    MOV ECX,dword ptr [EDX + 0x24]      ; 004a6e12
    MOV dword ptr [EAX + 0x24],ECX      ; 004a6e15
    MOV ECX,dword ptr [EDX + 0x28]      ; 004a6e18
    MOV dword ptr [EAX + 0x28],ECX      ; 004a6e1b
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004a6e1e
    MOV dword ptr [EAX + 0x2c],EDX      ; 004a6e21
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6e24
        ;   Label: LAB_004a6e24
    CMP dword ptr [EAX + 0x2b68],0x0    ; 004a6e27
    JLE 0x004a6e67                      ; 004a6e2e
        ;   XREF to: 004a6e67 (CONDITIONAL_JUMP)  ; LAB_004a6e67
    FLD float ptr [EAX + 0x2b6c]        ; 004a6e30
    FSUB float ptr [EBP + 0x18]         ; 004a6e36
    FST float ptr [EAX + 0x2b6c]        ; 004a6e39
    FLDZ                                ; 004a6e3f
    FCOMPP                              ; 004a6e41
    FNSTSW AX                           ; 004a6e43
    SAHF                                ; 004a6e45
    JC 0x004a6e67                       ; 004a6e46
        ;   XREF to: 004a6e67 (CONDITIONAL_JUMP)  ; LAB_004a6e67
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6e48
    MOV ESI,dword ptr [EAX + 0x2c0]     ; 004a6e4b
    CMP ESI,0xc8                        ; 004a6e51
    JL 0x004a6ed1                       ; 004a6e57
        ;   XREF to: 004a6ed1 (CONDITIONAL_JUMP)  ; LAB_004a6ed1
    MOV dword ptr [EAX + 0x2b68],0x0    ; 004a6e5d
    FLD float ptr [EBP + 0x18]          ; 004a6e67
        ;   Label: LAB_004a6e67
    FLD ST0                             ; 004a6e6a
    FMUL double ptr [0x005d66e1]        ; 004a6e6c | DAT_005d66e1
    XOR EBX,EBX                         ; 004a6e72
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6e74
    MOV dword ptr [ESP + 0x70],EBX      ; 004a6e77
    MOV ESI,dword ptr [EAX + 0x2c0]     ; 004a6e7b
    FSTP ST1                            ; 004a6e81
    FSTP float ptr [EBP + 0x18]         ; 004a6e83
    TEST ESI,ESI                        ; 004a6e86
    JLE 0x004a6ec1                      ; 004a6e88
        ;   XREF to: 004a6ec1 (CONDITIONAL_JUMP)  ; LAB_004a6ec1
    LEA EBX,[EAX + 0x2c4]               ; 004a6e8a
    FLD1                                ; 004a6e90
        ;   Label: LAB_004a6e90
    FLD float ptr [EBX]                 ; 004a6e92
    FADD float ptr [EBP + 0x18]         ; 004a6e94
    MOV dword ptr [ESP + 0x74],EBX      ; 004a6e97
    FST float ptr [EBX]                 ; 004a6e9b
    FSTP double ptr [ESP]               ; 004a6e9d
    FCOMP double ptr [ESP]              ; 004a6ea0
    FNSTSW AX                           ; 004a6ea3
    SAHF                                ; 004a6ea5
    JBE 0x004a6f09                      ; 004a6ea6
        ;   XREF to: 004a6f09 (CONDITIONAL_JUMP)  ; LAB_004a6f09
    MOV EDI,dword ptr [ESP + 0x70]      ; 004a6ea8
        ;   Label: LAB_004a6ea8
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a6eac
    ADD EBX,0x34                        ; 004a6eaf
    INC EDI                             ; 004a6eb2
    MOV ECX,dword ptr [EDX + 0x2c0]     ; 004a6eb3
    MOV dword ptr [ESP + 0x70],EDI      ; 004a6eb9
    CMP EDI,ECX                         ; 004a6ebd
    JL 0x004a6e90                       ; 004a6ebf
        ;   XREF to: 004a6e90 (CONDITIONAL_JUMP)  ; LAB_004a6e90
    MOV ESP,EBP                         ; 004a6ec1
        ;   Label: LAB_004a6ec1
    POP EBP                             ; 004a6ec3
    POP EDI                             ; 004a6ec4
    POP ESI                             ; 004a6ec5
    POP EBX                             ; 004a6ec6
    RET                                 ; 004a6ec7
    MOV dword ptr [EAX + 0x70],0x2      ; 004a6ec8
        ;   Label: LAB_004a6ec8
    JMP 0x004a6ec1                      ; 004a6ecf
        ;   XREF to: 004a6ec1 (UNCONDITIONAL_JUMP)  ; LAB_004a6ec1
    PUSH ESI                            ; 004a6ed1
        ;   Label: LAB_004a6ed1
    PUSH EAX                            ; 004a6ed2
    CALL core_flies.cpp_FUN_004a7560    ; 004a6ed3
        ;   XREF to: 004a7560 (UNCONDITIONAL_CALL)  ; void core_flies.cpp_FUN_004a7560(CFlies * this_ptr, int fly_index)
    ADD ESP,0x8                         ; 004a6ed8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6edb
    MOV EDX,dword ptr [EAX + 0x2c0]     ; 004a6ede
    FLD float ptr [EAX + 0x2b70]        ; 004a6ee4
    INC EDX                             ; 004a6eea
    MOV ECX,dword ptr [EAX + 0x2b68]    ; 004a6eeb
    MOV dword ptr [EAX + 0x2c0],EDX     ; 004a6ef1
    DEC ECX                             ; 004a6ef7
    FSTP float ptr [EAX + 0x2b6c]       ; 004a6ef8
    MOV dword ptr [EAX + 0x2b68],ECX    ; 004a6efe
    JMP 0x004a6e67                      ; 004a6f04
        ;   XREF to: 004a6e67 (UNCONDITIONAL_JUMP)  ; LAB_004a6e67
    MOV ESI,dword ptr [ESP + 0x4]       ; 004a6f09
        ;   Label: LAB_004a6f09
    PUSH ESI                            ; 004a6f0d
    MOV EDI,dword ptr [ESP + 0x4]       ; 004a6f0e
    PUSH EDI                            ; 004a6f12
    CALL crt_math.c_floor_FUN_005b84d0  ; 004a6f13
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x70],EAX      ; 004a6f18
    MOV dword ptr [ESP + 0x74],EDX      ; 004a6f1c
    FLD double ptr [ESP + 0x70]         ; 004a6f20
    LEA EDX,[EBX + 0x4]                 ; 004a6f24
    ADD ESP,0x8                         ; 004a6f27
    FLD float ptr [EBX]                 ; 004a6f2a
    FXCH                                ; 004a6f2c
    FSUBR ST0,ST1                       ; 004a6f2e
    LEA EAX,[EBX + 0x10]                ; 004a6f30
    FSTP ST1                            ; 004a6f33
    FSTP float ptr [EBX]                ; 004a6f35
    CMP EDX,EAX                         ; 004a6f37
    JZ 0x004a6f4b                       ; 004a6f39
        ;   XREF to: 004a6f4b (CONDITIONAL_JUMP)  ; LAB_004a6f4b
    MOV ECX,dword ptr [EAX]             ; 004a6f3b
    MOV dword ptr [EDX],ECX             ; 004a6f3d
    MOV ECX,dword ptr [EAX + 0x4]       ; 004a6f3f
    MOV dword ptr [EDX + 0x4],ECX       ; 004a6f42
    MOV ECX,dword ptr [EAX + 0x8]       ; 004a6f45
    MOV dword ptr [EDX + 0x8],ECX       ; 004a6f48
    MOV EDX,dword ptr [ESP + 0x74]      ; 004a6f4b
        ;   Label: LAB_004a6f4b
    MOV EAX,dword ptr [ESP + 0x74]      ; 004a6f4f
    ADD EDX,0x1c                        ; 004a6f53
    ADD EAX,0x10                        ; 004a6f56
    CMP EAX,EDX                         ; 004a6f59
    JZ 0x004a6f6d                       ; 004a6f5b
        ;   XREF to: 004a6f6d (CONDITIONAL_JUMP)  ; LAB_004a6f6d
    MOV ECX,dword ptr [EDX]             ; 004a6f5d
    MOV dword ptr [EAX],ECX             ; 004a6f5f
    MOV ECX,dword ptr [EDX + 0x4]       ; 004a6f61
    MOV dword ptr [EAX + 0x4],ECX       ; 004a6f64
    MOV ECX,dword ptr [EDX + 0x8]       ; 004a6f67
    MOV dword ptr [EAX + 0x8],ECX       ; 004a6f6a
    MOV EAX,dword ptr [ESP + 0x74]      ; 004a6f6d
        ;   Label: LAB_004a6f6d
    MOV EDX,dword ptr [ESP + 0x74]      ; 004a6f71
    ADD EAX,0x28                        ; 004a6f75
    ADD EDX,0x1c                        ; 004a6f78
    CMP EDX,EAX                         ; 004a6f7b
    JZ 0x004a6f8f                       ; 004a6f7d
        ;   XREF to: 004a6f8f (CONDITIONAL_JUMP)  ; LAB_004a6f8f
    MOV ECX,dword ptr [EAX]             ; 004a6f7f
    MOV dword ptr [EDX],ECX             ; 004a6f81
    MOV ECX,dword ptr [EAX + 0x4]       ; 004a6f83
    MOV dword ptr [EDX + 0x4],ECX       ; 004a6f86
    MOV ECX,dword ptr [EAX + 0x8]       ; 004a6f89
    MOV dword ptr [EDX + 0x8],ECX       ; 004a6f8c
    MOV EAX,dword ptr [ESP + 0x74]      ; 004a6f8f
        ;   Label: LAB_004a6f8f
    ADD EAX,0x1c                        ; 004a6f93
    PUSH EAX                            ; 004a6f96
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a6f97
    PUSH EAX                            ; 004a6f9a
    LEA ESI,[ESP + 0x40]                ; 004a6f9b
    LEA EDI,[ESP + 0x34]                ; 004a6f9f
    CALL core_flies.cpp_FUN_004a7660    ; 004a6fa3
        ;   XREF to: 004a7660 (UNCONDITIONAL_CALL)  ; undefined core_flies.cpp_FUN_004a7660()
    ADD ESP,0x8                         ; 004a6fa8
    LEA ESI,[ESP + 0x38]                ; 004a6fab
    MOV EDX,dword ptr [ESP + 0x74]      ; 004a6faf
    LEA EAX,[ESP + 0x2c]                ; 004a6fb3
    ADD EDX,0x28                        ; 004a6fb7
    MOVSD ES:EDI,ESI                    ; 004a6fba
    MOVSD ES:EDI,ESI                    ; 004a6fbb
    MOVSD ES:EDI,ESI                    ; 004a6fbc
    CMP EDX,EAX                         ; 004a6fbd
    JZ 0x004a6ea8                       ; 004a6fbf
        ;   XREF to: 004a6ea8 (CONDITIONAL_JUMP)  ; LAB_004a6ea8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004a6fc5
    MOV dword ptr [EDX],EAX             ; 004a6fc9
    MOV EAX,dword ptr [ESP + 0x30]      ; 004a6fcb
    MOV dword ptr [EDX + 0x4],EAX       ; 004a6fcf
    MOV EAX,dword ptr [ESP + 0x34]      ; 004a6fd2
    MOV dword ptr [EDX + 0x8],EAX       ; 004a6fd6
    JMP 0x004a6ea8                      ; 004a6fd9
        ;   XREF to: 004a6ea8 (UNCONDITIONAL_JUMP)  ; LAB_004a6ea8

