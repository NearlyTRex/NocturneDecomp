; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; int[990]         Stack[-0x10bc]:3960  aiStackY_10bc
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; SMRGLHeaderPrimitive Stack[-0x12c]:24  local_12c
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; CVector3f        Stack[-0x104]:12  local_104
; CVector3i        Stack[-0xf8]:12  local_f8
; CVector3f        Stack[-0xec]:12  local_ec
; CVector3f        Stack[-0xe0]:12  local_e0
; CVector3i        Stack[-0xd4]:12  local_d4
; CVector3i        Stack[-0xc8]:12  local_c8
; float            Stack[-0xbc]:4  local_bc
; float            Stack[-0xb8]:4  local_b8
; float            Stack[-0xb4]:4  local_b4
; float            Stack[-0xb0]:4  local_b0
; float            Stack[-0xac]:4  local_ac
; float            Stack[-0xa8]:4  local_a8
; CVector3f        Stack[-0xa4]:12  local_a4
; CVector3i        Stack[-0x98]:12  local_98
; CVector3f        Stack[-0x8c]:12  local_8c
; float            Stack[-0x80]:4  local_80
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; CVector3i        Stack[-0x74]:12  local_74
; CVector3f        Stack[-0x68]:12  local_68
; int              Stack[-0x5c]:4  local_5c
; int[2]           Stack[-0x58]:8  local_58
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; CVector3i        Stack[-0x44]:12  local_44
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_0061f1eb = 18
;   double DOUBLE_0061f1f3 = 2
;   float FLOAT_0061f1fb = 0.00001525902
;   float FLOAT_0061f1ff = 0.04000000
;   double DOUBLE_0061f203 = 8192
;   float FLOAT_0065c900 = 256
;   float FLOAT_0065c908 = 0.00390625
;   undefined4 DAT_0066fef0
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 DAT_00f80000
;   CDemonRenderer g_CDemonRendererInstance
;   float g_PerspectiveReciprocal
;   CGame g_CGameInstance
;   undefined4 DAT_02d81aa8
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
;   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
;   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474ad0
        ;   Label: core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0
    PUSH ESI                            ; 00474ad1
    PUSH EDI                            ; 00474ad2
    PUSH EBP                            ; 00474ad3
    MOV EBP,ESP                         ; 00474ad4
    SUB ESP,0x128                       ; 00474ad6
    AND ESP,0xfffffff8                  ; 00474adc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474adf
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 00474ae2
    JZ 0x00474af6                       ; 00474ae9
        ;   XREF to: 00474af6 (CONDITIONAL_JUMP)  ; LAB_00474af6
    MOV EAX,[0x0067b654]                ; 00474aeb | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0xc],0x2       ; 00474af0 | DAT_02d81aa8
    JZ 0x00474afd                       ; 00474af4
        ;   XREF to: 00474afd (CONDITIONAL_JUMP)  ; LAB_00474afd
    MOV ESP,EBP                         ; 00474af6
        ;   Label: LAB_00474af6
    POP EBP                             ; 00474af8
    POP EDI                             ; 00474af9
    POP ESI                             ; 00474afa
    POP EBX                             ; 00474afb
    RET                                 ; 00474afc
    LEA EAX,[ESP + 0xac]                ; 00474afd
        ;   Label: LAB_00474afd
    PUSH EAX                            ; 00474b04
    MOV EBX,dword ptr [0x006703ec]      ; 00474b05 | g_CDemonRendererPtr2 | g_CDemonRendererInstance
    PUSH EBX                            ; 00474b0b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780 ; 00474b0c
        ;   XREF to: 0048c780 (UNCONDITIONAL_CALL)  ; float * engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780(CDemonRenderer * this_ptr, float * output)
    ADD ESP,0x8                         ; 00474b11
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474b14
    FLD float ptr [ESP + 0xac]          ; 00474b17
    FSUB float ptr [EAX + 0x4]          ; 00474b1e
    FLD float ptr [ESP + 0xb0]          ; 00474b21
    FXCH                                ; 00474b28
    FSTP float ptr [ESP + 0xac]         ; 00474b2a
    FSUB float ptr [EAX + 0x8]          ; 00474b31
    FLD float ptr [ESP + 0xb4]          ; 00474b34
    FXCH                                ; 00474b3b
    FSTP float ptr [ESP + 0xb0]         ; 00474b3d
    FSUB float ptr [EAX + 0xc]          ; 00474b44
    LEA EAX,[ESP + 0xac]                ; 00474b47
    PUSH EAX                            ; 00474b4e
    LEA EAX,[ESP + 0xd4]                ; 00474b4f
    PUSH EAX                            ; 00474b56
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474b57
    ADD EAX,0x10                        ; 00474b5a
    PUSH EAX                            ; 00474b5d
    FSTP float ptr [ESP + 0xc0]         ; 00474b5e
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 00474b65
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 00474b6a
    LEA EAX,[ESP + 0xb8]                ; 00474b6c
    ADD ESP,0xc                         ; 00474b73
    CMP EAX,EDX                         ; 00474b76
    JZ 0x00474b97                       ; 00474b78
        ;   XREF to: 00474b97 (CONDITIONAL_JUMP)  ; LAB_00474b97
    MOV EAX,dword ptr [EDX]             ; 00474b7a
    MOV dword ptr [ESP + 0xac],EAX      ; 00474b7c
    MOV EAX,dword ptr [EDX + 0x4]       ; 00474b83
    MOV dword ptr [ESP + 0xb0],EAX      ; 00474b86
    MOV EAX,dword ptr [EDX + 0x8]       ; 00474b8d
    MOV dword ptr [ESP + 0xb4],EAX      ; 00474b90
    FLD float ptr [ESP + 0xb4]          ; 00474b97
        ;   Label: LAB_00474b97
    FMUL double ptr [0x0061f1eb]        ; 00474b9e | DOUBLE_0061f1eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474ba4
    FDIV float ptr [EAX + 0x38]         ; 00474ba7
    FLD float ptr [ESP + 0xb0]          ; 00474baa
    FMUL ST0                            ; 00474bb1
    FLD float ptr [ESP + 0xac]          ; 00474bb3
    FMUL ST0                            ; 00474bba
    FXCH ST2                            ; 00474bbc
    FMUL double ptr [0x0061f1f3]        ; 00474bbe | DOUBLE_0061f1f3
    FXCH                                ; 00474bc4
    FSTP float ptr [ESP + 0x110]        ; 00474bc6
    FXCH                                ; 00474bcd
    FADD float ptr [ESP + 0x110]        ; 00474bcf
    FXCH                                ; 00474bd6
    FST float ptr [ESP + 0x118]         ; 00474bd8
    FMUL float ptr [ESP + 0x118]        ; 00474bdf
    FXCH                                ; 00474be6
    FST float ptr [ESP + 0x11c]         ; 00474be8
    FXCH                                ; 00474bef
    FSTP float ptr [ESP + 0x114]        ; 00474bf1
    FCOMP float ptr [ESP + 0x114]       ; 00474bf8
    FNSTSW AX                           ; 00474bff
    SAHF                                ; 00474c01
    JA 0x00474af6                       ; 00474c02
        ;   XREF to: 00474af6 (CONDITIONAL_JUMP)  ; LAB_00474af6
    FLD float ptr [ESP + 0x11c]         ; 00474c08
    FDIV float ptr [ESP + 0x114]        ; 00474c0f
    LEA EDI,[ESP + 0xdc]                ; 00474c16
    MOV ESI,dword ptr [0x006703ec]      ; 00474c1d | g_CDemonRendererPtr2
    LEA EBX,[ESP + 0xb8]                ; 00474c23
    PUSH ESI                            ; 00474c2a | g_CDemonRendererInstance
    FLD1                                ; 00474c2b
    FSUBRP                              ; 00474c2d
    LEA ESI,[ESP + 0x68]                ; 00474c2f
    FSTP float ptr [ESP + 0xc]          ; 00474c33
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760 ; 00474c37
        ;   XREF to: 0048c760 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x68]                ; 00474c3c
    ADD ESP,0x4                         ; 00474c40
    LEA EAX,[ESP + 0xdc]                ; 00474c43
    MOVSD ES:EDI,ESI                    ; 00474c4a
    MOVSD ES:EDI,ESI                    ; 00474c4b
    MOVSD ES:EDI,ESI                    ; 00474c4c
    FILD dword ptr [EAX]                ; 00474c4d
    FMUL float ptr [0x0065c908]         ; 00474c4f | FLOAT_0065c908
    FSTP float ptr [EBX]                ; 00474c55
    FILD dword ptr [EAX + 0x4]          ; 00474c57
    FMUL float ptr [0x0065c908]         ; 00474c5a | FLOAT_0065c908
    FSTP float ptr [EBX + 0x4]          ; 00474c60
    FILD dword ptr [EAX + 0x8]          ; 00474c63
    FMUL float ptr [0x0065c908]         ; 00474c66 | FLOAT_0065c908
    FSTP float ptr [EBX + 0x8]          ; 00474c6c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00474c6f
    FLD float ptr [ESP + 0xb8]          ; 00474c72
    FSUB float ptr [EDI + 0x4]          ; 00474c79
    FLD float ptr [ESP + 0xbc]          ; 00474c7c
    FXCH                                ; 00474c83
    FSTP float ptr [ESP + 0x100]        ; 00474c85
    FSUB float ptr [EDI + 0x8]          ; 00474c8c
    FST float ptr [ESP + 0x104]         ; 00474c8f
    FMUL float ptr [ESP + 0x104]        ; 00474c96
    FLD float ptr [ESP + 0x100]         ; 00474c9d
    FMUL ST0                            ; 00474ca4
    FLD float ptr [ESP + 0xc0]          ; 00474ca6
    FSUB float ptr [EDI + 0xc]          ; 00474cad
    FXCH                                ; 00474cb0
    FADDP ST2,ST0                       ; 00474cb2
    FST float ptr [ESP + 0x108]         ; 00474cb4
    FMUL float ptr [ESP + 0x108]        ; 00474cbb
    FADDP                               ; 00474cc2
    FSQRT                               ; 00474cc4
    ADD EDI,0x4                         ; 00474cc6
    FST float ptr [ESP + 0x4]           ; 00474cc9
    FLDZ                                ; 00474ccd
    FCOMPP                              ; 00474ccf
    FNSTSW AX                           ; 00474cd1
    SAHF                                ; 00474cd3
    JNC 0x00474af6                      ; 00474cd4
        ;   XREF to: 00474af6 (CONDITIONAL_JUMP)  ; LAB_00474af6
    FLD1                                ; 00474cda
    FLD float ptr [ESP + 0x100]         ; 00474cdc
    FXCH                                ; 00474ce3
    FDIV float ptr [ESP + 0x4]          ; 00474ce5
    FXCH                                ; 00474ce9
    FMUL ST1                            ; 00474ceb
    FLD float ptr [ESP + 0x104]         ; 00474ced
    FMUL ST2                            ; 00474cf4
    FLD float ptr [ESP + 0x108]         ; 00474cf6
    FMULP ST3                           ; 00474cfd
    MOV EAX,0xffff                      ; 00474cff
    MOV ESI,0x3f800000                  ; 00474d04
    MOV EDX,dword ptr [0x02d051f4]      ; 00474d09 | g_PerspectiveReciprocal
    XOR ECX,ECX                         ; 00474d0f
    SUB EAX,EDX                         ; 00474d11
    MOV dword ptr [ESP + 0x4c],ECX      ; 00474d13
    MOV dword ptr [ESP + 0x124],EAX     ; 00474d17
    LEA EAX,[ESP + 0x4c]                ; 00474d1e
    MOV dword ptr [ESP + 0x50],ECX      ; 00474d22
    PUSH EAX                            ; 00474d26
    LEA EAX,[ESP + 0x38]                ; 00474d27
    MOV dword ptr [ESP + 0x58],ESI      ; 00474d2b
    PUSH EAX                            ; 00474d2f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474d30
    FILD dword ptr [ESP + 0x12c]        ; 00474d33
    ADD EAX,0x10                        ; 00474d3a
    FSTP float ptr [ESP + 0x12c]        ; 00474d3d
    PUSH EAX                            ; 00474d44
    FXCH                                ; 00474d45
    FSTP float ptr [ESP + 0x10c]        ; 00474d47
    FSTP float ptr [ESP + 0x110]        ; 00474d4e
    FSTP float ptr [ESP + 0x114]        ; 00474d55
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00474d5c
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00474d61
    FLD float ptr [ESP + 0x104]         ; 00474d64
    FMUL float ptr [EAX + 0x4]          ; 00474d6b
    FLD float ptr [ESP + 0x100]         ; 00474d6e
    FMUL float ptr [EAX]                ; 00474d75
    FADDP                               ; 00474d77
    FLD float ptr [ESP + 0x108]         ; 00474d79
    FMUL float ptr [EAX + 0x8]          ; 00474d80
    FADDP                               ; 00474d83
    FMUL float ptr [ESP + 0x124]        ; 00474d85
    FMUL float ptr [0x0061f1fb]         ; 00474d8c | FLOAT_0061f1fb
    FLDZ                                ; 00474d92
    FCOMPP                              ; 00474d94
    FNSTSW AX                           ; 00474d96
    SAHF                                ; 00474d98
    JNC 0x00474af6                      ; 00474d99
        ;   XREF to: 00474af6 (CONDITIONAL_JUMP)  ; LAB_00474af6
    PUSH 0x1                            ; 00474d9f
    MOV EAX,[0x006703ec]                ; 00474da1 | g_CDemonRendererPtr2
    PUSH EAX                            ; 00474da6 | g_CDemonRendererInstance
    XOR ESI,ESI                         ; 00474da7
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 00474da9
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00474dae
    MOV dword ptr [ESP + 0x124],ESI     ; 00474db1
        ;   Label: LAB_00474db1
    FILD dword ptr [ESP + 0x124]        ; 00474db8
    FMUL float ptr [0x0061f1ff]         ; 00474dbf | FLOAT_0061f1ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474dc5
    FMUL float ptr [EAX + 0x140]        ; 00474dc8
    FLD float ptr [EAX + 0x38]          ; 00474dce
    FXCH                                ; 00474dd1
    FST float ptr [ESP]                 ; 00474dd3
    FMUL double ptr [0x0061f1eb]        ; 00474dd6 | DOUBLE_0061f1eb
    FDIVRP                              ; 00474ddc
    MOV EAX,dword ptr [EAX + 0x18]      ; 00474dde
    MOV dword ptr [ESP + 0x7c],EAX      ; 00474de1
    FLD float ptr [ESP + 0x7c]          ; 00474de5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474de9
    FMUL float ptr [ESP]                ; 00474dec
    MOV EAX,dword ptr [EAX + 0x24]      ; 00474def
    MOV dword ptr [ESP + 0x80],EAX      ; 00474df2
    FLD float ptr [ESP + 0x80]          ; 00474df9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474e00
    FMUL float ptr [ESP]                ; 00474e03
    MOV EAX,dword ptr [EAX + 0x30]      ; 00474e06
    MOV dword ptr [ESP + 0x84],EAX      ; 00474e09
    FLD float ptr [ESP + 0x84]          ; 00474e10
    FMUL float ptr [ESP]                ; 00474e17
    FXCH ST2                            ; 00474e1a
    FSTP float ptr [ESP + 0x88]         ; 00474e1c
    FSTP float ptr [ESP + 0x8c]         ; 00474e23
    FSTP float ptr [ESP + 0x90]         ; 00474e2a
    FLD float ptr [EDI]                 ; 00474e31
    FADD float ptr [ESP + 0x88]         ; 00474e33
    FSTP float ptr [ESP + 0x94]         ; 00474e3a
    FLD float ptr [EDI + 0x4]           ; 00474e41
    FADD float ptr [ESP + 0x8c]         ; 00474e44
    LEA EDX,[ESP + 0x94]                ; 00474e4b
    FSTP float ptr [ESP + 0x98]         ; 00474e52
    FLD float ptr [EDI + 0x8]           ; 00474e59
    FADD float ptr [ESP + 0x90]         ; 00474e5c
    LEA EAX,[ESP + 0x58]                ; 00474e63
    FSTP float ptr [ESP + 0x9c]         ; 00474e67
    FSTP float ptr [ESP + 0x120]        ; 00474e6e
    CMP EAX,EDX                         ; 00474e75
    JZ 0x00474e9a                       ; 00474e77
        ;   XREF to: 00474e9a (CONDITIONAL_JUMP)  ; LAB_00474e9a
    MOV EAX,dword ptr [ESP + 0x94]      ; 00474e79
    MOV dword ptr [ESP + 0x58],EAX      ; 00474e80
    MOV EAX,dword ptr [ESP + 0x98]      ; 00474e84
    MOV dword ptr [ESP + 0x5c],EAX      ; 00474e8b
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00474e8f
    MOV dword ptr [ESP + 0x60],EAX      ; 00474e96
    LEA EAX,[ESP + 0x58]                ; 00474e9a
        ;   Label: LAB_00474e9a
    PUSH EAX                            ; 00474e9e
    MOV EDX,dword ptr [0x006703ec]      ; 00474e9f | g_CDemonRendererPtr2
    PUSH EDX                            ; 00474ea5 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00474ea6
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00474eab
    LEA EAX,[ESP + 0xa0]                ; 00474eae
    PUSH EAX                            ; 00474eb5
    MOV ECX,dword ptr [0x006703ec]      ; 00474eb6 | g_CDemonRendererPtr2
    PUSH ECX                            ; 00474ebc | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800 ; 00474ebd
        ;   XREF to: 0048c800 (UNCONDITIONAL_CALL)  ; float * engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800(CDemonRenderer * this_ptr, float * output)
    ADD ESP,0x8                         ; 00474ec2
    PUSH 0x0                            ; 00474ec5
    LEA EAX,[ESP + 0xa4]                ; 00474ec7
    PUSH EAX                            ; 00474ece
    MOV EBX,dword ptr [0x006703ec]      ; 00474ecf | g_CDemonRendererPtr2
    PUSH EBX                            ; 00474ed5 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00474ed6
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00474edb
    MOV EAX,dword ptr [ESP + 0x120]     ; 00474ede
    MOV dword ptr [ESP + 0xe8],EAX      ; 00474ee5
    MOV dword ptr [ESP + 0xec],EAX      ; 00474eec
    XOR EAX,EAX                         ; 00474ef3
    LEA EBX,[ESP + 0xc4]                ; 00474ef5
    MOV dword ptr [ESP + 0xf0],EAX      ; 00474efc
    LEA EAX,[ESP + 0xe8]                ; 00474f03
    MOV EDX,dword ptr [0x006703ec]      ; 00474f0a | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00474f10
    FMUL float ptr [0x0065c900]         ; 00474f12 | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00474f18
    FLD float ptr [EAX + 0x4]           ; 00474f1a
    FMUL float ptr [0x0065c900]         ; 00474f1d | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00474f23
    FLD float ptr [EAX + 0x8]           ; 00474f26
    FMUL float ptr [0x0065c900]         ; 00474f29 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00474f2f
    LEA EAX,[ESP + 0xc4]                ; 00474f32
    PUSH EAX                            ; 00474f39
    MOV EAX,dword ptr [EDX]             ; 00474f3a | g_CDemonRendererInstance
    PUSH EAX                            ; 00474f3c
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00474f3d
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00474f42
    MOV AH,byte ptr [ESP + 0xeb]        ; 00474f45
    XOR AH,0x80                         ; 00474f4c
    LEA EBX,[ESP + 0xf4]                ; 00474f4f
    MOV byte ptr [ESP + 0xeb],AH        ; 00474f56
    LEA EAX,[ESP + 0xe8]                ; 00474f5d
    MOV EDX,dword ptr [0x006703ec]      ; 00474f64 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00474f6a
    FMUL float ptr [0x0065c900]         ; 00474f6c | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00474f72
    FLD float ptr [EAX + 0x4]           ; 00474f74
    FMUL float ptr [0x0065c900]         ; 00474f77 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00474f7d
    FLD float ptr [EAX + 0x8]           ; 00474f80
    FMUL float ptr [0x0065c900]         ; 00474f83 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00474f89
    LEA EAX,[ESP + 0xf4]                ; 00474f8c
    PUSH EAX                            ; 00474f93
    MOV EAX,dword ptr [EDX]             ; 00474f94 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 00474f96
    PUSH EAX                            ; 00474f99
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00474f9a
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00474f9f
    MOV DL,byte ptr [ESP + 0xef]        ; 00474fa2
    LEA EBX,[ESP + 0x40]                ; 00474fa9
    XOR DL,0x80                         ; 00474fad
    LEA EAX,[ESP + 0xe8]                ; 00474fb0
    MOV byte ptr [ESP + 0xef],DL        ; 00474fb7
    MOV EDX,dword ptr [0x006703ec]      ; 00474fbe | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00474fc4
    FMUL float ptr [0x0065c900]         ; 00474fc6 | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00474fcc
    FLD float ptr [EAX + 0x4]           ; 00474fce
    FMUL float ptr [0x0065c900]         ; 00474fd1 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00474fd7
    FLD float ptr [EAX + 0x8]           ; 00474fda
    FMUL float ptr [0x0065c900]         ; 00474fdd | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00474fe3
    LEA EAX,[ESP + 0x40]                ; 00474fe6
    PUSH EAX                            ; 00474fea
    MOV EAX,dword ptr [EDX]             ; 00474feb | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 00474fed
    PUSH EAX                            ; 00474ff0
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00474ff1
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00474ff6
    MOV DH,byte ptr [ESP + 0xeb]        ; 00474ff9
    LEA EBX,[ESP + 0x70]                ; 00475000
    XOR DH,0x80                         ; 00475004
    LEA EAX,[ESP + 0xe8]                ; 00475007
    MOV byte ptr [ESP + 0xeb],DH        ; 0047500e
    MOV EDX,dword ptr [0x006703ec]      ; 00475015 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 0047501b
    FMUL float ptr [0x0065c900]         ; 0047501d | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00475023
    FLD float ptr [EAX + 0x4]           ; 00475025
    FMUL float ptr [0x0065c900]         ; 00475028 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 0047502e
    FLD float ptr [EAX + 0x8]           ; 00475031
    FMUL float ptr [0x0065c900]         ; 00475034 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 0047503a
    LEA EAX,[ESP + 0x70]                ; 0047503d
    PUSH EAX                            ; 00475041
    MOV EAX,dword ptr [EDX]             ; 00475042 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 00475044
    PUSH EAX                            ; 00475049
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0047504a
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0047504f
    PUSH 0x66fef0                       ; 00475052 | DAT_0066fef0
    MOV EDX,dword ptr [0x006703ec]      ; 00475057 | g_CDemonRendererPtr2
    PUSH EDX                            ; 0047505d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0047505e
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00475063
    MOV EAX,dword ptr [EBP + 0x14]      ; 00475066
    FLD float ptr [EAX + 0x140]         ; 00475069
    FSUB float ptr [ESP]                ; 0047506f
    FMUL double ptr [0x0061f203]        ; 00475072 | DOUBLE_0061f203
    FDIV float ptr [EAX + 0x140]        ; 00475078
    XOR EBX,EBX                         ; 0047507e
    MOV ECX,0x4                         ; 00475080
    MOV EDX,dword ptr [0x006703ec]      ; 00475085 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x10],ECX      ; 0047508b
    MOV dword ptr [ESP + 0x20],EBX      ; 0047508f
    MOV dword ptr [ESP + 0x1c],EBX      ; 00475093
    MOV dword ptr [ESP + 0x18],EBX      ; 00475097
    MOV dword ptr [ESP + 0x14],EBX      ; 0047509b
    MOV dword ptr [ESP + 0x24],EBX      ; 0047509f
    FMUL float ptr [ESP + 0x8]          ; 004750a3
    MOV EBX,dword ptr [EDX]             ; 004750a7 | g_CDemonRendererInstance
    CALL crt_math.c_round_FUN_005fe6b0  ; 004750a9
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x10c]       ; 004750ae
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004750b5
    MOV dword ptr [EBX + 0x2c],EAX      ; 004750bc
    MOV EAX,dword ptr [EDX]             ; 004750bf | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x20],0xffff   ; 004750c1
    MOV EAX,dword ptr [EDX]             ; 004750c8 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x24],0xffff   ; 004750ca
    MOV EAX,dword ptr [EDX]             ; 004750d1 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x28],0xffff   ; 004750d3
    MOV dword ptr [ESP + 0x28],0x1      ; 004750da
    MOV EBX,dword ptr [EDX]             ; 004750e2 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004750e4
    MOV dword ptr [EBX + 0x5c],EAX      ; 004750eb
    MOV EAX,dword ptr [EDX]             ; 004750ee | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x50],0xffff   ; 004750f0
    MOV EAX,dword ptr [EDX]             ; 004750f7 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x54],0xffff   ; 004750f9
    MOV EAX,dword ptr [EDX]             ; 00475100 | g_CDemonRendererInstance
    MOV ECX,0x2                         ; 00475102
    MOV dword ptr [EAX + 0x58],0xffff   ; 00475107
    MOV dword ptr [ESP + 0x2c],ECX      ; 0047510e
    MOV EBX,dword ptr [EDX]             ; 00475112 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00475114
    MOV dword ptr [EBX + 0x8c],EAX      ; 0047511b
    MOV EAX,dword ptr [EDX]             ; 00475121 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x80],0xffff   ; 00475123
    MOV EAX,dword ptr [EDX]             ; 0047512d | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x84],0xffff   ; 0047512f
    MOV EAX,dword ptr [EDX]             ; 00475139 | g_CDemonRendererInstance
    MOV EBX,0x3                         ; 0047513b
    MOV dword ptr [EAX + 0x88],0xffff   ; 00475140
    MOV dword ptr [ESP + 0x30],EBX      ; 0047514a
    MOV EBX,dword ptr [EDX]             ; 0047514e | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00475150
    MOV dword ptr [EBX + 0xbc],EAX      ; 00475157
    MOV EAX,dword ptr [EDX]             ; 0047515d | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xb0],0xffff   ; 0047515f
    MOV EAX,dword ptr [EDX]             ; 00475169 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xb4],0xffff   ; 0047516b
    MOV EAX,dword ptr [EDX]             ; 00475175 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xb8],0xffff   ; 00475177
    MOV EAX,dword ptr [EDX]             ; 00475181 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x18],0xf80000 ; 00475183 | DAT_00f80000
    MOV EAX,dword ptr [EDX]             ; 0047518a | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 0047518c | DAT_00f80000
    MOV EAX,dword ptr [EDX]             ; 00475193 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x48],0x80000  ; 00475195
    MOV EAX,dword ptr [EDX]             ; 0047519c | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 0047519e | DAT_00f80000
    MOV EAX,dword ptr [EDX]             ; 004751a5 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x78],0x80000  ; 004751a7
    MOV EAX,dword ptr [EDX]             ; 004751ae | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x7c],0x80000  ; 004751b0
    MOV EAX,dword ptr [EDX]             ; 004751b7 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 004751b9 | DAT_00f80000
    MOV EAX,dword ptr [EDX]             ; 004751c3 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xac],0x80000  ; 004751c5
    LEA EAX,[ESP + 0xc]                 ; 004751cf
    PUSH EAX                            ; 004751d3
    PUSH EDX                            ; 004751d4 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 004751d5
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004751da
    MOV EAX,[0x006703ec]                ; 004751dd | g_CDemonRendererPtr2
    PUSH EAX                            ; 004751e2 | g_CDemonRendererInstance
    INC ESI                             ; 004751e3
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004751e4
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    ADD ESP,0x4                         ; 004751e9
    CMP ESI,0x19                        ; 004751ec
    JL 0x00474db1                       ; 004751ef
        ;   XREF to: 00474db1 (CONDITIONAL_JUMP)  ; LAB_00474db1
    PUSH 0x0                            ; 004751f5
    MOV EDX,dword ptr [0x006703ec]      ; 004751f7 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004751fd | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004751fe
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00475203
    MOV ESP,EBP                         ; 00475206
    POP EBP                             ; 00475208
    POP EDI                             ; 00475209
    POP ESI                             ; 0047520a
    POP EBX                             ; 0047520b
    RET                                 ; 0047520c

