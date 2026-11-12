; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dlight_cpp_FUN_0046498e(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d91f4
;   undefined4 DAT_005d91fc
;   undefined4 DAT_005d9200
;   undefined4 DAT_005d9204
;   undefined4 DAT_005d920c
;   undefined4 DAT_005d9214
;   undefined4 DAT_005d921c
;   undefined4 DAT_005d9224
;   undefined4 DAT_005febd0
;   undefined4 DAT_00612560
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f840
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0046498e
        ;   Label: core_dlight.cpp_FUN_0046498e
    PUSH EBX                            ; 00464990
    PUSH ESI                            ; 00464991
    PUSH EDI                            ; 00464992
    PUSH EBP                            ; 00464993
    MOV EBP,ESP                         ; 00464994
    SUB ESP,0xdc                        ; 00464996
    AND ESP,0xfffffff8                  ; 0046499c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046499f
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 004649a2
    JNZ 0x004649b2                      ; 004649a9
        ;   XREF to: 004649b2 (CONDITIONAL_JUMP)  ; LAB_004649b2
    MOV ESP,EBP                         ; 004649ab
    POP EBP                             ; 004649ad
    POP EDI                             ; 004649ae
    POP ESI                             ; 004649af
    POP EBX                             ; 004649b0
    RET                                 ; 004649b1
    ADD EAX,0x4                         ; 004649b2
        ;   Label: LAB_004649b2
    PUSH EAX                            ; 004649b5
    MOV ECX,dword ptr [0x00612560]      ; 004649b6 | DAT_00612560
    PUSH ECX                            ; 004649bc
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004649bd
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004649c2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004649c5
    ADD EAX,0x10                        ; 004649c8
    PUSH EAX                            ; 004649cb
    LEA ESI,[ESP + 0x40]                ; 004649cc
    CALL core_dirmat.cpp_FUN_0045f840   ; 004649d0
        ;   XREF to: 0045f840 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f840()
    ADD ESP,0x4                         ; 004649d5
    PUSH 0x0                            ; 004649d8
    LEA EAX,[ESP + 0x4c]                ; 004649da
    LEA EDI,[ESP + 0x4c]                ; 004649de
    PUSH EAX                            ; 004649e2
    MOV EBX,dword ptr [0x00612560]      ; 004649e3 | DAT_00612560
    LEA ESI,[ESP + 0x44]                ; 004649e9
    PUSH EBX                            ; 004649ed
    MOVSD ES:EDI,ESI                    ; 004649ee
    MOVSD ES:EDI,ESI                    ; 004649ef
    MOVSD ES:EDI,ESI                    ; 004649f0
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004649f1
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004649f6
    PUSH 0x6122a8                       ; 004649f9
    MOV ESI,dword ptr [0x00612560]      ; 004649fe | DAT_00612560
    PUSH ESI                            ; 00464a04
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 00464a05
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00464a0a
    PUSH 0x1                            ; 00464a0d
    MOV EDI,dword ptr [0x00612560]      ; 00464a0f | DAT_00612560
    PUSH EDI                            ; 00464a15
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 00464a16
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    MOV EAX,0x1                         ; 00464a1b
    ADD ESP,0x8                         ; 00464a20
    MOV dword ptr [ESP + 0x4],EAX       ; 00464a23
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464a27
        ;   Label: LAB_00464a27
    FLD float ptr [EAX + 0x38]          ; 00464a2a
    FDIVR double ptr [0x005d9224]       ; 00464a2d | DAT_005d9224
    MOV EAX,dword ptr [ESP + 0x4]       ; 00464a33
    MOV dword ptr [ESP + 0xd4],EAX      ; 00464a37
    FILD dword ptr [ESP + 0xd4]         ; 00464a3e
    FMULP                               ; 00464a45
    FMUL double ptr [0x005d91f4]        ; 00464a47 | DAT_005d91f4
    FST float ptr [ESP]                 ; 00464a4d
    FLD1                                ; 00464a50
    FPATAN                              ; 00464a52
    FCOS                                ; 00464a54
    XOR EDI,EDI                         ; 00464a56
    FSTP float ptr [ESP + 0xa8]         ; 00464a58
    MOV dword ptr [ESP + 0xd4],EDI      ; 00464a5f
        ;   Label: LAB_00464a5f
    FLD float ptr [0x005d91fc]          ; 00464a66 | DAT_005d91fc
    FILD dword ptr [ESP + 0xd4]         ; 00464a6c
    FMUL ST1                            ; 00464a73
    FLD float ptr [0x005d9200]          ; 00464a75 | DAT_005d9200
    FXCH                                ; 00464a7b
    FMUL ST1                            ; 00464a7d
    LEA EAX,[EDI + 0x1]                 ; 00464a7f
    FLD double ptr [0x005d9204]         ; 00464a82 | DAT_005d9204
    FXCH                                ; 00464a88
    FMUL ST1                            ; 00464a8a
    MOV dword ptr [ESP + 0xd4],EAX      ; 00464a8c
    FLD ST0                             ; 00464a93
    FSIN                                ; 00464a95
    FILD dword ptr [ESP + 0xd4]         ; 00464a97
    FMULP ST5                           ; 00464a9e
    FXCH ST4                            ; 00464aa0
    FMULP ST3                           ; 00464aa2
    FXCH ST2                            ; 00464aa4
    FMULP                               ; 00464aa6
    FLD ST0                             ; 00464aa8
    FSIN                                ; 00464aaa
    FXCH ST2                            ; 00464aac
    FCOS                                ; 00464aae
    FXCH                                ; 00464ab0
    FCOS                                ; 00464ab2
    MOV EDX,dword ptr [EBP + 0x14]      ; 00464ab4
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 00464ab7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464abd
    SAR EDX,0x1f                        ; 00464ac0
    MOV EAX,dword ptr [EAX + 0x1cc0]    ; 00464ac3
    SUB EAX,EDX                         ; 00464ac9
    SAR EAX,0x1                         ; 00464acb
    MOV EDX,dword ptr [EBP + 0x14]      ; 00464acd
    MOV dword ptr [ESP + 0xd4],EAX      ; 00464ad0
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 00464ad7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464add
    SAR EDX,0x1f                        ; 00464ae0
    MOV EAX,dword ptr [EAX + 0x1cc4]    ; 00464ae3
    SUB EAX,EDX                         ; 00464ae9
    SAR EAX,0x1                         ; 00464aeb
    FLD float ptr [ESP]                 ; 00464aed
    FXCH ST2                            ; 00464af0
    FMUL ST2                            ; 00464af2
    MOV dword ptr [ESP + 0xd8],EAX      ; 00464af4
    FSTP float ptr [ESP + 0xb8]         ; 00464afb
    FILD dword ptr [ESP + 0xd8]         ; 00464b02
    FLD ST0                             ; 00464b09
    FMUL float ptr [ESP + 0xb8]         ; 00464b0b
    MOV EDX,dword ptr [EBP + 0x14]      ; 00464b12
    FSUBP                               ; 00464b15
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 00464b17
    CALL crt_math.c_round_FUN_005c03a0  ; 00464b1d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x9c]        ; 00464b22
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00464b29
    IMUL EAX,ECX                        ; 00464b30
    FXCH ST3                            ; 00464b33
    FMUL ST1                            ; 00464b35
    FSTP float ptr [ESP + 0xb4]         ; 00464b37
    FILD dword ptr [ESP + 0xd4]         ; 00464b3e
    FLD ST0                             ; 00464b45
    FMUL float ptr [ESP + 0xb4]         ; 00464b47
    FXCH ST3                            ; 00464b4e
    FMUL ST2                            ; 00464b50
    FXCH ST3                            ; 00464b52
    FADDP                               ; 00464b54
    FXCH ST3                            ; 00464b56
    FMULP                               ; 00464b58
    FXCH ST2                            ; 00464b5a
    CALL crt_math.c_round_FUN_005c03a0  ; 00464b5c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xa0]        ; 00464b61
    ADD EAX,dword ptr [ESP + 0xa0]      ; 00464b68
    MOV EDX,dword ptr [EDX + 0x2f94]    ; 00464b6f
    ADD EAX,EAX                         ; 00464b75
    ADD EDX,EAX                         ; 00464b77
    XOR EAX,EAX                         ; 00464b79
    MOV AX,word ptr [EDX]               ; 00464b7b
    MOV dword ptr [ESP + 0xd8],EAX      ; 00464b7e
    FILD dword ptr [ESP + 0xd8]         ; 00464b85
    FMUL double ptr [0x005d920c]        ; 00464b8c | DAT_005d920c
    XOR ESI,ESI                         ; 00464b92
    FXCH                                ; 00464b94
    FSTP float ptr [ESP + 0xac]         ; 00464b96
    FSTP float ptr [ESP + 0xc8]         ; 00464b9d
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00464ba4
    FSTP float ptr [ESP + 0xb0]         ; 00464bab
    MOV dword ptr [ESP + 0xc4],EAX      ; 00464bb2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464bb9
        ;   Label: LAB_00464bb9
    MOV EAX,dword ptr [EAX + 0x140]     ; 00464bbc
    FLD float ptr [ESP + 0xa8]          ; 00464bc2
    MOV dword ptr [ESP + 0xa4],EAX      ; 00464bc9
    MOV dword ptr [ESP + 0xd8],ESI      ; 00464bd0
    FMUL float ptr [ESP + 0xa4]         ; 00464bd7
    FILD dword ptr [ESP + 0xd8]         ; 00464bde
    FMUL ST1                            ; 00464be5
    FLD float ptr [0x005d9214]          ; 00464be7 | DAT_005d9214
    FXCH                                ; 00464bed
    FMUL ST1                            ; 00464bef
    FLD float ptr [ESP + 0xa4]          ; 00464bf1
    FXCH                                ; 00464bf8
    FSTP float ptr [ESP + 0xd0]         ; 00464bfa
    FSUB float ptr [ESP + 0xd0]         ; 00464c01
    FLD1                                ; 00464c08
    FDIV float ptr [ESP + 0xa4]         ; 00464c0a
    LEA EAX,[ESI + 0x1]                 ; 00464c11
    MOV dword ptr [ESP + 0xd8],EAX      ; 00464c14
    FILD dword ptr [ESP + 0xd8]         ; 00464c1b
    FMULP ST4                           ; 00464c22
    FXCH ST3                            ; 00464c24
    FMULP ST2                           ; 00464c26
    FLD float ptr [ESP + 0xa4]          ; 00464c28
    FXCH ST2                            ; 00464c2f
    FSTP float ptr [ESP + 0xcc]         ; 00464c31
    FXCH                                ; 00464c38
    FSUB float ptr [ESP + 0xcc]         ; 00464c3a
    FXCH                                ; 00464c41
    FMUL ST2                            ; 00464c43
    FXCH                                ; 00464c45
    FMULP ST2                           ; 00464c47
    FLD double ptr [0x005d921c]         ; 00464c49 | DAT_005d921c
    FXCH                                ; 00464c4f
    FMUL ST1                            ; 00464c51
    FXCH ST2                            ; 00464c53
    FMULP                               ; 00464c55
    FLD float ptr [ESP + 0xd0]          ; 00464c57
    FXCH ST2                            ; 00464c5e
    CALL crt_math.c_round_FUN_005c03a0  ; 00464c60
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00464c65
    CALL crt_math.c_round_FUN_005c03a0  ; 00464c67
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00464c6c
    FISTP dword ptr [ESP + 0xc0]        ; 00464c6e
    FISTP dword ptr [ESP + 0xbc]        ; 00464c75
    FCOMP float ptr [ESP + 0xc8]        ; 00464c7c
    FNSTSW AX                           ; 00464c83
    SAHF                                ; 00464c85
    JNC 0x00465024                      ; 00464c86
        ;   XREF to: 00465024 (CONDITIONAL_JUMP)  ; LAB_00465024
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00464c8c
    MOV dword ptr [ESP + 0x5c],EAX      ; 00464c93
        ;   Label: LAB_00464c93
    FLD float ptr [ESP + 0x5c]          ; 00464c97
    FMUL float ptr [ESP + 0xb4]         ; 00464c9b
    FLD float ptr [ESP + 0x5c]          ; 00464ca2
    FMUL float ptr [ESP + 0xb8]         ; 00464ca6
    LEA EBX,[ESP + 0x30]                ; 00464cad
    LEA EAX,[ESP + 0x54]                ; 00464cb1
    MOV EDX,dword ptr [0x00612560]      ; 00464cb5 | DAT_00612560
    FXCH                                ; 00464cbb
    FSTP float ptr [ESP + 0x54]         ; 00464cbd
    FSTP float ptr [ESP + 0x58]         ; 00464cc1
    FLD float ptr [EAX]                 ; 00464cc5
    FMUL float ptr [0x005febd0]         ; 00464cc7 | DAT_005febd0
    FISTP dword ptr [EBX]               ; 00464ccd
    FLD float ptr [EAX + 0x4]           ; 00464ccf
    FMUL float ptr [0x005febd0]         ; 00464cd2 | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00464cd8
    FLD float ptr [EAX + 0x8]           ; 00464cdb
    FMUL float ptr [0x005febd0]         ; 00464cde | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00464ce4
    LEA EAX,[ESP + 0x30]                ; 00464ce7
    PUSH EAX                            ; 00464ceb
    MOV EAX,dword ptr [EDX]             ; 00464cec
    PUSH EAX                            ; 00464cee
    CALL engine_special.cpp_FUN_00580173 ; 00464cef
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00464cf4
    FLD float ptr [ESP + 0xd0]          ; 00464cf7
    FCOMP float ptr [ESP + 0xc4]        ; 00464cfe
    FNSTSW AX                           ; 00464d05
    SAHF                                ; 00464d07
    JNC 0x00465030                      ; 00464d08
        ;   XREF to: 00465030 (CONDITIONAL_JUMP)  ; LAB_00465030
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00464d0e
    MOV dword ptr [ESP + 0x5c],EAX      ; 00464d15
        ;   Label: LAB_00464d15
    FLD float ptr [ESP + 0x5c]          ; 00464d19
    FMUL float ptr [ESP + 0xac]         ; 00464d1d
    FLD float ptr [ESP + 0x5c]          ; 00464d24
    FMUL float ptr [ESP + 0xb0]         ; 00464d28
    LEA EBX,[ESP + 0x60]                ; 00464d2f
    LEA EAX,[ESP + 0x54]                ; 00464d33
    MOV EDX,dword ptr [0x00612560]      ; 00464d37 | DAT_00612560
    FXCH                                ; 00464d3d
    FSTP float ptr [ESP + 0x54]         ; 00464d3f
    FSTP float ptr [ESP + 0x58]         ; 00464d43
    FLD float ptr [EAX]                 ; 00464d47
    FMUL float ptr [0x005febd0]         ; 00464d49 | DAT_005febd0
    FISTP dword ptr [EBX]               ; 00464d4f
    FLD float ptr [EAX + 0x4]           ; 00464d51
    FMUL float ptr [0x005febd0]         ; 00464d54 | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00464d5a
    FLD float ptr [EAX + 0x8]           ; 00464d5d
    FMUL float ptr [0x005febd0]         ; 00464d60 | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00464d66
    LEA EAX,[ESP + 0x60]                ; 00464d69
    PUSH EAX                            ; 00464d6d
    MOV EAX,dword ptr [EDX]             ; 00464d6e
    ADD EAX,0x30                        ; 00464d70
    PUSH EAX                            ; 00464d73
    CALL engine_special.cpp_FUN_00580173 ; 00464d74
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00464d79
    FLD float ptr [ESP + 0xcc]          ; 00464d7c
    FCOMP float ptr [ESP + 0xc4]        ; 00464d83
    FNSTSW AX                           ; 00464d8a
    SAHF                                ; 00464d8c
    JNC 0x0046503c                      ; 00464d8d
        ;   XREF to: 0046503c (CONDITIONAL_JUMP)  ; LAB_0046503c
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00464d93
    MOV dword ptr [ESP + 0x5c],EAX      ; 00464d9a
        ;   Label: LAB_00464d9a
    FLD float ptr [ESP + 0x5c]          ; 00464d9e
    FMUL float ptr [ESP + 0xac]         ; 00464da2
    FLD float ptr [ESP + 0x5c]          ; 00464da9
    FMUL float ptr [ESP + 0xb0]         ; 00464dad
    LEA EBX,[ESP + 0x6c]                ; 00464db4
    LEA EAX,[ESP + 0x54]                ; 00464db8
    MOV EDX,dword ptr [0x00612560]      ; 00464dbc | DAT_00612560
    FXCH                                ; 00464dc2
    FSTP float ptr [ESP + 0x54]         ; 00464dc4
    FSTP float ptr [ESP + 0x58]         ; 00464dc8
    FLD float ptr [EAX]                 ; 00464dcc
    FMUL float ptr [0x005febd0]         ; 00464dce | DAT_005febd0
    FISTP dword ptr [EBX]               ; 00464dd4
    FLD float ptr [EAX + 0x4]           ; 00464dd6
    FMUL float ptr [0x005febd0]         ; 00464dd9 | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00464ddf
    FLD float ptr [EAX + 0x8]           ; 00464de2
    FMUL float ptr [0x005febd0]         ; 00464de5 | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00464deb
    LEA EAX,[ESP + 0x6c]                ; 00464dee
    PUSH EAX                            ; 00464df2
    MOV EAX,dword ptr [EDX]             ; 00464df3
    ADD EAX,0x60                        ; 00464df5
    PUSH EAX                            ; 00464df8
    CALL engine_special.cpp_FUN_00580173 ; 00464df9
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00464dfe
    FLD float ptr [ESP + 0xcc]          ; 00464e01
    FCOMP float ptr [ESP + 0xc8]        ; 00464e08
    FNSTSW AX                           ; 00464e0f
    SAHF                                ; 00464e11
    JNC 0x00465048                      ; 00464e12
        ;   XREF to: 00465048 (CONDITIONAL_JUMP)  ; LAB_00465048
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00464e18
    MOV dword ptr [ESP + 0x5c],EAX      ; 00464e1f
        ;   Label: LAB_00464e1f
    FLD float ptr [ESP + 0x5c]          ; 00464e23
    FMUL float ptr [ESP + 0xb4]         ; 00464e27
    FLD float ptr [ESP + 0x5c]          ; 00464e2e
    FMUL float ptr [ESP + 0xb8]         ; 00464e32
    LEA EBX,[ESP + 0x78]                ; 00464e39
    LEA EAX,[ESP + 0x54]                ; 00464e3d
    MOV EDX,dword ptr [0x00612560]      ; 00464e41 | DAT_00612560
    FXCH                                ; 00464e47
    FSTP float ptr [ESP + 0x54]         ; 00464e49
    FSTP float ptr [ESP + 0x58]         ; 00464e4d
    FLD float ptr [EAX]                 ; 00464e51
    FMUL float ptr [0x005febd0]         ; 00464e53 | DAT_005febd0
    FISTP dword ptr [EBX]               ; 00464e59
    FLD float ptr [EAX + 0x4]           ; 00464e5b
    FMUL float ptr [0x005febd0]         ; 00464e5e | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00464e64
    FLD float ptr [EAX + 0x8]           ; 00464e67
    FMUL float ptr [0x005febd0]         ; 00464e6a | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00464e70
    LEA EAX,[ESP + 0x78]                ; 00464e73
    PUSH EAX                            ; 00464e77
    MOV EAX,dword ptr [EDX]             ; 00464e78
    ADD EAX,0x90                        ; 00464e7a
    PUSH EAX                            ; 00464e7f
    CALL engine_special.cpp_FUN_00580173 ; 00464e80
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x00612560]      ; 00464e85 | DAT_00612560
    ADD ESP,0x8                         ; 00464e8b
    MOV EBX,dword ptr [EDX]             ; 00464e8e
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00464e90
    MOV dword ptr [EBX + 0x2c],EAX      ; 00464e97
    MOV EAX,dword ptr [EDX]             ; 00464e9a
    MOV dword ptr [EAX + 0x28],0xffff   ; 00464e9c
    MOV EAX,dword ptr [EDX]             ; 00464ea3
    MOV dword ptr [EAX + 0x24],0xffff   ; 00464ea5
    MOV EAX,dword ptr [EDX]             ; 00464eac
    MOV dword ptr [EAX + 0x20],0xffff   ; 00464eae
    MOV EAX,dword ptr [EDX]             ; 00464eb5
    MOV dword ptr [EAX + 0x18],0xf80000 ; 00464eb7
    MOV EAX,dword ptr [EDX]             ; 00464ebe
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 00464ec0
    MOV EBX,dword ptr [EDX]             ; 00464ec7
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00464ec9
    MOV dword ptr [EBX + 0x5c],EAX      ; 00464ed0
    MOV EAX,dword ptr [EDX]             ; 00464ed3
    MOV dword ptr [EAX + 0x58],0xffff   ; 00464ed5
    MOV EAX,dword ptr [EDX]             ; 00464edc
    MOV dword ptr [EAX + 0x54],0xffff   ; 00464ede
    MOV EAX,dword ptr [EDX]             ; 00464ee5
    MOV dword ptr [EAX + 0x50],0xffff   ; 00464ee7
    MOV EAX,dword ptr [EDX]             ; 00464eee
    MOV dword ptr [EAX + 0x48],0x80000  ; 00464ef0
    MOV EAX,dword ptr [EDX]             ; 00464ef7
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 00464ef9
    MOV EBX,dword ptr [EDX]             ; 00464f00
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00464f02
    MOV dword ptr [EBX + 0x8c],EAX      ; 00464f09
    MOV EAX,dword ptr [EDX]             ; 00464f0f
    MOV dword ptr [EAX + 0x88],0xffff   ; 00464f11
    MOV EAX,dword ptr [EDX]             ; 00464f1b
    MOV dword ptr [EAX + 0x84],0xffff   ; 00464f1d
    MOV EAX,dword ptr [EDX]             ; 00464f27
    MOV dword ptr [EAX + 0x80],0xffff   ; 00464f29
    MOV EAX,dword ptr [EDX]             ; 00464f33
    MOV dword ptr [EAX + 0x78],0x80000  ; 00464f35
    MOV EAX,dword ptr [EDX]             ; 00464f3c
    MOV dword ptr [EAX + 0x7c],0x80000  ; 00464f3e
    MOV EBX,dword ptr [EDX]             ; 00464f45
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00464f47
    MOV dword ptr [EBX + 0xbc],EAX      ; 00464f4e
    MOV EAX,dword ptr [EDX]             ; 00464f54
    MOV dword ptr [EAX + 0xb8],0xffff   ; 00464f56
    MOV EAX,dword ptr [EDX]             ; 00464f60
    MOV dword ptr [EAX + 0xb4],0xffff   ; 00464f62
    MOV EAX,dword ptr [EDX]             ; 00464f6c
    MOV dword ptr [EAX + 0xb0],0xffff   ; 00464f6e
    MOV EAX,dword ptr [EDX]             ; 00464f78
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 00464f7a
    INC ESI                             ; 00464f84
    MOV EAX,dword ptr [EDX]             ; 00464f85
    XOR ECX,ECX                         ; 00464f87
    MOV EBX,0x3                         ; 00464f89
    MOV dword ptr [EAX + 0xac],0x80000  ; 00464f8e
    MOV EAX,0x4                         ; 00464f98
    MOV dword ptr [ESP + 0x1c],ECX      ; 00464f9d
    MOV dword ptr [ESP + 0x18],ECX      ; 00464fa1
    MOV dword ptr [ESP + 0xc],EAX       ; 00464fa5
    MOV EAX,0x1                         ; 00464fa9
    MOV dword ptr [ESP + 0x14],ECX      ; 00464fae
    MOV dword ptr [ESP + 0x24],EAX      ; 00464fb2
    LEA EAX,[ESP + 0x8]                 ; 00464fb6
    MOV dword ptr [ESP + 0x10],ECX      ; 00464fba
    PUSH EAX                            ; 00464fbe
    MOV dword ptr [ESP + 0x24],ECX      ; 00464fbf
    MOV ECX,0x2                         ; 00464fc3
    PUSH EDX                            ; 00464fc8
    MOV dword ptr [ESP + 0x34],EBX      ; 00464fc9
    MOV dword ptr [ESP + 0x30],ECX      ; 00464fcd
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 00464fd1
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00464fd6
    CMP ESI,0x4                         ; 00464fd9
    JL 0x00464bb9                       ; 00464fdc
        ;   XREF to: 00464bb9 (CONDITIONAL_JUMP)  ; LAB_00464bb9
    INC EDI                             ; 00464fe2
    CMP EDI,0x10                        ; 00464fe3
    JL 0x00464a5f                       ; 00464fe6
        ;   XREF to: 00464a5f (CONDITIONAL_JUMP)  ; LAB_00464a5f
    MOV ESI,dword ptr [ESP + 0x4]       ; 00464fec
    INC ESI                             ; 00464ff0
    MOV dword ptr [ESP + 0x4],ESI       ; 00464ff1
    CMP ESI,0x10                        ; 00464ff5
    JL 0x00464a27                       ; 00464ff8
        ;   XREF to: 00464a27 (CONDITIONAL_JUMP)  ; LAB_00464a27
    MOV EAX,[0x00612560]                ; 00464ffe | DAT_00612560
    PUSH EAX                            ; 00465003
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 00465004
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 00465009
    PUSH 0x0                            ; 0046500c
    MOV EDX,dword ptr [0x00612560]      ; 0046500e | DAT_00612560
    PUSH EDX                            ; 00465014
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 00465015
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0046501a
    MOV ESP,EBP                         ; 0046501d
    POP EBP                             ; 0046501f
    POP EDI                             ; 00465020
    POP ESI                             ; 00465021
    POP EBX                             ; 00465022
    RET                                 ; 00465023
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00465024
        ;   Label: LAB_00465024
    JMP 0x00464c93                      ; 0046502b
        ;   XREF to: 00464c93 (UNCONDITIONAL_JUMP)  ; LAB_00464c93
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00465030
        ;   Label: LAB_00465030
    JMP 0x00464d15                      ; 00465037
        ;   XREF to: 00464d15 (UNCONDITIONAL_JUMP)  ; LAB_00464d15
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0046503c
        ;   Label: LAB_0046503c
    JMP 0x00464d9a                      ; 00465043
        ;   XREF to: 00464d9a (UNCONDITIONAL_JUMP)  ; LAB_00464d9a
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00465048
        ;   Label: LAB_00465048
    JMP 0x00464e1f                      ; 0046504f
        ;   XREF to: 00464e1f (UNCONDITIONAL_JUMP)  ; LAB_00464e1f

