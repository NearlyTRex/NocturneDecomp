; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(CDemonSet *this_ptr,float frustum_param,int render_mode)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   frustum_param
; int              Stack[0xc]:4   render_mode
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_set.cpp_CDemonSet_initScene_FUN_0052d980 at 0052daf9
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_0052ef80 at 0052f0ae
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e488
;   core_set.cpp_FUN_0052d3be at 0052d6de
;   core_set.cpp_FUN_0052fad0 at 0052fc5c
;   core_set.cpp_FUN_0052fea0 at 00530018
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00538470 at 005385b9
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_0060d1f0
;   undefined4 DAT_0061b5ac
;   undefined4 DAT_0061b5b8
;   undefined4 DAT_0061e450
;   CWater* g_CWaterPtr = 02653790
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c37788
;   CDemonRaytrace g_CDemonRaytraceInstance
;   CWater g_CWaterInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0
;   core_dskybox.cpp_renderSkyDome_FUN_0046e410
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00475000
;   core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00476150
;   core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00475ff0
;   core_glass.cpp_CGlass_renderBrokenGlass_FUN_004c5640
;   core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004faef0
;   core_set.cpp_CDemonSet_buildMirrorList_FUN_00534360
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0
;   core_terrain.cpp_CTerrain_render_FUN_0057b860
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_00585e10
;   core_water.cpp_CWater_render_FUN_005862e0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052d0e0
        ;   Label: core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0
    PUSH ESI                            ; 0052d0e1
    PUSH EDI                            ; 0052d0e2
    PUSH EBP                            ; 0052d0e3
    SUB ESP,0xc                         ; 0052d0e4
    MOV EBX,dword ptr [ESP + 0x20]      ; 0052d0e7
    MOV ESI,dword ptr [ESP + 0x28]      ; 0052d0eb
    PUSH 0x61b5ac                       ; 0052d0ef | DAT_0061b5ac
    MOV EDX,dword ptr [0x0060b280]      ; 0052d0f4 | DAT_0060b280
    PUSH EDX                            ; 0052d0fa | DAT_01ba5c50
    CALL engine_drender.cpp_FUN_0046b520 ; 0052d0fb
        ;   XREF to: 0046b520 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b520()
    ADD ESP,0x8                         ; 0052d100
    MOV ECX,dword ptr [0x0060b280]      ; 0052d103 | DAT_0060b280
    PUSH 0x3e800000                     ; 0052d109
    PUSH ECX                            ; 0052d10e | DAT_01ba5c50
    CALL engine_drender.cpp_FUN_0046b4f0 ; 0052d10f
        ;   XREF to: 0046b4f0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b4f0()
    ADD ESP,0x8                         ; 0052d114
    TEST ESI,ESI                        ; 0052d117
    JZ 0x0052d2c1                       ; 0052d119
        ;   XREF to: 0052d2c1 (CONDITIONAL_JUMP)  ; LAB_0052d2c1
    MOV EDI,dword ptr [EBX + 0x15aeb8]  ; 0052d11f
    TEST EDI,EDI                        ; 0052d125
    JL 0x0052d2c1                       ; 0052d127
        ;   XREF to: 0052d2c1 (CONDITIONAL_JUMP)  ; LAB_0052d2c1
    IMUL EAX,EDI,0x1a4                  ; 0052d12d
    ADD EAX,EBX                         ; 0052d133
    MOV EDX,dword ptr [EAX + 0x198]     ; 0052d135
    CMP EDX,0x1                         ; 0052d13b
    JGE 0x0052d2a4                      ; 0052d13e
        ;   XREF to: 0052d2a4 (CONDITIONAL_JUMP)  ; LAB_0052d2a4
    MOV ESI,0x2                         ; 0052d144
        ;   Label: LAB_0052d144
    XOR EAX,EAX                         ; 0052d149
        ;   Label: LAB_0052d149
    PUSH EAX                            ; 0052d14b
        ;   Label: LAB_0052d14b
    PUSH dword ptr [ESP + 0x28]         ; 0052d14c
    PUSH 0x1fc9c68                      ; 0052d150 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00475000 ; 0052d155
        ;   XREF to: 00475000 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00475000(CDemonRaytrace * this_ptr, float fov_or_radius, int render_mode)
    ADD ESP,0xc                         ; 0052d15a
    CMP ESI,0x2                         ; 0052d15d
    JNZ 0x0052d18b                      ; 0052d160
        ;   XREF to: 0052d18b (CONDITIONAL_JUMP)  ; LAB_0052d18b
    IMUL EAX,dword ptr [EBX + 0x15aeb8],0x1a4 ; 0052d162
    LEA ESI,[EBX + 0x4]                 ; 0052d16c
    ADD EAX,ESI                         ; 0052d16f
    LEA ESI,[EAX + 0x198]               ; 0052d171
    PUSH ESI                            ; 0052d177
    ADD EAX,0x194                       ; 0052d178
    PUSH EAX                            ; 0052d17d
    PUSH 0x1fc9c68                      ; 0052d17e | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00476150 ; 0052d183
        ;   XREF to: 00476150 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00476150(CDemonRaytrace * this_ptr, int * output_count, int * * input_indices_array)
    ADD ESP,0xc                         ; 0052d188
    MOV ECX,dword ptr [0x0060b280]      ; 0052d18b | DAT_0060b280
        ;   Label: LAB_0052d18b
    PUSH ECX                            ; 0052d191 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 0052d192
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0052d197
    TEST EAX,EAX                        ; 0052d19a
    JNZ 0x0052d32d                      ; 0052d19c
        ;   XREF to: 0052d32d (CONDITIONAL_JUMP)  ; LAB_0052d32d
    CMP dword ptr [0x01c37788],0x0      ; 0052d1a2 | DAT_01c37788
    JNZ 0x0052d1b4                      ; 0052d1a9
        ;   XREF to: 0052d1b4 (CONDITIONAL_JUMP)  ; LAB_0052d1b4
    PUSH EBX                            ; 0052d1ab
    CALL core_set.cpp_CDemonSet_buildMirrorList_FUN_00534360 ; 0052d1ac
        ;   XREF to: 00534360 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildMirrorList_FUN_00534360(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052d1b1
    MOV EDX,dword ptr [0x01c37788]      ; 0052d1b4 | DAT_01c37788
        ;   Label: LAB_0052d1b4
    TEST EDX,EDX                        ; 0052d1ba
    JNZ 0x0052d22b                      ; 0052d1bc
        ;   XREF to: 0052d22b (CONDITIONAL_JUMP)  ; LAB_0052d22b
    CMP dword ptr [EBX + 0x15aca4],0x0  ; 0052d1be
    JZ 0x0052d1f7                       ; 0052d1c5
        ;   XREF to: 0052d1f7 (CONDITIONAL_JUMP)  ; LAB_0052d1f7
    MOV EAX,ESP                         ; 0052d1c7
    PUSH EAX                            ; 0052d1c9
    MOV EAX,[0x0060b280]                ; 0052d1ca | DAT_0060b280
    MOV dword ptr [ESP + 0x4],EDX       ; 0052d1cf
    PUSH EAX                            ; 0052d1d3 | DAT_01ba5c50
    MOV dword ptr [ESP + 0xc],EDX       ; 0052d1d4
    MOV dword ptr [ESP + 0x10],EDX      ; 0052d1d8
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0052d1dc
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0052d1e1
    PUSH -0x1                           ; 0052d1e4
    XOR ESI,ESI                         ; 0052d1e6
    PUSH ESI                            ; 0052d1e8
    PUSH ESI                            ; 0052d1e9
    PUSH 0x1fc9ff8                      ; 0052d1ea
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0 ; 0052d1ef
        ;   XREF to: 0044e6a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 0052d1f4
    CMP dword ptr [EBX + 0x15aca0],0x0  ; 0052d1f7
        ;   Label: LAB_0052d1f7
    JZ 0x0052d2d1                       ; 0052d1fe
        ;   XREF to: 0052d2d1 (CONDITIONAL_JUMP)  ; LAB_0052d2d1
    CMP dword ptr [EBX + 0x15ac9c],0x0  ; 0052d204
        ;   Label: LAB_0052d204
    JZ 0x0052d300                       ; 0052d20b
        ;   XREF to: 0052d300 (CONDITIONAL_JUMP)  ; LAB_0052d300
    CMP dword ptr [EBX + 0x15acb8],0x0  ; 0052d211
        ;   Label: LAB_0052d211
    JZ 0x0052d22b                       ; 0052d218
        ;   XREF to: 0052d22b (CONDITIONAL_JUMP)  ; LAB_0052d22b
    PUSH 0x1                            ; 0052d21a
    MOV ESI,dword ptr [0x0061e450]      ; 0052d21c | DAT_0061e450
    PUSH ESI                            ; 0052d222
    CALL core_terrain.cpp_CTerrain_render_FUN_0057b860 ; 0052d223
        ;   XREF to: 0057b860 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_render_FUN_0057b860(CTerrain * this_ptr, int render_pass)
    ADD ESP,0x8                         ; 0052d228
    MOV EBP,dword ptr [EBX + 0x15acc8]  ; 0052d22b
        ;   Label: LAB_0052d22b
    XOR EDI,EDI                         ; 0052d231
    TEST EBP,EBP                        ; 0052d233
    JLE 0x0052d29c                      ; 0052d235
        ;   XREF to: 0052d29c (CONDITIONAL_JUMP)  ; LAB_0052d29c
    MOV ESI,EBX                         ; 0052d237
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 0052d239
        ;   Label: LAB_0052d239
    ADD EAX,0x348                       ; 0052d23f
    PUSH EAX                            ; 0052d244
    CALL core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004faef0 ; 0052d245
        ;   XREF to: 004faef0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004faef0(CMirror * this_ptr)
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 0052d24a
    MOV EBP,dword ptr [EAX + 0x2dc]     ; 0052d250
    ADD ESP,0x4                         ; 0052d256
    TEST EBP,EBP                        ; 0052d259
    JZ 0x0052d266                       ; 0052d25b
        ;   XREF to: 0052d266 (CONDITIONAL_JUMP)  ; LAB_0052d266
    PUSH EAX                            ; 0052d25d
    CALL core_glass.cpp_CGlass_renderBrokenGlass_FUN_004c5640 ; 0052d25e
        ;   XREF to: 004c5640 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_renderBrokenGlass_FUN_004c5640(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0052d263
    PUSH 0x1                            ; 0052d266
        ;   Label: LAB_0052d266
    PUSH EDI                            ; 0052d268
    PUSH EBX                            ; 0052d269
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0 ; 0052d26a
        ;   XREF to: 005341b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0052d26f
    PUSH 0x0                            ; 0052d272
    PUSH dword ptr [ESP + 0x28]         ; 0052d274
    PUSH 0x1fc9c68                      ; 0052d278 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00475000 ; 0052d27d
        ;   XREF to: 00475000 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00475000(CDemonRaytrace * this_ptr, float fov_or_radius, int render_mode)
    ADD ESP,0xc                         ; 0052d282
    PUSH EBX                            ; 0052d285
    ADD ESI,0x4                         ; 0052d286
    INC EDI                             ; 0052d289
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 ; 0052d28a
        ;   XREF to: 005342e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet * this_ptr)
    MOV ECX,dword ptr [EBX + 0x15acc8]  ; 0052d28f
    ADD ESP,0x4                         ; 0052d295
    CMP EDI,ECX                         ; 0052d298
    JL 0x0052d239                       ; 0052d29a
        ;   XREF to: 0052d239 (CONDITIONAL_JUMP)  ; LAB_0052d239
    ADD ESP,0xc                         ; 0052d29c
        ;   Label: LAB_0052d29c
    POP EBP                             ; 0052d29f
    POP EDI                             ; 0052d2a0
    POP ESI                             ; 0052d2a1
    POP EBX                             ; 0052d2a2
    RET                                 ; 0052d2a3
    MOV ECX,dword ptr [EAX + 0x19c]     ; 0052d2a4
        ;   Label: LAB_0052d2a4
    TEST ECX,ECX                        ; 0052d2aa
    JZ 0x0052d144                       ; 0052d2ac
        ;   XREF to: 0052d144 (CONDITIONAL_JUMP)  ; LAB_0052d144
    PUSH ECX                            ; 0052d2b2
    PUSH EDX                            ; 0052d2b3
    PUSH 0x1fc9c68                      ; 0052d2b4 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00475ff0 ; 0052d2b9
        ;   XREF to: 00475ff0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00475ff0(CDemonRaytrace * this_ptr, int visible_cube_count, int * visible_cube_indices)
    ADD ESP,0xc                         ; 0052d2be
    CMP ESI,0x1                         ; 0052d2c1
        ;   Label: LAB_0052d2c1
    JNZ 0x0052d149                      ; 0052d2c4
        ;   XREF to: 0052d149 (CONDITIONAL_JUMP)  ; LAB_0052d149
    MOV EAX,ESI                         ; 0052d2ca
    JMP 0x0052d14b                      ; 0052d2cc
        ;   XREF to: 0052d14b (UNCONDITIONAL_JUMP)  ; LAB_0052d14b
    CMP dword ptr [EBX + 0x16163c],0x0  ; 0052d2d1
        ;   Label: LAB_0052d2d1
    JZ 0x0052d204                       ; 0052d2d8
        ;   XREF to: 0052d204 (CONDITIONAL_JUMP)  ; LAB_0052d204
    MOV ESI,dword ptr [EBX + 0x161660]  ; 0052d2de
    PUSH ESI                            ; 0052d2e4
    LEA EAX,[EBX + 0x161640]            ; 0052d2e5
    PUSH EAX                            ; 0052d2eb
    MOV EDI,dword ptr [0x0060d1f0]      ; 0052d2ec | DAT_0060d1f0
    PUSH EDI                            ; 0052d2f2
    CALL core_dskybox.cpp_renderSkyDome_FUN_0046e410 ; 0052d2f3
        ;   XREF to: 0046e410 (UNCONDITIONAL_CALL)  ; void core_dskybox.cpp_renderSkyDome_FUN_0046e410(SMRGLSkyTexture * sky_texture, char * texture_name, int brightness_factor)
    ADD ESP,0xc                         ; 0052d2f8
    JMP 0x0052d204                      ; 0052d2fb
        ;   XREF to: 0052d204 (UNCONDITIONAL_JUMP)  ; LAB_0052d204
    MOV EAX,[0x0061e520]                ; 0052d300 | g_CWaterPtr
        ;   Label: LAB_0052d300
    PUSH EAX                            ; 0052d305 | g_CWaterInstance
    CALL core_water.cpp_CWater_calculateVisibleTiles_FUN_00585e10 ; 0052d306
        ;   XREF to: 00585e10 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_calculateVisibleTiles_FUN_00585e10(CWater * this_ptr)
    MOV EAX,[0x0061e520]                ; 0052d30b | g_CWaterPtr
    MOV EDX,dword ptr [EAX]             ; 0052d310 | g_CWaterInstance
    ADD ESP,0x4                         ; 0052d312
    TEST EDX,EDX                        ; 0052d315
    JNZ 0x0052d211                      ; 0052d317
        ;   XREF to: 0052d211 (CONDITIONAL_JUMP)  ; LAB_0052d211
    PUSH 0x1                            ; 0052d31d
    PUSH EAX                            ; 0052d31f | g_CWaterInstance
    CALL core_water.cpp_CWater_render_FUN_005862e0 ; 0052d320
        ;   XREF to: 005862e0 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_render_FUN_005862e0(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 0052d325
    JMP 0x0052d211                      ; 0052d328
        ;   XREF to: 0052d211 (UNCONDITIONAL_JUMP)  ; LAB_0052d211
    CMP dword ptr [0x0061b5b8],0x0      ; 0052d32d | DAT_0061b5b8
        ;   Label: LAB_0052d32d
    JZ 0x0052d29c                       ; 0052d334
        ;   XREF to: 0052d29c (CONDITIONAL_JUMP)  ; LAB_0052d29c
    MOV EBP,dword ptr [EBX + 0x15acc8]  ; 0052d33a
    XOR EDI,EDI                         ; 0052d340
    TEST EBP,EBP                        ; 0052d342
    JLE 0x0052d29c                      ; 0052d344
        ;   XREF to: 0052d29c (CONDITIONAL_JUMP)  ; LAB_0052d29c
    MOV ESI,EBX                         ; 0052d34a
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 0052d34c
        ;   Label: LAB_0052d34c
    ADD EAX,0x348                       ; 0052d352
    PUSH EAX                            ; 0052d357
    CALL core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004faef0 ; 0052d358
        ;   XREF to: 004faef0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004faef0(CMirror * this_ptr)
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 0052d35d
    MOV EDX,dword ptr [EAX + 0x2dc]     ; 0052d363
    ADD ESP,0x4                         ; 0052d369
    TEST EDX,EDX                        ; 0052d36c
    JZ 0x0052d379                       ; 0052d36e
        ;   XREF to: 0052d379 (CONDITIONAL_JUMP)  ; LAB_0052d379
    PUSH EAX                            ; 0052d370
    CALL core_glass.cpp_CGlass_renderBrokenGlass_FUN_004c5640 ; 0052d371
        ;   XREF to: 004c5640 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_renderBrokenGlass_FUN_004c5640(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0052d376
    PUSH 0x0                            ; 0052d379
        ;   Label: LAB_0052d379
    PUSH EDI                            ; 0052d37b
    PUSH EBX                            ; 0052d37c
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0 ; 0052d37d
        ;   XREF to: 005341b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0052d382
    PUSH 0x0                            ; 0052d385
    PUSH dword ptr [ESP + 0x28]         ; 0052d387
    PUSH 0x1fc9c68                      ; 0052d38b | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00475000 ; 0052d390
        ;   XREF to: 00475000 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00475000(CDemonRaytrace * this_ptr, float fov_or_radius, int render_mode)
    ADD ESP,0xc                         ; 0052d395
    PUSH EBX                            ; 0052d398
    ADD ESI,0x4                         ; 0052d399
    INC EDI                             ; 0052d39c
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 ; 0052d39d
        ;   XREF to: 005342e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet * this_ptr)
    MOV EAX,dword ptr [EBX + 0x15acc8]  ; 0052d3a2
    ADD ESP,0x4                         ; 0052d3a8
    CMP EDI,EAX                         ; 0052d3ab
    JGE 0x0052d29c                      ; 0052d3ad
        ;   XREF to: 0052d29c (CONDITIONAL_JUMP)  ; LAB_0052d29c
    JMP 0x0052d34c                      ; 0052d3b3
        ;   XREF to: 0052d34c (UNCONDITIONAL_JUMP)  ; LAB_0052d34c

