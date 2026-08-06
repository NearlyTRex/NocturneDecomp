; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dlight_cpp_FUN_00450c90(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xf8]:4  local_f8
; undefined        Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined4 DAT_0057c886
;   undefined4 DAT_0057c88e
;   undefined4 DAT_0057c896
;   undefined4 DAT_0057c89e
;   undefined4 DAT_0057c8a6
;   undefined4 DAT_0057c8ae
;   undefined4 DAT_0057c8b6
;   undefined4 DAT_0057c8be
;   undefined4 DAT_0059c030
;   undefined4 DAT_005ae458
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450c90
        ;   Label: core_dlight.cpp_FUN_00450c90
    PUSH ESI                            ; 00450c91
    PUSH EDI                            ; 00450c92
    PUSH EBP                            ; 00450c93
    MOV EBP,ESP                         ; 00450c94
    SUB ESP,0xd4                        ; 00450c96
    AND ESP,0xfffffff8                  ; 00450c9c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00450c9f
    CMP dword ptr [EDI + 0x1cbc],0x0    ; 00450ca2
    JNZ 0x00450cb2                      ; 00450ca9
        ;   XREF to: 00450cb2 (CONDITIONAL_JUMP)  ; LAB_00450cb2
    MOV ESP,EBP                         ; 00450cab
    POP EBP                             ; 00450cad
    POP EDI                             ; 00450cae
    POP ESI                             ; 00450caf
    POP EBX                             ; 00450cb0
    RET                                 ; 00450cb1
    LEA EAX,[EDI + 0x104]               ; 00450cb2
        ;   Label: LAB_00450cb2
    PUSH EAX                            ; 00450cb8
    MOV ECX,dword ptr [0x005ae704]      ; 00450cb9 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00450cbf | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00450cc0
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00450cc5
    LEA EAX,[ESP + 0x54]                ; 00450cc8
    PUSH EAX                            ; 00450ccc
    LEA EAX,[EDI + 0x110]               ; 00450ccd
    PUSH EAX                            ; 00450cd3
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0 ; 00450cd4
        ;   XREF to: 0044dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00450cd9
    PUSH 0x0                            ; 00450cdc
    LEA EAX,[ESP + 0x58]                ; 00450cde
    PUSH EAX                            ; 00450ce2
    MOV EBX,dword ptr [0x005ae704]      ; 00450ce3 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00450ce9 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00450cea
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00450cef
    PUSH 0x5ae458                       ; 00450cf2 | DAT_005ae458
    MOV ESI,dword ptr [0x005ae704]      ; 00450cf7 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 00450cfd | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00450cfe
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00450d03
    PUSH 0x1                            ; 00450d06
    MOV EAX,[0x005ae704]                ; 00450d08 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 00450d0d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00450d0e
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    MOV EDX,0x1                         ; 00450d13
    ADD ESP,0x8                         ; 00450d18
    MOV dword ptr [ESP],EDX             ; 00450d1b
    FLD float ptr [EDI + 0x138]         ; 00450d1e
        ;   Label: LAB_00450d1e
    FDIVR double ptr [0x0057c8be]       ; 00450d24 | DAT_0057c8be
    MOV EAX,dword ptr [ESP]             ; 00450d2a
    MOV dword ptr [ESP + 0xcc],EAX      ; 00450d2d
    FILD dword ptr [ESP + 0xcc]         ; 00450d34
    FMULP                               ; 00450d3b
    FMUL double ptr [0x0057c886]        ; 00450d3d | DAT_0057c886
    FST float ptr [ESP + 0x4]           ; 00450d43
    FLD1                                ; 00450d47
    FPATAN                              ; 00450d49
    FCOS                                ; 00450d4b
    XOR ECX,ECX                         ; 00450d4d
    MOV dword ptr [ESP + 0x9c],ECX      ; 00450d4f
    FSTP float ptr [ESP + 0xa0]         ; 00450d56
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00450d5d
        ;   Label: LAB_00450d5d
    MOV dword ptr [ESP + 0xcc],EAX      ; 00450d64
    FLD float ptr [0x0057c88e]          ; 00450d6b | DAT_0057c88e
    FILD dword ptr [ESP + 0xcc]         ; 00450d71
    FMUL ST1                            ; 00450d78
    FLD double ptr [0x0057c896]         ; 00450d7a | DAT_0057c896
    FXCH                                ; 00450d80
    FMUL ST1                            ; 00450d82
    INC EAX                             ; 00450d84
    FLD double ptr [0x0057c89e]         ; 00450d85 | DAT_0057c89e
    FXCH                                ; 00450d8b
    FMUL ST1                            ; 00450d8d
    MOV dword ptr [ESP + 0xcc],EAX      ; 00450d8f
    FLD ST0                             ; 00450d96
    FSIN                                ; 00450d98
    FILD dword ptr [ESP + 0xcc]         ; 00450d9a
    FMULP ST5                           ; 00450da1
    FXCH ST4                            ; 00450da3
    FMULP ST3                           ; 00450da5
    FXCH ST2                            ; 00450da7
    FMULP                               ; 00450da9
    FLD ST0                             ; 00450dab
    FSIN                                ; 00450dad
    FXCH ST2                            ; 00450daf
    FCOS                                ; 00450db1
    FXCH                                ; 00450db3
    FCOS                                ; 00450db5
    MOV EAX,dword ptr [EDI + 0x1cc0]    ; 00450db7
    MOV EDX,EAX                         ; 00450dbd
    SAR EDX,0x1f                        ; 00450dbf
    SUB EAX,EDX                         ; 00450dc2
    SAR EAX,0x1                         ; 00450dc4
    MOV dword ptr [ESP + 0xcc],EAX      ; 00450dc6
    MOV EAX,dword ptr [EDI + 0x1cc4]    ; 00450dcd
    MOV EDX,EAX                         ; 00450dd3
    SAR EDX,0x1f                        ; 00450dd5
    SUB EAX,EDX                         ; 00450dd8
    SAR EAX,0x1                         ; 00450dda
    FLD float ptr [ESP + 0x4]           ; 00450ddc
    FXCH ST2                            ; 00450de0
    FMUL ST2                            ; 00450de2
    MOV dword ptr [ESP + 0xd0],EAX      ; 00450de4
    FSTP float ptr [ESP + 0xb0]         ; 00450deb
    FILD dword ptr [ESP + 0xd0]         ; 00450df2
    FLD ST0                             ; 00450df9
    FMUL float ptr [ESP + 0xb0]         ; 00450dfb
    FSUBP                               ; 00450e02
    MOV EBX,dword ptr [EDI + 0x1cc0]    ; 00450e04
    CALL crt_math.c_round_FUN_00563a30  ; 00450e0a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x88]        ; 00450e0f
    MOV EAX,dword ptr [ESP + 0x88]      ; 00450e16
    IMUL EAX,EBX                        ; 00450e1d
    FXCH ST3                            ; 00450e20
    FMUL ST1                            ; 00450e22
    FSTP float ptr [ESP + 0xac]         ; 00450e24
    FILD dword ptr [ESP + 0xcc]         ; 00450e2b
    FLD ST0                             ; 00450e32
    FMUL float ptr [ESP + 0xac]         ; 00450e34
    FXCH ST3                            ; 00450e3b
    FMUL ST2                            ; 00450e3d
    FXCH ST3                            ; 00450e3f
    FADDP                               ; 00450e41
    FXCH ST3                            ; 00450e43
    FMULP                               ; 00450e45
    FXCH ST2                            ; 00450e47
    CALL crt_math.c_round_FUN_00563a30  ; 00450e49
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x90]        ; 00450e4e
    ADD EAX,dword ptr [ESP + 0x90]      ; 00450e55
    MOV EDX,dword ptr [EDI + 0x2f94]    ; 00450e5c
    ADD EAX,EAX                         ; 00450e62
    ADD EDX,EAX                         ; 00450e64
    XOR EAX,EAX                         ; 00450e66
    MOV AX,word ptr [EDX]               ; 00450e68
    MOV dword ptr [ESP + 0xd0],EAX      ; 00450e6b
    FILD dword ptr [ESP + 0xd0]         ; 00450e72
    FMUL double ptr [0x0057c8a6]        ; 00450e79 | DAT_0057c8a6
    FXCH                                ; 00450e7f
    FSTP float ptr [ESP + 0xa4]         ; 00450e81
    FXCH                                ; 00450e88
    FSTP float ptr [ESP + 0xa8]         ; 00450e8a
    FSTP float ptr [ESP + 0xc0]         ; 00450e91
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00450e98
    XOR ESI,ESI                         ; 00450e9f
    MOV dword ptr [ESP + 0xbc],EAX      ; 00450ea1
    MOV EAX,dword ptr [EDI + 0x100]     ; 00450ea8
        ;   Label: LAB_00450ea8
    FLD float ptr [ESP + 0xa0]          ; 00450eae
    MOV dword ptr [ESP + 0x98],EAX      ; 00450eb5
    MOV dword ptr [ESP + 0xd0],ESI      ; 00450ebc
    FMUL float ptr [ESP + 0x98]         ; 00450ec3
    FILD dword ptr [ESP + 0xd0]         ; 00450eca
    FMUL ST1                            ; 00450ed1
    FLD float ptr [0x0057c8ae]          ; 00450ed3 | DAT_0057c8ae
    FXCH                                ; 00450ed9
    FMUL ST1                            ; 00450edb
    FLD float ptr [ESP + 0x98]          ; 00450edd
    FXCH                                ; 00450ee4
    FSTP float ptr [ESP + 0xc8]         ; 00450ee6
    FSUB float ptr [ESP + 0xc8]         ; 00450eed
    FLD1                                ; 00450ef4
    FDIV float ptr [ESP + 0x98]         ; 00450ef6
    LEA EAX,[ESI + 0x1]                 ; 00450efd
    MOV dword ptr [ESP + 0xd0],EAX      ; 00450f00
    FILD dword ptr [ESP + 0xd0]         ; 00450f07
    FMULP ST4                           ; 00450f0e
    FXCH ST3                            ; 00450f10
    FMULP ST2                           ; 00450f12
    FLD float ptr [ESP + 0x98]          ; 00450f14
    FXCH ST2                            ; 00450f1b
    FSTP float ptr [ESP + 0xc4]         ; 00450f1d
    FXCH                                ; 00450f24
    FSUB float ptr [ESP + 0xc4]         ; 00450f26
    FXCH                                ; 00450f2d
    FMUL ST2                            ; 00450f2f
    FXCH                                ; 00450f31
    FMULP ST2                           ; 00450f33
    FLD double ptr [0x0057c8b6]         ; 00450f35 | DAT_0057c8b6
    FXCH                                ; 00450f3b
    FMUL ST1                            ; 00450f3d
    FXCH ST2                            ; 00450f3f
    FMULP                               ; 00450f41
    FLD float ptr [ESP + 0xc8]          ; 00450f43
    FXCH ST2                            ; 00450f4a
    CALL crt_math.c_round_FUN_00563a30  ; 00450f4c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 00450f51
    CALL crt_math.c_round_FUN_00563a30  ; 00450f53
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 00450f58
    FISTP dword ptr [ESP + 0xb4]        ; 00450f5a
    FISTP dword ptr [ESP + 0xb8]        ; 00450f61
    FCOMP float ptr [ESP + 0xc0]        ; 00450f68
    FNSTSW AX                           ; 00450f6f
    SAHF                                ; 00450f71
    JNC 0x0045131d                      ; 00450f72
        ;   XREF to: 0045131d (CONDITIONAL_JUMP)  ; LAB_0045131d
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00450f78
    MOV dword ptr [ESP + 0x50],EAX      ; 00450f7f
        ;   Label: LAB_00450f7f
    FLD float ptr [ESP + 0x50]          ; 00450f83
    FMUL float ptr [ESP + 0xac]         ; 00450f87
    FLD float ptr [ESP + 0x50]          ; 00450f8e
    FMUL float ptr [ESP + 0xb0]         ; 00450f92
    LEA EBX,[ESP + 0x30]                ; 00450f99
    LEA EAX,[ESP + 0x48]                ; 00450f9d
    MOV EDX,dword ptr [0x005ae704]      ; 00450fa1 | g_CDemonRenderer_PTR_005ae704
    FXCH                                ; 00450fa7
    FSTP float ptr [ESP + 0x48]         ; 00450fa9
    FSTP float ptr [ESP + 0x4c]         ; 00450fad
    FLD float ptr [EAX]                 ; 00450fb1
    FMUL float ptr [0x0059c030]         ; 00450fb3 | DAT_0059c030
    FISTP dword ptr [EBX]               ; 00450fb9
    FLD float ptr [EAX + 0x4]           ; 00450fbb
    FMUL float ptr [0x0059c030]         ; 00450fbe | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 00450fc4
    FLD float ptr [EAX + 0x8]           ; 00450fc7
    FMUL float ptr [0x0059c030]         ; 00450fca | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 00450fd0
    LEA EAX,[ESP + 0x30]                ; 00450fd3
    PUSH EAX                            ; 00450fd7
    MOV EAX,dword ptr [EDX]             ; 00450fd8 | DAT_01b4d738
    PUSH EAX                            ; 00450fda
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00450fdb
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00450fe0
    FLD float ptr [ESP + 0xc8]          ; 00450fe3
    FCOMP float ptr [ESP + 0xbc]        ; 00450fea
    FNSTSW AX                           ; 00450ff1
    SAHF                                ; 00450ff3
    JNC 0x00451329                      ; 00450ff4
        ;   XREF to: 00451329 (CONDITIONAL_JUMP)  ; LAB_00451329
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00450ffa
    MOV dword ptr [ESP + 0x50],EAX      ; 00451001
        ;   Label: LAB_00451001
    FLD float ptr [ESP + 0x50]          ; 00451005
    FMUL float ptr [ESP + 0xa4]         ; 00451009
    FLD float ptr [ESP + 0x50]          ; 00451010
    FMUL float ptr [ESP + 0xa8]         ; 00451014
    LEA EBX,[ESP + 0x3c]                ; 0045101b
    LEA EAX,[ESP + 0x48]                ; 0045101f
    MOV EDX,dword ptr [0x005ae704]      ; 00451023 | g_CDemonRenderer_PTR_005ae704
    FXCH                                ; 00451029
    FSTP float ptr [ESP + 0x48]         ; 0045102b
    FSTP float ptr [ESP + 0x4c]         ; 0045102f
    FLD float ptr [EAX]                 ; 00451033
    FMUL float ptr [0x0059c030]         ; 00451035 | DAT_0059c030
    FISTP dword ptr [EBX]               ; 0045103b
    FLD float ptr [EAX + 0x4]           ; 0045103d
    FMUL float ptr [0x0059c030]         ; 00451040 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 00451046
    FLD float ptr [EAX + 0x8]           ; 00451049
    FMUL float ptr [0x0059c030]         ; 0045104c | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 00451052
    LEA EAX,[ESP + 0x3c]                ; 00451055
    PUSH EAX                            ; 00451059
    MOV EAX,dword ptr [EDX]             ; 0045105a | DAT_01b4d738
    ADD EAX,0x30                        ; 0045105c
    PUSH EAX                            ; 0045105f
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00451060
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00451065
    FLD float ptr [ESP + 0xc4]          ; 00451068
    FCOMP float ptr [ESP + 0xbc]        ; 0045106f
    FNSTSW AX                           ; 00451076
    SAHF                                ; 00451078
    JNC 0x00451335                      ; 00451079
        ;   XREF to: 00451335 (CONDITIONAL_JUMP)  ; LAB_00451335
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0045107f
    MOV dword ptr [ESP + 0x50],EAX      ; 00451086
        ;   Label: LAB_00451086
    FLD float ptr [ESP + 0x50]          ; 0045108a
    FMUL float ptr [ESP + 0xa4]         ; 0045108e
    FLD float ptr [ESP + 0x50]          ; 00451095
    FMUL float ptr [ESP + 0xa8]         ; 00451099
    LEA EBX,[ESP + 0x6c]                ; 004510a0
    LEA EAX,[ESP + 0x48]                ; 004510a4
    MOV EDX,dword ptr [0x005ae704]      ; 004510a8 | g_CDemonRenderer_PTR_005ae704
    FXCH                                ; 004510ae
    FSTP float ptr [ESP + 0x48]         ; 004510b0
    FSTP float ptr [ESP + 0x4c]         ; 004510b4
    FLD float ptr [EAX]                 ; 004510b8
    FMUL float ptr [0x0059c030]         ; 004510ba | DAT_0059c030
    FISTP dword ptr [EBX]               ; 004510c0
    FLD float ptr [EAX + 0x4]           ; 004510c2
    FMUL float ptr [0x0059c030]         ; 004510c5 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 004510cb
    FLD float ptr [EAX + 0x8]           ; 004510ce
    FMUL float ptr [0x0059c030]         ; 004510d1 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 004510d7
    LEA EAX,[ESP + 0x6c]                ; 004510da
    PUSH EAX                            ; 004510de
    MOV EAX,dword ptr [EDX]             ; 004510df | DAT_01b4d738
    ADD EAX,0x60                        ; 004510e1
    PUSH EAX                            ; 004510e4
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004510e5
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004510ea
    FLD float ptr [ESP + 0xc4]          ; 004510ed
    FCOMP float ptr [ESP + 0xc0]        ; 004510f4
    FNSTSW AX                           ; 004510fb
    SAHF                                ; 004510fd
    JNC 0x00451341                      ; 004510fe
        ;   XREF to: 00451341 (CONDITIONAL_JUMP)  ; LAB_00451341
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00451104
    MOV dword ptr [ESP + 0x50],EAX      ; 0045110b
        ;   Label: LAB_0045110b
    FLD float ptr [ESP + 0x50]          ; 0045110f
    FMUL float ptr [ESP + 0xac]         ; 00451113
    FLD float ptr [ESP + 0x50]          ; 0045111a
    FMUL float ptr [ESP + 0xb0]         ; 0045111e
    LEA EBX,[ESP + 0x60]                ; 00451125
    LEA EAX,[ESP + 0x48]                ; 00451129
    MOV EDX,dword ptr [0x005ae704]      ; 0045112d | g_CDemonRenderer_PTR_005ae704
    FXCH                                ; 00451133
    FSTP float ptr [ESP + 0x48]         ; 00451135
    FSTP float ptr [ESP + 0x4c]         ; 00451139
    FLD float ptr [EAX]                 ; 0045113d
    FMUL float ptr [0x0059c030]         ; 0045113f | DAT_0059c030
    FISTP dword ptr [EBX]               ; 00451145
    FLD float ptr [EAX + 0x4]           ; 00451147
    FMUL float ptr [0x0059c030]         ; 0045114a | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 00451150
    FLD float ptr [EAX + 0x8]           ; 00451153
    FMUL float ptr [0x0059c030]         ; 00451156 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 0045115c
    LEA EAX,[ESP + 0x60]                ; 0045115f
    PUSH EAX                            ; 00451163
    MOV EAX,dword ptr [EDX]             ; 00451164 | DAT_01b4d738
    ADD EAX,0x90                        ; 00451166
    PUSH EAX                            ; 0045116b
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0045116c
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x005ae704]      ; 00451171 | g_CDemonRenderer_PTR_005ae704
    ADD ESP,0x8                         ; 00451177
    MOV EBX,dword ptr [EDX]             ; 0045117a | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0045117c
    MOV dword ptr [EBX + 0x2c],EAX      ; 00451183
    MOV EAX,dword ptr [EDX]             ; 00451186 | DAT_01b4d738
    MOV dword ptr [EAX + 0x28],0xffff   ; 00451188
    MOV EAX,dword ptr [EDX]             ; 0045118f | DAT_01b4d738
    MOV dword ptr [EAX + 0x24],0xffff   ; 00451191
    MOV EAX,dword ptr [EDX]             ; 00451198 | DAT_01b4d738
    MOV dword ptr [EAX + 0x20],0xffff   ; 0045119a
    MOV EAX,dword ptr [EDX]             ; 004511a1 | DAT_01b4d738
    MOV dword ptr [EAX + 0x18],0xf80000 ; 004511a3
    MOV EAX,dword ptr [EDX]             ; 004511aa | DAT_01b4d738
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 004511ac
    MOV EBX,dword ptr [EDX]             ; 004511b3 | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004511b5
    MOV dword ptr [EBX + 0x5c],EAX      ; 004511bc
    MOV EAX,dword ptr [EDX]             ; 004511bf | DAT_01b4d738
    MOV dword ptr [EAX + 0x58],0xffff   ; 004511c1
    MOV EAX,dword ptr [EDX]             ; 004511c8 | DAT_01b4d738
    MOV dword ptr [EAX + 0x54],0xffff   ; 004511ca
    MOV EAX,dword ptr [EDX]             ; 004511d1 | DAT_01b4d738
    MOV dword ptr [EAX + 0x50],0xffff   ; 004511d3
    MOV EAX,dword ptr [EDX]             ; 004511da | DAT_01b4d738
    MOV dword ptr [EAX + 0x48],0x80000  ; 004511dc
    MOV EAX,dword ptr [EDX]             ; 004511e3 | DAT_01b4d738
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 004511e5
    MOV EBX,dword ptr [EDX]             ; 004511ec | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004511ee
    MOV dword ptr [EBX + 0x8c],EAX      ; 004511f5
    MOV EAX,dword ptr [EDX]             ; 004511fb | DAT_01b4d738
    MOV dword ptr [EAX + 0x88],0xffff   ; 004511fd
    MOV EAX,dword ptr [EDX]             ; 00451207 | DAT_01b4d738
    MOV dword ptr [EAX + 0x84],0xffff   ; 00451209
    MOV EAX,dword ptr [EDX]             ; 00451213 | DAT_01b4d738
    MOV dword ptr [EAX + 0x80],0xffff   ; 00451215
    MOV EAX,dword ptr [EDX]             ; 0045121f | DAT_01b4d738
    MOV dword ptr [EAX + 0x78],0x80000  ; 00451221
    MOV EAX,dword ptr [EDX]             ; 00451228 | DAT_01b4d738
    MOV dword ptr [EAX + 0x7c],0x80000  ; 0045122a
    MOV EBX,dword ptr [EDX]             ; 00451231 | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00451233
    MOV dword ptr [EBX + 0xbc],EAX      ; 0045123a
    MOV EAX,dword ptr [EDX]             ; 00451240 | DAT_01b4d738
    MOV dword ptr [EAX + 0xb8],0xffff   ; 00451242
    MOV EAX,dword ptr [EDX]             ; 0045124c | DAT_01b4d738
    MOV dword ptr [EAX + 0xb4],0xffff   ; 0045124e
    MOV EAX,dword ptr [EDX]             ; 00451258 | DAT_01b4d738
    MOV dword ptr [EAX + 0xb0],0xffff   ; 0045125a
    MOV EAX,dword ptr [EDX]             ; 00451264 | DAT_01b4d738
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 00451266
    INC ESI                             ; 00451270
    MOV EAX,dword ptr [EDX]             ; 00451271 | DAT_01b4d738
    XOR ECX,ECX                         ; 00451273
    MOV EBX,0x3                         ; 00451275
    MOV dword ptr [EAX + 0xac],0x80000  ; 0045127a
    MOV EAX,0x4                         ; 00451284
    MOV dword ptr [ESP + 0x1c],ECX      ; 00451289
    MOV dword ptr [ESP + 0x18],ECX      ; 0045128d
    MOV dword ptr [ESP + 0xc],EAX       ; 00451291
    MOV EAX,0x1                         ; 00451295
    MOV dword ptr [ESP + 0x14],ECX      ; 0045129a
    MOV dword ptr [ESP + 0x24],EAX      ; 0045129e
    LEA EAX,[ESP + 0x8]                 ; 004512a2
    MOV dword ptr [ESP + 0x10],ECX      ; 004512a6
    PUSH EAX                            ; 004512aa
    MOV dword ptr [ESP + 0x24],ECX      ; 004512ab
    MOV ECX,0x2                         ; 004512af
    PUSH EDX                            ; 004512b4 | DAT_01b4d738
    MOV dword ptr [ESP + 0x34],EBX      ; 004512b5
    MOV dword ptr [ESP + 0x30],ECX      ; 004512b9
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080 ; 004512bd
        ;   XREF to: 00460080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004512c2
    CMP ESI,0x4                         ; 004512c5
    JL 0x00450ea8                       ; 004512c8
        ;   XREF to: 00450ea8 (CONDITIONAL_JUMP)  ; LAB_00450ea8
    MOV ESI,dword ptr [ESP + 0x9c]      ; 004512ce
    INC ESI                             ; 004512d5
    MOV dword ptr [ESP + 0x9c],ESI      ; 004512d6
    CMP ESI,0x10                        ; 004512dd
    JL 0x00450d5d                       ; 004512e0
        ;   XREF to: 00450d5d (CONDITIONAL_JUMP)  ; LAB_00450d5d
    MOV EDX,dword ptr [ESP]             ; 004512e6
    INC EDX                             ; 004512e9
    MOV dword ptr [ESP],EDX             ; 004512ea
    CMP EDX,0x10                        ; 004512ed
    JL 0x00450d1e                       ; 004512f0
        ;   XREF to: 00450d1e (CONDITIONAL_JUMP)  ; LAB_00450d1e
    MOV EBX,dword ptr [0x005ae704]      ; 004512f6 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 004512fc | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 004512fd
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00451302
    PUSH 0x0                            ; 00451305
    MOV ESI,dword ptr [0x005ae704]      ; 00451307 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 0045130d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0045130e
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00451313
    MOV ESP,EBP                         ; 00451316
    POP EBP                             ; 00451318
    POP EDI                             ; 00451319
    POP ESI                             ; 0045131a
    POP EBX                             ; 0045131b
    RET                                 ; 0045131c
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0045131d
        ;   Label: LAB_0045131d
    JMP 0x00450f7f                      ; 00451324
        ;   XREF to: 00450f7f (UNCONDITIONAL_JUMP)  ; LAB_00450f7f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00451329
        ;   Label: LAB_00451329
    JMP 0x00451001                      ; 00451330
        ;   XREF to: 00451001 (UNCONDITIONAL_JUMP)  ; LAB_00451001
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00451335
        ;   Label: LAB_00451335
    JMP 0x00451086                      ; 0045133c
        ;   XREF to: 00451086 (UNCONDITIONAL_JUMP)  ; LAB_00451086
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00451341
        ;   Label: LAB_00451341
    JMP 0x0045110b                      ; 00451348
        ;   XREF to: 0045110b (UNCONDITIONAL_JUMP)  ; LAB_0045110b

