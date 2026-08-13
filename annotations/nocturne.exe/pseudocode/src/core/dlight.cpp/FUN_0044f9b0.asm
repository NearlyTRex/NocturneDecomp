; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dlight_cpp_FUN_0044f9b0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined        Stack[-0x138]:1  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_FUN_00509a80 at 0050a1f0
;
; Referenced Globals:
;   double DOUBLE_0057c7ee = 18
;   double DOUBLE_0057c7f6 = 2
;   double DOUBLE_0057c7fe = 4.60042119484827E-315
;   double DOUBLE_0057c806 = 65535
;   double DOUBLE_0057c80e = 5.12999850561692E-315
;   double DOUBLE_0057c816 = 0.5
;   double DOUBLE_0057c81e = 0.25
;   undefined4 DAT_0059c030
;   undefined4 DAT_0059c038
;   undefined4 DAT_005ae488
;   undefined4 DAT_005ae4a4
;   undefined4 DAT_005ae4a8
;   undefined4 DAT_005ae4ac
;   undefined4 DAT_005ae4b0
;   undefined4 DAT_005ae4b4
;   ... and 4 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
;   engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderOverlayDirect_FUN_004604c0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_FUN_00460d10
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f9b0
        ;   Label: core_dlight.cpp_FUN_0044f9b0
    PUSH ESI                            ; 0044f9b1
    PUSH EDI                            ; 0044f9b2
    PUSH EBP                            ; 0044f9b3
    MOV EBP,ESP                         ; 0044f9b4
    SUB ESP,0x138                       ; 0044f9b6
    AND ESP,0xfffffff8                  ; 0044f9bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f9bf
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 0044f9c2
    JNZ 0x0044f9d2                      ; 0044f9c9
        ;   XREF to: 0044f9d2 (CONDITIONAL_JUMP)  ; LAB_0044f9d2
    MOV ESP,EBP                         ; 0044f9cb
        ;   Label: LAB_0044f9cb
    POP EBP                             ; 0044f9cd
    POP EDI                             ; 0044f9ce
    POP ESI                             ; 0044f9cf
    POP EBX                             ; 0044f9d0
    RET                                 ; 0044f9d1
    LEA EAX,[ESP + 0xd4]                ; 0044f9d2
        ;   Label: LAB_0044f9d2
    PUSH EAX                            ; 0044f9d9
    MOV ECX,dword ptr [0x005ae704]      ; 0044f9da | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 0044f9e0 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30 ; 0044f9e1
        ;   XREF to: 00460d30 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(CDemonRenderer * this_ptr, CVector3f * output)
    ADD ESP,0x8                         ; 0044f9e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f9e9
    FLD float ptr [ESP + 0xd4]          ; 0044f9ec
    FSUB float ptr [EAX + 0x104]        ; 0044f9f3
    FLD float ptr [ESP + 0xd8]          ; 0044f9f9
    FXCH                                ; 0044fa00
    FSTP float ptr [ESP + 0xd4]         ; 0044fa02
    FSUB float ptr [EAX + 0x108]        ; 0044fa09
    FLD float ptr [ESP + 0xdc]          ; 0044fa0f
    FXCH                                ; 0044fa16
    FSTP float ptr [ESP + 0xd8]         ; 0044fa18
    FSUB float ptr [EAX + 0x10c]        ; 0044fa1f
    LEA EAX,[ESP + 0xd4]                ; 0044fa25
    PUSH EAX                            ; 0044fa2c
    LEA EAX,[ESP + 0x9c]                ; 0044fa2d
    PUSH EAX                            ; 0044fa34
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044fa35
    ADD EAX,0x110                       ; 0044fa38
    PUSH EAX                            ; 0044fa3d
    FSTP float ptr [ESP + 0xe8]         ; 0044fa3e
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 0044fa45
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 0044fa4a
    LEA EAX,[ESP + 0xe0]                ; 0044fa4c
    ADD ESP,0xc                         ; 0044fa53
    CMP EAX,EDX                         ; 0044fa56
    JZ 0x0044fa77                       ; 0044fa58
        ;   XREF to: 0044fa77 (CONDITIONAL_JUMP)  ; LAB_0044fa77
    MOV EAX,dword ptr [EDX]             ; 0044fa5a
    MOV dword ptr [ESP + 0xd4],EAX      ; 0044fa5c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044fa63
    MOV dword ptr [ESP + 0xd8],EAX      ; 0044fa66
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044fa6d
    MOV dword ptr [ESP + 0xdc],EAX      ; 0044fa70
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044fa77
        ;   Label: LAB_0044fa77
    FLD float ptr [ESP + 0xdc]          ; 0044fa7a
    FCOMP float ptr [EAX + 0x100]       ; 0044fa81
    FNSTSW AX                           ; 0044fa87
    SAHF                                ; 0044fa89
    JA 0x0044f9cb                       ; 0044fa8a
        ;   XREF to: 0044f9cb (CONDITIONAL_JUMP)  ; LAB_0044f9cb
    FLD float ptr [ESP + 0xdc]          ; 0044fa90
    FMUL double ptr [0x0057c7ee]        ; 0044fa97 | DOUBLE_0057c7ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044fa9d
    FDIV float ptr [EAX + 0x138]        ; 0044faa0
    FLD float ptr [ESP + 0xd8]          ; 0044faa6
    FMUL ST0                            ; 0044faad
    FLD float ptr [ESP + 0xd4]          ; 0044faaf
    FMUL ST0                            ; 0044fab6
    FXCH ST2                            ; 0044fab8
    FMUL double ptr [0x0057c7f6]        ; 0044faba | DOUBLE_0057c7f6
    FXCH                                ; 0044fac0
    FSTP float ptr [ESP + 0x118]        ; 0044fac2
    FXCH                                ; 0044fac9
    FADD float ptr [ESP + 0x118]        ; 0044facb
    FXCH                                ; 0044fad2
    FST float ptr [ESP + 0x124]         ; 0044fad4
    FMUL float ptr [ESP + 0x124]        ; 0044fadb
    FXCH                                ; 0044fae2
    FST float ptr [ESP + 0x120]         ; 0044fae4
    FXCH                                ; 0044faeb
    FSTP float ptr [ESP + 0x11c]        ; 0044faed
    FCOMP float ptr [ESP + 0x11c]       ; 0044faf4
    FNSTSW AX                           ; 0044fafb
    SAHF                                ; 0044fafd
    JA 0x0044f9cb                       ; 0044fafe
        ;   XREF to: 0044f9cb (CONDITIONAL_JUMP)  ; LAB_0044f9cb
    FLD float ptr [ESP + 0x120]         ; 0044fb04
    FDIV float ptr [ESP + 0x11c]        ; 0044fb0b
    LEA ESI,[ESP + 0x5c]                ; 0044fb12
    MOV EBX,dword ptr [0x005ae704]      ; 0044fb16 | g_CDemonRenderer_PTR_005ae704
    LEA EDI,[ESP + 0xa4]                ; 0044fb1c
    PUSH EBX                            ; 0044fb23 | DAT_01b4d738
    FLD1                                ; 0044fb24
    FSUBRP                              ; 0044fb26
    LEA EBX,[ESP + 0x54]                ; 0044fb28
    FSTP float ptr [ESP + 0x4]          ; 0044fb2c
    CALL engine_drender.cpp_FUN_00460d10 ; 0044fb30
        ;   XREF to: 00460d10 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00460d10()
    LEA ESI,[ESP + 0x60]                ; 0044fb35
    ADD ESP,0x4                         ; 0044fb39
    LEA EAX,[ESP + 0xa4]                ; 0044fb3c
    MOVSD ES:EDI,ESI                    ; 0044fb43
    MOVSD ES:EDI,ESI                    ; 0044fb44
    MOVSD ES:EDI,ESI                    ; 0044fb45
    FILD dword ptr [EAX]                ; 0044fb46
    FMUL float ptr [0x0059c038]         ; 0044fb48 | DAT_0059c038
    FSTP float ptr [EBX]                ; 0044fb4e
    FILD dword ptr [EAX + 0x4]          ; 0044fb50
    FMUL float ptr [0x0059c038]         ; 0044fb53 | DAT_0059c038
    FSTP float ptr [EBX + 0x4]          ; 0044fb59
    FILD dword ptr [EAX + 0x8]          ; 0044fb5c
    FMUL float ptr [0x0059c038]         ; 0044fb5f | DAT_0059c038
    FSTP float ptr [EBX + 0x8]          ; 0044fb65
    MOV EBX,dword ptr [EBP + 0x14]      ; 0044fb68
    FLD float ptr [ESP + 0x50]          ; 0044fb6b
    FSUB float ptr [EBX + 0x104]        ; 0044fb6f
    FLD float ptr [ESP + 0x54]          ; 0044fb75
    FXCH                                ; 0044fb79
    FSTP float ptr [ESP + 0xc8]         ; 0044fb7b
    FSUB float ptr [EBX + 0x108]        ; 0044fb82
    FST float ptr [ESP + 0xcc]          ; 0044fb88
    FMUL float ptr [ESP + 0xcc]         ; 0044fb8f
    FLD float ptr [ESP + 0xc8]          ; 0044fb96
    FMUL ST0                            ; 0044fb9d
    FLD float ptr [ESP + 0x58]          ; 0044fb9f
    FSUB float ptr [EBX + 0x10c]        ; 0044fba3
    FXCH                                ; 0044fba9
    FADDP ST2,ST0                       ; 0044fbab
    FST float ptr [ESP + 0xd0]          ; 0044fbad
    FMUL float ptr [ESP + 0xd0]         ; 0044fbb4
    FADDP                               ; 0044fbbb
    FSQRT                               ; 0044fbbd
    ADD EBX,0x104                       ; 0044fbbf
    FST float ptr [ESP + 0x8]           ; 0044fbc5
    FLDZ                                ; 0044fbc9
    FCOMPP                              ; 0044fbcb
    FNSTSW AX                           ; 0044fbcd
    SAHF                                ; 0044fbcf
    JNC 0x0044f9cb                      ; 0044fbd0
        ;   XREF to: 0044f9cb (CONDITIONAL_JUMP)  ; LAB_0044f9cb
    FLD1                                ; 0044fbd6
    FLD float ptr [ESP + 0xc8]          ; 0044fbd8
    FXCH                                ; 0044fbdf
    FDIV float ptr [ESP + 0x8]          ; 0044fbe1
    FXCH                                ; 0044fbe5
    FMUL ST1                            ; 0044fbe7
    FLD float ptr [ESP + 0xcc]          ; 0044fbe9
    FMUL ST2                            ; 0044fbf0
    FLD float ptr [ESP + 0xd0]          ; 0044fbf2
    FMULP ST3                           ; 0044fbf9
    MOV EAX,0xffff                      ; 0044fbfb
    MOV EDX,0x3f800000                  ; 0044fc00
    MOV ESI,dword ptr [0x01c038f4]      ; 0044fc05 | DAT_01c038f4
    XOR EDI,EDI                         ; 0044fc0b
    SUB EAX,ESI                         ; 0044fc0d
    MOV dword ptr [ESP + 0xbc],EDI      ; 0044fc0f
    MOV dword ptr [ESP + 0x134],EAX     ; 0044fc16
    LEA EAX,[ESP + 0xbc]                ; 0044fc1d
    MOV dword ptr [ESP + 0xc0],EDI      ; 0044fc24
    PUSH EAX                            ; 0044fc2b
    LEA EAX,[ESP + 0x84]                ; 0044fc2c
    MOV dword ptr [ESP + 0xc8],EDX      ; 0044fc33
    PUSH EAX                            ; 0044fc3a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044fc3b
    FILD dword ptr [ESP + 0x13c]        ; 0044fc3e
    ADD EAX,0x110                       ; 0044fc45
    FSTP float ptr [ESP + 0x13c]        ; 0044fc4a
    PUSH EAX                            ; 0044fc51
    FXCH                                ; 0044fc52
    FSTP float ptr [ESP + 0xd4]         ; 0044fc54
    FSTP float ptr [ESP + 0xd8]         ; 0044fc5b
    FSTP float ptr [ESP + 0xdc]         ; 0044fc62
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0044fc69
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0044fc6e
    FLD float ptr [ESP + 0xcc]          ; 0044fc71
    FMUL float ptr [EAX + 0x4]          ; 0044fc78
    FLD float ptr [ESP + 0xc8]          ; 0044fc7b
    FMUL float ptr [EAX]                ; 0044fc82
    FADDP                               ; 0044fc84
    FLD float ptr [ESP + 0xd0]          ; 0044fc86
    FMUL float ptr [EAX + 0x8]          ; 0044fc8d
    FADDP                               ; 0044fc90
    FMUL float ptr [ESP + 0x134]        ; 0044fc92
    FMUL float ptr [0x0057c7fe]         ; 0044fc99 | DOUBLE_0057c7fe
    FLDZ                                ; 0044fc9f
    FCOMPP                              ; 0044fca1
    FNSTSW AX                           ; 0044fca3
    SAHF                                ; 0044fca5
    JNC 0x0044f9cb                      ; 0044fca6
        ;   XREF to: 0044f9cb (CONDITIONAL_JUMP)  ; LAB_0044f9cb
    FLD float ptr [ESP]                 ; 0044fcac
    PUSH 0x1                            ; 0044fcaf
    MOV ECX,dword ptr [0x005ae704]      ; 0044fcb1 | g_CDemonRenderer_PTR_005ae704
    FMUL double ptr [0x0057c806]        ; 0044fcb7 | DOUBLE_0057c806
    PUSH ECX                            ; 0044fcbd | DAT_01b4d738
    CALL crt_math.c_round_FUN_00563a30  ; 0044fcbe
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x134]       ; 0044fcc3
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0044fcca
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0044fccf
    MOV dword ptr [ESP + 0x130],EDI     ; 0044fcd2
    MOV dword ptr [ESP + 0x128],EBX     ; 0044fcd9
    MOV EDI,0x5ae488                    ; 0044fce0 | DAT_005ae488
    MOV EAX,dword ptr [ESP + 0x130]     ; 0044fce5
        ;   Label: LAB_0044fce5
    MOV dword ptr [ESP + 0x134],EAX     ; 0044fcec
    FILD dword ptr [ESP + 0x134]        ; 0044fcf3
    FMUL float ptr [0x0057c80e]         ; 0044fcfa | DOUBLE_0057c80e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044fd00
    FMUL float ptr [EAX + 0x100]        ; 0044fd03
    FLD float ptr [EAX + 0x138]         ; 0044fd09
    FXCH                                ; 0044fd0f
    FLD ST0                             ; 0044fd11
    FMUL double ptr [0x0057c7ee]        ; 0044fd13 | DOUBLE_0057c7ee
    FDIVRP ST2,ST0                      ; 0044fd19
    FLD float ptr [EDI + 0x1c]          ; 0044fd1b | DAT_005ae4a4 | DAT_005ae4d4
    FMUL double ptr [0x0057c816]        ; 0044fd1e | DOUBLE_0057c816
    MOV EAX,dword ptr [EAX + 0x118]     ; 0044fd24
    FXCH                                ; 0044fd2a
    FMUL double ptr [0x0057c81e]        ; 0044fd2c | DOUBLE_0057c81e
    MOV dword ptr [ESP + 0x38],EAX      ; 0044fd32
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044fd36
    FLD float ptr [ESP + 0x38]          ; 0044fd39
    MOV EAX,dword ptr [EAX + 0x124]     ; 0044fd3d
    FXCH                                ; 0044fd43
    FSTP float ptr [ESP + 0x4]          ; 0044fd45
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044fd49
    FMUL float ptr [ESP + 0x4]          ; 0044fd4d
    FLD float ptr [ESP + 0x3c]          ; 0044fd51
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044fd55
    FMUL float ptr [ESP + 0x4]          ; 0044fd58
    MOV EAX,dword ptr [EAX + 0x130]     ; 0044fd5c
    MOV dword ptr [ESP + 0x40],EAX      ; 0044fd62
    FXCH ST3                            ; 0044fd66
    FMUL double ptr [0x0057c7f6]        ; 0044fd68 | DOUBLE_0057c7f6
    FLD float ptr [ESP + 0x40]          ; 0044fd6e
    FMUL float ptr [ESP + 0x4]          ; 0044fd72
    FXCH                                ; 0044fd76
    FXCH ST3                            ; 0044fd78
    FMUL ST3                            ; 0044fd7a
    FXCH ST2                            ; 0044fd7c
    FSTP float ptr [ESP + 0x44]         ; 0044fd7e
    FXCH ST3                            ; 0044fd82
    FSTP float ptr [ESP + 0x48]         ; 0044fd84
    MOV EAX,dword ptr [ESP + 0x128]     ; 0044fd88
    FXCH ST2                            ; 0044fd8f
    FSTP float ptr [ESP + 0x4c]         ; 0044fd91
    FLD float ptr [EAX]                 ; 0044fd95
    FADD float ptr [ESP + 0x44]         ; 0044fd97
    LEA EDX,[ESP + 0x68]                ; 0044fd9b
    FSTP float ptr [ESP + 0xe0]         ; 0044fd9f
    FLD float ptr [EAX + 0x4]           ; 0044fda6
    FADD float ptr [ESP + 0x48]         ; 0044fda9
    MOV ESI,EDI                         ; 0044fdad
    FSTP float ptr [ESP + 0xe4]         ; 0044fdaf
    FLD float ptr [EAX + 0x8]           ; 0044fdb6
    FADD float ptr [ESP + 0x4c]         ; 0044fdb9
    LEA EAX,[ESP + 0xe0]                ; 0044fdbd
    FSTP float ptr [ESP + 0xe8]         ; 0044fdc4
    FXCH                                ; 0044fdcb
    FSTP ST1                            ; 0044fdcd
    FSTP float ptr [ESP + 0xc]          ; 0044fdcf
    CMP EDX,EAX                         ; 0044fdd3
    JZ 0x0044fdf8                       ; 0044fdd5
        ;   XREF to: 0044fdf8 (CONDITIONAL_JUMP)  ; LAB_0044fdf8
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0044fdd7
    MOV dword ptr [ESP + 0x68],EAX      ; 0044fdde
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0044fde2
    MOV dword ptr [ESP + 0x6c],EAX      ; 0044fde9
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0044fded
    MOV dword ptr [ESP + 0x70],EAX      ; 0044fdf4
    LEA EAX,[ESP + 0x68]                ; 0044fdf8
        ;   Label: LAB_0044fdf8
    PUSH EAX                            ; 0044fdfc
    MOV EAX,[0x005ae704]                ; 0044fdfd | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 0044fe02 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 0044fe03
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0044fe08
    LEA EAX,[ESP + 0x104]               ; 0044fe0b
    PUSH EAX                            ; 0044fe12
    MOV EDX,dword ptr [0x005ae704]      ; 0044fe13 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0044fe19 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0 ; 0044fe1a
        ;   XREF to: 00460db0 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(CDemonRenderer * this_ptr, CVector3f * output)
    ADD ESP,0x8                         ; 0044fe1f
    PUSH 0x0                            ; 0044fe22
    LEA EAX,[ESP + 0x108]               ; 0044fe24
    PUSH EAX                            ; 0044fe2b
    MOV ECX,dword ptr [0x005ae704]      ; 0044fe2c | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 0044fe32 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0044fe33
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 0044fe38
    XOR EBX,EBX                         ; 0044fe3b
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044fe3d
    MOV dword ptr [ESP + 0xb8],EBX      ; 0044fe41
    LEA EBX,[ESP + 0x74]                ; 0044fe48
    MOV dword ptr [ESP + 0xb0],EAX      ; 0044fe4c
    MOV dword ptr [ESP + 0xb4],EAX      ; 0044fe53
    LEA EAX,[ESP + 0xb0]                ; 0044fe5a
    MOV EDX,dword ptr [0x005ae704]      ; 0044fe61 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 0044fe67
    FMUL float ptr [0x0059c030]         ; 0044fe69 | DAT_0059c030
    FISTP dword ptr [EBX]               ; 0044fe6f
    FLD float ptr [EAX + 0x4]           ; 0044fe71
    FMUL float ptr [0x0059c030]         ; 0044fe74 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 0044fe7a
    FLD float ptr [EAX + 0x8]           ; 0044fe7d
    FMUL float ptr [0x0059c030]         ; 0044fe80 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 0044fe86
    LEA EAX,[ESP + 0x74]                ; 0044fe89
    PUSH EAX                            ; 0044fe8d
    MOV EAX,dword ptr [EDX]             ; 0044fe8e | DAT_01b4d738
    PUSH EAX                            ; 0044fe90
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0044fe91
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0044fe96
    MOV AH,byte ptr [ESP + 0xb3]        ; 0044fe99
    XOR AH,0x80                         ; 0044fea0
    LEA EBX,[ESP + 0xec]                ; 0044fea3
    MOV byte ptr [ESP + 0xb3],AH        ; 0044feaa
    LEA EAX,[ESP + 0xb0]                ; 0044feb1
    MOV EDX,dword ptr [0x005ae704]      ; 0044feb8 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 0044febe
    FMUL float ptr [0x0059c030]         ; 0044fec0 | DAT_0059c030
    FISTP dword ptr [EBX]               ; 0044fec6
    FLD float ptr [EAX + 0x4]           ; 0044fec8
    FMUL float ptr [0x0059c030]         ; 0044fecb | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 0044fed1
    FLD float ptr [EAX + 0x8]           ; 0044fed4
    FMUL float ptr [0x0059c030]         ; 0044fed7 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 0044fedd
    LEA EAX,[ESP + 0xec]                ; 0044fee0
    PUSH EAX                            ; 0044fee7
    MOV EAX,dword ptr [EDX]             ; 0044fee8 | DAT_01b4d738
    ADD EAX,0x30                        ; 0044feea
    PUSH EAX                            ; 0044feed
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0044feee
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0044fef3
    MOV DL,byte ptr [ESP + 0xb7]        ; 0044fef6
    LEA EBX,[ESP + 0xf8]                ; 0044fefd
    XOR DL,0x80                         ; 0044ff04
    LEA EAX,[ESP + 0xb0]                ; 0044ff07
    MOV byte ptr [ESP + 0xb7],DL        ; 0044ff0e
    MOV EDX,dword ptr [0x005ae704]      ; 0044ff15 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 0044ff1b
    FMUL float ptr [0x0059c030]         ; 0044ff1d | DAT_0059c030
    FISTP dword ptr [EBX]               ; 0044ff23
    FLD float ptr [EAX + 0x4]           ; 0044ff25
    FMUL float ptr [0x0059c030]         ; 0044ff28 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 0044ff2e
    FLD float ptr [EAX + 0x8]           ; 0044ff31
    FMUL float ptr [0x0059c030]         ; 0044ff34 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 0044ff3a
    LEA EAX,[ESP + 0xf8]                ; 0044ff3d
    PUSH EAX                            ; 0044ff44
    MOV EAX,dword ptr [EDX]             ; 0044ff45 | DAT_01b4d738
    ADD EAX,0x60                        ; 0044ff47
    PUSH EAX                            ; 0044ff4a
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0044ff4b
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0044ff50
    MOV DH,byte ptr [ESP + 0xb3]        ; 0044ff53
    LEA EBX,[ESP + 0x8c]                ; 0044ff5a
    XOR DH,0x80                         ; 0044ff61
    LEA EAX,[ESP + 0xb0]                ; 0044ff64
    MOV byte ptr [ESP + 0xb3],DH        ; 0044ff6b
    MOV EDX,dword ptr [0x005ae704]      ; 0044ff72 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 0044ff78
    FMUL float ptr [0x0059c030]         ; 0044ff7a | DAT_0059c030
    FISTP dword ptr [EBX]               ; 0044ff80
    FLD float ptr [EAX + 0x4]           ; 0044ff82
    FMUL float ptr [0x0059c030]         ; 0044ff85 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 0044ff8b
    FLD float ptr [EAX + 0x8]           ; 0044ff8e
    FMUL float ptr [0x0059c030]         ; 0044ff91 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 0044ff97
    LEA EAX,[ESP + 0x8c]                ; 0044ff9a
    PUSH EAX                            ; 0044ffa1
    MOV EAX,dword ptr [EDX]             ; 0044ffa2 | DAT_01b4d738
    ADD EAX,0x90                        ; 0044ffa4
    PUSH EAX                            ; 0044ffa9
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0044ffaa
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0044ffaf
    PUSH ESI                            ; 0044ffb2 | DAT_005ae488
    MOV EAX,[0x005ae704]                ; 0044ffb3 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 0044ffb8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 0044ffb9
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EDX,0x4                         ; 0044ffbe
    ADD ESP,0x8                         ; 0044ffc3
    XOR ECX,ECX                         ; 0044ffc6
    MOV dword ptr [ESP + 0x14],EDX      ; 0044ffc8
    MOV dword ptr [ESP + 0x24],ECX      ; 0044ffcc
    MOV dword ptr [ESP + 0x20],ECX      ; 0044ffd0
    MOV dword ptr [ESP + 0x1c],ECX      ; 0044ffd4
    MOV dword ptr [ESP + 0x18],ECX      ; 0044ffd8
    MOV dword ptr [ESP + 0x28],ECX      ; 0044ffdc
    MOV EDX,dword ptr [0x005ae704]      ; 0044ffe0 | g_CDemonRenderer_PTR_005ae704
    MOV EBX,dword ptr [ESI + 0x20]      ; 0044ffe6 | DAT_005ae4a8
    MOV EAX,dword ptr [EDX]             ; 0044ffe9 | DAT_01b4d738
    SHL EBX,0x10                        ; 0044ffeb
    MOV dword ptr [EAX + 0x18],EBX      ; 0044ffee
    MOV EAX,dword ptr [ESI + 0x24]      ; 0044fff1 | DAT_005ae4ac
    MOV EBX,dword ptr [EDX]             ; 0044fff4 | DAT_01b4d738
    SHL EAX,0x10                        ; 0044fff6
    MOV dword ptr [EBX + 0x1c],EAX      ; 0044fff9
    MOV EBX,dword ptr [EDX]             ; 0044fffc | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0044fffe
    MOV dword ptr [EBX + 0x2c],EAX      ; 00450005
    MOV EAX,dword ptr [EDX]             ; 00450008 | DAT_01b4d738
    MOV dword ptr [EAX + 0x20],0xffff   ; 0045000a
    MOV EAX,dword ptr [EDX]             ; 00450011 | DAT_01b4d738
    MOV dword ptr [EAX + 0x24],0xffff   ; 00450013
    MOV EAX,dword ptr [EDX]             ; 0045001a | DAT_01b4d738
    MOV EBX,0x1                         ; 0045001c
    MOV dword ptr [EAX + 0x28],0xffff   ; 00450021
    MOV dword ptr [ESP + 0x2c],EBX      ; 00450028
    MOV EBX,dword ptr [ESI + 0x28]      ; 0045002c | DAT_005ae4b0
    MOV EAX,dword ptr [EDX]             ; 0045002f | DAT_01b4d738
    SHL EBX,0x10                        ; 00450031
    MOV dword ptr [EAX + 0x48],EBX      ; 00450034
    MOV EAX,dword ptr [ESI + 0x24]      ; 00450037 | DAT_005ae4ac
    MOV EBX,dword ptr [EDX]             ; 0045003a | DAT_01b4d738
    SHL EAX,0x10                        ; 0045003c
    MOV dword ptr [EBX + 0x4c],EAX      ; 0045003f
    MOV EBX,dword ptr [EDX]             ; 00450042 | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00450044
    MOV dword ptr [EBX + 0x5c],EAX      ; 0045004b
    MOV EAX,dword ptr [EDX]             ; 0045004e | DAT_01b4d738
    MOV dword ptr [EAX + 0x50],0xffff   ; 00450050
    MOV EAX,dword ptr [EDX]             ; 00450057 | DAT_01b4d738
    MOV dword ptr [EAX + 0x54],0xffff   ; 00450059
    MOV EAX,dword ptr [EDX]             ; 00450060 | DAT_01b4d738
    MOV dword ptr [EAX + 0x58],0xffff   ; 00450062
    MOV dword ptr [ESP + 0x30],0x2      ; 00450069
    MOV EAX,dword ptr [ESI + 0x28]      ; 00450071 | DAT_005ae4b0
    MOV EBX,dword ptr [EDX]             ; 00450074 | DAT_01b4d738
    SHL EAX,0x10                        ; 00450076
    MOV dword ptr [EBX + 0x78],EAX      ; 00450079
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0045007c | DAT_005ae4b4
    MOV EBX,dword ptr [EDX]             ; 0045007f | DAT_01b4d738
    SHL EAX,0x10                        ; 00450081
    MOV dword ptr [EBX + 0x7c],EAX      ; 00450084
    MOV EBX,dword ptr [EDX]             ; 00450087 | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00450089
    MOV dword ptr [EBX + 0x8c],EAX      ; 00450090
    MOV EAX,dword ptr [EDX]             ; 00450096 | DAT_01b4d738
    MOV dword ptr [EAX + 0x80],0xffff   ; 00450098
    MOV EAX,dword ptr [EDX]             ; 004500a2 | DAT_01b4d738
    MOV dword ptr [EAX + 0x84],0xffff   ; 004500a4
    MOV EAX,dword ptr [EDX]             ; 004500ae | DAT_01b4d738
    MOV ECX,0x3                         ; 004500b0
    MOV dword ptr [EAX + 0x88],0xffff   ; 004500b5
    MOV dword ptr [ESP + 0x34],ECX      ; 004500bf
    MOV EBX,dword ptr [ESI + 0x20]      ; 004500c3 | DAT_005ae4a8
    MOV EAX,dword ptr [EDX]             ; 004500c6 | DAT_01b4d738
    SHL EBX,0x10                        ; 004500c8
    MOV dword ptr [EAX + 0xa8],EBX      ; 004500cb
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004500d1 | DAT_005ae4b4
    MOV EBX,dword ptr [EDX]             ; 004500d4 | DAT_01b4d738
    SHL EAX,0x10                        ; 004500d6
    MOV dword ptr [EBX + 0xac],EAX      ; 004500d9
    MOV EBX,dword ptr [EDX]             ; 004500df | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004500e1
    MOV dword ptr [EBX + 0xbc],EAX      ; 004500e8
    MOV EAX,dword ptr [EDX]             ; 004500ee | DAT_01b4d738
    MOV dword ptr [EAX + 0xb0],0xffff   ; 004500f0
    MOV EAX,dword ptr [EDX]             ; 004500fa | DAT_01b4d738
    MOV dword ptr [EAX + 0xb4],0xffff   ; 004500fc
    MOV EAX,dword ptr [EDX]             ; 00450106 | DAT_01b4d738
    MOV dword ptr [EAX + 0xb8],0xffff   ; 00450108
    LEA EAX,[ESP + 0x10]                ; 00450112
    PUSH EAX                            ; 00450116
    PUSH EDX                            ; 00450117 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderOverlayDirect_FUN_004604c0 ; 00450118
        ;   XREF to: 004604c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderOverlayDirect_FUN_004604c0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0045011d
    MOV EBX,dword ptr [0x005ae704]      ; 00450120 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00450126 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00450127
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0045012c
    MOV ESI,dword ptr [ESP + 0x130]     ; 0045012f
    INC ESI                             ; 00450136
    ADD EDI,0x30                        ; 00450137
    MOV dword ptr [ESP + 0x130],ESI     ; 0045013a
    CMP ESI,0x9                         ; 00450141
    JL 0x0044fce5                       ; 00450144
        ;   XREF to: 0044fce5 (CONDITIONAL_JUMP)  ; LAB_0044fce5
    PUSH 0x0                            ; 0045014a
    MOV EDX,dword ptr [0x005ae704]      ; 0045014c | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00450152 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00450153
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00450158
    MOV ESP,EBP                         ; 0045015b
    POP EBP                             ; 0045015d
    POP EDI                             ; 0045015e
    POP ESI                             ; 0045015f
    POP EBX                             ; 00450160
    RET                                 ; 00450161

