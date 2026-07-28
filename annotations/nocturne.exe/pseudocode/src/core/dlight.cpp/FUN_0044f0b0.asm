; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dlight_cpp_FUN_0044f0b0(CDemonLight *param_1)
;
; Local Variables:
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00444920 at 004449a4
;
; Referenced Globals:
;   double DOUBLE_0057c7b6 = 18
;   double DOUBLE_0057c7be = 6.28318530700000
;   double DOUBLE_0057c7c6 = 0.0625
;   double DOUBLE_0057c7ce = 0.0555555555555556
;   double DOUBLE_0057c7d6 = 256
;   undefined4 DAT_0059c030
;   undefined4 DAT_005ae704
;   undefined4 DAT_01abb4b8
;   undefined4 DAT_01abb4bc
;   undefined4 DAT_01abb4c0
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_dcamera.cpp_initializeCoronaBuffers_FUN_00444140
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f0b0
        ;   Label: core_dlight.cpp_FUN_0044f0b0
    PUSH ESI                            ; 0044f0b1
    PUSH EDI                            ; 0044f0b2
    PUSH EBP                            ; 0044f0b3
    MOV EBP,ESP                         ; 0044f0b4
    SUB ESP,0x98                        ; 0044f0b6
    AND ESP,0xfffffff8                  ; 0044f0bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f0bf
    ADD EAX,0x104                       ; 0044f0c2
    PUSH EAX                            ; 0044f0c7
    MOV EDX,dword ptr [0x005ae704]      ; 0044f0c8 | DAT_005ae704
    PUSH EDX                            ; 0044f0ce | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 0044f0cf
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0044f0d4
    LEA EAX,[ESP + 0x5c]                ; 0044f0d7
    PUSH EAX                            ; 0044f0db
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f0dc
    ADD EAX,0x110                       ; 0044f0df
    PUSH EAX                            ; 0044f0e4
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0 ; 0044f0e5
        ;   XREF to: 0044dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0044f0ea
    PUSH 0x0                            ; 0044f0ed
    LEA EAX,[ESP + 0x60]                ; 0044f0ef
    PUSH EAX                            ; 0044f0f3
    MOV ECX,dword ptr [0x005ae704]      ; 0044f0f4 | DAT_005ae704
    PUSH ECX                            ; 0044f0fa | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0044f0fb
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 0044f100
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f103
    FLD float ptr [EAX + 0x138]         ; 0044f106
    FDIVR double ptr [0x0057c7b6]       ; 0044f10c | DOUBLE_0057c7b6
    FMUL float ptr [EAX + 0x100]        ; 0044f112
    XOR ESI,ESI                         ; 0044f118
    XOR EDI,EDI                         ; 0044f11a
    MOV EAX,dword ptr [EAX + 0x100]     ; 0044f11c
    FSTP float ptr [ESP]                ; 0044f122
    MOV dword ptr [ESP + 0x70],EAX      ; 0044f125
    MOV dword ptr [ESP + 0x94],ESI      ; 0044f129
        ;   Label: LAB_0044f129
    FILD dword ptr [ESP + 0x94]         ; 0044f130
    FMUL double ptr [0x0057c7be]        ; 0044f137 | DOUBLE_0057c7be
    FMUL double ptr [0x0057c7c6]        ; 0044f13d | DOUBLE_0057c7c6
    FLD ST0                             ; 0044f143
    FCOS                                ; 0044f145
    FXCH                                ; 0044f147
    FSIN                                ; 0044f149
    FLD float ptr [ESP]                 ; 0044f14b
    FXCH ST2                            ; 0044f14e
    FMUL ST2                            ; 0044f150
    FXCH                                ; 0044f152
    FMULP ST2                           ; 0044f154
    LEA EBX,[ESP + 0x44]                ; 0044f156
    MOV EDX,dword ptr [0x005ae704]      ; 0044f15a | DAT_005ae704
    LEA EAX,[ESP + 0x68]                ; 0044f160
    FSTP float ptr [ESP + 0x68]         ; 0044f164
    FSTP float ptr [ESP + 0x6c]         ; 0044f168
    FLD float ptr [EAX]                 ; 0044f16c
    FMUL float ptr [0x0059c030]         ; 0044f16e | DAT_0059c030
    FISTP dword ptr [EBX]               ; 0044f174
    FLD float ptr [EAX + 0x4]           ; 0044f176
    FMUL float ptr [0x0059c030]         ; 0044f179 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 0044f17f
    FLD float ptr [EAX + 0x8]           ; 0044f182
    FMUL float ptr [0x0059c030]         ; 0044f185 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 0044f18b
    LEA EAX,[ESP + 0x44]                ; 0044f18e
    PUSH EAX                            ; 0044f192
    MOV EAX,dword ptr [EDX]             ; 0044f193 | DAT_01b4d738
    ADD EAX,EDI                         ; 0044f195
    PUSH EAX                            ; 0044f197
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0044f198
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x005ae704]      ; 0044f19d | DAT_005ae704
    ADD EDI,0x30                        ; 0044f1a3
    MOV EAX,dword ptr [EDX]             ; 0044f1a6 | DAT_01b4d738
    INC ESI                             ; 0044f1a8
    ADD ESP,0x8                         ; 0044f1a9
    MOV dword ptr [EDI + EAX*0x1 + -0x10],0x0 ; 0044f1ac
    CMP ESI,0x10                        ; 0044f1b4
    JL 0x0044f129                       ; 0044f1b7
        ;   XREF to: 0044f129 (CONDITIONAL_JUMP)  ; LAB_0044f129
    LEA EBX,[ESP + 0x2c]                ; 0044f1bd
    MOV EAX,0x1abb4b8                   ; 0044f1c1
    FLD float ptr [EAX]                 ; 0044f1c6 | DAT_01abb4b8
    FMUL float ptr [0x0059c030]         ; 0044f1c8 | DAT_0059c030
    FISTP dword ptr [EBX]               ; 0044f1ce
    FLD float ptr [EAX + 0x4]           ; 0044f1d0 | DAT_01abb4bc
    FMUL float ptr [0x0059c030]         ; 0044f1d3 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 0044f1d9
    FLD float ptr [EAX + 0x8]           ; 0044f1dc | DAT_01abb4c0
    FMUL float ptr [0x0059c030]         ; 0044f1df | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 0044f1e5
    LEA EAX,[ESP + 0x2c]                ; 0044f1e8
    PUSH EAX                            ; 0044f1ec
    MOV EAX,dword ptr [EDX]             ; 0044f1ed | DAT_01b4d738
    ADD EAX,0x300                       ; 0044f1ef
    PUSH EAX                            ; 0044f1f4
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0044f1f5
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0044f1fa
    MOV EAX,[0x005ae704]                ; 0044f1fd | DAT_005ae704
    PUSH 0x1                            ; 0044f202
    MOV EDX,dword ptr [EAX]             ; 0044f204 | DAT_01b4d738
    PUSH EAX                            ; 0044f206 | DAT_01b4d738
    MOV dword ptr [EDX + 0x320],0xffff  ; 0044f207
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 0044f211
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0044f216
    LEA EAX,[ESP + 0x50]                ; 0044f219
    PUSH EAX                            ; 0044f21d
    MOV ESI,dword ptr [0x005ae704]      ; 0044f21e | DAT_005ae704
    PUSH ESI                            ; 0044f224 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30 ; 0044f225
        ;   XREF to: 00460d30 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(CDemonRenderer * this_ptr, CVector3f * output)
    ADD ESP,0x8                         ; 0044f22a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044f22d
    FLD float ptr [EAX]                 ; 0044f230
    FSUB float ptr [EDX + 0x104]        ; 0044f232
    FSTP float ptr [ESP + 0x74]         ; 0044f238
    FLD float ptr [EAX + 0x4]           ; 0044f23c
    FSUB float ptr [EDX + 0x108]        ; 0044f23f
    FSTP float ptr [ESP + 0x78]         ; 0044f245
    FLD float ptr [EAX + 0x8]           ; 0044f249
    LEA EAX,[ESP + 0x74]                ; 0044f24c
    PUSH EAX                            ; 0044f250
    LEA EAX,[ESP + 0x3c]                ; 0044f251
    XOR EBX,EBX                         ; 0044f255
    PUSH EAX                            ; 0044f257
    LEA EAX,[EDX + 0x110]               ; 0044f258
    FSUB float ptr [EDX + 0x10c]        ; 0044f25e
    PUSH EAX                            ; 0044f264
    FSTP float ptr [ESP + 0x88]         ; 0044f265
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 0044f26c
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    MOV EDX,EAX                         ; 0044f271
    LEA EAX,[ESP + 0x80]                ; 0044f273
    ADD ESP,0xc                         ; 0044f27a
    CMP EAX,EDX                         ; 0044f27d
    JNZ 0x0044f3fc                      ; 0044f27f
        ;   XREF to: 0044f3fc (CONDITIONAL_JUMP)  ; LAB_0044f3fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f285
        ;   Label: LAB_0044f285
    FLD double ptr [0x0057c7ce]         ; 0044f288 | DOUBLE_0057c7ce
    FLD float ptr [EAX + 0x138]         ; 0044f28e
    FMUL ST1                            ; 0044f294
    FMUL float ptr [ESP + 0x74]         ; 0044f296
    FSTP float ptr [ESP + 0x74]         ; 0044f29a
    FMUL float ptr [EAX + 0x138]        ; 0044f29e
    FLD float ptr [ESP + 0x78]          ; 0044f2a4
    FXCH                                ; 0044f2a8
    FMUL ST1                            ; 0044f2aa
    FLD float ptr [ESP + 0x74]          ; 0044f2ac
    FXCH                                ; 0044f2b0
    FSTP ST2                            ; 0044f2b2
    FXCH                                ; 0044f2b4
    FSTP float ptr [ESP + 0x78]         ; 0044f2b6
    FCOMP float ptr [ESP + 0x7c]        ; 0044f2ba
    FNSTSW AX                           ; 0044f2be
    SAHF                                ; 0044f2c0
    JNC 0x0044f314                      ; 0044f2c1
        ;   XREF to: 0044f314 (CONDITIONAL_JUMP)  ; LAB_0044f314
    FLD float ptr [ESP + 0x74]          ; 0044f2c3
    FLD float ptr [ESP + 0x7c]          ; 0044f2c7
    FCHS                                ; 0044f2cb
    FSTP float ptr [ESP + 0x90]         ; 0044f2cd
    FCOMP float ptr [ESP + 0x90]        ; 0044f2d4
    FNSTSW AX                           ; 0044f2db
    SAHF                                ; 0044f2dd
    JBE 0x0044f314                      ; 0044f2de
        ;   XREF to: 0044f314 (CONDITIONAL_JUMP)  ; LAB_0044f314
    FLD float ptr [ESP + 0x78]          ; 0044f2e0
    FCOMP float ptr [ESP + 0x7c]        ; 0044f2e4
    FNSTSW AX                           ; 0044f2e8
    SAHF                                ; 0044f2ea
    JNC 0x0044f314                      ; 0044f2eb
        ;   XREF to: 0044f314 (CONDITIONAL_JUMP)  ; LAB_0044f314
    FLD float ptr [ESP + 0x78]          ; 0044f2ed
    FCOMP float ptr [ESP + 0x90]        ; 0044f2f1
    FNSTSW AX                           ; 0044f2f8
    SAHF                                ; 0044f2fa
    JBE 0x0044f314                      ; 0044f2fb
        ;   XREF to: 0044f314 (CONDITIONAL_JUMP)  ; LAB_0044f314
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f2fd
    FLD float ptr [ESP + 0x7c]          ; 0044f300
    FCOMP float ptr [EAX + 0x100]       ; 0044f304
    FNSTSW AX                           ; 0044f30a
    SAHF                                ; 0044f30c
    JNC 0x0044f314                      ; 0044f30d
        ;   XREF to: 0044f314 (CONDITIONAL_JUMP)  ; LAB_0044f314
    MOV EBX,0x1                         ; 0044f30f
    XOR EAX,EAX                         ; 0044f314
        ;   Label: LAB_0044f314
    MOV EDI,0x3                         ; 0044f316
    MOV dword ptr [ESP + 0x18],EAX      ; 0044f31b
    MOV dword ptr [ESP + 0x14],EAX      ; 0044f31f
    MOV dword ptr [ESP + 0x10],EAX      ; 0044f323
    MOV dword ptr [ESP + 0xc],EAX       ; 0044f327
    MOV dword ptr [ESP + 0x8],EDI       ; 0044f32b
    TEST EBX,EBX                        ; 0044f32f
    JNZ 0x0044f41d                      ; 0044f331
        ;   XREF to: 0044f41d (CONDITIONAL_JUMP)  ; LAB_0044f41d
    MOV dword ptr [ESP + 0x24],0x10     ; 0044f337
    MOV dword ptr [ESP + 0x20],EBX      ; 0044f33f
        ;   Label: LAB_0044f33f
    CMP EBX,0xf                         ; 0044f343
    JNZ 0x0044f415                      ; 0044f346
        ;   XREF to: 0044f415 (CONDITIONAL_JUMP)  ; LAB_0044f415
    XOR EAX,EAX                         ; 0044f34c
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044f34e
        ;   Label: LAB_0044f34e
    PUSH 0x444180                       ; 0044f352
    LEA EAX,[ESP + 0x8]                 ; 0044f357
    PUSH EAX                            ; 0044f35b
    MOV EDX,dword ptr [0x005ae704]      ; 0044f35c | DAT_005ae704
    PUSH EDX                            ; 0044f362 | DAT_01b4d738
    INC EBX                             ; 0044f363
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80 ; 0044f364
        ;   XREF to: 00460e80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, CustomScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 0044f369
    CMP EBX,0x10                        ; 0044f36c
    JL 0x0044f33f                       ; 0044f36f
        ;   XREF to: 0044f33f (CONDITIONAL_JUMP)  ; LAB_0044f33f
    MOV ESI,0xffff                      ; 0044f371
        ;   Label: LAB_0044f371
    XOR ECX,ECX                         ; 0044f376
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f378
    MOV dword ptr [ESP + 0xc],ECX       ; 0044f37b
    MOV dword ptr [ESP + 0x10],ECX      ; 0044f37f
    MOV dword ptr [ESP + 0x14],ESI      ; 0044f383
    FLD float ptr [EAX + 0x100]         ; 0044f387
    FMUL double ptr [0x0057c7d6]        ; 0044f38d | DOUBLE_0057c7d6
    XOR EBX,EBX                         ; 0044f393
    CALL crt_math.c_round_FUN_00563a30  ; 0044f395
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x18]        ; 0044f39a
    PUSH 0x444180                       ; 0044f39e
        ;   Label: LAB_0044f39e
    LEA EAX,[ESP + 0x8]                 ; 0044f3a3
    MOV dword ptr [ESP + 0x24],EBX      ; 0044f3a7
    XOR EDI,EDI                         ; 0044f3ab
    PUSH EAX                            ; 0044f3ad
    MOV EAX,[0x005ae704]                ; 0044f3ae | DAT_005ae704
    INC EBX                             ; 0044f3b3
    PUSH EAX                            ; 0044f3b4 | DAT_01b4d738
    MOV dword ptr [ESP + 0x28],EDI      ; 0044f3b5
    MOV dword ptr [ESP + 0x30],EBX      ; 0044f3b9
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80 ; 0044f3bd
        ;   XREF to: 00460e80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, CustomScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 0044f3c2
    CMP EBX,0xe                         ; 0044f3c5
    JL 0x0044f39e                       ; 0044f3c8
        ;   XREF to: 0044f39e (CONDITIONAL_JUMP)  ; LAB_0044f39e
    MOV EDX,dword ptr [0x005ae704]      ; 0044f3ca | DAT_005ae704
    PUSH EDX                            ; 0044f3d0 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0044f3d1
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0044f3d6
    PUSH EDI                            ; 0044f3d9
    MOV ECX,dword ptr [0x005ae704]      ; 0044f3da | DAT_005ae704
    PUSH ECX                            ; 0044f3e0 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 0044f3e1
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0044f3e6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0044f3e9
    PUSH EBX                            ; 0044f3ec
    CALL core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350 ; 0044f3ed
        ;   XREF to: 00451350 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0044f3f2
    MOV ESP,EBP                         ; 0044f3f5
    POP EBP                             ; 0044f3f7
    POP EDI                             ; 0044f3f8
    POP ESI                             ; 0044f3f9
    POP EBX                             ; 0044f3fa
    RET                                 ; 0044f3fb
    MOV EAX,dword ptr [EDX]             ; 0044f3fc
        ;   Label: LAB_0044f3fc
    MOV dword ptr [ESP + 0x74],EAX      ; 0044f3fe
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044f402
    MOV dword ptr [ESP + 0x78],EAX      ; 0044f405
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044f409
    MOV dword ptr [ESP + 0x7c],EAX      ; 0044f40c
    JMP 0x0044f285                      ; 0044f410
        ;   XREF to: 0044f285 (UNCONDITIONAL_JUMP)  ; LAB_0044f285
    LEA EAX,[EBX + 0x1]                 ; 0044f415
        ;   Label: LAB_0044f415
    JMP 0x0044f34e                      ; 0044f418
        ;   XREF to: 0044f34e (UNCONDITIONAL_JUMP)  ; LAB_0044f34e
    CALL core_dcamera.cpp_initializeCoronaBuffers_FUN_00444140 ; 0044f41d
        ;   XREF to: 00444140 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_initializeCoronaBuffers_FUN_00444140()
        ;   Label: LAB_0044f41d
    JMP 0x0044f371                      ; 0044f422
        ;   XREF to: 0044f371 (UNCONDITIONAL_JUMP)  ; LAB_0044f371

