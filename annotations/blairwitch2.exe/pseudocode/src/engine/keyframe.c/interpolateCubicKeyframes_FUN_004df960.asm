; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_004df960(SMRGLKeyframeModel *keyframe_model)
;
; Parameters:
; SMRGLKeyframeModel * Stack[0x4]:4   keyframe_model
;
; Referenced Globals:
;   TerminatedCString s_engine_keyframe_c_005dbc58
;   TerminatedCString s_Bad_keyframe_1_005dbc6d
;   TerminatedCString s_engine_keyframe_c_005dbc7c
;   TerminatedCString s_ZBP_not_found_005dbc91
;   undefined4 DAT_005dbca6
;   undefined4 DAT_005dbcae
;   undefined4 DAT_005dbcb2
;   undefined4 DAT_005dbcb6
;   undefined4 DAT_005dbcbe
;   undefined4 DAT_005dbcc2
;   undefined4 DAT_005dbcc6
;   undefined4 DAT_005dbcca
;   undefined4 DAT_01c2a374
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;   engine_3d.c_dispatchMRGLBlockChain_FUN_004078b0
;   engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004df430
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004df770
;   engine_model.c_FUN_00500f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df960
        ;   Label: engine_keyframe.c_interpolateCubicKeyframes_FUN_004df960
    PUSH ESI                            ; 004df961
    PUSH EDI                            ; 004df962
    PUSH EBP                            ; 004df963
    MOV EBP,ESP                         ; 004df964
    SUB ESP,0x30                        ; 004df966
    AND ESP,0xfffffff8                  ; 004df969
    MOV EAX,dword ptr [EBP + 0x14]      ; 004df96c
    CMP dword ptr [EAX + 0x14],0x0      ; 004df96f
    JZ 0x004dfcf8                       ; 004df973
        ;   XREF to: 004dfcf8 (CONDITIONAL_JUMP)  ; LAB_004dfcf8
    MOV ESI,dword ptr [EBP + 0x14]      ; 004df979
        ;   Label: LAB_004df979
    MOV EDX,dword ptr [EBP + 0x14]      ; 004df97c
    MOV ESI,dword ptr [ESI + 0x8]       ; 004df97f
    MOV EBX,dword ptr [EDX + 0xc]       ; 004df982
    IMUL ESI,EBX                        ; 004df985
    MOV EAX,dword ptr [EDX + 0x10]      ; 004df988
    CDQ                                 ; 004df98b
    MOV ECX,EDX                         ; 004df98c
    XOR EAX,EDX                         ; 004df98e
    XOR EDX,EDX                         ; 004df990
    DIV EBX                             ; 004df992
    CMP EAX,0x7fff                      ; 004df994
    JC 0x004df9a0                       ; 004df999
        ;   XREF to: 004df9a0 (CONDITIONAL_JUMP)  ; LAB_004df9a0
    MOV EAX,0x7fff                      ; 004df99b
    PUSH EAX                            ; 004df9a0
        ;   Label: LAB_004df9a0
    XOR EAX,EAX                         ; 004df9a1
    DIV EBX                             ; 004df9a3
    POP EDX                             ; 004df9a5
    SHRD EAX,EDX,0x10                   ; 004df9a6
    XOR EAX,ECX                         ; 004df9aa
    MOV EDX,dword ptr [0x01c2a374]      ; 004df9ac | DAT_01c2a374
    MOV ECX,EAX                         ; 004df9b2
    MOV EAX,EDX                         ; 004df9b4
    SAR EDX,0x1f                        ; 004df9b6
    IDIV ESI                            ; 004df9b9
    MOV EBX,ECX                         ; 004df9bb
    SAR EBX,0x10                        ; 004df9bd
    AND ECX,0xffff                      ; 004df9c0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004df9c6
    MOV dword ptr [ESP],ECX             ; 004df9c9
    LEA ESI,[EBX + 0x1]                 ; 004df9cc
    MOV EDI,dword ptr [EAX + 0x8]       ; 004df9cf
    MOV dword ptr [EAX + 0x10],EDX      ; 004df9d2
    CMP ESI,EDI                         ; 004df9d5
    JL 0x004df9db                       ; 004df9d7
        ;   XREF to: 004df9db (CONDITIONAL_JUMP)  ; LAB_004df9db
    XOR ESI,ESI                         ; 004df9d9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004df9db
        ;   Label: LAB_004df9db
    LEA EAX,[ESI + 0x1]                 ; 004df9de
    MOV ECX,dword ptr [EDX + 0x8]       ; 004df9e1
    MOV dword ptr [ESP + 0x24],EAX      ; 004df9e4
    CMP EAX,ECX                         ; 004df9e8
    JL 0x004df9f2                       ; 004df9ea
        ;   XREF to: 004df9f2 (CONDITIONAL_JUMP)  ; LAB_004df9f2
    XOR EDI,EDI                         ; 004df9ec
    MOV dword ptr [ESP + 0x24],EDI      ; 004df9ee
    LEA EDI,[EBX + -0x1]                ; 004df9f2
        ;   Label: LAB_004df9f2
    TEST EDI,EDI                        ; 004df9f5
    JL 0x004dfd06                       ; 004df9f7
        ;   XREF to: 004dfd06 (CONDITIONAL_JUMP)  ; LAB_004dfd06
    MOV EAX,dword ptr [EBP + 0x14]      ; 004df9fd
        ;   Label: LAB_004df9fd
    MOV EAX,dword ptr [EAX + 0x14]      ; 004dfa00
    ADD EAX,0x8                         ; 004dfa03
    MOV EDX,dword ptr [EAX]             ; 004dfa06
    MOV dword ptr [ESP + 0x10],EAX      ; 004dfa08
    CMP EDX,0x2                         ; 004dfa0c
    JZ 0x004dfa33                       ; 004dfa0f
        ;   XREF to: 004dfa33 (CONDITIONAL_JUMP)  ; LAB_004dfa33
    MOV ECX,0x5dbc58                    ; 004dfa11 | = "..\\engine\\keyframe.c"
    MOV EAX,0x16b                       ; 004dfa16
    PUSH 0x5dbc6d                       ; 004dfa1b | = "Bad keyframe 1"
    MOV dword ptr [0x01d046a0],ECX      ; 004dfa20 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004dfa26 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004dfa2b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004dfa30
    MOV EDX,dword ptr [EBP + 0x14]      ; 004dfa33
        ;   Label: LAB_004dfa33
    MOV EAX,EDX                         ; 004dfa36
    MOV EAX,dword ptr [EAX + ESI*0x4 + 0x118] ; 004dfa38
    ADD EAX,0x14                        ; 004dfa3f
    MOV dword ptr [ESP + 0x28],EAX      ; 004dfa42
    MOV EAX,dword ptr [ESP + 0x24]      ; 004dfa46
    SHL EAX,0x2                         ; 004dfa4a
    ADD EAX,EDX                         ; 004dfa4d
    MOV ESI,dword ptr [EAX + 0x118]     ; 004dfa4f
    LEA EAX,[EDI*0x4 + 0x0]             ; 004dfa55
    ADD EAX,EDX                         ; 004dfa5c
    MOV EDI,dword ptr [EAX + 0x118]     ; 004dfa5e
    MOV EAX,dword ptr [ESP]             ; 004dfa64
    MOV dword ptr [ESP + 0x2c],EAX      ; 004dfa67
    FILD dword ptr [ESP + 0x2c]         ; 004dfa6b
    FMUL double ptr [0x005dbca6]        ; 004dfa6f | DAT_005dbca6
    FLD ST0                             ; 004dfa75
    FMUL ST1                            ; 004dfa77
    FLD ST0                             ; 004dfa79
    FMUL ST2                            ; 004dfa7b
    FLD ST1                             ; 004dfa7d
    FMUL float ptr [0x005dbcc6]         ; 004dfa7f | DAT_005dbcc6
    FLD ST1                             ; 004dfa85
    FMUL float ptr [0x005dbcae]         ; 004dfa87 | DAT_005dbcae
    FLD ST2                             ; 004dfa8d
    FMUL float ptr [0x005dbcbe]         ; 004dfa8f | DAT_005dbcbe
    FLD ST3                             ; 004dfa95
    FXCH ST2                            ; 004dfa97
    FADD ST0,ST5                        ; 004dfa99
    FXCH ST2                            ; 004dfa9b
    FMUL float ptr [0x005dbcca]         ; 004dfa9d | DAT_005dbcca
    FXCH ST6                            ; 004dfaa3
    FMUL float ptr [0x005dbcb2]         ; 004dfaa5 | DAT_005dbcb2
    FXCH ST4                            ; 004dfaab
    FMUL float ptr [0x005dbcb2]         ; 004dfaad | DAT_005dbcb2
    FXCH ST4                            ; 004dfab3
    FSTP float ptr [ESP + 0x2c]         ; 004dfab5
    FXCH                                ; 004dfab9
    FSUB float ptr [ESP + 0x2c]         ; 004dfabb
    FLD ST4                             ; 004dfabf
    FMUL float ptr [0x005dbcb2]         ; 004dfac1 | DAT_005dbcb2
    FXCH                                ; 004dfac7
    FMUL double ptr [0x005dbcb6]        ; 004dfac9 | DAT_005dbcb6
    FXCH                                ; 004dfacf
    FSUBP ST4,ST0                       ; 004dfad1
    FXCH ST4                            ; 004dfad3
    FMUL float ptr [0x005dbcc2]         ; 004dfad5 | DAT_005dbcc2
    FXCH ST3                            ; 004dfadb
    FMUL double ptr [0x005dbcb6]        ; 004dfadd | DAT_005dbcb6
    FXCH ST3                            ; 004dfae3
    FADDP                               ; 004dfae5
    FXCH ST4                            ; 004dfae7
    FADDP                               ; 004dfae9
    FLD1                                ; 004dfaeb
    FADDP ST4,ST0                       ; 004dfaed
    FADD float ptr [ESP + 0x2c]         ; 004dfaef
    FXCH ST3                            ; 004dfaf3
    FMUL double ptr [0x005dbcb6]        ; 004dfaf5 | DAT_005dbcb6
    FXCH ST3                            ; 004dfafb
    FMUL double ptr [0x005dbcb6]        ; 004dfafd | DAT_005dbcb6
    SHL EBX,0x2                         ; 004dfb03
    MOV ECX,dword ptr [EDX + 0x14]      ; 004dfb06
    ADD EBX,EDX                         ; 004dfb09
    ADD ECX,0x14                        ; 004dfb0b
    MOV EBX,dword ptr [EBX + 0x118]     ; 004dfb0e
    XOR EAX,EAX                         ; 004dfb14
    ADD EBX,0x14                        ; 004dfb16
    MOV dword ptr [ESP + 0x24],EAX      ; 004dfb19
    MOV EAX,dword ptr [ESP + 0x10]      ; 004dfb1d
    ADD ESI,0x14                        ; 004dfb21
    ADD EDI,0x14                        ; 004dfb24
    MOV EDX,dword ptr [EAX + 0x8]       ; 004dfb27
    FXCH                                ; 004dfb2a
    CALL crt_math.c_round_FUN_005b7ff0  ; 004dfb2c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1c]        ; 004dfb31
    FXCH                                ; 004dfb35
    CALL crt_math.c_round_FUN_005b7ff0  ; 004dfb37
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 004dfb3c
    CALL crt_math.c_round_FUN_005b7ff0  ; 004dfb3e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 004dfb43
    CALL crt_math.c_round_FUN_005b7ff0  ; 004dfb45
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 004dfb4a
    FISTP dword ptr [ESP + 0x18]        ; 004dfb4c
    FISTP dword ptr [ESP + 0x14]        ; 004dfb50
    FISTP dword ptr [ESP + 0x20]        ; 004dfb54
    TEST EDX,EDX                        ; 004dfb58
    JLE 0x004dfc97                      ; 004dfb5a
        ;   XREF to: 004dfc97 (CONDITIONAL_JUMP)  ; LAB_004dfc97
    MOV EAX,dword ptr [ESP + 0x18]      ; 004dfb60
        ;   Label: LAB_004dfb60
    MOV EDX,dword ptr [EDI]             ; 004dfb64
    IMUL EDX                            ; 004dfb66
    SHRD EAX,EDX,0x10                   ; 004dfb68
    MOV dword ptr [ESP + 0x2c],EAX      ; 004dfb6c
    MOV EDX,dword ptr [EBX]             ; 004dfb70
    MOV EAX,dword ptr [ESP + 0x14]      ; 004dfb72
    IMUL EDX                            ; 004dfb76
    SHRD EAX,EDX,0x10                   ; 004dfb78
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004dfb7c
    ADD EDX,EAX                         ; 004dfb80
    MOV dword ptr [ESP + 0x2c],EDX      ; 004dfb82
    MOV EDX,dword ptr [ESP + 0x28]      ; 004dfb86
    MOV EAX,dword ptr [ESP + 0x20]      ; 004dfb8a
    MOV EDX,dword ptr [EDX]             ; 004dfb8e
    IMUL EDX                            ; 004dfb90
    SHRD EAX,EDX,0x10                   ; 004dfb92
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004dfb96
    ADD EDX,EAX                         ; 004dfb9a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004dfb9c
    MOV dword ptr [ESP + 0x2c],EDX      ; 004dfba0
    MOV EDX,dword ptr [ESI]             ; 004dfba4
    IMUL EDX                            ; 004dfba6
    SHRD EAX,EDX,0x10                   ; 004dfba8
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004dfbac
    ADD EDX,EAX                         ; 004dfbb0
    MOV dword ptr [ECX],EDX             ; 004dfbb2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004dfbb4
    MOV EDX,dword ptr [EDI + 0x4]       ; 004dfbb8
    IMUL EDX                            ; 004dfbbb
    SHRD EAX,EDX,0x10                   ; 004dfbbd
    MOV dword ptr [ESP + 0x2c],EAX      ; 004dfbc1
    MOV EDX,dword ptr [EBX + 0x4]       ; 004dfbc5
    MOV EAX,dword ptr [ESP + 0x14]      ; 004dfbc8
    IMUL EDX                            ; 004dfbcc
    SHRD EAX,EDX,0x10                   ; 004dfbce
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004dfbd2
    ADD EDX,EAX                         ; 004dfbd6
    MOV dword ptr [ESP + 0x2c],EDX      ; 004dfbd8
    MOV EDX,dword ptr [ESP + 0x28]      ; 004dfbdc
    MOV EAX,dword ptr [ESP + 0x20]      ; 004dfbe0
    MOV EDX,dword ptr [EDX + 0x4]       ; 004dfbe4
    IMUL EDX                            ; 004dfbe7
    SHRD EAX,EDX,0x10                   ; 004dfbe9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004dfbed
    ADD EDX,EAX                         ; 004dfbf1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004dfbf3
    MOV dword ptr [ESP + 0x2c],EDX      ; 004dfbf7
    MOV EDX,dword ptr [ESI + 0x4]       ; 004dfbfb
    IMUL EDX                            ; 004dfbfe
    SHRD EAX,EDX,0x10                   ; 004dfc00
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004dfc04
    ADD EDX,EAX                         ; 004dfc08
    MOV dword ptr [ECX + 0x4],EDX       ; 004dfc0a
    MOV EAX,dword ptr [ESP + 0x18]      ; 004dfc0d
    MOV EDX,dword ptr [EDI + 0x8]       ; 004dfc11
    IMUL EDX                            ; 004dfc14
    SHRD EAX,EDX,0x10                   ; 004dfc16
    MOV dword ptr [ESP + 0x2c],EAX      ; 004dfc1a
    MOV EDX,dword ptr [EBX + 0x8]       ; 004dfc1e
    MOV EAX,dword ptr [ESP + 0x14]      ; 004dfc21
    IMUL EDX                            ; 004dfc25
    SHRD EAX,EDX,0x10                   ; 004dfc27
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004dfc2b
    ADD EDX,EAX                         ; 004dfc2f
    MOV dword ptr [ESP + 0x2c],EDX      ; 004dfc31
    MOV EDX,dword ptr [ESP + 0x28]      ; 004dfc35
    MOV EAX,dword ptr [ESP + 0x20]      ; 004dfc39
    MOV EDX,dword ptr [EDX + 0x8]       ; 004dfc3d
    ADD EDI,0xc                         ; 004dfc40
    IMUL EDX                            ; 004dfc43
    SHRD EAX,EDX,0x10                   ; 004dfc45
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004dfc49
    ADD EBX,0xc                         ; 004dfc4d
    ADD EDX,EAX                         ; 004dfc50
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004dfc52
    MOV dword ptr [ESP + 0x2c],EDX      ; 004dfc56
    MOV EDX,dword ptr [ESI + 0x8]       ; 004dfc5a
    ADD ESI,0xc                         ; 004dfc5d
    IMUL EDX                            ; 004dfc60
    SHRD EAX,EDX,0x10                   ; 004dfc62
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004dfc66
    ADD ECX,0xc                         ; 004dfc6a
    ADD EDX,EAX                         ; 004dfc6d
    MOV EAX,dword ptr [ESP + 0x24]      ; 004dfc6f
    MOV dword ptr [ECX + -0x4],EDX      ; 004dfc73
    MOV EDX,dword ptr [ESP + 0x28]      ; 004dfc76
    INC EAX                             ; 004dfc7a
    ADD EDX,0xc                         ; 004dfc7b
    MOV dword ptr [ESP + 0x24],EAX      ; 004dfc7e
    MOV dword ptr [ESP + 0x28],EDX      ; 004dfc82
    MOV EDX,dword ptr [ESP + 0x10]      ; 004dfc86
    MOV EAX,dword ptr [ESP + 0x24]      ; 004dfc8a
    CMP EAX,dword ptr [EDX + 0x8]       ; 004dfc8e
    JL 0x004dfb60                       ; 004dfc91
        ;   XREF to: 004dfb60 (CONDITIONAL_JUMP)  ; LAB_004dfb60
    MOV ESI,dword ptr [ECX]             ; 004dfc97
        ;   Label: LAB_004dfc97
    MOV EBX,ECX                         ; 004dfc99
    CMP ESI,0x17                        ; 004dfc9b
    JNZ 0x004dfd12                      ; 004dfc9e
        ;   XREF to: 004dfd12 (CONDITIONAL_JUMP)  ; LAB_004dfd12
    MOV ESI,dword ptr [EBP + 0x14]      ; 004dfca0
        ;   Label: LAB_004dfca0
    MOV ESI,dword ptr [ESI + 0x14]      ; 004dfca3
    ADD EBX,0xc                         ; 004dfca6
    ADD ESI,0x14                        ; 004dfca9
    MOV ECX,dword ptr [EBX]             ; 004dfcac
        ;   Label: LAB_004dfcac
    CMP ECX,0x18                        ; 004dfcae
    JC 0x004dfcc3                       ; 004dfcb1
        ;   XREF to: 004dfcc3 (CONDITIONAL_JUMP)  ; LAB_004dfcc3
    JA 0x004dfd45                       ; 004dfcb3
        ;   XREF to: 004dfd45 (CONDITIONAL_JUMP)  ; LAB_004dfd45
    PUSH EBX                            ; 004dfcb9
    PUSH ESI                            ; 004dfcba
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0 ; 004dfcbb
        ;   XREF to: 004df5f0 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_calculateSurfaceNormal_FUN_004df5f0(CVector3i * vertex_data, SMRGLPrimitiveTriangle * texture)
    ADD ESP,0x8                         ; 004dfcc0
        ;   Label: LAB_004dfcc0
    PUSH EBX                            ; 004dfcc3
        ;   Label: LAB_004dfcc3
    CALL engine_model.c_FUN_00500f30    ; 004dfcc4
        ;   XREF to: 00500f30 (UNCONDITIONAL_CALL)  ; int engine_model.c_FUN_00500f30(SMRGLHeaderExtended * header)
    SHR EAX,0x2                         ; 004dfcc9
    SHL EAX,0x2                         ; 004dfccc
    ADD EBX,EAX                         ; 004dfccf
    MOV EDX,dword ptr [EBX]             ; 004dfcd1
    ADD ESP,0x4                         ; 004dfcd3
    TEST EDX,EDX                        ; 004dfcd6
    JNZ 0x004dfcac                      ; 004dfcd8
        ;   XREF to: 004dfcac (CONDITIONAL_JUMP)  ; LAB_004dfcac
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dfcda
    MOV ECX,dword ptr [EAX + 0x14]      ; 004dfcdd
    PUSH ECX                            ; 004dfce0
    CALL engine_3d.c_dispatchMRGLBlockChain_FUN_004078b0 ; 004dfce1
        ;   XREF to: 004078b0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_dispatchMRGLBlockChain_FUN_004078b0(SMRGLHeaderExtended * chain)
    ADD ESP,0x4                         ; 004dfce6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dfce9
    ADD EAX,0x158                       ; 004dfcec
    MOV ESP,EBP                         ; 004dfcf1
    POP EBP                             ; 004dfcf3
    POP EDI                             ; 004dfcf4
    POP ESI                             ; 004dfcf5
    POP EBX                             ; 004dfcf6
    RET                                 ; 004dfcf7
    PUSH EAX                            ; 004dfcf8
        ;   Label: LAB_004dfcf8
    CALL engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004df770 ; 004dfcf9
        ;   XREF to: 004df770 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004df770(SMRGLKeyframeModel * keyframe_model)
    ADD ESP,0x4                         ; 004dfcfe
    JMP 0x004df979                      ; 004dfd01
        ;   XREF to: 004df979 (UNCONDITIONAL_JUMP)  ; LAB_004df979
    MOV EDI,dword ptr [EBP + 0x14]      ; 004dfd06
        ;   Label: LAB_004dfd06
    MOV EDI,dword ptr [EDI + 0x8]       ; 004dfd09
    DEC EDI                             ; 004dfd0c
    JMP 0x004df9fd                      ; 004dfd0d
        ;   XREF to: 004df9fd (UNCONDITIONAL_JUMP)  ; LAB_004df9fd
    MOV EDI,0x5dbc7c                    ; 004dfd12 | = "..\\engine\\keyframe.c"
        ;   Label: LAB_004dfd12
    MOV EAX,0x1a6                       ; 004dfd17
    PUSH 0x5dbc91                       ; 004dfd1c | = "ZBP not found!"
    MOV dword ptr [0x01d046a0],EDI      ; 004dfd21 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004dfd27 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004dfd2c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004dfd31
    JMP 0x004dfca0                      ; 004dfd34
        ;   XREF to: 004dfca0 (UNCONDITIONAL_JUMP)  ; LAB_004dfca0
    PUSH EBX                            ; 004dfd39
        ;   Label: LAB_004dfd39
    PUSH ESI                            ; 004dfd3a
    CALL engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004df430 ; 004dfd3b
        ;   XREF to: 004df430 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004df430(CVector3i * vertex_data, SMRGLPrimitiveTriangleIndex * texture)
    JMP 0x004dfcc0                      ; 004dfd40
        ;   XREF to: 004dfcc0 (UNCONDITIONAL_JUMP)  ; LAB_004dfcc0
    CMP ECX,0x19                        ; 004dfd45
        ;   Label: LAB_004dfd45
    JZ 0x004dfd39                       ; 004dfd48
        ;   XREF to: 004dfd39 (CONDITIONAL_JUMP)  ; LAB_004dfd39
    JMP 0x004dfcc3                      ; 004dfd4a
        ;   XREF to: 004dfcc3 (UNCONDITIONAL_JUMP)  ; LAB_004dfcc3

