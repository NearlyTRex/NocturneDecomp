; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CExplosion_render_FUN_004c3b10(CExplosion *this_ptr)
;
; Parameters:
; CExplosion *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x8c]:1  local_8c
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
; undefined1       Stack[-0x58]:1  local_58
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
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c73ae
;
; Referenced Globals:
;   double DOUBLE_00629dab = 27
;   float FLOAT_00629db3 = 108
;   double DOUBLE_00629dbb = 0.00390625
;   double DOUBLE_00629dc3 = 148
;   float FLOAT_00629dcb = 143
;   double DOUBLE_00629dd3 = 113
;   float FLOAT_0065dca8 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic[54] g_FireEffectExplosionTextures
;   undefined4 DAT_00fe0000
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c3b10
        ;   Label: core_fire.cpp_CExplosion_render_FUN_004c3b10
    PUSH EBP                            ; 004c3b11
    SUB ESP,0x84                        ; 004c3b12
    MOV ESI,dword ptr [ESP + 0x90]      ; 004c3b18
    TEST dword ptr [ESI + 0xc],0x7fffffff ; 004c3b1f
    JNZ 0x004c3b31                      ; 004c3b26
        ;   XREF to: 004c3b31 (CONDITIONAL_JUMP)  ; LAB_004c3b31
    ADD ESP,0x84                        ; 004c3b28
    POP EBP                             ; 004c3b2e
    POP ESI                             ; 004c3b2f
    RET                                 ; 004c3b30
    PUSH EDI                            ; 004c3b31
        ;   Label: LAB_004c3b31
    PUSH EBX                            ; 004c3b32
    FLD float ptr [ESI + 0xc]           ; 004c3b33
    FLD1                                ; 004c3b36
    FSUBRP                              ; 004c3b38
    FMUL double ptr [0x00629dab]        ; 004c3b3a | DOUBLE_00629dab
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c3b40
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x78]        ; 004c3b45
    MOV EDX,dword ptr [ESP + 0x78]      ; 004c3b49
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c3b4d
    SUB EAX,EDX                         ; 004c3b54
    SHL EAX,0x4                         ; 004c3b56
    ADD EAX,0x67a86c                    ; 004c3b59 | g_FireEffectExplosionTextures
    PUSH EAX                            ; 004c3b5e
    MOV ECX,dword ptr [0x006703ec]      ; 004c3b5f | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c3b65 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c3b66
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c3b6b
    PUSH ESI                            ; 004c3b6e
    MOV EBX,dword ptr [0x006703ec]      ; 004c3b6f | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c3b75 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c3b76
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c3b7b
    LEA EAX,[ESP + 0x3c]                ; 004c3b7e
    PUSH EAX                            ; 004c3b82
    MOV EDI,dword ptr [0x006703ec]      ; 004c3b83 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c3b89 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800 ; 004c3b8a
        ;   XREF to: 0048c800 (UNCONDITIONAL_CALL)  ; float * engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800(CDemonRenderer * this_ptr, float * output)
    ADD ESP,0x8                         ; 004c3b8f
    PUSH 0x0                            ; 004c3b92
    LEA EAX,[ESP + 0x40]                ; 004c3b94
    PUSH EAX                            ; 004c3b98
    MOV EBP,dword ptr [0x006703ec]      ; 004c3b99 | g_CDemonRendererPtr2
    PUSH EBP                            ; 004c3b9f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c3ba0
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    FLD float ptr [ESI + 0x10]          ; 004c3ba5
    FMUL double ptr [0x00629dc3]        ; 004c3ba8 | DOUBLE_00629dc3
    FLD float ptr [ESI + 0x10]          ; 004c3bae
    FCHS                                ; 004c3bb1
    FMUL float ptr [0x00629db3]         ; 004c3bb3 | FLOAT_00629db3
    FXCH                                ; 004c3bb9
    FLD double ptr [0x00629dbb]         ; 004c3bbb | DOUBLE_00629dbb
    FXCH                                ; 004c3bc1
    FMUL ST1                            ; 004c3bc3
    FXCH ST2                            ; 004c3bc5
    FMULP                               ; 004c3bc7
    ADD ESP,0xc                         ; 004c3bc9
    MOV EAX,dword ptr [ESI + 0x18]      ; 004c3bcc
    FXCH                                ; 004c3bcf
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c3bd1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004c3bd6
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c3bd8
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004c3bdd
    FISTP dword ptr [ESP + 0x84]        ; 004c3bdf
    FISTP dword ptr [ESP + 0x80]        ; 004c3be6
    TEST EAX,EAX                        ; 004c3bed
    JZ 0x004c3c11                       ; 004c3bef
        ;   XREF to: 004c3c11 (CONDITIONAL_JUMP)  ; LAB_004c3c11
    MOV ECX,dword ptr [ESP + 0x84]      ; 004c3bf1
    MOV EDX,dword ptr [ESP + 0x80]      ; 004c3bf8
    NEG ECX                             ; 004c3bff
    NEG EDX                             ; 004c3c01
    MOV dword ptr [ESP + 0x84],ECX      ; 004c3c03
    MOV dword ptr [ESP + 0x80],EDX      ; 004c3c0a
    MOV EAX,dword ptr [ESP + 0x80]      ; 004c3c11
        ;   Label: LAB_004c3c11
    MOV dword ptr [ESP + 0x88],EAX      ; 004c3c18
    FILD dword ptr [ESP + 0x88]         ; 004c3c1f
    FSTP float ptr [ESP + 0x7c]         ; 004c3c26
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004c3c2a
    MOV dword ptr [ESP + 0x60],EAX      ; 004c3c2e
    FLD float ptr [ESI + 0x10]          ; 004c3c32
    FMUL float ptr [0x00629dcb]         ; 004c3c35 | FLOAT_00629dcb
    FMUL double ptr [0x00629dbb]        ; 004c3c3b | DOUBLE_00629dbb
    MOV EDX,dword ptr [0x006703ec]      ; 004c3c41 | g_CDemonRendererPtr2
    XOR EBX,EBX                         ; 004c3c47
    LEA EAX,[ESP + 0x60]                ; 004c3c49
    MOV dword ptr [ESP + 0x68],EBX      ; 004c3c4d
    LEA EBX,[ESP + 0x6c]                ; 004c3c51
    FSTP float ptr [ESP + 0x64]         ; 004c3c55
    FLD float ptr [EAX]                 ; 004c3c59
    FMUL float ptr [0x0065dca8]         ; 004c3c5b | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c3c61
    FLD float ptr [EAX + 0x4]           ; 004c3c63
    FMUL float ptr [0x0065dca8]         ; 004c3c66 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c3c6c
    FLD float ptr [EAX + 0x8]           ; 004c3c6f
    FMUL float ptr [0x0065dca8]         ; 004c3c72 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c3c78
    LEA EAX,[ESP + 0x6c]                ; 004c3c7b
    PUSH EAX                            ; 004c3c7f
    MOV EAX,dword ptr [EDX]             ; 004c3c80 | g_CDemonRendererInstance
    PUSH EAX                            ; 004c3c82
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c3c83
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c3c88
    MOV EAX,dword ptr [ESP + 0x84]      ; 004c3c8b
    LEA EBX,[ESP + 0x48]                ; 004c3c92
    MOV dword ptr [ESP + 0x88],EAX      ; 004c3c96
    MOV EDX,dword ptr [0x006703ec]      ; 004c3c9d | g_CDemonRendererPtr2
    FILD dword ptr [ESP + 0x88]         ; 004c3ca3
    LEA EAX,[ESP + 0x60]                ; 004c3caa
    FSTP float ptr [ESP + 0x60]         ; 004c3cae
    FLD float ptr [EAX]                 ; 004c3cb2
    FMUL float ptr [0x0065dca8]         ; 004c3cb4 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c3cba
    FLD float ptr [EAX + 0x4]           ; 004c3cbc
    FMUL float ptr [0x0065dca8]         ; 004c3cbf | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c3cc5
    FLD float ptr [EAX + 0x8]           ; 004c3cc8
    FMUL float ptr [0x0065dca8]         ; 004c3ccb | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c3cd1
    LEA EAX,[ESP + 0x48]                ; 004c3cd4
    PUSH EAX                            ; 004c3cd8
    MOV EAX,dword ptr [EDX]             ; 004c3cd9 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004c3cdb
    PUSH EAX                            ; 004c3cde
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c3cdf
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [ESI + 0x10]          ; 004c3ce4
    FCHS                                ; 004c3ce7
    FMUL double ptr [0x00629dd3]        ; 004c3ce9 | DOUBLE_00629dd3
    FMUL double ptr [0x00629dbb]        ; 004c3cef | DOUBLE_00629dbb
    LEA EBX,[ESP + 0x5c]                ; 004c3cf5
    LEA EAX,[ESP + 0x68]                ; 004c3cf9
    ADD ESP,0x8                         ; 004c3cfd
    MOV EDX,dword ptr [0x006703ec]      ; 004c3d00 | g_CDemonRendererPtr2
    FSTP float ptr [ESP + 0x64]         ; 004c3d06
    FLD float ptr [EAX]                 ; 004c3d0a
    FMUL float ptr [0x0065dca8]         ; 004c3d0c | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c3d12
    FLD float ptr [EAX + 0x4]           ; 004c3d14
    FMUL float ptr [0x0065dca8]         ; 004c3d17 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c3d1d
    FLD float ptr [EAX + 0x8]           ; 004c3d20
    FMUL float ptr [0x0065dca8]         ; 004c3d23 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c3d29
    LEA EAX,[ESP + 0x54]                ; 004c3d2c
    PUSH EAX                            ; 004c3d30
    MOV EAX,dword ptr [EDX]             ; 004c3d31 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004c3d33
    PUSH EAX                            ; 004c3d36
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c3d37
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c3d3c
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004c3d3f
    LEA EBX,[ESP + 0x30]                ; 004c3d43
    MOV dword ptr [ESP + 0x60],EAX      ; 004c3d47
    LEA EAX,[ESP + 0x60]                ; 004c3d4b
    MOV EDX,dword ptr [0x006703ec]      ; 004c3d4f | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c3d55
    FMUL float ptr [0x0065dca8]         ; 004c3d57 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c3d5d
    FLD float ptr [EAX + 0x4]           ; 004c3d5f
    FMUL float ptr [0x0065dca8]         ; 004c3d62 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c3d68
    FLD float ptr [EAX + 0x8]           ; 004c3d6b
    FMUL float ptr [0x0065dca8]         ; 004c3d6e | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c3d74
    LEA EAX,[ESP + 0x30]                ; 004c3d77
    PUSH EAX                            ; 004c3d7b
    MOV EAX,dword ptr [EDX]             ; 004c3d7c | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004c3d7e
    PUSH EAX                            ; 004c3d83
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c3d84
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c3d89
    MOV EAX,[0x006703ec]                ; 004c3d8c | g_CDemonRendererPtr2
    MOV EDX,dword ptr [EAX]             ; 004c3d91 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x18],0x20000  ; 004c3d93
    MOV EDX,dword ptr [EAX]             ; 004c3d9a | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x1c],0x20000  ; 004c3d9c
    MOV EDX,dword ptr [EAX]             ; 004c3da3 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x48],0xfe0000 ; 004c3da5 | DAT_00fe0000
    MOV EDX,dword ptr [EAX]             ; 004c3dac | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x4c],0x20000  ; 004c3dae
    MOV EDX,dword ptr [EAX]             ; 004c3db5 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x78],0xfe0000 ; 004c3db7 | DAT_00fe0000
    MOV EDX,dword ptr [EAX]             ; 004c3dbe | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x7c],0xfe0000 ; 004c3dc0 | DAT_00fe0000
    MOV EDX,dword ptr [EAX]             ; 004c3dc7 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xa8],0x20000  ; 004c3dc9
    MOV EDX,dword ptr [EAX]             ; 004c3dd3 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xac],0xfe0000 ; 004c3dd5 | DAT_00fe0000
    MOV EDX,dword ptr [EAX]             ; 004c3ddf | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x2c],0x8000   ; 004c3de1
    MOV EDX,dword ptr [EAX]             ; 004c3de8 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x5c],0x8000   ; 004c3dea
    MOV EDX,dword ptr [EAX]             ; 004c3df1 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x8c],0x8000   ; 004c3df3
    MOV EDX,dword ptr [EAX]             ; 004c3dfd | g_CDemonRendererInstance
    MOV ESI,0x4                         ; 004c3dff
    MOV EBP,0x3                         ; 004c3e04
    MOV dword ptr [EDX + 0xbc],0x8000   ; 004c3e09
    XOR EDI,EDI                         ; 004c3e13
    MOV dword ptr [ESP + 0xc],ESI       ; 004c3e15
    MOV dword ptr [ESP + 0x1c],EDI      ; 004c3e19
    MOV dword ptr [ESP + 0x18],EDI      ; 004c3e1d
    MOV dword ptr [ESP + 0x14],EDI      ; 004c3e21
    MOV dword ptr [ESP + 0x10],EDI      ; 004c3e25
    MOV ESI,0x1                         ; 004c3e29
    MOV dword ptr [ESP + 0x20],EDI      ; 004c3e2e
    PUSH ESI                            ; 004c3e32
    MOV dword ptr [ESP + 0x30],EBP      ; 004c3e33
    MOV EDI,0x2                         ; 004c3e37
    PUSH EAX                            ; 004c3e3c | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x2c],ESI      ; 004c3e3d
    MOV dword ptr [ESP + 0x30],EDI      ; 004c3e41
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c3e45
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c3e4a
    PUSH 0x123                          ; 004c3e4d
    LEA EAX,[ESP + 0xc]                 ; 004c3e52
    PUSH EAX                            ; 004c3e56
    MOV EAX,[0x006703ec]                ; 004c3e57 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c3e5c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 ; 004c3e5d
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004c3e62
    XOR EBX,EBX                         ; 004c3e65
    PUSH EBX                            ; 004c3e67
    MOV EDX,dword ptr [0x006703ec]      ; 004c3e68 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c3e6e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c3e6f
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c3e74
    MOV ECX,dword ptr [0x006703ec]      ; 004c3e77 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c3e7d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004c3e7e
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()

