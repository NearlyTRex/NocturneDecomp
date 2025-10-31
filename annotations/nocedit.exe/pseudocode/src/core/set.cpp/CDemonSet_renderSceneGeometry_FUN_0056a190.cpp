// Name: core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
// Address: 0056a190
// Address Range: [[0056a190, 0056a464]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
// Cross-references:
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443d1d [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a338 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056be80 (0056be80) at 0056bfae [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056caf7 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056ab84 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a78e [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b46c [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 (00574910) at 00574a69 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581ca5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583401 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057aac9 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310 (00580310) at 005804a6 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057dd5b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057d07b [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic* g_SkyDomeTexturePtr = 02ca0148
//   CVector3i g_GlobalLightDirection
//   int g_RenderMirrorsFlag = 0x1
//   CTerrain* g_CTerrainPtr = 03f8749c
//   CWater* g_CWaterPtr = 03f875e0
//   CDemonRenderer g_CDemonRendererInstance
//   SMRGLTextureBasic g_SkyDomeTextureData
//   int g_UseExternalRenderer
//   CDemonRaytrace g_CDemonRaytraceInstance
//   CKeyFramedModel g_CKeyFramedModelInstance
//   CTerrain g_CTerrainInstance
//   CWater g_CWaterInstance
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   core_dskybox.cpp_renderSkyDome_FUN_004901f0
//   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
//   core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0
//   core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00498e50
//   core_glass.cpp_CGlass_FUN_004e9ca0
//   core_mirror.cpp_renderMirrorQuadDepth_FUN_00522800
//   core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70
//   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   core_set.cpp_FUN_00570af0
//   core_terrain.cpp_CTerrain_render_FUN_005e1f50
//   core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70
//   core_water.cpp_CWater_render_FUN_005ea320
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0
//   engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0048c690

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
          (CDemonSet *this_ptr,float frustum_param,int render_mode)

{
  int visible_cube_count;
  int *visible_cube_indices;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonSet *pCVar2;
  int **unaff_EDI;
  float in_stack_00000014;
  float in_stack_0000002c;
  float in_stack_00000030;
  
  engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0
            (g_CDemonRendererPtr,&g_GlobalLightDirection);
  engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0048c690(g_CDemonRendererPtr,0.25);
  if ((render_mode == 0) || (iVar1 = this_ptr->selected_camera_index, iVar1 < 0)) {
LAB_0056a371:
    if (render_mode == 1) {
      iVar1 = 1;
      goto LAB_0056a1fb;
    }
  }
  else {
    visible_cube_count = this_ptr->cameras[iVar1].pvs_count;
    if ((0 < visible_cube_count) &&
       (visible_cube_indices = this_ptr->cameras[iVar1].pvs_list, visible_cube_indices != (int *)0x0
       )) {
      core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_00498e50
                (&g_CDemonRaytraceInstance,visible_cube_count,visible_cube_indices);
      goto LAB_0056a371;
    }
    render_mode = 2;
  }
  iVar1 = 0;
LAB_0056a1fb:
  core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
            (&g_CDemonRaytraceInstance,in_stack_00000014,iVar1);
  if (render_mode == 2) {
    core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_00498fb0
              (&g_CDemonRaytraceInstance,
               &this_ptr->cameras[this_ptr->selected_camera_index].pvs_count,
               &this_ptr->cameras[this_ptr->selected_camera_index].pvs_list,unaff_EDI);
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    if (g_UseExternalRenderer == 0) {
      core_set_cpp_CDemonSet_buildMirrorList_FUN_00570b70(this_ptr);
    }
    if (g_UseExternalRenderer == 0) {
      if (this_ptr->use_enviro_model != 0) {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,(CVector3f *)&stack0x00000000);
        core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                  (&g_CKeyFramedModelInstance,(CKeyFramedModelInstance *)0x0,0,-1);
      }
      if ((*(int *)(this_ptr->field22_0x15ac80 + 0x10) == 0) && (this_ptr->has_sky != 0)) {
        core_dskybox_cpp_renderSkyDome_FUN_004901f0
                  (g_SkyDomeTexturePtr,this_ptr->sky_texture_name,(float)this_ptr->sky_type);
      }
      if ((*(int *)(this_ptr->field22_0x15ac80 + 0xc) == 0) &&
         (core_water_cpp_CWater_calculateVisibleTiles_FUN_005e9e70(g_CWaterPtr),
         g_CWaterPtr->wave_animation_enabled == 0)) {
        core_water_cpp_CWater_render_FUN_005ea320(g_CWaterPtr,1);
      }
      if (this_ptr->field25_0x15aca8 != 0) {
        core_terrain_cpp_CTerrain_render_FUN_005e1f50(g_CTerrainPtr);
      }
    }
    iVar1 = 0;
    pCVar2 = this_ptr;
    if (0 < this_ptr->actor_list_count) {
      do {
        core_mirror_cpp_renderMirrorQuadDepth_FUN_00522800
                  ((CVector3f *)(pCVar2->actor_list_maybe[0][1].create_event + 0x1c));
        if (((CGlass *)pCVar2->actor_list_maybe[0])->shattered != 0) {
          core_glass_cpp_CGlass_FUN_004e9ca0((CGlass *)pCVar2->actor_list_maybe[0]);
        }
        core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar1,1);
        core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
                  (&g_CDemonRaytraceInstance,in_stack_00000030,0);
        iVar1 = iVar1 + 1;
        core_set_cpp_FUN_00570af0();
        pCVar2 = (CDemonSet *)pCVar2->cameras;
      } while (iVar1 < this_ptr->actor_list_count);
    }
  }
  else if ((g_RenderMirrorsFlag != 0) &&
          (iVar1 = 0, pCVar2 = this_ptr, 0 < this_ptr->actor_list_count)) {
    do {
      core_mirror_cpp_renderMirrorQuadDepth_FUN_00522800
                ((CVector3f *)(pCVar2->actor_list_maybe[0][1].create_event + 0x1c));
      if (((CGlass *)pCVar2->actor_list_maybe[0])->shattered != 0) {
        core_glass_cpp_CGlass_FUN_004e9ca0((CGlass *)pCVar2->actor_list_maybe[0]);
      }
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar1,0);
      core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
                (&g_CDemonRaytraceInstance,in_stack_0000002c,0);
      pCVar2 = (CDemonSet *)pCVar2->cameras;
      iVar1 = iVar1 + 1;
      core_set_cpp_FUN_00570af0();
    } while (iVar1 < this_ptr->actor_list_count);
  }
  return;
}


// Assembly code:
// 0056a190: PUSH EBX
//   Label: core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
// 0056a191: PUSH ESI
// 0056a192: PUSH EDI
// 0056a193: PUSH EBP
// 0056a194: SUB ESP,0xc
// 0056a197: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0056a19b: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 0056a19f: PUSH 0x6810cc
//   XREF to: 006810cc (DATA)
// 0056a1a4: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056a1aa: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0056a1ab: CALL engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0
//   XREF to: 0048c6c0 (UNCONDITIONAL_CALL)
// 0056a1b0: ADD ESP,0x8
// 0056a1b3: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056a1b9: PUSH 0x3e800000
// 0056a1be: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0056a1bf: CALL engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0048c690
//   XREF to: 0048c690 (UNCONDITIONAL_CALL)
// 0056a1c4: ADD ESP,0x8
// 0056a1c7: TEST ESI,ESI
// 0056a1c9: JZ 0x0056a371
//   XREF to: 0056a371 (CONDITIONAL_JUMP)
// 0056a1cf: MOV EDI,dword ptr [EBX + 0x15aea4]
// 0056a1d5: TEST EDI,EDI
// 0056a1d7: JL 0x0056a371
//   XREF to: 0056a371 (CONDITIONAL_JUMP)
// 0056a1dd: IMUL EAX,EDI,0x1a4
// 0056a1e3: ADD EAX,EBX
// 0056a1e5: MOV EDX,dword ptr [EAX + 0x198]
// 0056a1eb: CMP EDX,0x1
// 0056a1ee: JGE 0x0056a354
//   XREF to: 0056a354 (CONDITIONAL_JUMP)
// 0056a1f4: MOV ESI,0x2
//   Label: LAB_0056a1f4
// 0056a1f9: XOR EAX,EAX
//   Label: LAB_0056a1f9
// 0056a1fb: PUSH EAX
//   Label: LAB_0056a1fb
// 0056a1fc: PUSH dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0056a200: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 0056a205: CALL core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
//   XREF to: 00497e50 (UNCONDITIONAL_CALL)
// 0056a20a: ADD ESP,0xc
// 0056a20d: CMP ESI,0x2
// 0056a210: JNZ 0x0056a23b
//   XREF to: 0056a23b (CONDITIONAL_JUMP)
// 0056a212: IMUL EAX,dword ptr [EBX + 0x15aea4],0x1a4
// 0056a21c: LEA ESI,[EBX + 0x4]
// 0056a21f: ADD EAX,ESI
// 0056a221: LEA ESI,[EAX + 0x198]
// 0056a227: PUSH ESI
// 0056a228: ADD EAX,0x194
// 0056a22d: PUSH EAX
// 0056a22e: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 0056a233: CALL core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0
//   XREF to: 00498fb0 (UNCONDITIONAL_CALL)
// 0056a238: ADD ESP,0xc
// 0056a23b: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_0056a23b
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056a241: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0056a242: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0056a247: ADD ESP,0x4
// 0056a24a: TEST EAX,EAX
// 0056a24c: JNZ 0x0056a3dd
//   XREF to: 0056a3dd (CONDITIONAL_JUMP)
// 0056a252: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 0056a259: JNZ 0x0056a264
//   XREF to: 0056a264 (CONDITIONAL_JUMP)
// 0056a25b: PUSH EBX
// 0056a25c: CALL core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70
//   XREF to: 00570b70 (UNCONDITIONAL_CALL)
// 0056a261: ADD ESP,0x4
// 0056a264: MOV EDX,dword ptr [0x02d03e94]
//   Label: LAB_0056a264
//   XREF to: 02d03e94 (READ)
// 0056a26a: TEST EDX,EDX
// 0056a26c: JNZ 0x0056a2db
//   XREF to: 0056a2db (CONDITIONAL_JUMP)
// 0056a26e: CMP dword ptr [EBX + 0x15ac94],0x0
// 0056a275: JZ 0x0056a2a7
//   XREF to: 0056a2a7 (CONDITIONAL_JUMP)
// 0056a277: MOV EAX,ESP
// 0056a279: PUSH EAX
// 0056a27a: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056a27f: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056a283: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0056a284: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0056a288: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0056a28c: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0056a291: ADD ESP,0x8
// 0056a294: PUSH -0x1
// 0056a296: XOR ESI,ESI
// 0056a298: PUSH ESI
// 0056a299: PUSH ESI
// 0056a29a: PUSH 0x32780a4
//   XREF to: 032780a4 (DATA)
// 0056a29f: CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   XREF to: 00477850 (UNCONDITIONAL_CALL)
// 0056a2a4: ADD ESP,0x10
// 0056a2a7: CMP dword ptr [EBX + 0x15ac90],0x0
//   Label: LAB_0056a2a7
// 0056a2ae: JZ 0x0056a381
//   XREF to: 0056a381 (CONDITIONAL_JUMP)
// 0056a2b4: CMP dword ptr [EBX + 0x15ac8c],0x0
//   Label: LAB_0056a2b4
// 0056a2bb: JZ 0x0056a3b0
//   XREF to: 0056a3b0 (CONDITIONAL_JUMP)
// 0056a2c1: CMP dword ptr [EBX + 0x15aca8],0x0
//   Label: LAB_0056a2c1
// 0056a2c8: JZ 0x0056a2db
//   XREF to: 0056a2db (CONDITIONAL_JUMP)
// 0056a2ca: PUSH 0x1
// 0056a2cc: MOV ESI,dword ptr [0x006843f8]
//   XREF to: 006843f8 (READ)
// 0056a2d2: PUSH ESI
//   XREF to: 03f8749c (DATA)
// 0056a2d3: CALL core_terrain.cpp_CTerrain_render_FUN_005e1f50
//   XREF to: 005e1f50 (UNCONDITIONAL_CALL)
// 0056a2d8: ADD ESP,0x8
// 0056a2db: MOV EBP,dword ptr [EBX + 0x15acb4]
//   Label: LAB_0056a2db
// 0056a2e1: XOR EDI,EDI
// 0056a2e3: TEST EBP,EBP
// 0056a2e5: JLE 0x0056a34c
//   XREF to: 0056a34c (CONDITIONAL_JUMP)
// 0056a2e7: MOV ESI,EBX
// 0056a2e9: MOV EAX,dword ptr [ESI + 0x15acb8]
//   Label: LAB_0056a2e9
// 0056a2ef: ADD EAX,0x1ec
// 0056a2f4: PUSH EAX
// 0056a2f5: CALL core_mirror.cpp_renderMirrorQuadDepth_FUN_00522800
//   XREF to: 00522800 (UNCONDITIONAL_CALL)
// 0056a2fa: MOV EAX,dword ptr [ESI + 0x15acb8]
// 0056a300: MOV EBP,dword ptr [EAX + 0x180]
// 0056a306: ADD ESP,0x4
// 0056a309: TEST EBP,EBP
// 0056a30b: JZ 0x0056a316
//   XREF to: 0056a316 (CONDITIONAL_JUMP)
// 0056a30d: PUSH EAX
// 0056a30e: CALL core_glass.cpp_CGlass_FUN_004e9ca0
//   XREF to: 004e9ca0 (UNCONDITIONAL_CALL)
// 0056a313: ADD ESP,0x4
// 0056a316: PUSH 0x1
//   Label: LAB_0056a316
// 0056a318: PUSH EDI
// 0056a319: PUSH EBX
// 0056a31a: CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   XREF to: 005709e0 (UNCONDITIONAL_CALL)
// 0056a31f: ADD ESP,0xc
// 0056a322: PUSH 0x0
// 0056a324: PUSH dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0056a328: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 0056a32d: CALL core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
//   XREF to: 00497e50 (UNCONDITIONAL_CALL)
// 0056a332: ADD ESP,0xc
// 0056a335: PUSH EBX
// 0056a336: ADD ESI,0x4
// 0056a339: INC EDI
// 0056a33a: CALL core_set.cpp_FUN_00570af0
//   XREF to: 00570af0 (UNCONDITIONAL_CALL)
// 0056a33f: MOV ECX,dword ptr [EBX + 0x15acb4]
// 0056a345: ADD ESP,0x4
// 0056a348: CMP EDI,ECX
// 0056a34a: JL 0x0056a2e9
//   XREF to: 0056a2e9 (CONDITIONAL_JUMP)
// 0056a34c: ADD ESP,0xc
//   Label: LAB_0056a34c
// 0056a34f: POP EBP
// 0056a350: POP EDI
// 0056a351: POP ESI
// 0056a352: POP EBX
// 0056a353: RET
// 0056a354: MOV ECX,dword ptr [EAX + 0x19c]
//   Label: LAB_0056a354
// 0056a35a: TEST ECX,ECX
// 0056a35c: JZ 0x0056a1f4
//   XREF to: 0056a1f4 (CONDITIONAL_JUMP)
// 0056a362: PUSH ECX
// 0056a363: PUSH EDX
// 0056a364: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 0056a369: CALL core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00498e50
//   XREF to: 00498e50 (UNCONDITIONAL_CALL)
// 0056a36e: ADD ESP,0xc
// 0056a371: CMP ESI,0x1
//   Label: LAB_0056a371
// 0056a374: JNZ 0x0056a1f9
//   XREF to: 0056a1f9 (CONDITIONAL_JUMP)
// 0056a37a: MOV EAX,ESI
// 0056a37c: JMP 0x0056a1fb
//   XREF to: 0056a1fb (UNCONDITIONAL_JUMP)
// 0056a381: CMP dword ptr [EBX + 0x161628],0x0
//   Label: LAB_0056a381
// 0056a388: JZ 0x0056a2b4
//   XREF to: 0056a2b4 (CONDITIONAL_JUMP)
// 0056a38e: MOV ESI,dword ptr [EBX + 0x16164c]
// 0056a394: PUSH ESI
// 0056a395: LEA EAX,[EBX + 0x16162c]
// 0056a39b: PUSH EAX
// 0056a39c: MOV EDI,dword ptr [0x0067235c]
//   XREF to: 0067235c (READ)
// 0056a3a2: PUSH EDI
//   XREF to: 02ca0148 (DATA)
// 0056a3a3: CALL core_dskybox.cpp_renderSkyDome_FUN_004901f0
//   XREF to: 004901f0 (UNCONDITIONAL_CALL)
// 0056a3a8: ADD ESP,0xc
// 0056a3ab: JMP 0x0056a2b4
//   XREF to: 0056a2b4 (UNCONDITIONAL_JUMP)
// 0056a3b0: MOV EAX,[0x006844f0]
//   Label: LAB_0056a3b0
//   XREF to: 03f875e0 (PARAM)
//   XREF to: 006844f0 (READ)
// 0056a3b5: PUSH EAX
//   XREF to: 03f875e0 (DATA)
// 0056a3b6: CALL core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70
//   XREF to: 005e9e70 (UNCONDITIONAL_CALL)
// 0056a3bb: MOV EAX,[0x006844f0]
//   XREF to: 03f875e0 (PARAM)
//   XREF to: 006844f0 (READ)
// 0056a3c0: MOV EDX,dword ptr [EAX]
//   XREF to: 03f875e0 (READ)
// 0056a3c2: ADD ESP,0x4
// 0056a3c5: TEST EDX,EDX
// 0056a3c7: JNZ 0x0056a2c1
//   XREF to: 0056a2c1 (CONDITIONAL_JUMP)
// 0056a3cd: PUSH 0x1
// 0056a3cf: PUSH EAX
//   XREF to: 03f875e0 (DATA)
// 0056a3d0: CALL core_water.cpp_CWater_render_FUN_005ea320
//   XREF to: 005ea320 (UNCONDITIONAL_CALL)
// 0056a3d5: ADD ESP,0x8
// 0056a3d8: JMP 0x0056a2c1
//   XREF to: 0056a2c1 (UNCONDITIONAL_JUMP)
// 0056a3dd: CMP dword ptr [0x006810d8],0x0
//   Label: LAB_0056a3dd
//   XREF to: 006810d8 (READ)
// 0056a3e4: JZ 0x0056a34c
//   XREF to: 0056a34c (CONDITIONAL_JUMP)
// 0056a3ea: MOV EBP,dword ptr [EBX + 0x15acb4]
// 0056a3f0: XOR EDI,EDI
// 0056a3f2: TEST EBP,EBP
// 0056a3f4: JLE 0x0056a34c
//   XREF to: 0056a34c (CONDITIONAL_JUMP)
// 0056a3fa: MOV ESI,EBX
// 0056a3fc: MOV EAX,dword ptr [ESI + 0x15acb8]
//   Label: LAB_0056a3fc
// 0056a402: ADD EAX,0x1ec
// 0056a407: PUSH EAX
// 0056a408: CALL core_mirror.cpp_renderMirrorQuadDepth_FUN_00522800
//   XREF to: 00522800 (UNCONDITIONAL_CALL)
// 0056a40d: MOV EAX,dword ptr [ESI + 0x15acb8]
// 0056a413: MOV EDX,dword ptr [EAX + 0x180]
// 0056a419: ADD ESP,0x4
// 0056a41c: TEST EDX,EDX
// 0056a41e: JZ 0x0056a429
//   XREF to: 0056a429 (CONDITIONAL_JUMP)
// 0056a420: PUSH EAX
// 0056a421: CALL core_glass.cpp_CGlass_FUN_004e9ca0
//   XREF to: 004e9ca0 (UNCONDITIONAL_CALL)
// 0056a426: ADD ESP,0x4
// 0056a429: PUSH 0x0
//   Label: LAB_0056a429
// 0056a42b: PUSH EDI
// 0056a42c: PUSH EBX
// 0056a42d: CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   XREF to: 005709e0 (UNCONDITIONAL_CALL)
// 0056a432: ADD ESP,0xc
// 0056a435: PUSH 0x0
// 0056a437: PUSH dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0056a43b: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 0056a440: CALL core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
//   XREF to: 00497e50 (UNCONDITIONAL_CALL)
// 0056a445: ADD ESP,0xc
// 0056a448: PUSH EBX
// 0056a449: ADD ESI,0x4
// 0056a44c: INC EDI
// 0056a44d: CALL core_set.cpp_FUN_00570af0
//   XREF to: 00570af0 (UNCONDITIONAL_CALL)
// 0056a452: MOV EAX,dword ptr [EBX + 0x15acb4]
// 0056a458: ADD ESP,0x4
// 0056a45b: CMP EDI,EAX
// 0056a45d: JGE 0x0056a34c
//   XREF to: 0056a34c (CONDITIONAL_JUMP)
// 0056a463: JMP 0x0056a3fc
//   XREF to: 0056a3fc (UNCONDITIONAL_JUMP)
