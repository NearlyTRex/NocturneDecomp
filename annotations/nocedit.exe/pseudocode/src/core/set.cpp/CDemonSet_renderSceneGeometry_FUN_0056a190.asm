; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet *this_ptr,float frustum_param,int render_mode)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   frustum_param
; int              Stack[0xc]:4   render_mode
;
; XREF[14]:
;   core_course.cpp_CCourse_preview_FUN_00443bc0 at 00443d1d
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053a338
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 at 0056ab84
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 at 0056a78e
;   core_set.cpp_CDemonSet_renderFlashlightShadow_FUN_0056c990 at 0056caf7
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_0056be80 at 0056bfae
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b46c
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 at 00574a69
;   core_setedit.cpp_CDemonSet_buildCameraDepthData_FUN_00580310 at 005804a6
;   core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660 at 0057dd5b
;   ... and 4 more
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic* g_SkyDomeTexturePtr = 02ca0148
;   CVector3i g_GlobalLightDirection
;   int g_RenderMirrorsFlag = 0x1
;   CTerrain* g_CTerrainPtr = 03f8749c
;   CWater* g_CWaterPtr = 03f875e0
;   CDemonRenderer g_CDemonRendererInstance
;   SMRGLTextureBasic[24] g_SkyDomeTextureData
;   int g_UseExternalRenderer
;   CDemonRaytrace g_CDemonRaytraceInstance
;   CKeyFramedModel g_CKeyFramedModelInstance
;   CTerrain g_CTerrainInstance
;   CWater g_CWaterInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
;   core_dskybox.cpp_renderSkyDome_FUN_004901f0
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
;   core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0
;   core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00498e50
;   core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0
;   core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_00522800
;   core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
;   core_terrain.cpp_CTerrain_render_FUN_005e1f50
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70
;   core_water.cpp_CWater_render_FUN_005ea320
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a190
        ;   Label: core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
    PUSH ESI                            ; 0056a191
    PUSH EDI                            ; 0056a192
    PUSH EBP                            ; 0056a193
    SUB ESP,0xc                         ; 0056a194
    MOV EBX,dword ptr [ESP + 0x20]      ; 0056a197
    MOV ESI,dword ptr [ESP + 0x28]      ; 0056a19b
    PUSH 0x6810cc                       ; 0056a19f | g_GlobalLightDirection
    MOV EDX,dword ptr [0x006703ec]      ; 0056a1a4 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0056a1aa | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0 ; 0056a1ab
        ;   XREF to: 0048c6c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0(CDemonRenderer * this_ptr, CVector3i * direction)
    ADD ESP,0x8                         ; 0056a1b0
    MOV ECX,dword ptr [0x006703ec]      ; 0056a1b3 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH 0x3e800000                     ; 0056a1b9
    PUSH ECX                            ; 0056a1be | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0048c690 ; 0056a1bf
        ;   XREF to: 0048c690 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0048c690(CDemonRenderer * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0056a1c4
    TEST ESI,ESI                        ; 0056a1c7
    JZ 0x0056a371                       ; 0056a1c9
        ;   XREF to: 0056a371 (CONDITIONAL_JUMP)  ; LAB_0056a371
    MOV EDI,dword ptr [EBX + 0x15aea4]  ; 0056a1cf
    TEST EDI,EDI                        ; 0056a1d5
    JL 0x0056a371                       ; 0056a1d7
        ;   XREF to: 0056a371 (CONDITIONAL_JUMP)  ; LAB_0056a371
    IMUL EAX,EDI,0x1a4                  ; 0056a1dd
    ADD EAX,EBX                         ; 0056a1e3
    MOV EDX,dword ptr [EAX + 0x198]     ; 0056a1e5
    CMP EDX,0x1                         ; 0056a1eb
    JGE 0x0056a354                      ; 0056a1ee
        ;   XREF to: 0056a354 (CONDITIONAL_JUMP)  ; LAB_0056a354
    MOV ESI,0x2                         ; 0056a1f4
        ;   Label: LAB_0056a1f4
    XOR EAX,EAX                         ; 0056a1f9
        ;   Label: LAB_0056a1f9
    PUSH EAX                            ; 0056a1fb
        ;   Label: LAB_0056a1fb
    PUSH dword ptr [ESP + 0x28]         ; 0056a1fc
    PUSH 0x3277d14                      ; 0056a200 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50 ; 0056a205
        ;   XREF to: 00497e50 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50(CDemonRaytrace * this_ptr, float fov_or_radius, int render_mode)
    ADD ESP,0xc                         ; 0056a20a
    CMP ESI,0x2                         ; 0056a20d
    JNZ 0x0056a23b                      ; 0056a210
        ;   XREF to: 0056a23b (CONDITIONAL_JUMP)  ; LAB_0056a23b
    IMUL EAX,dword ptr [EBX + 0x15aea4],0x1a4 ; 0056a212
    LEA ESI,[EBX + 0x4]                 ; 0056a21c
    ADD EAX,ESI                         ; 0056a21f
    LEA ESI,[EAX + 0x198]               ; 0056a221
    PUSH ESI                            ; 0056a227
    ADD EAX,0x194                       ; 0056a228
    PUSH EAX                            ; 0056a22d
    PUSH 0x3277d14                      ; 0056a22e | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0 ; 0056a233
        ;   XREF to: 00498fb0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0(CDemonRaytrace * this_ptr, int * output_count, int * * input_indices_array)
    ADD ESP,0xc                         ; 0056a238
    MOV ECX,dword ptr [0x006703ec]      ; 0056a23b | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_0056a23b
    PUSH ECX                            ; 0056a241 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0056a242
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0056a247
    TEST EAX,EAX                        ; 0056a24a
    JNZ 0x0056a3dd                      ; 0056a24c
        ;   XREF to: 0056a3dd (CONDITIONAL_JUMP)  ; LAB_0056a3dd
    CMP dword ptr [0x02d03e94],0x0      ; 0056a252 | g_UseExternalRenderer
    JNZ 0x0056a264                      ; 0056a259
        ;   XREF to: 0056a264 (CONDITIONAL_JUMP)  ; LAB_0056a264
    PUSH EBX                            ; 0056a25b
    CALL core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70 ; 0056a25c
        ;   XREF to: 00570b70 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0056a261
    MOV EDX,dword ptr [0x02d03e94]      ; 0056a264 | g_UseExternalRenderer
        ;   Label: LAB_0056a264
    TEST EDX,EDX                        ; 0056a26a
    JNZ 0x0056a2db                      ; 0056a26c
        ;   XREF to: 0056a2db (CONDITIONAL_JUMP)  ; LAB_0056a2db
    CMP dword ptr [EBX + 0x15ac94],0x0  ; 0056a26e
    JZ 0x0056a2a7                       ; 0056a275
        ;   XREF to: 0056a2a7 (CONDITIONAL_JUMP)  ; LAB_0056a2a7
    MOV EAX,ESP                         ; 0056a277
    PUSH EAX                            ; 0056a279
    MOV EAX,[0x006703ec]                ; 0056a27a | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x4],EDX       ; 0056a27f
    PUSH EAX                            ; 0056a283 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0xc],EDX       ; 0056a284
    MOV dword ptr [ESP + 0x10],EDX      ; 0056a288
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0056a28c
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0056a291
    PUSH -0x1                           ; 0056a294
    XOR ESI,ESI                         ; 0056a296
    PUSH ESI                            ; 0056a298
    PUSH ESI                            ; 0056a299
    PUSH 0x32780a4                      ; 0056a29a | g_CKeyFramedModelInstance
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850 ; 0056a29f
        ;   XREF to: 00477850 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 0056a2a4
    CMP dword ptr [EBX + 0x15ac90],0x0  ; 0056a2a7
        ;   Label: LAB_0056a2a7
    JZ 0x0056a381                       ; 0056a2ae
        ;   XREF to: 0056a381 (CONDITIONAL_JUMP)  ; LAB_0056a381
    CMP dword ptr [EBX + 0x15ac8c],0x0  ; 0056a2b4
        ;   Label: LAB_0056a2b4
    JZ 0x0056a3b0                       ; 0056a2bb
        ;   XREF to: 0056a3b0 (CONDITIONAL_JUMP)  ; LAB_0056a3b0
    CMP dword ptr [EBX + 0x15aca8],0x0  ; 0056a2c1
        ;   Label: LAB_0056a2c1
    JZ 0x0056a2db                       ; 0056a2c8
        ;   XREF to: 0056a2db (CONDITIONAL_JUMP)  ; LAB_0056a2db
    PUSH 0x1                            ; 0056a2ca
    MOV ESI,dword ptr [0x006843f8]      ; 0056a2cc | g_CTerrainPtr
    PUSH ESI                            ; 0056a2d2 | g_CTerrainInstance
    CALL core_terrain.cpp_CTerrain_render_FUN_005e1f50 ; 0056a2d3
        ;   XREF to: 005e1f50 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_render_FUN_005e1f50(CTerrain * this_ptr)
    ADD ESP,0x8                         ; 0056a2d8
    MOV EBP,dword ptr [EBX + 0x15acb4]  ; 0056a2db
        ;   Label: LAB_0056a2db
    XOR EDI,EDI                         ; 0056a2e1
    TEST EBP,EBP                        ; 0056a2e3
    JLE 0x0056a34c                      ; 0056a2e5
        ;   XREF to: 0056a34c (CONDITIONAL_JUMP)  ; LAB_0056a34c
    MOV ESI,EBX                         ; 0056a2e7
    MOV EAX,dword ptr [ESI + 0x15acb8]  ; 0056a2e9
        ;   Label: LAB_0056a2e9
    ADD EAX,0x1ec                       ; 0056a2ef
    PUSH EAX                            ; 0056a2f4
    CALL core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_00522800 ; 0056a2f5
        ;   XREF to: 00522800 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_00522800(CMirror * this_ptr)
    MOV EAX,dword ptr [ESI + 0x15acb8]  ; 0056a2fa
    MOV EBP,dword ptr [EAX + 0x180]     ; 0056a300
    ADD ESP,0x4                         ; 0056a306
    TEST EBP,EBP                        ; 0056a309
    JZ 0x0056a316                       ; 0056a30b
        ;   XREF to: 0056a316 (CONDITIONAL_JUMP)  ; LAB_0056a316
    PUSH EAX                            ; 0056a30d
    CALL core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0 ; 0056a30e
        ;   XREF to: 004e9ca0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0056a313
    PUSH 0x1                            ; 0056a316
        ;   Label: LAB_0056a316
    PUSH EDI                            ; 0056a318
    PUSH EBX                            ; 0056a319
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 ; 0056a31a
        ;   XREF to: 005709e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0056a31f
    PUSH 0x0                            ; 0056a322
    PUSH dword ptr [ESP + 0x28]         ; 0056a324
    PUSH 0x3277d14                      ; 0056a328 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50 ; 0056a32d
        ;   XREF to: 00497e50 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50(CDemonRaytrace * this_ptr, float fov_or_radius, int render_mode)
    ADD ESP,0xc                         ; 0056a332
    PUSH EBX                            ; 0056a335
    ADD ESI,0x4                         ; 0056a336
    INC EDI                             ; 0056a339
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0 ; 0056a33a
        ;   XREF to: 00570af0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(CDemonSet * this_ptr)
    MOV ECX,dword ptr [EBX + 0x15acb4]  ; 0056a33f
    ADD ESP,0x4                         ; 0056a345
    CMP EDI,ECX                         ; 0056a348
    JL 0x0056a2e9                       ; 0056a34a
        ;   XREF to: 0056a2e9 (CONDITIONAL_JUMP)  ; LAB_0056a2e9
    ADD ESP,0xc                         ; 0056a34c
        ;   Label: LAB_0056a34c
    POP EBP                             ; 0056a34f
    POP EDI                             ; 0056a350
    POP ESI                             ; 0056a351
    POP EBX                             ; 0056a352
    RET                                 ; 0056a353
    MOV ECX,dword ptr [EAX + 0x19c]     ; 0056a354
        ;   Label: LAB_0056a354
    TEST ECX,ECX                        ; 0056a35a
    JZ 0x0056a1f4                       ; 0056a35c
        ;   XREF to: 0056a1f4 (CONDITIONAL_JUMP)  ; LAB_0056a1f4
    PUSH ECX                            ; 0056a362
    PUSH EDX                            ; 0056a363
    PUSH 0x3277d14                      ; 0056a364 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00498e50 ; 0056a369
        ;   XREF to: 00498e50 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00498e50(CDemonRaytrace * this_ptr, int visible_cube_count, int * visible_cube_indices)
    ADD ESP,0xc                         ; 0056a36e
    CMP ESI,0x1                         ; 0056a371
        ;   Label: LAB_0056a371
    JNZ 0x0056a1f9                      ; 0056a374
        ;   XREF to: 0056a1f9 (CONDITIONAL_JUMP)  ; LAB_0056a1f9
    MOV EAX,ESI                         ; 0056a37a
    JMP 0x0056a1fb                      ; 0056a37c
        ;   XREF to: 0056a1fb (UNCONDITIONAL_JUMP)  ; LAB_0056a1fb
    CMP dword ptr [EBX + 0x161628],0x0  ; 0056a381
        ;   Label: LAB_0056a381
    JZ 0x0056a2b4                       ; 0056a388
        ;   XREF to: 0056a2b4 (CONDITIONAL_JUMP)  ; LAB_0056a2b4
    MOV ESI,dword ptr [EBX + 0x16164c]  ; 0056a38e
    PUSH ESI                            ; 0056a394
    LEA EAX,[EBX + 0x16162c]            ; 0056a395
    PUSH EAX                            ; 0056a39b
    MOV EDI,dword ptr [0x0067235c]      ; 0056a39c | g_SkyDomeTexturePtr
    PUSH EDI                            ; 0056a3a2 | g_SkyDomeTextureData
    CALL core_dskybox.cpp_renderSkyDome_FUN_004901f0 ; 0056a3a3
        ;   XREF to: 004901f0 (UNCONDITIONAL_CALL)  ; void core_dskybox.cpp_renderSkyDome_FUN_004901f0(SMRGLTextureBasic * sky_texture, char * texture_name, int brightness_factor)
    ADD ESP,0xc                         ; 0056a3a8
    JMP 0x0056a2b4                      ; 0056a3ab
        ;   XREF to: 0056a2b4 (UNCONDITIONAL_JUMP)  ; LAB_0056a2b4
    MOV EAX,[0x006844f0]                ; 0056a3b0 | g_CWaterInstance | g_CWaterPtr
        ;   Label: LAB_0056a3b0
    PUSH EAX                            ; 0056a3b5 | g_CWaterInstance
    CALL core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70 ; 0056a3b6
        ;   XREF to: 005e9e70 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70(CWater * this_ptr)
    MOV EAX,[0x006844f0]                ; 0056a3bb | g_CWaterInstance | g_CWaterPtr
    MOV EDX,dword ptr [EAX]             ; 0056a3c0 | g_CWaterInstance
    ADD ESP,0x4                         ; 0056a3c2
    TEST EDX,EDX                        ; 0056a3c5
    JNZ 0x0056a2c1                      ; 0056a3c7
        ;   XREF to: 0056a2c1 (CONDITIONAL_JUMP)  ; LAB_0056a2c1
    PUSH 0x1                            ; 0056a3cd
    PUSH EAX                            ; 0056a3cf | g_CWaterInstance
    CALL core_water.cpp_CWater_render_FUN_005ea320 ; 0056a3d0
        ;   XREF to: 005ea320 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_render_FUN_005ea320(CWater * this_ptr, int render_mode)
    ADD ESP,0x8                         ; 0056a3d5
    JMP 0x0056a2c1                      ; 0056a3d8
        ;   XREF to: 0056a2c1 (UNCONDITIONAL_JUMP)  ; LAB_0056a2c1
    CMP dword ptr [0x006810d8],0x0      ; 0056a3dd | g_RenderMirrorsFlag
        ;   Label: LAB_0056a3dd
    JZ 0x0056a34c                       ; 0056a3e4
        ;   XREF to: 0056a34c (CONDITIONAL_JUMP)  ; LAB_0056a34c
    MOV EBP,dword ptr [EBX + 0x15acb4]  ; 0056a3ea
    XOR EDI,EDI                         ; 0056a3f0
    TEST EBP,EBP                        ; 0056a3f2
    JLE 0x0056a34c                      ; 0056a3f4
        ;   XREF to: 0056a34c (CONDITIONAL_JUMP)  ; LAB_0056a34c
    MOV ESI,EBX                         ; 0056a3fa
    MOV EAX,dword ptr [ESI + 0x15acb8]  ; 0056a3fc
        ;   Label: LAB_0056a3fc
    ADD EAX,0x1ec                       ; 0056a402
    PUSH EAX                            ; 0056a407
    CALL core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_00522800 ; 0056a408
        ;   XREF to: 00522800 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_00522800(CMirror * this_ptr)
    MOV EAX,dword ptr [ESI + 0x15acb8]  ; 0056a40d
    MOV EDX,dword ptr [EAX + 0x180]     ; 0056a413
    ADD ESP,0x4                         ; 0056a419
    TEST EDX,EDX                        ; 0056a41c
    JZ 0x0056a429                       ; 0056a41e
        ;   XREF to: 0056a429 (CONDITIONAL_JUMP)  ; LAB_0056a429
    PUSH EAX                            ; 0056a420
    CALL core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0 ; 0056a421
        ;   XREF to: 004e9ca0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0056a426
    PUSH 0x0                            ; 0056a429
        ;   Label: LAB_0056a429
    PUSH EDI                            ; 0056a42b
    PUSH EBX                            ; 0056a42c
    CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 ; 0056a42d
        ;   XREF to: 005709e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 0056a432
    PUSH 0x0                            ; 0056a435
    PUSH dword ptr [ESP + 0x28]         ; 0056a437
    PUSH 0x3277d14                      ; 0056a43b | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50 ; 0056a440
        ;   XREF to: 00497e50 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50(CDemonRaytrace * this_ptr, float fov_or_radius, int render_mode)
    ADD ESP,0xc                         ; 0056a445
    PUSH EBX                            ; 0056a448
    ADD ESI,0x4                         ; 0056a449
    INC EDI                             ; 0056a44c
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0 ; 0056a44d
        ;   XREF to: 00570af0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(CDemonSet * this_ptr)
    MOV EAX,dword ptr [EBX + 0x15acb4]  ; 0056a452
    ADD ESP,0x4                         ; 0056a458
    CMP EDI,EAX                         ; 0056a45b
    JGE 0x0056a34c                      ; 0056a45d
        ;   XREF to: 0056a34c (CONDITIONAL_JUMP)  ; LAB_0056a34c
    JMP 0x0056a3fc                      ; 0056a463
        ;   XREF to: 0056a3fc (UNCONDITIONAL_JUMP)  ; LAB_0056a3fc

