; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_setdir_cpp_calculateActorVisibility_FUN_0053f0f0(CDemonActor *actor,CVector3i *bounding_box_vertices,SMRGLHeaderPrimitive *primitives,int thumb_index,C3DSCamera *camera,float radius)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
; CVector3i *      Stack[0x8]:4   bounding_box_vertices
; SMRGLHeaderPrimitive * Stack[0xc]:4   primitives
; int              Stack[0x10]:4   thumb_index
; C3DSCamera *     Stack[0x14]:4   camera
; float            Stack[0x18]:4   radius
;
; Referenced Globals:
;   double g_DOUBLE_005d0c76 = 0.5
;   double g_DOUBLE_005d0c7e = 0.0625
;   float g_FLOAT_005e3ce0 = 256
;   float g_FLOAT_005e3cf8 = 200
;   float g_FLOAT_005e3cfc = 100
;   CDemonRenderer* g_CDemonRenderer_PTR_005f2afc = 01bdd7e4
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_FLOAT_ARRAY_02701528[250]
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_0041d8b0
;   core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_005420b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
;   engine_matrix.c_projectTransformedPoint_FUN_004e5590
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f0f0
        ;   Label: core_setdir.cpp_calculateActorVisibility_FUN_0053f0f0
    PUSH ESI                            ; 0053f0f1
    PUSH EDI                            ; 0053f0f2
    PUSH EBP                            ; 0053f0f3
    MOV EBP,ESP                         ; 0053f0f4
    SUB ESP,0xd8                        ; 0053f0f6
    AND ESP,0xfffffff8                  ; 0053f0fc
    MOV EAX,dword ptr [EBP + 0x24]      ; 0053f0ff
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 0053f102
    TEST EDX,EDX                        ; 0053f108
    JZ 0x0053f15f                       ; 0053f10a
        ;   XREF to: 0053f15f (CONDITIONAL_JUMP)  ; LAB_0053f15f
    LEA ESI,[EAX + 0x100]               ; 0053f10c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053f112
    FLD float ptr [ESI]                 ; 0053f115
    FSUB float ptr [EBX + 0x20]         ; 0053f117
    FMUL ST0                            ; 0053f11a
    FLD float ptr [ESI + 0x4]           ; 0053f11c
    FSUB float ptr [EBX + 0x24]         ; 0053f11f
    FMUL ST0                            ; 0053f122
    FLD float ptr [ESI + 0x8]           ; 0053f124
    FXCH                                ; 0053f127
    FADDP ST2,ST0                       ; 0053f129
    FSUB float ptr [EBX + 0x28]         ; 0053f12b
    FMUL ST0                            ; 0053f12e
    FLD float ptr [0x005e3cf8]          ; 0053f130 | g_FLOAT_005e3cf8
    FMUL ST0                            ; 0053f136
    FXCH                                ; 0053f138
    FADDP ST2,ST0                       ; 0053f13a
    ADD EBX,0x20                        ; 0053f13c
    FXCH                                ; 0053f13f
    FCOMPP                              ; 0053f141
    FNSTSW AX                           ; 0053f143
    SAHF                                ; 0053f145
    JBE 0x0053f168                      ; 0053f146
        ;   XREF to: 0053f168 (CONDITIONAL_JUMP)  ; LAB_0053f168
    XOR EBX,EBX                         ; 0053f148
    MOV dword ptr [ESP + 0x94],EBX      ; 0053f14a
    MOV EAX,dword ptr [ESP + 0x94]      ; 0053f151
        ;   Label: LAB_0053f151
    MOV ESP,EBP                         ; 0053f158
    POP EBP                             ; 0053f15a
    POP EDI                             ; 0053f15b
    POP ESI                             ; 0053f15c
    POP EBX                             ; 0053f15d
    RET                                 ; 0053f15e
    MOV dword ptr [ESP + 0x94],EDX      ; 0053f15f
        ;   Label: LAB_0053f15f
    JMP 0x0053f151                      ; 0053f166
        ;   XREF to: 0053f151 (UNCONDITIONAL_JUMP)  ; LAB_0053f151
    PUSH dword ptr [EBP + 0x28]         ; 0053f168
        ;   Label: LAB_0053f168
    PUSH EBX                            ; 0053f16b
    MOV EDI,dword ptr [EBP + 0x24]      ; 0053f16c
    PUSH EDI                            ; 0053f16f
    CALL core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_005420b0 ; 0053f170
        ;   XREF to: 005420b0 (UNCONDITIONAL_CALL)  ; int core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_005420b0(C3DSCamera * this_ptr, CVector3f * world_position, float radius)
    ADD ESP,0xc                         ; 0053f175
    TEST EAX,EAX                        ; 0053f178
    JNZ 0x0053f191                      ; 0053f17a
        ;   XREF to: 0053f191 (CONDITIONAL_JUMP)  ; LAB_0053f191
    MOV dword ptr [ESP + 0x94],EAX      ; 0053f17c
    MOV EAX,dword ptr [ESP + 0x94]      ; 0053f183
    MOV ESP,EBP                         ; 0053f18a
    POP EBP                             ; 0053f18c
    POP EDI                             ; 0053f18d
    POP ESI                             ; 0053f18e
    POP EBX                             ; 0053f18f
    RET                                 ; 0053f190
    PUSH ESI                            ; 0053f191
        ;   Label: LAB_0053f191
    MOV EDX,dword ptr [0x005f2afc]      ; 0053f192 | g_CDemonRenderer_PTR_005f2afc
    PUSH EDX                            ; 0053f198
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90 ; 0053f199
        ;   XREF to: 0046cb90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0053f19e
    MOV ECX,dword ptr [0x005f2afc]      ; 0053f1a1 | g_CDemonRenderer_PTR_005f2afc
    PUSH dword ptr [EDI + 0x144]        ; 0053f1a7
    PUSH ECX                            ; 0053f1ad
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090 ; 0053f1ae
        ;   XREF to: 0046d090 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0046d090(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 0053f1b3
    LEA EAX,[EDI + 0x10c]               ; 0053f1b6
    PUSH EAX                            ; 0053f1bc
    MOV ESI,dword ptr [0x005f2afc]      ; 0053f1bd | g_CDemonRenderer_PTR_005f2afc
    PUSH ESI                            ; 0053f1c3
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10 ; 0053f1c4
        ;   XREF to: 0046cc10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0053f1c9
    MOV EDI,0x800000ff                  ; 0053f1cc
    PUSH EBX                            ; 0053f1d1
    MOV EDX,dword ptr [0x005f2afc]      ; 0053f1d2 | g_CDemonRenderer_PTR_005f2afc
    XOR EAX,EAX                         ; 0053f1d8
    PUSH EDX                            ; 0053f1da
    MOV dword ptr [ESP + 0xb4],EDI      ; 0053f1db
    MOV dword ptr [ESP + 0xa8],EAX      ; 0053f1e2
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0053f1e9
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0053f1ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053f1f1
    MOV EAX,dword ptr [EAX + 0x30]      ; 0053f1f4
    MOV dword ptr [ESP + 0x44],EAX      ; 0053f1f7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053f1fb
    MOV EAX,dword ptr [EAX + 0x38]      ; 0053f1fe
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053f201
    MOV EAX,dword ptr [EBP + 0x24]      ; 0053f205
    MOV EAX,dword ptr [EAX + 0x110]     ; 0053f208
    PUSH 0x0                            ; 0053f20e
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053f210
    LEA EAX,[ESP + 0x48]                ; 0053f214
    PUSH EAX                            ; 0053f218
    MOV ECX,dword ptr [0x005f2afc]      ; 0053f219 | g_CDemonRenderer_PTR_005f2afc
    PUSH ECX                            ; 0053f21f
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0053f220
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0053f225
    XOR ESI,ESI                         ; 0053f228
    MOV EDI,dword ptr [EBP + 0x18]      ; 0053f22a
    MOV EAX,[0x005f2afc]                ; 0053f22d | g_CDemonRenderer_PTR_005f2afc
        ;   Label: LAB_0053f22d
    MOV EAX,dword ptr [EAX]             ; 0053f232
    PUSH EDI                            ; 0053f234
    ADD EAX,ESI                         ; 0053f235
    PUSH EAX                            ; 0053f237
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005632a3 ; 0053f238
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 0053f23d | g_CDemonRenderer_PTR_005f2afc
    ADD ESI,0x30                        ; 0053f242
    ADD ESP,0x8                         ; 0053f245
    MOV EAX,dword ptr [EAX]             ; 0053f248
    ADD EDI,0xc                         ; 0053f24a
    MOV ECX,dword ptr [ESP + 0xac]      ; 0053f24d
    MOV EDX,dword ptr [ESI + EAX*0x1 + -0x20] ; 0053f254
    MOV EBX,dword ptr [ESP + 0xa0]      ; 0053f258
    AND ECX,EDX                         ; 0053f25f
    OR EBX,EDX                          ; 0053f261
    MOV dword ptr [ESP + 0xac],ECX      ; 0053f263
    MOV dword ptr [ESP + 0xa0],EBX      ; 0053f26a
    CMP ESI,0x180                       ; 0053f271
    JNZ 0x0053f22d                      ; 0053f277
        ;   XREF to: 0053f22d (CONDITIONAL_JUMP)  ; LAB_0053f22d
    TEST byte ptr [ESP + 0xaf],0x80     ; 0053f279
    JZ 0x0053f291                       ; 0053f281
        ;   XREF to: 0053f291 (CONDITIONAL_JUMP)  ; LAB_0053f291
    TEST byte ptr [ESP + 0xac],0xff     ; 0053f283
    JNZ 0x0053f72f                      ; 0053f28b
        ;   XREF to: 0053f72f (CONDITIONAL_JUMP)  ; LAB_0053f72f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0053f291
        ;   Label: LAB_0053f291
    XOR ESI,ESI                         ; 0053f294
    XOR EDX,EDX                         ; 0053f296
    LEA ECX,[EAX + 0x1b0]               ; 0053f298
    MOV dword ptr [ESP + 0xc0],ESI      ; 0053f29e
    MOV EBX,dword ptr [ESP + 0xc0]      ; 0053f2a5
        ;   Label: LAB_0053f2a5
    MOV dword ptr [ESP + EDX*0x1 + 0x2c],EAX ; 0053f2ac
    ADD EDX,0x4                         ; 0053f2b0
    INC EBX                             ; 0053f2b3
    ADD EAX,0x48                        ; 0053f2b4
    MOV dword ptr [ESP + 0xc0],EBX      ; 0053f2b7
    CMP EAX,ECX                         ; 0053f2be
    JNZ 0x0053f2a5                      ; 0053f2c0
        ;   XREF to: 0053f2a5 (CONDITIONAL_JUMP)  ; LAB_0053f2a5
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053f2c2
    PUSH ESI                            ; 0053f2c5
    XOR EDI,EDI                         ; 0053f2c6
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0053f2c8
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053f2cd
    MOV ESI,dword ptr [0x005f2afc]      ; 0053f2d0 | g_CDemonRenderer_PTR_005f2afc
        ;   Label: LAB_0053f2d0
    MOV ESI,dword ptr [ESI]             ; 0053f2d6
    ADD ESI,EDI                         ; 0053f2d8
    MOV EAX,dword ptr [ESI + 0x8]       ; 0053f2da
    TEST EAX,EAX                        ; 0053f2dd
    JLE 0x0053f30e                      ; 0053f2df
        ;   XREF to: 0053f30e (CONDITIONAL_JUMP)  ; LAB_0053f30e
    LEA ECX,[EAX + 0x80]                ; 0053f2e1
    MOV EBX,EAX                         ; 0053f2e7
    MOV EDX,ECX                         ; 0053f2e9
    MOV EAX,dword ptr [ESI]             ; 0053f2eb
    IMUL EDX                            ; 0053f2ed
    IDIV EBX                            ; 0053f2ef
    MOV dword ptr [ESI],EAX             ; 0053f2f1
    MOV EDX,ECX                         ; 0053f2f3
    MOV EBX,dword ptr [ESI + 0x8]       ; 0053f2f5
    MOV EAX,dword ptr [ESI + 0x4]       ; 0053f2f8
    IMUL EDX                            ; 0053f2fb
    IDIV EBX                            ; 0053f2fd
    MOV dword ptr [ESI + 0x4],EAX       ; 0053f2ff
    PUSH ESI                            ; 0053f302
    MOV dword ptr [ESI + 0x8],ECX       ; 0053f303
    CALL engine_matrix.c_projectTransformedPoint_FUN_004e5590 ; 0053f306
        ;   XREF to: 004e5590 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectTransformedPoint_FUN_004e5590(SProjectedVertex * point)
    ADD ESP,0x4                         ; 0053f30b
    ADD EDI,0x30                        ; 0053f30e
        ;   Label: LAB_0053f30e
    CMP EDI,0x180                       ; 0053f311
    JNZ 0x0053f2d0                      ; 0053f317
        ;   XREF to: 0053f2d0 (CONDITIONAL_JUMP)  ; LAB_0053f2d0
    MOV EDX,0x3f800000                  ; 0053f319
    XOR EAX,EAX                         ; 0053f31e
    MOV dword ptr [ESP],EDX             ; 0053f320
    MOV EDX,dword ptr [0x005f2afc]      ; 0053f323 | g_CDemonRenderer_PTR_005f2afc
        ;   Label: LAB_0053f323
    MOV EDX,dword ptr [EDX]             ; 0053f329
    ADD EDX,EAX                         ; 0053f32b
    TEST byte ptr [EDX + 0x13],0x80     ; 0053f32d
    JZ 0x0053f349                       ; 0053f331
        ;   XREF to: 0053f349 (CONDITIONAL_JUMP)  ; LAB_0053f349
    CMP dword ptr [EDX + 0x8],0x0       ; 0053f333
    JLE 0x0053f752                      ; 0053f337
        ;   XREF to: 0053f752 (CONDITIONAL_JUMP)  ; LAB_0053f752
    FLD float ptr [ESP]                 ; 0053f33d
    FMUL double ptr [0x005d0c76]        ; 0053f340 | g_DOUBLE_005d0c76
    FSTP float ptr [ESP]                ; 0053f346
        ;   Label: LAB_0053f346
    ADD EAX,0x30                        ; 0053f349
        ;   Label: LAB_0053f349
    CMP EAX,0x180                       ; 0053f34c
    JNZ 0x0053f323                      ; 0053f351
        ;   XREF to: 0053f323 (CONDITIONAL_JUMP)  ; LAB_0053f323
    XOR EBX,EBX                         ; 0053f353
    MOV EDI,dword ptr [0x02701910]      ; 0053f355 | g_FLOAT_ARRAY_02701528[250]
    MOV dword ptr [ESP + 0xbc],EBX      ; 0053f35b
    MOV dword ptr [ESP + 0xa8],EBX      ; 0053f362
    TEST EDI,EDI                        ; 0053f369
    JLE 0x0053f578                      ; 0053f36b
        ;   XREF to: 0053f578 (CONDITIONAL_JUMP)  ; LAB_0053f578
    FLD float ptr [0x005e3cfc]          ; 0053f371 | g_FLOAT_005e3cfc
    FLD ST0                             ; 0053f377
    MOV EDX,dword ptr [EBP + 0x20]      ; 0053f379
    FMULP                               ; 0053f37c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053f37e
    MOV dword ptr [ESP + 0xb8],EBX      ; 0053f385
    SUB EAX,EDX                         ; 0053f38c
    MOV EDX,0x212551c                   ; 0053f38e
    SHL EAX,0xc                         ; 0053f393
    FSTP float ptr [ESP + 0x98]         ; 0053f396
    ADD EDX,EAX                         ; 0053f39d
    MOV EAX,dword ptr [EBP + 0x24]      ; 0053f39f
    MOV dword ptr [ESP + 0x9c],EDX      ; 0053f3a2
    ADD EAX,0x100                       ; 0053f3a9
    MOV EDX,0x2703854                   ; 0053f3ae
    MOV dword ptr [ESP + 0xb0],EAX      ; 0053f3b3
    MOV dword ptr [ESP + 0xb4],EDX      ; 0053f3ba
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0053f3c1
        ;   Label: LAB_0053f3c1
    MOV EAX,dword ptr [EAX + 0x2701914] ; 0053f3c8
    MOV EDX,dword ptr [ESP + 0xb0]      ; 0053f3ce
    FLD float ptr [EAX + 0x20]          ; 0053f3d5
    FSUB float ptr [EDX]                ; 0053f3d8
    FMUL ST0                            ; 0053f3da
    FLD float ptr [EAX + 0x24]          ; 0053f3dc
    FSUB float ptr [EDX + 0x4]          ; 0053f3df
    FMUL ST0                            ; 0053f3e2
    FLD float ptr [EAX + 0x28]          ; 0053f3e4
    FXCH                                ; 0053f3e7
    FADDP ST2,ST0                       ; 0053f3e9
    FSUB float ptr [EDX + 0x8]          ; 0053f3eb
    FMUL ST0                            ; 0053f3ee
    FADDP                               ; 0053f3f0
    MOV dword ptr [ESP + 0xc4],EAX      ; 0053f3f2
    FCOMP float ptr [ESP + 0x98]        ; 0053f3f9
    FNSTSW AX                           ; 0053f400
    SAHF                                ; 0053f402
    JA 0x0053f539                       ; 0053f403
        ;   XREF to: 0053f539 (CONDITIONAL_JUMP)  ; LAB_0053f539
    MOV ECX,dword ptr [ESP + 0xc4]      ; 0053f409
    PUSH ECX                            ; 0053f410
    MOV EBX,0x800000ff                  ; 0053f411
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 0053f416
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053f41b
    XOR ESI,ESI                         ; 0053f41e
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0053f420
    MOV dword ptr [ESP + 0x90],EBX      ; 0053f427
    MOV dword ptr [ESP + 0xc8],ESI      ; 0053f42e
    MOV dword ptr [ESP + 0x8c],EAX      ; 0053f435
    MOV EAX,0x180                       ; 0053f43c
    MOV dword ptr [ESP + 0xcc],ESI      ; 0053f441
    MOV dword ptr [ESP + 0xd0],EAX      ; 0053f448
    MOV EBX,dword ptr [ESP + 0xcc]      ; 0053f44f
        ;   Label: LAB_0053f44f
    PUSH EBX                            ; 0053f456
    MOV ESI,dword ptr [ESP + 0x90]      ; 0053f457
    LEA EDI,[ESP + 0x60]                ; 0053f45e
    PUSH ESI                            ; 0053f462
    LEA ESI,[ESP + 0x58]                ; 0053f463
    LEA EBX,[ESP + 0x70]                ; 0053f467
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_0041d8b0 ; 0053f46b
        ;   XREF to: 0041d8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_0041d8b0(CBoundingBox3D * this_ptr, uint corner_index, CVector3f * out_point)
    LEA ESI,[ESP + 0x58]                ; 0053f470
    LEA EAX,[ESP + 0x64]                ; 0053f474
    ADD ESP,0x8                         ; 0053f478
    MOV EDX,dword ptr [0x005f2afc]      ; 0053f47b | g_CDemonRenderer_PTR_005f2afc
    MOVSD ES:EDI,ESI                    ; 0053f481
    MOVSD ES:EDI,ESI                    ; 0053f482
    MOVSD ES:EDI,ESI                    ; 0053f483
    FLD float ptr [EAX]                 ; 0053f484
    FMUL float ptr [0x005e3ce0]         ; 0053f486 | g_FLOAT_005e3ce0
    FISTP dword ptr [EBX]               ; 0053f48c
    FLD float ptr [EAX + 0x4]           ; 0053f48e
    FMUL float ptr [0x005e3ce0]         ; 0053f491 | g_FLOAT_005e3ce0
    FISTP dword ptr [EBX + 0x4]         ; 0053f497
    FLD float ptr [EAX + 0x8]           ; 0053f49a
    FMUL float ptr [0x005e3ce0]         ; 0053f49d | g_FLOAT_005e3ce0
    FISTP dword ptr [EBX + 0x8]         ; 0053f4a3
    LEA EAX,[ESP + 0x68]                ; 0053f4a6
    MOV EDI,dword ptr [ESP + 0xd0]      ; 0053f4aa
    PUSH EAX                            ; 0053f4b1
    MOV EAX,dword ptr [EDX]             ; 0053f4b2
    ADD EAX,EDI                         ; 0053f4b4
    PUSH EAX                            ; 0053f4b6
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005632a3 ; 0053f4b7
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 0053f4bc | g_CDemonRenderer_PTR_005f2afc
    ADD ESP,0x8                         ; 0053f4c1
    MOV EAX,dword ptr [EAX]             ; 0053f4c4
    MOV ECX,dword ptr [ESP + 0x90]      ; 0053f4c6
    ADD EAX,EDI                         ; 0053f4cd
    MOV EBX,dword ptr [ESP + 0xc8]      ; 0053f4cf
    LEA ESI,[EDI + 0x30]                ; 0053f4d6
    MOV EDX,dword ptr [EAX + 0x10]      ; 0053f4d9
    MOV EDI,dword ptr [ESP + 0xcc]      ; 0053f4dc
    MOV dword ptr [ESP + 0xd0],ESI      ; 0053f4e3
    AND ECX,EDX                         ; 0053f4ea
    OR EBX,EDX                          ; 0053f4ec
    MOV dword ptr [ESP + 0x90],ECX      ; 0053f4ee
    INC EDI                             ; 0053f4f5
    MOV dword ptr [ESP + 0xc8],EBX      ; 0053f4f6
    MOV dword ptr [ESP + 0xcc],EDI      ; 0053f4fd
    CMP EDI,0x8                         ; 0053f504
    JL 0x0053f44f                       ; 0053f507
        ;   XREF to: 0053f44f (CONDITIONAL_JUMP)  ; LAB_0053f44f
    MOV EDX,dword ptr [ESP + 0xc4]      ; 0053f50d
    PUSH EDX                            ; 0053f514
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0053f515
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053f51a
    TEST byte ptr [ESP + 0x93],0x80     ; 0053f51d
    JZ 0x0053f760                       ; 0053f525
        ;   XREF to: 0053f760 (CONDITIONAL_JUMP)  ; LAB_0053f760
    TEST byte ptr [ESP + 0x90],0xff     ; 0053f52b
    JZ 0x0053f760                       ; 0053f533
        ;   XREF to: 0053f760 (CONDITIONAL_JUMP)  ; LAB_0053f760
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0053f539
        ;   Label: LAB_0053f539
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0053f540
    MOV ECX,dword ptr [ESP + 0xbc]      ; 0053f547
    MOV EBX,dword ptr [0x02701910]      ; 0053f54e | g_FLOAT_ARRAY_02701528[250]
    ADD EAX,0x4                         ; 0053f554
    ADD EDX,0x18                        ; 0053f557
    INC ECX                             ; 0053f55a
    MOV dword ptr [ESP + 0xb8],EAX      ; 0053f55b
    MOV dword ptr [ESP + 0xb4],EDX      ; 0053f562
    MOV dword ptr [ESP + 0xbc],ECX      ; 0053f569
    CMP ECX,EBX                         ; 0053f570
    JL 0x0053f3c1                       ; 0053f572
        ;   XREF to: 0053f3c1 (CONDITIONAL_JUMP)  ; LAB_0053f3c1
    PUSH 0x0                            ; 0053f578
        ;   Label: LAB_0053f578
    MOV ESI,dword ptr [0x005f2afc]      ; 0053f57a | g_CDemonRenderer_PTR_005f2afc
    PUSH ESI                            ; 0053f580
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0053f581
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0053f586
    CMP dword ptr [ESP + 0xa8],0x0      ; 0053f589
    JNZ 0x0053f5d0                      ; 0053f591
        ;   XREF to: 0053f5d0 (CONDITIONAL_JUMP)  ; LAB_0053f5d0
    MOV EDX,dword ptr [EBP + 0x20]      ; 0053f593
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053f596
    SUB EAX,EDX                         ; 0053f59d
    MOV EDX,0x212551c                   ; 0053f59f
    SHL EAX,0xc                         ; 0053f5a4
    ADD EDX,EAX                         ; 0053f5a7
    XOR EAX,EAX                         ; 0053f5a9
    MOV dword ptr [EAX + 0x1c60dac],EDX ; 0053f5ab
        ;   Label: LAB_0053f5ab
    ADD EAX,0x4                         ; 0053f5b1
    ADD EDX,0x100                       ; 0053f5b4
    CMP EAX,0xc0                        ; 0053f5ba
    JNZ 0x0053f5ab                      ; 0053f5bf
        ;   XREF to: 0053f5ab (CONDITIONAL_JUMP)  ; LAB_0053f5ab
    LEA EAX,[EAX]                       ; 0053f5c1
    LEA EDX,[EDX]                       ; 0053f5c7
    LEA EAX,[EAX]                       ; 0053f5cd
    PUSH 0x1                            ; 0053f5d0
        ;   Label: LAB_0053f5d0
    MOV EDX,dword ptr [0x005f2afc]      ; 0053f5d2 | g_CDemonRenderer_PTR_005f2afc
    PUSH EDX                            ; 0053f5d8
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0053f5d9
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0053f5de
    TEST byte ptr [ESP + 0xa3],0x80     ; 0053f5e1
    SETNZ AL                            ; 0053f5e9
    AND EAX,0xff                        ; 0053f5ec
    PUSH EAX                            ; 0053f5f1
    MOV ECX,dword ptr [0x005f2afc]      ; 0053f5f2 | g_CDemonRenderer_PTR_005f2afc
    PUSH ECX                            ; 0053f5f8
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 0053f5f9
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0053f5fe
    XOR EBX,EBX                         ; 0053f601
    MOV ESI,dword ptr [ESP + 0xc0]      ; 0053f603
    MOV dword ptr [ESP + 0xa4],EBX      ; 0053f60a
    TEST ESI,ESI                        ; 0053f611
    JLE 0x0053f650                      ; 0053f613
        ;   XREF to: 0053f650 (CONDITIONAL_JUMP)  ; LAB_0053f650
    SHL ESI,0x2                         ; 0053f615
    MOV EDI,dword ptr [ESP + EBX*0x1 + 0x2c] ; 0053f618
        ;   Label: LAB_0053f618
    PUSH EDI                            ; 0053f61c
    MOV EAX,[0x005f2afc]                ; 0053f61d | g_CDemonRenderer_PTR_005f2afc
    PUSH EAX                            ; 0053f622
    CALL engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470 ; 0053f623
        ;   XREF to: 0046b470 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0053f628
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0053f62b
    ADD EDX,EAX                         ; 0053f632
    ADD EBX,0x4                         ; 0053f634
    MOV dword ptr [ESP + 0xa4],EDX      ; 0053f637
    CMP EBX,ESI                         ; 0053f63e
    JL 0x0053f618                       ; 0053f640
        ;   XREF to: 0053f618 (CONDITIONAL_JUMP)  ; LAB_0053f618
    LEA EAX,[EAX]                       ; 0053f642
    LEA EDX,[EDX]                       ; 0053f648
    MOV EAX,EAX                         ; 0053f64e
    MOV EAX,[0x005fe9dc]                ; 0053f650 | g_CGamePtr
        ;   Label: LAB_0053f650
    CMP dword ptr [EAX + 0x20c],0x0     ; 0053f655
    JZ 0x0053f6e0                       ; 0053f65c
        ;   XREF to: 0053f6e0 (CONDITIONAL_JUMP)  ; LAB_0053f6e0
    MOV EDX,dword ptr [EBP + 0x20]      ; 0053f662
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053f665
    SUB EAX,EDX                         ; 0053f66c
    MOV EDX,0x241351c                   ; 0053f66e
    SHL EAX,0xc                         ; 0053f673
    XOR EBX,EBX                         ; 0053f676
    ADD EDX,EAX                         ; 0053f678
    MOV ECX,0x100                       ; 0053f67a
        ;   Label: LAB_0053f67a
    MOV EDI,EDX                         ; 0053f67f
    MOV ESI,dword ptr [EBX + 0x1c60dac] ; 0053f681
    ADD EBX,0x4                         ; 0053f687
    PUSH EDI                            ; 0053f68a
    MOV EAX,ECX                         ; 0053f68b
    SHR ECX,0x2                         ; 0053f68d
    MOVSD.REP ES:EDI,ESI                ; 0053f690
    MOV CL,AL                           ; 0053f692
    AND CL,0x3                          ; 0053f694
    MOVSB.REP ES:EDI,ESI                ; 0053f697
    POP EDI                             ; 0053f699
    MOV dword ptr [EBX + 0x1c60da8],EDX ; 0053f69a
    ADD EDX,0x100                       ; 0053f6a0
    CMP EBX,0xc0                        ; 0053f6a6
    JNZ 0x0053f67a                      ; 0053f6ac
        ;   XREF to: 0053f67a (CONDITIONAL_JUMP)  ; LAB_0053f67a
    MOV ESI,dword ptr [ESP + 0xc0]      ; 0053f6ae
    XOR EBX,EBX                         ; 0053f6b5
    TEST ESI,ESI                        ; 0053f6b7
    JLE 0x0053f6e0                      ; 0053f6b9
        ;   XREF to: 0053f6e0 (CONDITIONAL_JUMP)  ; LAB_0053f6e0
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0053f6bb
    PUSH ESI                            ; 0053f6be
        ;   Label: LAB_0053f6be
    MOV EDI,dword ptr [0x005f2afc]      ; 0053f6bf | g_CDemonRenderer_PTR_005f2afc
    PUSH EDI                            ; 0053f6c5
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0 ; 0053f6c6
        ;   XREF to: 0046b2c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0053f6cb
    INC EBX                             ; 0053f6ce
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0053f6cf
    ADD ESI,0x48                        ; 0053f6d6
    CMP EBX,EAX                         ; 0053f6d9
    JL 0x0053f6be                       ; 0053f6db
        ;   XREF to: 0053f6be (CONDITIONAL_JUMP)  ; LAB_0053f6be
    LEA EAX,[EAX]                       ; 0053f6dd
    PUSH 0x1                            ; 0053f6e0
        ;   Label: LAB_0053f6e0
    MOV EDX,dword ptr [0x005f2afc]      ; 0053f6e2 | g_CDemonRenderer_PTR_005f2afc
    PUSH EDX                            ; 0053f6e8
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 0053f6e9
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0053f6ee
    PUSH 0x0                            ; 0053f6f1
    MOV ECX,dword ptr [0x005f2afc]      ; 0053f6f3 | g_CDemonRenderer_PTR_005f2afc
    PUSH ECX                            ; 0053f6f9
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0053f6fa
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0053f6ff
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0053f702
    MOV dword ptr [ESP + 0xd4],EAX      ; 0053f709
    FILD dword ptr [ESP + 0xd4]         ; 0053f710
    FMUL float ptr [ESP]                ; 0053f717
    FSTP float ptr [ESP + 0x94]         ; 0053f71a
    MOV EAX,dword ptr [ESP + 0x94]      ; 0053f721
    MOV ESP,EBP                         ; 0053f728
    POP EBP                             ; 0053f72a
    POP EDI                             ; 0053f72b
    POP ESI                             ; 0053f72c
    POP EBX                             ; 0053f72d
    RET                                 ; 0053f72e
    MOV EDI,dword ptr [EBP + 0x14]      ; 0053f72f
        ;   Label: LAB_0053f72f
    PUSH EDI                            ; 0053f732
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0053f733
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0053f738
    XOR EAX,EAX                         ; 0053f73b
    MOV dword ptr [ESP + 0x94],EAX      ; 0053f73d
    MOV EAX,dword ptr [ESP + 0x94]      ; 0053f744
    MOV ESP,EBP                         ; 0053f74b
    POP EBP                             ; 0053f74d
    POP EDI                             ; 0053f74e
    POP ESI                             ; 0053f74f
    POP EBX                             ; 0053f750
    RET                                 ; 0053f751
    FLD float ptr [ESP]                 ; 0053f752
        ;   Label: LAB_0053f752
    FMUL double ptr [0x005d0c7e]        ; 0053f755 | g_DOUBLE_005d0c7e
    JMP 0x0053f346                      ; 0053f75b
        ;   XREF to: 0053f346 (UNCONDITIONAL_JUMP)  ; LAB_0053f346
    CMP dword ptr [ESP + 0xa8],0x0      ; 0053f760
        ;   Label: LAB_0053f760
    JNZ 0x0053f7c2                      ; 0053f768
        ;   XREF to: 0053f7c2 (CONDITIONAL_JUMP)  ; LAB_0053f7c2
    MOV ECX,0x3000                      ; 0053f76a
    MOV ESI,dword ptr [ESP + 0x9c]      ; 0053f76f
    MOV EDI,0x2122514                   ; 0053f776
    MOV EBX,0x1                         ; 0053f77b
    PUSH EDI                            ; 0053f780
    MOV EAX,ECX                         ; 0053f781
    SHR ECX,0x2                         ; 0053f783
    MOVSD.REP ES:EDI,ESI                ; 0053f786
    MOV CL,AL                           ; 0053f788
    AND CL,0x3                          ; 0053f78a
    MOVSB.REP ES:EDI,ESI                ; 0053f78d
    POP EDI                             ; 0053f78f
    MOV EDX,EDI                         ; 0053f790
    MOV dword ptr [ESP + 0xa8],EBX      ; 0053f792
    XOR EAX,EAX                         ; 0053f799
    MOV dword ptr [EAX + 0x1c60dac],EDX ; 0053f79b
        ;   Label: LAB_0053f79b
    ADD EAX,0x4                         ; 0053f7a1
    ADD EDX,0x100                       ; 0053f7a4
    CMP EAX,0xc0                        ; 0053f7aa
    JNZ 0x0053f79b                      ; 0053f7af
        ;   XREF to: 0053f79b (CONDITIONAL_JUMP)  ; LAB_0053f79b
    PUSH 0x1                            ; 0053f7b1
    MOV ESI,dword ptr [0x005f2afc]      ; 0053f7b3 | g_CDemonRenderer_PTR_005f2afc
    PUSH ESI                            ; 0053f7b9
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0053f7ba
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0053f7bf
    MOV EDI,0x4                         ; 0053f7c2
        ;   Label: LAB_0053f7c2
    MOV AH,byte ptr [ESP + 0xcb]        ; 0053f7c7
    MOV dword ptr [ESP + 0x8],EDI       ; 0053f7ce
    TEST AH,0x80                        ; 0053f7d2
    SETNZ AL                            ; 0053f7d5
    AND EAX,0xff                        ; 0053f7d8
    PUSH EAX                            ; 0053f7dd
    MOV EAX,[0x005f2afc]                ; 0053f7de | g_CDemonRenderer_PTR_005f2afc
    PUSH EAX                            ; 0053f7e3
    MOV EBX,0xe                         ; 0053f7e4
    MOV ESI,0xa                         ; 0053f7e9
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 0053f7ee
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,0x8                         ; 0053f7f3
    MOV ECX,0xc                         ; 0053f7f8
    LEA EAX,[ESP + 0xc]                 ; 0053f7fd
    ADD ESP,0x8                         ; 0053f801
    MOV EDI,dword ptr [0x005f2afc]      ; 0053f804 | g_CDemonRenderer_PTR_005f2afc
    MOV dword ptr [ESP + 0x1c],EDX      ; 0053f80a
    PUSH EAX                            ; 0053f80e
    MOV dword ptr [ESP + 0x24],ECX      ; 0053f80f
    MOV dword ptr [ESP + 0x28],EBX      ; 0053f813
    PUSH EDI                            ; 0053f817
    MOV dword ptr [ESP + 0x30],ESI      ; 0053f818
    MOV EBX,0xd                         ; 0053f81c
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 0053f821
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0x9                         ; 0053f826
    MOV EDX,0xb                         ; 0053f82b
    ADD ESP,0x8                         ; 0053f830
    MOV ECX,0xf                         ; 0053f833
    MOV dword ptr [ESP + 0x1c],EAX      ; 0053f838
    LEA EAX,[ESP + 0x4]                 ; 0053f83c
    MOV EDI,0x8                         ; 0053f840
    PUSH EAX                            ; 0053f845
    MOV ESI,dword ptr [0x005f2afc]      ; 0053f846 | g_CDemonRenderer_PTR_005f2afc
    MOV dword ptr [ESP + 0x24],EDX      ; 0053f84c
    PUSH ESI                            ; 0053f850
    MOV dword ptr [ESP + 0x2c],ECX      ; 0053f851
    MOV dword ptr [ESP + 0x30],EBX      ; 0053f855
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 0053f859
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0x9                         ; 0053f85e
    MOV ECX,0xc                         ; 0053f863
    ADD ESP,0x8                         ; 0053f868
    MOV ESI,0xa                         ; 0053f86b
    MOV dword ptr [ESP + 0x20],EAX      ; 0053f870
    LEA EAX,[ESP + 0x4]                 ; 0053f874
    MOV dword ptr [ESP + 0x24],EBX      ; 0053f878
    PUSH EAX                            ; 0053f87c
    MOV EBX,dword ptr [0x005f2afc]      ; 0053f87d | g_CDemonRenderer_PTR_005f2afc
    MOV dword ptr [ESP + 0x20],EDI      ; 0053f883
    PUSH EBX                            ; 0053f887
    MOV dword ptr [ESP + 0x30],ECX      ; 0053f888
    MOV EDI,0xe                         ; 0053f88c
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 0053f891
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0xf                         ; 0053f896
    MOV EDX,0xb                         ; 0053f89b
    ADD ESP,0x8                         ; 0053f8a0
    MOV EBX,0x8                         ; 0053f8a3
    MOV dword ptr [ESP + 0x24],EAX      ; 0053f8a8
    LEA EAX,[ESP + 0x4]                 ; 0053f8ac
    MOV ECX,dword ptr [0x005f2afc]      ; 0053f8b0 | g_CDemonRenderer_PTR_005f2afc
    PUSH EAX                            ; 0053f8b6
    MOV dword ptr [ESP + 0x20],ESI      ; 0053f8b7
    MOV dword ptr [ESP + 0x24],EDI      ; 0053f8bb
    PUSH ECX                            ; 0053f8bf
    MOV dword ptr [ESP + 0x30],EDX      ; 0053f8c0
    MOV EDI,0xb                         ; 0053f8c4
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 0053f8c9
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EAX,0x9                         ; 0053f8ce
    ADD ESP,0x8                         ; 0053f8d3
    MOV EDX,dword ptr [0x005f2afc]      ; 0053f8d6 | g_CDemonRenderer_PTR_005f2afc
    MOV dword ptr [ESP + 0x1c],EBX      ; 0053f8dc
    MOV dword ptr [ESP + 0x28],EAX      ; 0053f8e0
    LEA EAX,[ESP + 0x4]                 ; 0053f8e4
    MOV dword ptr [ESP + 0x20],ESI      ; 0053f8e8
    PUSH EAX                            ; 0053f8ec
    MOV dword ptr [ESP + 0x28],EDI      ; 0053f8ed
    MOV EBX,0xd                         ; 0053f8f1
    PUSH EDX                            ; 0053f8f6
    MOV ESI,0xf                         ; 0053f8f7
    MOV EDI,0xe                         ; 0053f8fc
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 0053f901
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV ECX,0xc                         ; 0053f906
    ADD ESP,0x8                         ; 0053f90b
    LEA EAX,[ESP + 0x4]                 ; 0053f90e
    MOV dword ptr [ESP + 0x1c],ECX      ; 0053f912
    PUSH EAX                            ; 0053f916
    MOV EAX,[0x005f2afc]                ; 0053f917 | g_CDemonRenderer_PTR_005f2afc
    MOV dword ptr [ESP + 0x24],EBX      ; 0053f91c
    PUSH EAX                            ; 0053f920
    MOV dword ptr [ESP + 0x2c],ESI      ; 0053f921
    MOV dword ptr [ESP + 0x30],EDI      ; 0053f925
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 0053f929
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0053f92e
    JMP 0x0053f539                      ; 0053f931
        ;   XREF to: 0053f539 (UNCONDITIONAL_JUMP)  ; LAB_0053f539

