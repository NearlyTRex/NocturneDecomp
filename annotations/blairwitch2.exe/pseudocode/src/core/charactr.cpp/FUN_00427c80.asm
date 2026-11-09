; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_00427c80(int param_1,float *param_2,float *param_3,int param_4,float *param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005ccdde
;   undefined4 DAT_005ccde6
;   undefined4 DAT_005ccdea
;   CGore* g_CGorePtr = 01cb8284
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_gore.cpp_FUN_004c9850
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427c80
        ;   Label: core_charactr.cpp_FUN_00427c80
    PUSH ESI                            ; 00427c81
    PUSH EDI                            ; 00427c82
    PUSH EBP                            ; 00427c83
    MOV EBP,ESP                         ; 00427c84
    SUB ESP,0xe4                        ; 00427c86
    AND ESP,0xfffffff8                  ; 00427c8c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00427c8f
    CMP dword ptr [EBX + 0x281c],0x0    ; 00427c92
    JZ 0x00427ca4                       ; 00427c99
        ;   XREF to: 00427ca4 (CONDITIONAL_JUMP)  ; LAB_00427ca4
    XOR EAX,EAX                         ; 00427c9b
    MOV ESP,EBP                         ; 00427c9d
    POP EBP                             ; 00427c9f
    POP EDI                             ; 00427ca0
    POP ESI                             ; 00427ca1
    POP EBX                             ; 00427ca2
    RET                                 ; 00427ca3
    MOV ECX,dword ptr [EBP + 0x18]      ; 00427ca4
        ;   Label: LAB_00427ca4
    PUSH ECX                            ; 00427ca7
    PUSH EBX                            ; 00427ca8
    LEA ESI,[ESP + 0x88]                ; 00427ca9
    LEA EDI,[ESP + 0x40]                ; 00427cb0
    CALL core_actor.cpp_FUN_00408de0    ; 00427cb4
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x88]                ; 00427cb9
    ADD ESP,0x8                         ; 00427cc0
    MOVSD ES:EDI,ESI                    ; 00427cc3
    MOVSD ES:EDI,ESI                    ; 00427cc4
    MOVSD ES:EDI,ESI                    ; 00427cc5
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00427cc6
    PUSH ESI                            ; 00427cc9
    PUSH EBX                            ; 00427cca
    LEA ESI,[ESP + 0x7c]                ; 00427ccb
    CALL core_actor.cpp_FUN_00408de0    ; 00427ccf
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    ADD ESP,0x8                         ; 00427cd4
    LEA EDX,[ESP + 0x8c]                ; 00427cd7
    LEA EDI,[ESP + 0x50]                ; 00427cde
    PUSH EDX                            ; 00427ce2
    LEA EDX,[ESP + 0x54]                ; 00427ce3
    LEA ESI,[ESP + 0x78]                ; 00427ce7
    PUSH EDX                            ; 00427ceb
    LEA EDX,[ESP + 0x40]                ; 00427cec
    MOVSD ES:EDI,ESI                    ; 00427cf0
    MOVSD ES:EDI,ESI                    ; 00427cf1
    MOVSD ES:EDI,ESI                    ; 00427cf2
    PUSH EDX                            ; 00427cf3
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00427cf4
    PUSH EBX                            ; 00427cfa
    CALL dword ptr [EAX + 0xb8]         ; 00427cfb
    ADD ESP,0x10                        ; 00427d01
    TEST EAX,EAX                        ; 00427d04
    JZ 0x00427f2d                       ; 00427d06
        ;   XREF to: 00427f2d (CONDITIONAL_JUMP)  ; LAB_00427f2d
    CMP dword ptr [EBP + 0x24],0x0      ; 00427d0c
    JNZ 0x00427f40                      ; 00427d10
        ;   XREF to: 00427f40 (CONDITIONAL_JUMP)  ; LAB_00427f40
    MOV EAX,dword ptr [EBP + 0x20]      ; 00427d16
        ;   Label: LAB_00427d16
    FLDZ                                ; 00427d19
    FLD float ptr [EAX + 0x4]           ; 00427d1b
    FSTP double ptr [ESP]               ; 00427d1e
    FCOMP double ptr [ESP]              ; 00427d21
    FNSTSW AX                           ; 00427d24
    SAHF                                ; 00427d26
    JNC 0x00427e75                      ; 00427d27
        ;   XREF to: 00427e75 (CONDITIONAL_JUMP)  ; LAB_00427e75
    FLD double ptr [ESP]                ; 00427d2d
    FMUL double ptr [0x005ccdde]        ; 00427d30 | DAT_005ccdde
    CALL crt_math.c_round_FUN_005b7ff0  ; 00427d36
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xd4]        ; 00427d3b
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00427d42
    INC EAX                             ; 00427d49
    MOV dword ptr [ESP + 0xdc],EAX      ; 00427d4a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00427d51
    FLD float ptr [EAX]                 ; 00427d54
    MOV EAX,dword ptr [EBP + 0x18]      ; 00427d56
    FSUB float ptr [EAX]                ; 00427d59
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00427d5b
    FLD float ptr [EAX + 0x4]           ; 00427d5e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00427d61
    FSUB float ptr [EAX + 0x4]          ; 00427d64
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00427d67
    LEA EDI,[ESP + 0x20]                ; 00427d6a
    LEA ESI,[ESP + 0x44]                ; 00427d6e
    FLD float ptr [EAX + 0x8]           ; 00427d72
    MOV EAX,dword ptr [EBP + 0x18]      ; 00427d75
    FXCH ST2                            ; 00427d78
    FSTP float ptr [ESP + 0x44]         ; 00427d7a
    FXCH                                ; 00427d7e
    FSUB float ptr [EAX + 0x8]          ; 00427d80
    FXCH                                ; 00427d83
    FSTP float ptr [ESP + 0x48]         ; 00427d85
    FSTP float ptr [ESP + 0x4c]         ; 00427d89
    MOVSD ES:EDI,ESI                    ; 00427d8d
    MOVSD ES:EDI,ESI                    ; 00427d8e
    MOVSD ES:EDI,ESI                    ; 00427d8f
    FLD float ptr [ESP + 0x24]          ; 00427d90
    FMUL ST0                            ; 00427d94
    FLD float ptr [ESP + 0x20]          ; 00427d96
    FMUL ST0                            ; 00427d9a
    FADDP                               ; 00427d9c
    FLD float ptr [ESP + 0x28]          ; 00427d9e
    FMUL ST0                            ; 00427da2
    FADDP                               ; 00427da4
    FSQRT                               ; 00427da6
    FLDZ                                ; 00427da8
    FXCH                                ; 00427daa
    FSTP float ptr [ESP + 0xe0]         ; 00427dac
    FCOMP float ptr [ESP + 0xe0]        ; 00427db3
    FNSTSW AX                           ; 00427dba
    SAHF                                ; 00427dbc
    JNC 0x00427f9d                      ; 00427dbd
        ;   XREF to: 00427f9d (CONDITIONAL_JUMP)  ; LAB_00427f9d
    FLD1                                ; 00427dc3
    FLD float ptr [ESP + 0x20]          ; 00427dc5
    FXCH                                ; 00427dc9
    FDIV float ptr [ESP + 0xe0]         ; 00427dcb
    FXCH                                ; 00427dd2
    FMUL ST1                            ; 00427dd4
    FLD float ptr [ESP + 0x24]          ; 00427dd6
    FMUL ST2                            ; 00427dda
    FLD float ptr [ESP + 0x28]          ; 00427ddc
    FMULP ST3                           ; 00427de0
    FXCH                                ; 00427de2
    FSTP float ptr [ESP + 0x20]         ; 00427de4
    FSTP float ptr [ESP + 0x24]         ; 00427de8
    FSTP float ptr [ESP + 0x28]         ; 00427dec
    FLD float ptr [0x005ccde6]          ; 00427df0 | DAT_005ccde6
        ;   Label: LAB_00427df0
    FLD float ptr [ESP + 0x20]          ; 00427df6
    FMUL ST1                            ; 00427dfa
    FLD float ptr [ESP + 0x24]          ; 00427dfc
    FMUL ST2                            ; 00427e00
    FLD float ptr [ESP + 0x28]          ; 00427e02
    FMULP ST3                           ; 00427e06
    LEA EDI,[ESP + 0xc8]                ; 00427e08
    LEA EAX,[ESP + 0x8c]                ; 00427e0f
    LEA ESI,[ESP + 0x8]                 ; 00427e16
    PUSH EAX                            ; 00427e1a
    FXCH                                ; 00427e1b
    FSTP float ptr [ESP + 0xc]          ; 00427e1d
    FSTP float ptr [ESP + 0x10]         ; 00427e21
    FSTP float ptr [ESP + 0x14]         ; 00427e25
    MOVSD ES:EDI,ESI                    ; 00427e29
    MOVSD ES:EDI,ESI                    ; 00427e2a
    MOVSD ES:EDI,ESI                    ; 00427e2b
    PUSH EBX                            ; 00427e2c
    LEA ESI,[ESP + 0x64]                ; 00427e2d
    LEA EDI,[ESP + 0xc4]                ; 00427e31
    CALL core_actor.cpp_FUN_00408d70    ; 00427e38
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x64]                ; 00427e3d
    ADD ESP,0x8                         ; 00427e41
    MOVSD ES:EDI,ESI                    ; 00427e44
    MOVSD ES:EDI,ESI                    ; 00427e45
    MOVSD ES:EDI,ESI                    ; 00427e46
    MOV EAX,dword ptr [EBX + 0x280c]    ; 00427e47
    PUSH EAX                            ; 00427e4d
    MOV EDX,dword ptr [ESP + 0xe0]      ; 00427e4e
    PUSH EDX                            ; 00427e55
    LEA EAX,[ESP + 0xd0]                ; 00427e56
    PUSH EAX                            ; 00427e5d
    LEA EAX,[ESP + 0xc8]                ; 00427e5e
    PUSH EAX                            ; 00427e65
    MOV ECX,dword ptr [0x006167e0]      ; 00427e66 | g_CGorePtr
    PUSH ECX                            ; 00427e6c
    CALL core_gore.cpp_FUN_004c9850     ; 00427e6d
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00427e72
    FLD float ptr [ESP + 0x38]          ; 00427e75
        ;   Label: LAB_00427e75
    FLD float ptr [ESP + 0x3c]          ; 00427e79
    FLD float ptr [ESP + 0x40]          ; 00427e7d
    LEA EDI,[ESP + 0xb0]                ; 00427e81
    LEA ESI,[ESP + 0x2c]                ; 00427e88
    FXCH ST2                            ; 00427e8c
    FADD float ptr [ESP + 0x50]         ; 00427e8e
    FXCH                                ; 00427e92
    FADD float ptr [ESP + 0x54]         ; 00427e94
    FXCH ST2                            ; 00427e98
    FADD float ptr [ESP + 0x58]         ; 00427e9a
    FXCH                                ; 00427e9e
    FSTP float ptr [ESP + 0x2c]         ; 00427ea0
    FXCH                                ; 00427ea4
    FSTP float ptr [ESP + 0x30]         ; 00427ea6
    FSTP float ptr [ESP + 0x34]         ; 00427eaa
    MOVSD ES:EDI,ESI                    ; 00427eae
    MOVSD ES:EDI,ESI                    ; 00427eaf
    MOVSD ES:EDI,ESI                    ; 00427eb0
    FLD float ptr [0x005ccdea]          ; 00427eb1 | DAT_005ccdea
    FLD float ptr [ESP + 0xb0]          ; 00427eb7
    FMUL ST1                            ; 00427ebe
    FLD float ptr [ESP + 0xb4]          ; 00427ec0
    FMUL ST2                            ; 00427ec7
    FLD float ptr [ESP + 0xb8]          ; 00427ec9
    FMULP ST3                           ; 00427ed0
    MOV EDX,dword ptr [EBP + 0x20]      ; 00427ed2
    LEA EAX,[ESP + 0x68]                ; 00427ed5
    ADD EDX,0x1c                        ; 00427ed9
    LEA EDI,[ESP + 0x68]                ; 00427edc
    LEA ESI,[ESP + 0x14]                ; 00427ee0
    FXCH                                ; 00427ee4
    FSTP float ptr [ESP + 0x14]         ; 00427ee6
    FSTP float ptr [ESP + 0x18]         ; 00427eea
    FSTP float ptr [ESP + 0x1c]         ; 00427eee
    MOVSD ES:EDI,ESI                    ; 00427ef2
    MOVSD ES:EDI,ESI                    ; 00427ef3
    MOVSD ES:EDI,ESI                    ; 00427ef4
    CMP EDX,EAX                         ; 00427ef5
    JZ 0x00427f0d                       ; 00427ef7
        ;   XREF to: 00427f0d (CONDITIONAL_JUMP)  ; LAB_00427f0d
    MOV EAX,dword ptr [ESP + 0x68]      ; 00427ef9
    MOV dword ptr [EDX],EAX             ; 00427efd
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00427eff
    MOV dword ptr [EDX + 0x4],EAX       ; 00427f03
    MOV EAX,dword ptr [ESP + 0x70]      ; 00427f06
    MOV dword ptr [EDX + 0x8],EAX       ; 00427f0a
    MOV ESI,dword ptr [EBP + 0x20]      ; 00427f0d
        ;   Label: LAB_00427f0d
    PUSH ESI                            ; 00427f10
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00427f11
    PUSH EBX                            ; 00427f17
    CALL dword ptr [EAX + 0x110]        ; 00427f18
    MOV EAX,0x1                         ; 00427f1e
    ADD ESP,0x8                         ; 00427f23
    MOV ESP,EBP                         ; 00427f26
    POP EBP                             ; 00427f28
    POP EDI                             ; 00427f29
    POP ESI                             ; 00427f2a
    POP EBX                             ; 00427f2b
    RET                                 ; 00427f2c
    MOV EAX,dword ptr [EBP + 0x20]      ; 00427f2d
        ;   Label: LAB_00427f2d
    MOV dword ptr [EAX + 0x4],0x0       ; 00427f30
    XOR EAX,EAX                         ; 00427f37
    MOV ESP,EBP                         ; 00427f39
    POP EBP                             ; 00427f3b
    POP EDI                             ; 00427f3c
    POP ESI                             ; 00427f3d
    POP EBX                             ; 00427f3e
    RET                                 ; 00427f3f
    LEA EAX,[ESP + 0x8c]                ; 00427f40
        ;   Label: LAB_00427f40
    PUSH EAX                            ; 00427f47
    PUSH EBX                            ; 00427f48
    LEA ESI,[ESP + 0xa0]                ; 00427f49
    LEA EDI,[ESP + 0xac]                ; 00427f50
    CALL core_actor.cpp_FUN_00408d70    ; 00427f57
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xa0]                ; 00427f5c
    ADD ESP,0x8                         ; 00427f63
    LEA EAX,[ESP + 0xa4]                ; 00427f66
    MOV EDX,dword ptr [EBP + 0x24]      ; 00427f6d
    MOVSD ES:EDI,ESI                    ; 00427f70
    MOVSD ES:EDI,ESI                    ; 00427f71
    MOVSD ES:EDI,ESI                    ; 00427f72
    CMP EAX,EDX                         ; 00427f73
    JZ 0x00427d16                       ; 00427f75
        ;   XREF to: 00427d16 (CONDITIONAL_JUMP)  ; LAB_00427d16
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00427f7b
    MOV dword ptr [EDX],EAX             ; 00427f82
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00427f84
    MOV dword ptr [EDX + 0x4],EAX       ; 00427f8b
    MOV EAX,dword ptr [ESP + 0xac]      ; 00427f8e
    MOV dword ptr [EDX + 0x8],EAX       ; 00427f95
    JMP 0x00427d16                      ; 00427f98
        ;   XREF to: 00427d16 (UNCONDITIONAL_JUMP)  ; LAB_00427d16
    XOR ECX,ECX                         ; 00427f9d
        ;   Label: LAB_00427f9d
    MOV dword ptr [ESP + 0x24],ECX      ; 00427f9f
    MOV dword ptr [ESP + 0x20],ECX      ; 00427fa3
    MOV dword ptr [ESP + 0x28],ECX      ; 00427fa7
    JMP 0x00427df0                      ; 00427fab
        ;   XREF to: 00427df0 (UNCONDITIONAL_JUMP)  ; LAB_00427df0

