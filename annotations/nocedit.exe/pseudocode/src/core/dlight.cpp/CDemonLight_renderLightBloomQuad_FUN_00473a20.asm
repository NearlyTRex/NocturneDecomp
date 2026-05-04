; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; int[992]         Stack[-0x1064]:3968  aiStackY_1064
; SMRGLPrimitiveQuadIndex Stack[-0xd4]:40  local_d4
; float            Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; float            Stack[-0x98]:4  local_98
; CVector3i        Stack[-0x94]:12  local_94
; CVector3i        Stack[-0x88]:12  local_88
; CVector3i        Stack[-0x7c]:12  local_7c
; float            Stack[-0x70]:4  local_70
; float            Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; int              Stack[-0x64]:4  local_64
; int[2]           Stack[-0x60]:8  local_60
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; CVector3i        Stack[-0x40]:12  local_40
; CVector3f        Stack[-0x34]:12  local_34
; CVector3i        Stack[-0x28]:12  local_28
; float            Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0 at 0056c8a3
;
; Referenced Globals:
;   double DOUBLE_0061f14b = 0.00390625
;   double DOUBLE_0061f153 = 65536
;   float FLOAT_0065c900 = 256
;   undefined4 g_LightTextures[1].base.type
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   undefined4 g_LightBufferPool[11][183800]
;   CDemonRenderer g_CDemonRendererInstance
;   int g_PerspectiveReciprocal
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
;   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473a20
        ;   Label: core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20
    PUSH ESI                            ; 00473a21
    PUSH EDI                            ; 00473a22
    PUSH EBP                            ; 00473a23
    MOV EBP,ESP                         ; 00473a24
    SUB ESP,0xc8                        ; 00473a26
    AND ESP,0xfffffff8                  ; 00473a2c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473a2f
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 00473a32
    JNZ 0x00473a42                      ; 00473a39
        ;   XREF to: 00473a42 (CONDITIONAL_JUMP)  ; LAB_00473a42
    MOV ESP,EBP                         ; 00473a3b
    POP EBP                             ; 00473a3d
    POP EDI                             ; 00473a3e
    POP ESI                             ; 00473a3f
    POP EBX                             ; 00473a40
    RET                                 ; 00473a41
    LEA EBX,[EAX + 0x4]                 ; 00473a42
        ;   Label: LAB_00473a42
    PUSH EBX                            ; 00473a45
    MOV ECX,dword ptr [0x006703ec]      ; 00473a46 | g_CDemonRendererPtr2
    PUSH ECX                            ; 00473a4c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00473a4d
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00473a52
    LEA EAX,[ESP + 0xa4]                ; 00473a55
    PUSH EAX                            ; 00473a5c
    MOV ESI,dword ptr [0x006703ec]      ; 00473a5d | g_CDemonRendererPtr2
    PUSH ESI                            ; 00473a63 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800 ; 00473a64
        ;   XREF to: 0048c800 (UNCONDITIONAL_CALL)  ; float * engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800(CDemonRenderer * this_ptr, float * output)
    ADD ESP,0x8                         ; 00473a69
    PUSH 0x0                            ; 00473a6c
    LEA EAX,[ESP + 0xa8]                ; 00473a6e
    PUSH EAX                            ; 00473a75
    MOV EDI,dword ptr [0x006703ec]      ; 00473a76 | g_CDemonRendererPtr2
    PUSH EDI                            ; 00473a7c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00473a7d
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00473a82
    MOV EAX,[0x006703ec]                ; 00473a85 | g_CDemonRendererPtr2
    PUSH EAX                            ; 00473a8a | g_CDemonRendererInstance
    LEA ESI,[ESP + 0x60]                ; 00473a8b
    LEA EDI,[ESP + 0x78]                ; 00473a8f
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760 ; 00473a93
        ;   XREF to: 0048c760 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x60]                ; 00473a98
    ADD ESP,0x4                         ; 00473a9c
    JMP 0x0060c849                      ; 00473a9f
        ;   XREF to: 0060c849 (UNCONDITIONAL_JUMP)  ; LAB_0060c849
    MOV dword ptr [ESP + 0xc4],EAX      ; 00473aa6
        ;   Label: LAB_00473aa6
    FILD dword ptr [ESP + 0xc4]         ; 00473aad
    MOV EAX,dword ptr [ESP + 0x78]      ; 00473ab4
    FLD double ptr [0x0061f14b]         ; 00473ab8 | DOUBLE_0061f14b
    FXCH                                ; 00473abe
    FMUL ST1                            ; 00473ac0
    MOV dword ptr [ESP + 0xc4],EAX      ; 00473ac2
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00473ac9
    FILD dword ptr [ESP + 0xc4]         ; 00473acd
    MOV dword ptr [ESP + 0xc4],EAX      ; 00473ad4
    FMUL ST2                            ; 00473adb
    FILD dword ptr [ESP + 0xc4]         ; 00473add
    FMULP ST3                           ; 00473ae4
    FXCH                                ; 00473ae6
    FSTP float ptr [ESP + 0x68]         ; 00473ae8
    FSTP float ptr [ESP + 0x6c]         ; 00473aec
    FSTP float ptr [ESP + 0x70]         ; 00473af0
    FLD float ptr [EBX]                 ; 00473af4
    FSUB float ptr [ESP + 0x68]         ; 00473af6
    FSTP float ptr [ESP + 0x38]         ; 00473afa
    FLD float ptr [EBX + 0x4]           ; 00473afe
    FSUB float ptr [ESP + 0x6c]         ; 00473b01
    LEA EDX,[ESP + 0x80]                ; 00473b05
    FSTP float ptr [ESP + 0x3c]         ; 00473b0c
    FLD float ptr [EBX + 0x8]           ; 00473b10
    FSUB float ptr [ESP + 0x70]         ; 00473b13
    LEA EAX,[ESP + 0x38]                ; 00473b17
    FSTP float ptr [ESP + 0x40]         ; 00473b1b
    CMP EDX,EAX                         ; 00473b1f
    JZ 0x00473b44                       ; 00473b21
        ;   XREF to: 00473b44 (CONDITIONAL_JUMP)  ; LAB_00473b44
    MOV EAX,dword ptr [ESP + 0x38]      ; 00473b23
    MOV dword ptr [ESP + 0x80],EAX      ; 00473b27
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00473b2e
    MOV dword ptr [ESP + 0x84],EAX      ; 00473b32
    MOV EAX,dword ptr [ESP + 0x40]      ; 00473b39
    MOV dword ptr [ESP + 0x88],EAX      ; 00473b3d
    FLD float ptr [ESP + 0x84]          ; 00473b44
        ;   Label: LAB_00473b44
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473b4b
    FMUL float ptr [ESP + 0x84]         ; 00473b4e
    MOV EAX,dword ptr [EAX + 0x18]      ; 00473b55
    FLD float ptr [ESP + 0x80]          ; 00473b58
    FMUL ST0                            ; 00473b5f
    MOV dword ptr [ESP + 0x8c],EAX      ; 00473b61
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473b68
    FADDP                               ; 00473b6b
    MOV EAX,dword ptr [EAX + 0x24]      ; 00473b6d
    FLD float ptr [ESP + 0x88]          ; 00473b70
    MOV dword ptr [ESP + 0x90],EAX      ; 00473b77
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473b7e
    FMUL float ptr [ESP + 0x88]         ; 00473b81
    MOV EAX,dword ptr [EAX + 0x30]      ; 00473b88
    FADDP                               ; 00473b8b
    MOV dword ptr [ESP + 0x94],EAX      ; 00473b8d
    FSQRT                               ; 00473b94
    FST float ptr [ESP]                 ; 00473b96
    FLDZ                                ; 00473b99
    FCOMPP                              ; 00473b9b
    FNSTSW AX                           ; 00473b9d
    SAHF                                ; 00473b9f
    JNC 0x00473f6c                      ; 00473ba0
        ;   XREF to: 00473f6c (CONDITIONAL_JUMP)  ; LAB_00473f6c
    FLD1                                ; 00473ba6
    FLD float ptr [ESP + 0x80]          ; 00473ba8
    FXCH                                ; 00473baf
    FDIV float ptr [ESP]                ; 00473bb1
    FXCH                                ; 00473bb4
    FMUL ST1                            ; 00473bb6
    FLD float ptr [ESP + 0x84]          ; 00473bb8
    FMUL ST2                            ; 00473bbf
    FLD float ptr [ESP + 0x88]          ; 00473bc1
    FMULP ST3                           ; 00473bc8
    FXCH                                ; 00473bca
    FSTP float ptr [ESP + 0x80]         ; 00473bcc
    FSTP float ptr [ESP + 0x84]         ; 00473bd3
    FSTP float ptr [ESP + 0x88]         ; 00473bda
    MOV EAX,[0x02d051f4]                ; 00473be1 | g_PerspectiveReciprocal
        ;   Label: LAB_00473be1
    MOV EDX,EAX                         ; 00473be6
    SAR EDX,0x1f                        ; 00473be8
    SUB EAX,EDX                         ; 00473beb
    SAR EAX,0x1                         ; 00473bed
    FLD float ptr [ESP + 0x84]          ; 00473bef
    FMUL float ptr [ESP + 0x90]         ; 00473bf6
    FLD float ptr [ESP + 0x80]          ; 00473bfd
    FMUL float ptr [ESP + 0x8c]         ; 00473c04
    FADDP                               ; 00473c0b
    FLD float ptr [ESP + 0x88]          ; 00473c0d
    FMUL float ptr [ESP + 0x94]         ; 00473c14
    FADDP                               ; 00473c1b
    FCHS                                ; 00473c1d
    FST float ptr [ESP + 0xbc]          ; 00473c1f
    FMUL float ptr [ESP + 0xbc]         ; 00473c26
    FMUL float ptr [ESP + 0xbc]         ; 00473c2d
    FMUL float ptr [ESP + 0xbc]         ; 00473c34
    FMUL double ptr [0x0061f153]        ; 00473c3b | DOUBLE_0061f153
    MOV EDX,0xffff                      ; 00473c41
    CALL crt_math.c_round_FUN_005fe6b0  ; 00473c46
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    SUB EDX,EAX                         ; 00473c4b
    FISTP dword ptr [ESP + 0xc0]        ; 00473c4d
    MOV EAX,EDX                         ; 00473c54
    MOV EDX,dword ptr [ESP + 0xc0]      ; 00473c56
    IMUL EDX                            ; 00473c5d
    SHRD EAX,EDX,0x10                   ; 00473c5f
    FLDZ                                ; 00473c63
    MOV ESI,EAX                         ; 00473c65
    FCOMP float ptr [ESP + 0xbc]        ; 00473c67
    FNSTSW AX                           ; 00473c6e
    SAHF                                ; 00473c70
    JNC 0x00473f3a                      ; 00473c71
        ;   XREF to: 00473f3a (CONDITIONAL_JUMP)  ; LAB_00473f3a
    MOV EDI,0x3f000000                  ; 00473c77
    MOV EDX,0xbf000000                  ; 00473c7c
    LEA EBX,[ESP + 0x98]                ; 00473c81
    LEA EAX,[ESP + 0x2c]                ; 00473c88
    MOV dword ptr [ESP + 0x2c],EDI      ; 00473c8c
    MOV dword ptr [ESP + 0x30],EDI      ; 00473c90
    MOV dword ptr [ESP + 0x34],EDX      ; 00473c94
    MOV EDX,dword ptr [0x006703ec]      ; 00473c98 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00473c9e
    FMUL float ptr [0x0065c900]         ; 00473ca0 | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00473ca6
    FLD float ptr [EAX + 0x4]           ; 00473ca8
    FMUL float ptr [0x0065c900]         ; 00473cab | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00473cb1
    FLD float ptr [EAX + 0x8]           ; 00473cb4
    FMUL float ptr [0x0065c900]         ; 00473cb7 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00473cbd
    LEA EAX,[ESP + 0x98]                ; 00473cc0
    PUSH EAX                            ; 00473cc7
    MOV EAX,dword ptr [EDX]             ; 00473cc8 | g_CDemonRendererInstance
    PUSH EAX                            ; 00473cca
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00473ccb
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0xbf000000                  ; 00473cd0
    LEA EBX,[ESP + 0xb8]                ; 00473cd5
    LEA EAX,[ESP + 0x34]                ; 00473cdc
    ADD ESP,0x8                         ; 00473ce0
    MOV EDX,dword ptr [0x006703ec]      ; 00473ce3 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x2c],ECX      ; 00473ce9
    MOV dword ptr [ESP + 0x30],EDI      ; 00473ced
    MOV dword ptr [ESP + 0x34],ECX      ; 00473cf1
    FLD float ptr [EAX]                 ; 00473cf5
    FMUL float ptr [0x0065c900]         ; 00473cf7 | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00473cfd
    FLD float ptr [EAX + 0x4]           ; 00473cff
    FMUL float ptr [0x0065c900]         ; 00473d02 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00473d08
    FLD float ptr [EAX + 0x8]           ; 00473d0b
    FMUL float ptr [0x0065c900]         ; 00473d0e | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00473d14
    LEA EAX,[ESP + 0xb0]                ; 00473d17
    PUSH EAX                            ; 00473d1e
    MOV EAX,dword ptr [EDX]             ; 00473d1f | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 00473d21
    PUSH EAX                            ; 00473d24
    MOV EDI,ECX                         ; 00473d25
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00473d27
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00473d2c
    MOV EAX,EDI                         ; 00473d2f
    LEA EBX,[ESP + 0x50]                ; 00473d31
    MOV dword ptr [ESP + 0x2c],EAX      ; 00473d35
    MOV dword ptr [ESP + 0x30],EAX      ; 00473d39
    MOV dword ptr [ESP + 0x34],EAX      ; 00473d3d
    LEA EAX,[ESP + 0x2c]                ; 00473d41
    MOV EDX,dword ptr [0x006703ec]      ; 00473d45 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00473d4b
    FMUL float ptr [0x0065c900]         ; 00473d4d | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00473d53
    FLD float ptr [EAX + 0x4]           ; 00473d55
    FMUL float ptr [0x0065c900]         ; 00473d58 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00473d5e
    FLD float ptr [EAX + 0x8]           ; 00473d61
    FMUL float ptr [0x0065c900]         ; 00473d64 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00473d6a
    LEA EAX,[ESP + 0x50]                ; 00473d6d
    PUSH EAX                            ; 00473d71
    MOV EAX,dword ptr [EDX]             ; 00473d72 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 00473d74
    PUSH EAX                            ; 00473d77
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00473d78
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3f000000                  ; 00473d7d
    MOV EDX,dword ptr [0x006703ec]      ; 00473d82 | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 00473d88
    MOV EAX,EDI                         ; 00473d8b
    MOV dword ptr [ESP + 0x2c],EBX      ; 00473d8d
    MOV dword ptr [ESP + 0x34],EAX      ; 00473d91
    LEA EBX,[ESP + 0x44]                ; 00473d95
    LEA EAX,[ESP + 0x2c]                ; 00473d99
    MOV dword ptr [ESP + 0x30],EDI      ; 00473d9d
    FLD float ptr [EAX]                 ; 00473da1
    FMUL float ptr [0x0065c900]         ; 00473da3 | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00473da9
    FLD float ptr [EAX + 0x4]           ; 00473dab
    FMUL float ptr [0x0065c900]         ; 00473dae | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00473db4
    FLD float ptr [EAX + 0x8]           ; 00473db7
    FMUL float ptr [0x0065c900]         ; 00473dba | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00473dc0
    LEA EAX,[ESP + 0x44]                ; 00473dc3
    PUSH EAX                            ; 00473dc7
    MOV EAX,dword ptr [EDX]             ; 00473dc8 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 00473dca
    PUSH EAX                            ; 00473dcf
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00473dd0
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00473dd5
    MOV EAX,[0x006703ec]                ; 00473dd8 | g_CDemonRendererPtr2
    MOV EBX,dword ptr [EAX]             ; 00473ddd | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x18],0xf80000 ; 00473ddf | g_LightBufferPool[11][183800]
    MOV EBX,dword ptr [EAX]             ; 00473de6 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x1c],0xf80000 ; 00473de8 | g_LightBufferPool[11][183800]
    MOV EBX,dword ptr [EAX]             ; 00473def | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x2c],ESI      ; 00473df1
    MOV EBX,dword ptr [EAX]             ; 00473df4 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x48],0x80000  ; 00473df6
    MOV EBX,dword ptr [EAX]             ; 00473dfd | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 00473dff | g_LightBufferPool[11][183800]
    MOV EDX,dword ptr [EAX]             ; 00473e06 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x5c],ESI      ; 00473e08
    MOV EDX,dword ptr [EAX]             ; 00473e0b | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x78],0x80000  ; 00473e0d
    MOV EBX,dword ptr [EAX]             ; 00473e14 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x7c],0x80000  ; 00473e16
    MOV EBX,dword ptr [EAX]             ; 00473e1d | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x8c],ESI      ; 00473e1f
    MOV EBX,dword ptr [EAX]             ; 00473e25 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xa8],0xf80000 ; 00473e27 | g_LightBufferPool[11][183800]
    MOV EBX,dword ptr [EAX]             ; 00473e31 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xac],0x80000  ; 00473e33
    MOV EDX,dword ptr [EAX]             ; 00473e3d | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xbc],ESI      ; 00473e3f
    MOV EDX,dword ptr [EAX]             ; 00473e45 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x20],0xffff   ; 00473e47
    MOV EDX,dword ptr [EAX]             ; 00473e4e | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x24],0xffff   ; 00473e50
    MOV EBX,dword ptr [EAX]             ; 00473e57 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x28],0xffff   ; 00473e59
    MOV EBX,dword ptr [EAX]             ; 00473e60 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x50],0xffff   ; 00473e62
    MOV EBX,dword ptr [EAX]             ; 00473e69 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x54],0xffff   ; 00473e6b
    MOV EDX,dword ptr [EAX]             ; 00473e72 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x58],0xffff   ; 00473e74
    MOV EDX,dword ptr [EAX]             ; 00473e7b | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x80],0xffff   ; 00473e7d
    MOV EDX,dword ptr [EAX]             ; 00473e87 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x84],0xffff   ; 00473e89
    MOV EDX,dword ptr [EAX]             ; 00473e93 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x88],0xffff   ; 00473e95
    MOV EBX,dword ptr [EAX]             ; 00473e9f | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xb0],0xffff   ; 00473ea1
    MOV EDX,dword ptr [EAX]             ; 00473eab | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xb4],0xffff   ; 00473ead
    PUSH 0x66fef0                       ; 00473eb7 | g_LightTextures[1].base.type
    MOV EDX,dword ptr [EAX]             ; 00473ebc | g_CDemonRendererInstance
    PUSH EAX                            ; 00473ebe | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xb8],0xffff   ; 00473ebf
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00473ec9
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00473ece
    PUSH 0x1                            ; 00473ed1
    MOV EDX,dword ptr [0x006703ec]      ; 00473ed3 | g_CDemonRendererPtr2
    MOV EDI,0xffff0001                  ; 00473ed9
    PUSH EDX                            ; 00473ede | g_CDemonRendererInstance
    MOV ESI,0x3                         ; 00473edf
    XOR EBX,EBX                         ; 00473ee4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 00473ee6
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    MOV ECX,0x4                         ; 00473eeb
    ADD ESP,0x8                         ; 00473ef0
    MOV EAX,0xffff8001                  ; 00473ef3
    MOV dword ptr [ESP + 0x8],ECX       ; 00473ef8
    MOV dword ptr [ESP + 0xc],EBX       ; 00473efc
    MOV dword ptr [ESP + 0x10],EBX      ; 00473f00
    MOV dword ptr [ESP + 0x14],EDI      ; 00473f04
    MOV dword ptr [ESP + 0x18],EAX      ; 00473f08
    MOV dword ptr [ESP + 0x1c],EBX      ; 00473f0c
    MOV dword ptr [ESP + 0x28],ESI      ; 00473f10
    LEA EAX,[ESP + 0x4]                 ; 00473f14
    MOV ECX,0x1                         ; 00473f18
    PUSH EAX                            ; 00473f1d
    MOV EDI,dword ptr [0x006703ec]      ; 00473f1e | g_CDemonRendererPtr2
    MOV EBX,0x2                         ; 00473f24
    PUSH EDI                            ; 00473f29 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x28],ECX      ; 00473f2a
    MOV dword ptr [ESP + 0x2c],EBX      ; 00473f2e
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 00473f32
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00473f37
    PUSH 0x0                            ; 00473f3a
        ;   Label: LAB_00473f3a
    MOV EAX,[0x006703ec]                ; 00473f3c | g_CDemonRendererPtr2
    PUSH EAX                            ; 00473f41 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 00473f42
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00473f47
    MOV EDX,dword ptr [0x006703ec]      ; 00473f4a | g_CDemonRendererPtr2
    PUSH EDX                            ; 00473f50 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 00473f51
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00473f56
    MOV ECX,dword ptr [EBP + 0x14]      ; 00473f59
    PUSH ECX                            ; 00473f5c
    CALL core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 ; 00473f5d
        ;   XREF to: 00474ad0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 00473f62
    MOV ESP,EBP                         ; 00473f65
    POP EBP                             ; 00473f67
    POP EDI                             ; 00473f68
    POP ESI                             ; 00473f69
    POP EBX                             ; 00473f6a
    RET                                 ; 00473f6b
    XOR EDX,EDX                         ; 00473f6c
        ;   Label: LAB_00473f6c
    MOV dword ptr [ESP + 0x84],EDX      ; 00473f6e
    MOV dword ptr [ESP + 0x80],EDX      ; 00473f75
    MOV dword ptr [ESP + 0x88],EDX      ; 00473f7c
    JMP 0x00473be1                      ; 00473f83
        ;   XREF to: 00473be1 (UNCONDITIONAL_JUMP)  ; LAB_00473be1
    MOV ECX,dword ptr [ESI]             ; 0060c849
        ;   Label: LAB_0060c849
    MOV dword ptr [EDI],ECX             ; 0060c84b
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c84d
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c850
        ;   Label: SUB_0060c850
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060c853
    MOV dword ptr [EDI + 0x8],ECX       ; 0060c856
    ADD ESI,0xc                         ; 0060c859
    ADD EDI,0xc                         ; 0060c85c
    MOV EAX,dword ptr [ESP + 0x74]      ; 0060c85f
    JMP 0x00473aa6                      ; 0060c863
        ;   XREF to: 00473aa6 (UNCONDITIONAL_JUMP)  ; LAB_00473aa6

