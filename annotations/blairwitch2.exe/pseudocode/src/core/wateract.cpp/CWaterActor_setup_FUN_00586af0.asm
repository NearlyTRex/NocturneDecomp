; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_00586af0(CWaterActor *this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005edf2e
;   undefined4 DAT_005edf36
;   undefined4 DAT_005edf3e
;   undefined4 DAT_005edf46
;   undefined4 DAT_005edf4e
;   undefined4 DAT_005edf56
;   undefined4 DAT_005edf5e
;   undefined4 DAT_005edf66
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_wateract.cpp_FUN_005870a0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00586af0
        ;   Label: core_wateract.cpp_CWaterActor_setup_FUN_00586af0
    PUSH ESI                            ; 00586af1
    PUSH EDI                            ; 00586af2
    PUSH EBP                            ; 00586af3
    MOV EBP,ESP                         ; 00586af4
    SUB ESP,0x40                        ; 00586af6
    AND ESP,0xfffffff8                  ; 00586af9
    MOV EDI,dword ptr [EBP + 0x14]      ; 00586afc
    PUSH EDI                            ; 00586aff
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 00586b00
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    FLD float ptr [EDI + 0x2c4]         ; 00586b05
    FMUL float ptr [EDI + 0x3d8]        ; 00586b0b
    ADD ESP,0x4                         ; 00586b11
    FSUBR float ptr [EDI + 0x24]        ; 00586b14
    MOV EDX,dword ptr [EDI + 0x3e4]     ; 00586b17
    FSTP float ptr [EDI + 0x2b38c]      ; 00586b1d
    TEST EDX,EDX                        ; 00586b23
    JNZ 0x00586bab                      ; 00586b25
        ;   XREF to: 00586bab (CONDITIONAL_JUMP)  ; LAB_00586bab
    FLD1                                ; 00586b2b
        ;   Label: LAB_00586b2b
    FLD float ptr [EDI + 0x2bc]         ; 00586b2d
    FXCH                                ; 00586b33
    FDIV float ptr [EDI + 0x3e0]        ; 00586b35
    FXCH                                ; 00586b3b
    FMUL ST1                            ; 00586b3d
    FLD float ptr [EDI + 0x2b4]         ; 00586b3f
    FMULP ST2                           ; 00586b45
    CALL crt_math.c_round_FUN_005b7ff0  ; 00586b47
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xc]         ; 00586b4c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00586b50
    CALL crt_math.c_round_FUN_005b7ff0  ; 00586b54
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    INC EAX                             ; 00586b59
    FISTP dword ptr [ESP + 0x3c]        ; 00586b5a
    MOV dword ptr [ESP + 0x14],EAX      ; 00586b5e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00586b62
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00586b66
    MOV dword ptr [EDI + 0x80fc],EAX    ; 00586b6a
    MOV EAX,dword ptr [ESP + 0xc]       ; 00586b70
    INC EBX                             ; 00586b74
    MOV dword ptr [EDI + 0x8100],EAX    ; 00586b75
    MOV EAX,dword ptr [ESP + 0x14]      ; 00586b7b
    IMUL EAX,EBX                        ; 00586b7f
    MOV dword ptr [EDI + 0x3f4],EAX     ; 00586b82
    CMP EAX,0x3e8                       ; 00586b88
    JLE 0x00586de4                      ; 00586b8d
        ;   XREF to: 00586de4 (CONDITIONAL_JUMP)  ; LAB_00586de4
    FLD float ptr [EDI + 0x3e0]         ; 00586b93
    FLD ST0                             ; 00586b99
    FMUL double ptr [0x005edf36]        ; 00586b9b | DAT_005edf36
    FSTP ST1                            ; 00586ba1
    FSTP float ptr [EDI + 0x3e0]        ; 00586ba3
    JMP 0x00586b2b                      ; 00586ba9
        ;   XREF to: 00586b2b (UNCONDITIONAL_JUMP)  ; LAB_00586b2b
    MOV dword ptr [EDI + 0x2b390],0x20  ; 00586bab
        ;   Label: LAB_00586bab
    MOV dword ptr [EDI + 0x3f4],0x0     ; 00586bb5
    MOV ECX,dword ptr [EDI + 0x2b390]   ; 00586bbf
    XOR EDX,EDX                         ; 00586bc5
    TEST ECX,ECX                        ; 00586bc7
    JLE 0x00586cd7                      ; 00586bc9
        ;   XREF to: 00586cd7 (CONDITIONAL_JUMP)  ; LAB_00586cd7
    FLD double ptr [0x005edf66]         ; 00586bcf | DAT_005edf66
    FLD double ptr [0x005edf56]         ; 00586bd5 | DAT_005edf56
    FLD double ptr [0x005edf4e]         ; 00586bdb | DAT_005edf4e
    MOV dword ptr [ESP + 0x3c],EDX      ; 00586be1
        ;   Label: LAB_00586be1
    FILD dword ptr [EDI + 0x2b390]      ; 00586be5
    FILD dword ptr [ESP + 0x3c]         ; 00586beb
    FDIVRP                              ; 00586bef
    FMUL float ptr [0x005edf3e]         ; 00586bf1 | DAT_005edf3e
    FMUL double ptr [0x005edf36]        ; 00586bf7 | DAT_005edf36
    FLD float ptr [EDI + 0x2b4]         ; 00586bfd
    FLD ST1                             ; 00586c03
    FCOS                                ; 00586c05
    FXCH ST2                            ; 00586c07
    FSIN                                ; 00586c09
    FXCH ST2                            ; 00586c0b
    FMULP                               ; 00586c0d
    MOV EAX,dword ptr [EDI + 0x3f4]     ; 00586c0f
    FMUL double ptr [0x005edf46]        ; 00586c15 | DAT_005edf46
    SHL EAX,0x5                         ; 00586c1b
    FSTP float ptr [EDI + EAX*0x1 + 0x3f8] ; 00586c1e
    MOV EAX,dword ptr [EDI + 0x3f4]     ; 00586c25
    SHL EAX,0x5                         ; 00586c2b
    MOV dword ptr [EDI + EAX*0x1 + 0x3fc],0x0 ; 00586c2e
    FMUL float ptr [EDI + 0x2bc]        ; 00586c39
    MOV EAX,dword ptr [EDI + 0x3f4]     ; 00586c3f
    FMUL double ptr [0x005edf46]        ; 00586c45 | DAT_005edf46
    SHL EAX,0x5                         ; 00586c4b
    FSTP float ptr [EDI + EAX*0x1 + 0x400] ; 00586c4e
    MOV ECX,dword ptr [EDI + 0x3f4]     ; 00586c55
    SHL ECX,0x5                         ; 00586c5b
    FLD float ptr [ECX + EDI*0x1 + 0x3f8] ; 00586c5e
    FDIV float ptr [EDI + 0x2b4]        ; 00586c65
    FMUL ST1                            ; 00586c6b
    FMUL ST2                            ; 00586c6d
    FADD ST0,ST3                        ; 00586c6f
    CALL crt_math.c_round_FUN_005b7ff0  ; 00586c71
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xc]         ; 00586c76
    MOV EAX,dword ptr [ESP + 0xc]       ; 00586c7a
    MOV dword ptr [ECX + EDI*0x1 + 0x410],EAX ; 00586c7e
    MOV ECX,dword ptr [EDI + 0x3f4]     ; 00586c85
    SHL ECX,0x5                         ; 00586c8b
    FLD float ptr [ECX + EDI*0x1 + 0x400] ; 00586c8e
    FDIV float ptr [EDI + 0x2bc]        ; 00586c95
    FMUL ST1                            ; 00586c9b
    FMUL ST2                            ; 00586c9d
    FADD ST0,ST3                        ; 00586c9f
    CALL crt_math.c_round_FUN_005b7ff0  ; 00586ca1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x3c]        ; 00586ca6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00586caa
    MOV dword ptr [ECX + EDI*0x1 + 0x414],EAX ; 00586cae
    MOV EBX,dword ptr [EDI + 0x3f4]     ; 00586cb5
    INC EDX                             ; 00586cbb
    INC EBX                             ; 00586cbc
    MOV ESI,dword ptr [EDI + 0x2b390]   ; 00586cbd
    MOV dword ptr [EDI + 0x3f4],EBX     ; 00586cc3
    CMP EDX,ESI                         ; 00586cc9
    JL 0x00586be1                       ; 00586ccb
        ;   XREF to: 00586be1 (CONDITIONAL_JUMP)  ; LAB_00586be1
    FSTP ST0                            ; 00586cd1
    FSTP ST0                            ; 00586cd3
    FSTP ST0                            ; 00586cd5
    MOV EDX,dword ptr [EDI + 0x3f4]     ; 00586cd7
        ;   Label: LAB_00586cd7
    LEA EAX,[EDI + 0x3f8]               ; 00586cdd
    SHL EDX,0x5                         ; 00586ce3
    MOV dword ptr [EDX + EAX*0x1 + 0x8],0x0 ; 00586ce6
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x8] ; 00586cee
    MOV dword ptr [EDX + EAX*0x1 + 0x4],ECX ; 00586cf2
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x4] ; 00586cf6
    MOV dword ptr [EDX + EAX*0x1],ECX   ; 00586cfa
    MOV EDX,dword ptr [EDI + 0x3f4]     ; 00586cfd
    MOV ECX,dword ptr [EDI + 0x2b390]   ; 00586d03
    XOR EAX,EAX                         ; 00586d09
    INC EDX                             ; 00586d0b
    MOV dword ptr [ESP + 0x34],EAX      ; 00586d0c
    MOV dword ptr [EDI + 0x3f4],EDX     ; 00586d10
    TEST ECX,ECX                        ; 00586d16
    JLE 0x00586dc0                      ; 00586d18
        ;   XREF to: 00586dc0 (CONDITIONAL_JUMP)  ; LAB_00586dc0
    LEA ECX,[EDI + 0x8104]              ; 00586d1e
    MOV ESI,EDI                         ; 00586d24
    MOV dword ptr [ECX + 0x4],0x3       ; 00586d26
        ;   Label: LAB_00586d26
    MOV dword ptr [ECX + 0x14],0x0      ; 00586d2d
    MOV EAX,dword ptr [ECX + 0x14]      ; 00586d34
    MOV dword ptr [ECX + 0x10],EAX      ; 00586d37
    MOV dword ptr [ECX + 0xc],EAX       ; 00586d3a
    MOV EBX,dword ptr [ESP + 0x34]      ; 00586d3d
    MOV dword ptr [ECX + 0x8],EAX       ; 00586d41
    INC EBX                             ; 00586d44
    MOV EAX,dword ptr [EDI + 0x2b390]   ; 00586d45
    MOV dword ptr [ECX + 0x1c],0x0      ; 00586d4b
    MOV EDX,EBX                         ; 00586d52
    MOV dword ptr [ECX + 0x20],0x0      ; 00586d54
    SAR EDX,0x1f                        ; 00586d5b
    MOV dword ptr [ECX + 0x18],EAX      ; 00586d5e
    MOV EAX,EBX                         ; 00586d61
    IDIV dword ptr [EDI + 0x2b390]      ; 00586d63
    MOV EAX,dword ptr [ESP + 0x34]      ; 00586d69
    MOV dword ptr [ECX + 0x24],EAX      ; 00586d6d
    MOV EAX,dword ptr [ESI + 0x410]     ; 00586d70
    MOV dword ptr [ECX + 0x28],EAX      ; 00586d76
    MOV EAX,dword ptr [ESI + 0x414]     ; 00586d79
    MOV dword ptr [ECX + 0x30],EDX      ; 00586d7f
    SHL EDX,0x5                         ; 00586d82
    MOV dword ptr [ECX + 0x2c],EAX      ; 00586d85
    LEA EAX,[EDI + EDX*0x1]             ; 00586d88
    MOV EDX,dword ptr [EAX + 0x410]     ; 00586d8b
    MOV dword ptr [ECX + 0x34],EDX      ; 00586d91
    MOV EAX,dword ptr [EAX + 0x414]     ; 00586d94
    ADD ESI,0x20                        ; 00586d9a
    MOV dword ptr [ECX + 0x38],EAX      ; 00586d9d
    ADD ECX,0x48                        ; 00586da0
    MOV EAX,dword ptr [EDI + 0x2b390]   ; 00586da3
    MOV dword ptr [ESP + 0x34],EBX      ; 00586da9
    CMP EBX,EAX                         ; 00586dad
    JL 0x00586d26                       ; 00586daf
        ;   XREF to: 00586d26 (CONDITIONAL_JUMP)  ; LAB_00586d26
    LEA EAX,[EAX]                       ; 00586db5
    LEA EDX,[EDX]                       ; 00586dbb
    MOV EBX,EBX                         ; 00586dbe
    PUSH EDI                            ; 00586dc0
        ;   Label: LAB_00586dc0
    CALL core_wateract.cpp_FUN_005870a0 ; 00586dc1
        ;   XREF to: 005870a0 (UNCONDITIONAL_CALL)  ; undefined core_wateract.cpp_FUN_005870a0()
    MOV dword ptr [EDI + 0x2b384],0x0   ; 00586dc6
    ADD ESP,0x4                         ; 00586dd0
    MOV dword ptr [EDI + 0x2b388],0x0   ; 00586dd3
    MOV ESP,EBP                         ; 00586ddd
    POP EBP                             ; 00586ddf
    POP EDI                             ; 00586de0
    POP ESI                             ; 00586de1
    POP EBX                             ; 00586de2
    RET                                 ; 00586de3
    LEA EAX,[EBX + -0x1]                ; 00586de4
        ;   Label: LAB_00586de4
    MOV dword ptr [ESP + 0x3c],EAX      ; 00586de7
    FILD dword ptr [ESP + 0x3c]         ; 00586deb
    FDIVR float ptr [EDI + 0x2b4]       ; 00586def
    MOV EAX,dword ptr [ESP + 0x14]      ; 00586df5
    DEC EAX                             ; 00586df9
    MOV dword ptr [ESP + 0x3c],EAX      ; 00586dfa
    FILD dword ptr [ESP + 0x3c]         ; 00586dfe
    FDIVR float ptr [EDI + 0x2bc]       ; 00586e02
    FLD float ptr [EDI + 0x2bc]         ; 00586e08
    FCHS                                ; 00586e0e
    FMUL double ptr [0x005edf2e]        ; 00586e10 | DAT_005edf2e
    XOR EDX,EDX                         ; 00586e16
    MOV ECX,dword ptr [ESP + 0x14]      ; 00586e18
    MOV dword ptr [ESP + 0x38],EDX      ; 00586e1c
    FSTP float ptr [ESP + 0x1c]         ; 00586e20
    FXCH                                ; 00586e24
    FSTP float ptr [ESP + 0x18]         ; 00586e26
    FSTP float ptr [ESP + 0x10]         ; 00586e2a
    TEST ECX,ECX                        ; 00586e2e
    JLE 0x00586f1e                      ; 00586e30
        ;   XREF to: 00586f1e (CONDITIONAL_JUMP)  ; LAB_00586f1e
    LEA EAX,[EDI + 0x3f8]               ; 00586e36
    MOV dword ptr [ESP + 0x30],EAX      ; 00586e3c
    FLD float ptr [EDI + 0x2b4]         ; 00586e40
        ;   Label: LAB_00586e40
    FCHS                                ; 00586e46
    FMUL double ptr [0x005edf2e]        ; 00586e48 | DAT_005edf2e
    XOR ECX,ECX                         ; 00586e4e
    FSTP float ptr [ESP + 0x28]         ; 00586e50
    TEST EBX,EBX                        ; 00586e54
    JLE 0x00586efd                      ; 00586e56
        ;   XREF to: 00586efd (CONDITIONAL_JUMP)  ; LAB_00586efd
    FLD double ptr [0x005edf5e]         ; 00586e5c | DAT_005edf5e
    MOV ESI,dword ptr [ESP + 0x30]      ; 00586e62
    FLD double ptr [0x005edf56]         ; 00586e66 | DAT_005edf56
    MOV EAX,EDX                         ; 00586e6c
    FLD double ptr [0x005edf2e]         ; 00586e6e | DAT_005edf2e
    SHL EAX,0x5                         ; 00586e74
    FLD float ptr [ESP + 0x18]          ; 00586e77
    ADD EAX,ESI                         ; 00586e7b
    MOV ESI,dword ptr [ESP + 0x28]      ; 00586e7d
        ;   Label: LAB_00586e7d
    MOV dword ptr [EAX + 0x4],0x0       ; 00586e81
    MOV dword ptr [EAX],ESI             ; 00586e88
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00586e8a
    MOV dword ptr [EAX + 0x8],ESI       ; 00586e8e
    FLD float ptr [EDI + 0x2b4]         ; 00586e91
    FLD ST0                             ; 00586e97
    FMUL ST3                            ; 00586e99
    FADD float ptr [EAX]                ; 00586e9b
    FDIVRP                              ; 00586e9d
    FMUL ST4                            ; 00586e9f
    FMUL ST3                            ; 00586ea1
    CALL crt_math.c_round_FUN_005b7ff0  ; 00586ea3
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x3c]        ; 00586ea8
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00586eac
    ADD ESI,0x20000                     ; 00586eb0
    MOV dword ptr [EAX + 0x18],ESI      ; 00586eb6
    FLD float ptr [EAX + 0x8]           ; 00586eb9
    FDIV float ptr [EDI + 0x2bc]        ; 00586ebc
    FLD1                                ; 00586ec2
    FSUBRP                              ; 00586ec4
    FMUL ST4                            ; 00586ec6
    FMUL ST3                            ; 00586ec8
    FLD float ptr [ESP + 0x28]          ; 00586eca
    ADD EAX,0x20                        ; 00586ece
    INC EDX                             ; 00586ed1
    INC ECX                             ; 00586ed2
    FXCH                                ; 00586ed3
    CALL crt_math.c_round_FUN_005b7ff0  ; 00586ed5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x3c]        ; 00586eda
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00586ede
    FADD ST0,ST1                        ; 00586ee2
    ADD ESI,0x20000                     ; 00586ee4
    FSTP float ptr [ESP + 0x28]         ; 00586eea
    MOV dword ptr [EAX + -0x4],ESI      ; 00586eee
    CMP ECX,EBX                         ; 00586ef1
    JL 0x00586e7d                       ; 00586ef3
        ;   XREF to: 00586e7d (CONDITIONAL_JUMP)  ; LAB_00586e7d
    FSTP ST0                            ; 00586ef5
    FSTP ST0                            ; 00586ef7
    FSTP ST0                            ; 00586ef9
    FSTP ST0                            ; 00586efb
    FLD float ptr [ESP + 0x1c]          ; 00586efd
        ;   Label: LAB_00586efd
    MOV ECX,dword ptr [ESP + 0x38]      ; 00586f01
    MOV ESI,dword ptr [ESP + 0x14]      ; 00586f05
    FADD float ptr [ESP + 0x10]         ; 00586f09
    INC ECX                             ; 00586f0d
    FSTP float ptr [ESP + 0x1c]         ; 00586f0e
    MOV dword ptr [ESP + 0x38],ECX      ; 00586f12
    CMP ECX,ESI                         ; 00586f16
    JL 0x00586e40                       ; 00586f18
        ;   XREF to: 00586e40 (CONDITIONAL_JUMP)  ; LAB_00586e40
    LEA ECX,[EDI + 0x8104]              ; 00586f1e
        ;   Label: LAB_00586f1e
    XOR EAX,EAX                         ; 00586f24
    MOV EDX,dword ptr [EDI + 0x8100]    ; 00586f26
    MOV dword ptr [ESP + 0x20],EAX      ; 00586f2c
    TEST EDX,EDX                        ; 00586f30
    JLE 0x0058707d                      ; 00586f32
        ;   XREF to: 0058707d (CONDITIONAL_JUMP)  ; LAB_0058707d
    MOV EBX,dword ptr [EDI + 0x80fc]    ; 00586f38
        ;   Label: LAB_00586f38
    XOR ESI,ESI                         ; 00586f3e
    TEST EBX,EBX                        ; 00586f40
    JLE 0x00587066                      ; 00586f42
        ;   XREF to: 00587066 (CONDITIONAL_JUMP)  ; LAB_00587066
    MOV EAX,dword ptr [ESP + 0x20]      ; 00586f48
    MOV EDX,EAX                         ; 00586f4c
    MOV EBX,0x4                         ; 00586f4e
    SAR EDX,0x1f                        ; 00586f53
    IDIV EBX                            ; 00586f56
    MOV EAX,EDX                         ; 00586f58
    INC EDX                             ; 00586f5a
    SHL EAX,0x16                        ; 00586f5b
    SHL EDX,0x16                        ; 00586f5e
    MOV dword ptr [ESP + 0x24],EAX      ; 00586f61
    MOV dword ptr [ESP + 0x2c],EDX      ; 00586f65
    MOV dword ptr [ECX + 0x4],0x3       ; 00586f69
        ;   Label: LAB_00586f69
    MOV dword ptr [ECX + 0x14],0x0      ; 00586f70
    MOV EAX,dword ptr [ECX + 0x14]      ; 00586f77
    MOV dword ptr [ECX + 0x10],EAX      ; 00586f7a
    MOV dword ptr [ECX + 0xc],EAX       ; 00586f7d
    MOV dword ptr [ECX + 0x8],EAX       ; 00586f80
    MOV EBX,dword ptr [EDI + 0x80fc]    ; 00586f83
    MOV EAX,dword ptr [ESP + 0x20]      ; 00586f89
    INC EBX                             ; 00586f8d
    IMUL EBX,EAX                        ; 00586f8e
    MOV EDX,ESI                         ; 00586f91
    MOV dword ptr [ESP + 0x3c],0x4      ; 00586f93
    SAR EDX,0x1f                        ; 00586f9b
    MOV EAX,ESI                         ; 00586f9e
    IDIV dword ptr [ESP + 0x3c]         ; 00586fa0
    ADD EBX,ESI                         ; 00586fa4
    MOV dword ptr [ECX + 0x30],EBX      ; 00586fa6
    MOV dword ptr [ESP + 0x3c],EDX      ; 00586fa9
    MOV EAX,EDX                         ; 00586fad
    MOV EDX,dword ptr [ESP + 0x24]      ; 00586faf
    INC EBX                             ; 00586fb3
    MOV dword ptr [ECX + 0x38],EDX      ; 00586fb4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00586fb7
    MOV dword ptr [ECX + 0x24],EBX      ; 00586fbb
    INC EDX                             ; 00586fbe
    SHL EAX,0x16                        ; 00586fbf
    SHL EDX,0x16                        ; 00586fc2
    MOV dword ptr [ECX + 0x34],EAX      ; 00586fc5
    MOV dword ptr [ESP + 0x3c],EDX      ; 00586fc8
    MOV dword ptr [ECX + 0x28],EDX      ; 00586fcc
    MOV EDX,dword ptr [ESP + 0x24]      ; 00586fcf
    MOV dword ptr [ECX + 0x2c],EDX      ; 00586fd3
    MOV EDX,dword ptr [EDI + 0x80fc]    ; 00586fd6
    INC EDX                             ; 00586fdc
    ADD EBX,EDX                         ; 00586fdd
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00586fdf
    MOV dword ptr [ECX + 0x18],EBX      ; 00586fe3
    MOV dword ptr [ECX + 0x1c],EDX      ; 00586fe6
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00586fe9
    MOV dword ptr [ECX + 0x20],EDX      ; 00586fed
    MOV dword ptr [ECX + 0x4c],0x3      ; 00586ff0
    MOV dword ptr [ECX + 0x5c],0x0      ; 00586ff7
    MOV EDX,dword ptr [ECX + 0x5c]      ; 00586ffe
    MOV dword ptr [ECX + 0x58],EDX      ; 00587001
    MOV dword ptr [ECX + 0x54],EDX      ; 00587004
    MOV dword ptr [ECX + 0x50],EDX      ; 00587007
    MOV EDX,dword ptr [EDI + 0x80fc]    ; 0058700a
    MOV EBX,dword ptr [ESP + 0x20]      ; 00587010
    INC EDX                             ; 00587014
    IMUL EDX,EBX                        ; 00587015
    MOV dword ptr [ECX + 0x7c],EAX      ; 00587018
    LEA EBX,[ESI + EDX*0x1]             ; 0058701b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0058701e
    MOV dword ptr [ECX + 0x78],EBX      ; 00587022
    MOV dword ptr [ECX + 0x80],EDX      ; 00587025
    MOV EDX,dword ptr [EDI + 0x80fc]    ; 0058702b
    ADD ECX,0x48                        ; 00587031
    ADD EDX,0x2                         ; 00587034
    MOV dword ptr [ECX + 0x1c],EAX      ; 00587037
    ADD EBX,EDX                         ; 0058703a
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0058703c
    MOV dword ptr [ECX + 0x24],EBX      ; 00587040
    DEC EBX                             ; 00587043
    MOV dword ptr [ECX + 0x28],EDX      ; 00587044
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00587047
    MOV dword ptr [ECX + 0x18],EBX      ; 0058704b
    MOV dword ptr [ECX + 0x2c],EDX      ; 0058704e
    MOV dword ptr [ECX + 0x20],EDX      ; 00587051
    INC ESI                             ; 00587054
    MOV EBX,dword ptr [EDI + 0x80fc]    ; 00587055
    ADD ECX,0x48                        ; 0058705b
    CMP ESI,EBX                         ; 0058705e
    JL 0x00586f69                       ; 00587060
        ;   XREF to: 00586f69 (CONDITIONAL_JUMP)  ; LAB_00586f69
    MOV EAX,dword ptr [ESP + 0x20]      ; 00587066
        ;   Label: LAB_00587066
    INC EAX                             ; 0058706a
    MOV EDX,dword ptr [EDI + 0x8100]    ; 0058706b
    MOV dword ptr [ESP + 0x20],EAX      ; 00587071
    CMP EAX,EDX                         ; 00587075
    JL 0x00586f38                       ; 00587077
        ;   XREF to: 00586f38 (CONDITIONAL_JUMP)  ; LAB_00586f38
    MOV ECX,dword ptr [EDI + 0x8100]    ; 0058707d
        ;   Label: LAB_0058707d
    MOV EAX,dword ptr [EDI + 0x80fc]    ; 00587083
    IMUL EAX,ECX                        ; 00587089
    ADD EAX,EAX                         ; 0058708c
    MOV dword ptr [EDI + 0x2b390],EAX   ; 0058708e
    JMP 0x00586dc0                      ; 00587094
        ;   XREF to: 00586dc0 (UNCONDITIONAL_JUMP)  ; LAB_00586dc0

