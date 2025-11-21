// Name: core_set.cpp_CDemonSet_FUN_0056c1a0
// Address: 0056c1a0
// Address Range: [[0056c1a0, 0056c983]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056c1a0(CDemonSet * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da211 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e508 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539525 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0 (005805a0) at 00580680 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057b033 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581320 (00581320) at 005813b7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_comp_3_2f_3_2f_actren_3__00645d6b
//   double DOUBLE_00645d93 = 0.0555555555555556
//   double DOUBLE_00645d9b = 0.0000152587890625
//   double DOUBLE_00645da3 = 1000
//   CConsole* g_CConsolePtr = 0083b1a4
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGame* g_CGamePtr = 02d81a9c
//   CGore* g_CGorePtr = 02d83364
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CTerrain* g_CTerrainPtr = 03f8749c
//   CWater* g_CWaterPtr = 03f875e0
//   CWeather* g_CWeatherPtr = 03f95dc0
//   CConsole g_ConsolePtr
//   CFireEffect g_CFireEffectInstance
//   CDemonLight g_CDemonLightInstance
//   CGame g_CGameInstance
//   undefined4 DAT_02d81ac0
//   undefined4 DAT_02d81c84
//   undefined4 DAT_02d81ca8
//   undefined4 g_CGameInstance.delta_time_float
//   undefined4 g_CGlassClassInfo.name_hash
//   CGore g_CGoreInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
//   CDemonCamera g_CDemonCameraInstance
//   int g_ActiveLightCount
//   CDemonLight*[96] g_ActiveLightList
//   undefined4 DAT_03276f38
//   int g_DynamicLightCount
//   CDemonLight*[4] g_DynamicLights
//   undefined4 DAT_032776bc
//   int g_CoronaGlobeCount
//   CDemonGlobe*[100] g_CoronaGlobes
//   undefined4 DAT_032776d0
//   undefined4 DAT_0327785c
//   undefined4 DAT_03277860
//   undefined4 DAT_03277864
//   undefined4 DAT_032779f0
//   undefined4 DAT_032779f4
//   undefined4 DAT_03277b80
//   undefined4 DAT_03277b84
//   int g_RenderingShadows
//   CTerrain g_CTerrainInstance
//   CWater g_CWaterInstance
//   CWeather g_CWeatherInstance
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
//   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0
//   core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130
//   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
//   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
//   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860
//   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
//   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20
//   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90
//   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
//   core_fire.cpp_CFireEffect_render_FUN_004c7180
//   core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0
//   core_gore.cpp_CGore_FUN_004ed7b0
//   core_gore.cpp_FUN_004ed830
//   core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370
//   core_set.cpp_CDemonSet_FUN_0056be80
//   core_set.cpp_CDemonSet_FUN_0056cd60
//   core_set.cpp_CDemonSet_FUN_0056cf00
//   core_set.cpp_CDemonSet_FUN_0056fbd0
//   core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320
//   core_set.cpp_CDemonSet_setCameraView_FUN_00570c70
//   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
//   core_set.cpp_FUN_00570af0
//   core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70
//   core_terrain.cpp_CTerrain_render_FUN_005e1f50
//   core_water.cpp_CWater_render_FUN_005ea320
//   core_weather.cpp_CWeather_FUN_005ef190
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056c1a0(CDemonSet *this_ptr)

{
  undefined4 *puVar1;
  CDemonLight *pCVar2;
  void *p1;
  CDemonActor *this_ptr_00;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_stack_00000008;
  CDemonSet *pCVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (g_CGamePtr->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  if ((in_stack_00000008 != 0) &&
     (iVar3 = core_set_cpp_CDemonSet_isCameraPanning_FUN_00571320(this_ptr), iVar3 != 0)) {
    return;
  }
  if (in_stack_00000008 == 0) {
    g_DynamicLightCount = in_stack_00000008;
    g_CoronaGlobeCount = in_stack_00000008;
    core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(this_ptr);
    core_set_cpp_CDemonSet_FUN_0056be80(this_ptr);
  }
  core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(&g_CDemonCameraInstance);
  if (this_ptr->mirror_render_flag != 0) {
    core_set_cpp_CDemonSet_setCameraView_FUN_00570c70(this_ptr);
    this_ptr->mirror_render_flag = 0;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
  if ((g_RenderingShadows != 0) || (g_CGamePtr->shadow_flag != 0)) {
    iVar3 = 0;
    g_RenderingShadows = 0;
    core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451130(&g_CDemonCameraInstance);
    if (0 < g_ActiveLightCount) {
      iVar6 = 0;
      do {
        if ((*(CDemonLight **)((int)g_ActiveLightList + iVar6))->light_enabled_flag != 0) {
          core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
                    (&g_CDemonCameraInstance,*(CDemonLight **)((int)g_ActiveLightList + iVar6));
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar3 < g_ActiveLightCount);
    }
    lVar8 = 0;
    if (0 < g_DynamicLightCount) {
      uVar9 = 0;
      do {
        iVar6 = (int)((ulonglong)lVar8 >> 0x20);
        iVar3 = (int)uVar9;
        pCVar2 = *(CDemonLight **)((int)g_DynamicLights + iVar3);
        if ((pCVar2->light_enabled_flag != 0) && (pCVar2->antialiasing_enabled != 0)) {
          iVar4 = 0;
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
                    (&g_CDemonCameraInstance,pCVar2);
          iVar6 = (int)((ulonglong)lVar8 >> 0x20);
          iVar5 = (int)uVar9;
          iVar3 = iVar5;
          if (0 < this_ptr->mirror_glass_count) {
            do {
              core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar4,0);
              core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
                        (&g_CDemonCameraInstance,*(CDemonLight **)((int)g_DynamicLights + iVar5));
              iVar4 = iVar4 + 1;
              core_set_cpp_FUN_00570af0();
              iVar6 = (int)((ulonglong)lVar8 >> 0x20);
              iVar3 = (int)uVar9;
            } while (iVar4 < this_ptr->mirror_glass_count);
          }
        }
        uVar9 = (ulonglong)(iVar3 + 4);
        lVar8 = (ulonglong)(iVar6 + 1U) << 0x20;
      } while ((int)(iVar6 + 1U) < g_DynamicLightCount);
    }
    iVar3 = 0;
    if (0 < g_CoronaGlobeCount) {
      iVar6 = 0;
      do {
        iVar5 = 0;
        core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
                  (&g_CDemonCameraInstance,*(void **)((int)g_CoronaGlobes + iVar6),0);
        iVar4 = iVar6;
        if (0 < this_ptr->mirror_glass_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar5,0);
            core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
                      (&g_CDemonCameraInstance,*(void **)((int)g_CoronaGlobes + iVar6),1);
            iVar5 = iVar5 + 1;
            core_set_cpp_FUN_00570af0();
          } while (iVar5 < this_ptr->mirror_glass_count);
        }
        iVar6 = iVar4 + 4;
        iVar3 = iVar3 + 1;
      } while (iVar3 < g_CoronaGlobeCount);
    }
    iVar3 = 0;
    DAT_03277b80 = 0;
    if (0 < DAT_0327785c) {
      iVar6 = 0;
      do {
        p1 = *(void **)((int)&DAT_03277860 + iVar6);
        if (*(int *)((int)&DAT_032779f0 + iVar6) == 0) {
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
                    (&g_CDemonCameraInstance,p1,0);
          (&DAT_03277b84)[DAT_03277b80] = p1;
          DAT_03277b80 = DAT_03277b80 + 1;
        }
        else {
          core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
                    (this_ptr,*(int *)((int)&DAT_032779f0 + iVar6) + -1,0);
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
                    (&g_CDemonCameraInstance,p1,1);
          core_set_cpp_FUN_00570af0();
        }
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar3 < DAT_0327785c);
    }
    DAT_0327785c = 0;
  }
  if (g_CGamePtr->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0(&g_CDemonCameraInstance);
  if (g_CGamePtr->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
  }
  core_set_cpp_CDemonSet_FUN_0056fbd0(this_ptr);
  core_set_cpp_CDemonSet_FUN_0056cd60(this_ptr);
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
            (&g_CDemonCameraInstance,(CVector3f *)0x0,0.0);
  iVar3 = 0;
  core_gore_cpp_CGore_FUN_004ed7b0(g_CGorePtr);
  if (0 < this_ptr->mirror_glass_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar3,0);
      core_gore_cpp_CGore_FUN_004ed7b0(g_CGorePtr);
      iVar3 = iVar3 + 1;
      core_set_cpp_FUN_00570af0();
    } while (iVar3 < this_ptr->mirror_glass_count);
  }
  if (g_CWaterPtr->wave_animation_enabled != 0) {
    core_water_cpp_CWater_render_FUN_005ea320(g_CWaterPtr,0);
  }
  core_set_cpp_CDemonSet_FUN_0056cf00(this_ptr);
  if (this_ptr->player_on_train != 0) {
    core_terrain_cpp_CTerrain_render_FUN_005e1f50(g_CTerrainPtr);
  }
  iVar3 = 0;
  core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
  if (0 < this_ptr->mirror_glass_count) {
    do {
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar3,0);
      core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
      iVar3 = iVar3 + 1;
      core_set_cpp_FUN_00570af0();
    } while (iVar3 < this_ptr->mirror_glass_count);
  }
  core_weather_cpp_CWeather_FUN_005ef190();
  iVar3 = 0;
  if (0 < g_DynamicLightCount) {
    pCVar7 = (CDemonSet *)0x0;
    do {
      pCVar2 = *(CDemonLight **)(pCVar7[0x24].lights[0x6f].field8_0x21e + 0x952);
      if (pCVar2->light_enabled_flag != 0) {
        iVar3 = 0;
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
                  (&g_CDemonCameraInstance,(CVector3f *)&stack0xffffff9c,0.0);
        iVar6 = 0;
        pCVar7 = (CDemonSet *)0x56c8a8;
        core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(pCVar2);
        if (0 < this_ptr->mirror_glass_count) {
          do {
            pCVar7 = this_ptr;
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar6,0);
            iVar3 = 0x56c8cb;
            core_dlight_cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20(pCVar2);
            iVar6 = iVar6 + 1;
            core_set_cpp_FUN_00570af0();
          } while (iVar6 < this_ptr->mirror_glass_count);
        }
      }
      pCVar7 = (CDemonSet *)pCVar7->cameras;
      iVar3 = iVar3 + 1;
    } while (iVar3 < g_DynamicLightCount);
  }
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(&g_CDemonCameraInstance);
  core_gore_cpp_FUN_004ed830(g_CGorePtr);
  core_fire_cpp_CFireEffect_renderDecals_FUN_004c74a0(g_CFireEffectPtr,0,1);
  if (g_CWaterPtr->wave_animation_enabled == 0) {
    core_water_cpp_CWater_render_FUN_005ea320(g_CWaterPtr,0);
  }
  iVar3 = 0;
  pCVar7 = this_ptr;
  if (0 < (int)this_ptr->actor_list_ptr) {
    do {
      this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)pCVar7->actor_list_data,g_CGlassClassInfo.name_hash)
      ;
      if (this_ptr_00 != (CDemonActor *)0x0) {
        (*this_ptr_00->vtable->renderBackground)(this_ptr_00,0);
      }
      iVar3 = iVar3 + 1;
      pCVar7 = (CDemonSet *)pCVar7->cameras;
    } while (iVar3 < (int)this_ptr->actor_list_ptr);
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(&g_CDemonCameraInstance,0);
  iVar3 = 0;
  if (0 < g_DynamicLightCount) {
    iVar6 = 0;
    do {
      pCVar2 = *(CDemonLight **)((int)g_DynamicLights + iVar6);
      if (pCVar2->light_enabled_flag != 0) {
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
                  (&g_CDemonCameraInstance,(CVector3f *)&stack0xffffffa8,0.0);
        iVar4 = 0;
        core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(pCVar2);
        if (0 < this_ptr->mirror_glass_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar4,0);
            core_dlight_cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(pCVar2);
            iVar4 = iVar4 + 1;
            core_set_cpp_FUN_00570af0();
          } while (iVar4 < this_ptr->mirror_glass_count);
        }
      }
      iVar6 = iVar6 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < g_DynamicLightCount);
  }
  if ((g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) &&
     (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0)) {
    core_inv_cpp_CInventory_renderSelectedItems_FUN_00500370
              (&g_HeroActors[g_LocalHeroIndex]->inventory);
  }
  iVar3 = 0;
  core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
  if (0 < g_ActiveLightCount) {
    iVar6 = 0;
    do {
      puVar1 = (undefined4 *)((int)g_ActiveLightList + iVar6);
      iVar6 = iVar6 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80((CDemonLight *)*puVar1);
    } while (iVar3 < g_ActiveLightCount);
  }
  if (g_CGamePtr->profile_mode != 0) {
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"comp: %3.2f/%3.2f actren : %3.2f\n");
  }
  if (g_CGamePtr->field59_0x1e8 != 0) {
    core_setdir_cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70(this_ptr);
  }
  iVar3 = 0;
  pCVar7 = this_ptr;
  if (0 < (int)this_ptr->actor_list_ptr) {
    do {
      iVar6 = *(int *)pCVar7->actor_list_data;
      if ((undefined4 *)(iVar6 + 0x128) != (undefined4 *)(iVar6 + 0x20)) {
        *(undefined4 *)(iVar6 + 0x128) = *(undefined4 *)(iVar6 + 0x20);
        *(undefined4 *)(iVar6 + 300) = *(undefined4 *)(iVar6 + 0x24);
        *(undefined4 *)(iVar6 + 0x130) = *(undefined4 *)(iVar6 + 0x28);
      }
      if ((undefined4 *)(iVar6 + 0x134) != (undefined4 *)(iVar6 + 0x30)) {
        *(undefined4 *)(iVar6 + 0x134) = *(undefined4 *)(iVar6 + 0x30);
        *(undefined4 *)(iVar6 + 0x138) = *(undefined4 *)(iVar6 + 0x34);
        *(undefined4 *)(iVar6 + 0x13c) = *(undefined4 *)(iVar6 + 0x38);
      }
      iVar3 = iVar3 + 1;
      pCVar7 = (CDemonSet *)pCVar7->cameras;
    } while (iVar3 < (int)this_ptr->actor_list_ptr);
  }
  return;
}


// Assembly code:
// 0056c1a0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056c1a0
// 0056c1a1: PUSH ESI
// 0056c1a2: PUSH EDI
// 0056c1a3: PUSH EBP
// 0056c1a4: MOV EBP,ESP
// 0056c1a6: SUB ESP,0x54
// 0056c1a9: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056c1ac: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056c1af: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0056c1b4: CMP dword ptr [EAX + 0x20c],0x0
//   XREF to: 02d81ca8 (READ)
// 0056c1bb: JNZ 0x0056c80d
//   XREF to: 0056c80d (CONDITIONAL_JUMP)
// 0056c1c1: TEST ESI,ESI
//   Label: LAB_0056c1c1
// 0056c1c3: JNZ 0x0056c81a
//   XREF to: 0056c81a (CONDITIONAL_JUMP)
// 0056c1c9: TEST ESI,ESI
//   Label: LAB_0056c1c9
// 0056c1cb: JNZ 0x0056c1f0
//   XREF to: 0056c1f0 (CONDITIONAL_JUMP)
// 0056c1cd: PUSH 0x2d7eaf0
//   XREF to: 02d7eaf0 (DATA)
// 0056c1d2: PUSH EBX
// 0056c1d3: MOV dword ptr [0x032776b4],ESI
//   XREF to: 032776b4 (WRITE)
// 0056c1d9: MOV dword ptr [0x032776c8],ESI
//   XREF to: 032776c8 (WRITE)
// 0056c1df: CALL core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090
//   XREF to: 0056d090 (UNCONDITIONAL_CALL)
// 0056c1e4: ADD ESP,0x8
// 0056c1e7: PUSH EBX
// 0056c1e8: CALL core_set.cpp_CDemonSet_FUN_0056be80
//   XREF to: 0056be80 (UNCONDITIONAL_CALL)
// 0056c1ed: ADD ESP,0x4
// 0056c1f0: PUSH 0x32758e4
//   Label: LAB_0056c1f0
//   XREF to: 032758e4 (DATA)
// 0056c1f5: CALL core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860
//   XREF to: 0044c860 (UNCONDITIONAL_CALL)
// 0056c1fa: MOV EDI,dword ptr [EBX + 0x161654]
// 0056c200: ADD ESP,0x4
// 0056c203: TEST EDI,EDI
// 0056c205: JZ 0x0056c21a
//   XREF to: 0056c21a (CONDITIONAL_JUMP)
// 0056c207: PUSH EBX
// 0056c208: CALL core_set.cpp_CDemonSet_setCameraView_FUN_00570c70
//   XREF to: 00570c70 (UNCONDITIONAL_CALL)
// 0056c20d: ADD ESP,0x4
// 0056c210: MOV dword ptr [EBX + 0x161654],0x0
// 0056c21a: PUSH 0x1
//   Label: LAB_0056c21a
// 0056c21c: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056c221: CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   XREF to: 0044c430 (UNCONDITIONAL_CALL)
// 0056c226: MOV EAX,[0x032bd790]
//   XREF to: 032bd790 (READ)
// 0056c22b: ADD ESP,0x8
// 0056c22e: TEST EAX,EAX
// 0056c230: JZ 0x0056c836
//   XREF to: 0056c836 (CONDITIONAL_JUMP)
// 0056c236: PUSH 0x32758e4
//   Label: LAB_0056c236
//   XREF to: 032758e4 (DATA)
// 0056c23b: XOR ECX,ECX
// 0056c23d: XOR ESI,ESI
// 0056c23f: MOV dword ptr [0x032bd790],ECX
//   XREF to: 032bd790 (WRITE)
// 0056c245: CALL core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130
//   XREF to: 00451130 (UNCONDITIONAL_CALL)
// 0056c24a: MOV EDI,dword ptr [0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056c250: ADD ESP,0x4
// 0056c253: TEST EDI,EDI
// 0056c255: JLE 0x0056c283
//   XREF to: 0056c283 (CONDITIONAL_JUMP)
// 0056c257: XOR EDI,EDI
// 0056c259: MOV EAX,dword ptr [EDI + 0x3276f34]
//   Label: LAB_0056c259
//   XREF to: 03276f34 (READ)
//   XREF to: 03276f38 (READ)
// 0056c25f: CMP dword ptr [EAX + 0x1cb4],0x0
// 0056c266: JZ 0x0056c276
//   XREF to: 0056c276 (CONDITIONAL_JUMP)
// 0056c268: PUSH EAX
// 0056c269: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056c26e: CALL core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
//   XREF to: 00450e30 (UNCONDITIONAL_CALL)
// 0056c273: ADD ESP,0x8
// 0056c276: MOV EAX,[0x03276f30]
//   Label: LAB_0056c276
//   XREF to: 03276f30 (READ)
// 0056c27b: INC ESI
// 0056c27c: ADD EDI,0x4
// 0056c27f: CMP ESI,EAX
// 0056c281: JL 0x0056c259
//   XREF to: 0056c259 (CONDITIONAL_JUMP)
// 0056c283: XOR EDX,EDX
//   Label: LAB_0056c283
// 0056c285: MOV ECX,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056c28b: MOV dword ptr [EBP + -0x18],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0056c28e: TEST ECX,ECX
// 0056c290: JLE 0x0056c323
//   XREF to: 0056c323 (CONDITIONAL_JUMP)
// 0056c296: MOV dword ptr [EBP + -0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056c299: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0056c299
//   XREF to: Stack[-0x1c] (READ)
// 0056c29c: MOV EAX,dword ptr [EAX + 0x32776b8]
//   XREF to: 032776b8 (DATA)
//   XREF to: 032776bc (DATA)
// 0056c2a2: CMP dword ptr [EAX + 0x1cb4],0x0
// 0056c2a9: JZ 0x0056c305
//   XREF to: 0056c305 (CONDITIONAL_JUMP)
// 0056c2ab: CMP dword ptr [EAX + 0x1cd0],0x0
// 0056c2b2: JZ 0x0056c305
//   XREF to: 0056c305 (CONDITIONAL_JUMP)
// 0056c2b4: PUSH EAX
// 0056c2b5: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056c2ba: XOR ESI,ESI
// 0056c2bc: CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
//   XREF to: 00450ac0 (UNCONDITIONAL_CALL)
// 0056c2c1: MOV EAX,dword ptr [EBX + 0x15acb4]
// 0056c2c7: ADD ESP,0x8
// 0056c2ca: TEST EAX,EAX
// 0056c2cc: JLE 0x0056c305
//   XREF to: 0056c305 (CONDITIONAL_JUMP)
// 0056c2ce: MOV EDI,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0056c2d1: PUSH 0x0
//   Label: LAB_0056c2d1
// 0056c2d3: PUSH ESI
// 0056c2d4: PUSH EBX
// 0056c2d5: CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   XREF to: 005709e0 (UNCONDITIONAL_CALL)
// 0056c2da: ADD ESP,0xc
// 0056c2dd: MOV EDX,dword ptr [EDI + 0x32776b8]
//   XREF to: 032776b8 (DATA)
// 0056c2e3: PUSH EDX
// 0056c2e4: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056c2e9: CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
//   XREF to: 00450ac0 (UNCONDITIONAL_CALL)
// 0056c2ee: ADD ESP,0x8
// 0056c2f1: PUSH EBX
// 0056c2f2: INC ESI
// 0056c2f3: CALL core_set.cpp_FUN_00570af0
//   XREF to: 00570af0 (UNCONDITIONAL_CALL)
// 0056c2f8: MOV ECX,dword ptr [EBX + 0x15acb4]
// 0056c2fe: ADD ESP,0x4
// 0056c301: CMP ESI,ECX
// 0056c303: JL 0x0056c2d1
//   XREF to: 0056c2d1 (CONDITIONAL_JUMP)
// 0056c305: MOV ECX,dword ptr [EBP + -0xc]
//   Label: LAB_0056c305
//   XREF to: Stack[-0x1c] (READ)
// 0056c308: MOV ESI,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0056c30b: MOV EDI,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056c311: ADD ECX,0x4
// 0056c314: INC ESI
// 0056c315: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056c318: MOV dword ptr [EBP + -0x18],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 0056c31b: CMP ESI,EDI
// 0056c31d: JL 0x0056c299
//   XREF to: 0056c299 (CONDITIONAL_JUMP)
// 0056c323: XOR EAX,EAX
//   Label: LAB_0056c323
// 0056c325: MOV EDX,dword ptr [0x032776c8]
//   XREF to: 032776c8 (READ)
// 0056c32b: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0056c32e: TEST EDX,EDX
// 0056c330: JLE 0x0056c3b1
//   XREF to: 0056c3b1 (CONDITIONAL_JUMP)
// 0056c336: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0056c339: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0056c339
//   XREF to: Stack[-0x18] (READ)
// 0056c33c: PUSH 0x0
// 0056c33e: MOV EDX,dword ptr [EAX + 0x32776cc]
//   XREF to: 032776cc (DATA)
//   XREF to: 032776d0 (DATA)
// 0056c344: PUSH EDX
// 0056c345: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056c34a: XOR ESI,ESI
// 0056c34c: CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
//   XREF to: 004518f0 (UNCONDITIONAL_CALL)
// 0056c351: MOV ECX,dword ptr [EBX + 0x15acb4]
// 0056c357: ADD ESP,0xc
// 0056c35a: TEST ECX,ECX
// 0056c35c: JLE 0x0056c397
//   XREF to: 0056c397 (CONDITIONAL_JUMP)
// 0056c35e: MOV EDI,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0056c361: PUSH 0x0
//   Label: LAB_0056c361
// 0056c363: PUSH ESI
// 0056c364: PUSH EBX
// 0056c365: CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   XREF to: 005709e0 (UNCONDITIONAL_CALL)
// 0056c36a: ADD ESP,0xc
// 0056c36d: PUSH 0x1
// 0056c36f: MOV EAX,dword ptr [EDI + 0x32776cc]
//   XREF to: 032776cc (DATA)
// 0056c375: PUSH EAX
// 0056c376: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056c37b: CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
//   XREF to: 004518f0 (UNCONDITIONAL_CALL)
// 0056c380: ADD ESP,0xc
// 0056c383: PUSH EBX
// 0056c384: INC ESI
// 0056c385: CALL core_set.cpp_FUN_00570af0
//   XREF to: 00570af0 (UNCONDITIONAL_CALL)
// 0056c38a: MOV EDX,dword ptr [EBX + 0x15acb4]
// 0056c390: ADD ESP,0x4
// 0056c393: CMP ESI,EDX
// 0056c395: JL 0x0056c361
//   XREF to: 0056c361 (CONDITIONAL_JUMP)
// 0056c397: MOV ESI,dword ptr [EBP + -0x8]
//   Label: LAB_0056c397
//   XREF to: Stack[-0x18] (READ)
// 0056c39a: MOV EDI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0056c39d: MOV EDX,dword ptr [0x032776c8]
//   XREF to: 032776c8 (READ)
// 0056c3a3: ADD ESI,0x4
// 0056c3a6: INC EDI
// 0056c3a7: MOV dword ptr [EBP + -0x8],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0056c3aa: MOV dword ptr [EBP + -0x10],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0056c3ad: CMP EDI,EDX
// 0056c3af: JL 0x0056c339
//   XREF to: 0056c339 (CONDITIONAL_JUMP)
// 0056c3b1: XOR ECX,ECX
//   Label: LAB_0056c3b1
// 0056c3b3: MOV EDI,dword ptr [0x0327785c]
//   XREF to: 0327785c (READ)
// 0056c3b9: MOV dword ptr [EBP + -0x14],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0056c3bc: MOV dword ptr [0x03277b80],ECX
//   XREF to: 03277b80 (WRITE)
// 0056c3c2: TEST EDI,EDI
// 0056c3c4: JLE 0x0056c414
//   XREF to: 0056c414 (CONDITIONAL_JUMP)
// 0056c3c6: XOR ESI,ESI
// 0056c3c8: MOV EAX,dword ptr [ESI + 0x32779f0]
//   Label: LAB_0056c3c8
//   XREF to: 032779f0 (READ)
//   XREF to: 032779f4 (READ)
// 0056c3ce: MOV EDI,dword ptr [ESI + 0x3277860]
//   XREF to: 03277860 (READ)
//   XREF to: 03277864 (READ)
// 0056c3d4: TEST EAX,EAX
// 0056c3d6: JNZ 0x0056c84a
//   XREF to: 0056c84a (CONDITIONAL_JUMP)
// 0056c3dc: PUSH EAX
// 0056c3dd: PUSH EDI
// 0056c3de: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056c3e3: CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
//   XREF to: 004518f0 (UNCONDITIONAL_CALL)
// 0056c3e8: MOV EAX,[0x03277b80]
//   XREF to: 03277b80 (READ)
// 0056c3ed: MOV dword ptr [EAX*0x4 + 0x3277b84],EDI
//   XREF to: 03277b84 (WRITE)
// 0056c3f4: LEA EDI,[EAX + 0x1]
// 0056c3f7: ADD ESP,0xc
// 0056c3fa: MOV dword ptr [0x03277b80],EDI
//   XREF to: 03277b80 (WRITE)
// 0056c400: MOV EDI,dword ptr [EBP + -0x14]
//   Label: LAB_0056c400
//   XREF to: Stack[-0x24] (READ)
// 0056c403: MOV EDX,dword ptr [0x0327785c]
//   XREF to: 0327785c (READ)
// 0056c409: INC EDI
// 0056c40a: ADD ESI,0x4
// 0056c40d: MOV dword ptr [EBP + -0x14],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0056c410: CMP EDI,EDX
// 0056c412: JL 0x0056c3c8
//   XREF to: 0056c3c8 (CONDITIONAL_JUMP)
// 0056c414: XOR ECX,ECX
//   Label: LAB_0056c414
// 0056c416: MOV dword ptr [0x0327785c],ECX
//   XREF to: 0327785c (WRITE)
// 0056c41c: MOV EAX,[0x0067b654]
//   Label: LAB_0056c41c
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0056c421: CMP dword ptr [EAX + 0x20c],0x0
//   XREF to: 02d81ca8 (READ)
// 0056c428: JZ 0x0056c432
//   XREF to: 0056c432 (CONDITIONAL_JUMP)
// 0056c42a: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0056c42f: MOV dword ptr [EBP + -0x34],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0056c432: PUSH 0x32758e4
//   Label: LAB_0056c432
//   XREF to: 032758e4 (DATA)
// 0056c437: CALL core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0
//   XREF to: 004511c0 (UNCONDITIONAL_CALL)
// 0056c43c: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0056c441: MOV ESI,dword ptr [EAX + 0x20c]
//   XREF to: 02d81ca8 (READ)
// 0056c447: ADD ESP,0x4
// 0056c44a: TEST ESI,ESI
// 0056c44c: JZ 0x0056c456
//   XREF to: 0056c456 (CONDITIONAL_JUMP)
// 0056c44e: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0056c453: MOV dword ptr [EBP + -0x2c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0056c456: PUSH 0xc
//   Label: LAB_0056c456
// 0056c458: PUSH EBX
// 0056c459: CALL core_set.cpp_CDemonSet_FUN_0056fbd0
//   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)
// 0056c45e: ADD ESP,0x8
// 0056c461: PUSH EBX
// 0056c462: CALL core_set.cpp_CDemonSet_FUN_0056cd60
//   XREF to: 0056cd60 (UNCONDITIONAL_CALL)
// 0056c467: ADD ESP,0x4
// 0056c46a: PUSH 0x0
// 0056c46c: PUSH 0x0
// 0056c46e: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056c473: CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
//   XREF to: 004537d0 (UNCONDITIONAL_CALL)
// 0056c478: ADD ESP,0xc
// 0056c47b: MOV EDI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 0056c481: PUSH EDI
//   XREF to: 02d83364 (DATA)
// 0056c482: XOR ESI,ESI
// 0056c484: CALL core_gore.cpp_CGore_FUN_004ed7b0
//   XREF to: 004ed7b0 (UNCONDITIONAL_CALL)
// 0056c489: MOV EAX,dword ptr [EBX + 0x15acb4]
// 0056c48f: ADD ESP,0x4
// 0056c492: TEST EAX,EAX
// 0056c494: JLE 0x0056c4d0
//   XREF to: 0056c4d0 (CONDITIONAL_JUMP)
// 0056c496: PUSH 0x0
//   Label: LAB_0056c496
// 0056c498: PUSH ESI
// 0056c499: PUSH EBX
// 0056c49a: CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   XREF to: 005709e0 (UNCONDITIONAL_CALL)
// 0056c49f: ADD ESP,0xc
// 0056c4a2: MOV EDX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0056c4a8: PUSH EDX
//   XREF to: 02d83364 (DATA)
// 0056c4a9: CALL core_gore.cpp_CGore_FUN_004ed7b0
//   XREF to: 004ed7b0 (UNCONDITIONAL_CALL)
// 0056c4ae: ADD ESP,0x4
// 0056c4b1: PUSH EBX
// 0056c4b2: INC ESI
// 0056c4b3: CALL core_set.cpp_FUN_00570af0
//   XREF to: 00570af0 (UNCONDITIONAL_CALL)
// 0056c4b8: MOV ECX,dword ptr [EBX + 0x15acb4]
// 0056c4be: ADD ESP,0x4
// 0056c4c1: CMP ESI,ECX
// 0056c4c3: JL 0x0056c496
//   XREF to: 0056c496 (CONDITIONAL_JUMP)
// 0056c4c5: LEA EAX,[EAX]
// 0056c4cb: LEA EDX,[EDX]
//   XREF to: 02d83364 (DATA)
// 0056c4ce: MOV EBX,EBX
// 0056c4d0: MOV EAX,[0x006844f0]
//   Label: LAB_0056c4d0
//   XREF to: 03f875e0 (PARAM)
//   XREF to: 006844f0 (READ)
// 0056c4d5: CMP dword ptr [EAX],0x0
//   XREF to: 03f875e0 (READ)
// 0056c4d8: JZ 0x0056c4e5
//   XREF to: 0056c4e5 (CONDITIONAL_JUMP)
// 0056c4da: PUSH 0x0
// 0056c4dc: PUSH EAX
//   XREF to: 03f875e0 (DATA)
// 0056c4dd: CALL core_water.cpp_CWater_render_FUN_005ea320
//   XREF to: 005ea320 (UNCONDITIONAL_CALL)
// 0056c4e2: ADD ESP,0x8
// 0056c4e5: PUSH EBX
//   Label: LAB_0056c4e5
// 0056c4e6: CALL core_set.cpp_CDemonSet_FUN_0056cf00
//   XREF to: 0056cf00 (UNCONDITIONAL_CALL)
// 0056c4eb: MOV EDI,dword ptr [EBX + 0x15aca8]
// 0056c4f1: ADD ESP,0x4
// 0056c4f4: TEST EDI,EDI
// 0056c4f6: JZ 0x0056c508
//   XREF to: 0056c508 (CONDITIONAL_JUMP)
// 0056c4f8: PUSH 0x0
// 0056c4fa: MOV EAX,[0x006843f8]
//   XREF to: 03f8749c (PARAM)
//   XREF to: 006843f8 (READ)
// 0056c4ff: PUSH EAX
//   XREF to: 03f8749c (DATA)
// 0056c500: CALL core_terrain.cpp_CTerrain_render_FUN_005e1f50
//   XREF to: 005e1f50 (UNCONDITIONAL_CALL)
// 0056c505: ADD ESP,0x8
// 0056c508: MOV EDX,dword ptr [0x0067a3d0]
//   Label: LAB_0056c508
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0056c50e: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 0056c50f: XOR ESI,ESI
// 0056c511: CALL core_fire.cpp_CFireEffect_render_FUN_004c7180
//   XREF to: 004c7180 (UNCONDITIONAL_CALL)
// 0056c516: MOV ECX,dword ptr [EBX + 0x15acb4]
// 0056c51c: ADD ESP,0x4
// 0056c51f: TEST ECX,ECX
// 0056c521: JLE 0x0056c560
//   XREF to: 0056c560 (CONDITIONAL_JUMP)
// 0056c523: PUSH 0x0
//   Label: LAB_0056c523
// 0056c525: PUSH ESI
// 0056c526: PUSH EBX
// 0056c527: CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   XREF to: 005709e0 (UNCONDITIONAL_CALL)
// 0056c52c: ADD ESP,0xc
// 0056c52f: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 0056c535: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 0056c536: CALL core_fire.cpp_CFireEffect_render_FUN_004c7180
//   XREF to: 004c7180 (UNCONDITIONAL_CALL)
// 0056c53b: ADD ESP,0x4
// 0056c53e: PUSH EBX
// 0056c53f: INC ESI
// 0056c540: CALL core_set.cpp_FUN_00570af0
//   XREF to: 00570af0 (UNCONDITIONAL_CALL)
// 0056c545: MOV EAX,dword ptr [EBX + 0x15acb4]
// 0056c54b: ADD ESP,0x4
// 0056c54e: CMP ESI,EAX
// 0056c550: JL 0x0056c523
//   XREF to: 0056c523 (CONDITIONAL_JUMP)
// 0056c552: LEA EAX,[EAX]
// 0056c558: LEA EDX,[EDX]
//   XREF to: 02d12db0 (DATA)
// 0056c55e: MOV EAX,EAX
// 0056c560: MOV EDX,dword ptr [0x006848fc]
//   Label: LAB_0056c560
//   XREF to: 03f95dc0 (PARAM)
//   XREF to: 006848fc (READ)
// 0056c566: PUSH EDX
//   XREF to: 03f95dc0 (DATA)
// 0056c567: CALL core_weather.cpp_CWeather_FUN_005ef190
//   XREF to: 005ef190 (UNCONDITIONAL_CALL)
// 0056c56c: MOV ESI,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056c572: XOR ECX,ECX
// 0056c574: ADD ESP,0x4
// 0056c577: MOV dword ptr [EBP + -0x1c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 0056c57a: TEST ESI,ESI
// 0056c57c: JLE 0x0056c5b1
//   XREF to: 0056c5b1 (CONDITIONAL_JUMP)
// 0056c57e: MOV dword ptr [EBP + -0x24],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 0056c581: MOV EDI,dword ptr [EBP + -0x24]
//   Label: LAB_0056c581
//   XREF to: Stack[-0x34] (READ)
// 0056c584: MOV EDI,dword ptr [EDI + 0x32776b8]
//   XREF to: 032776b8 (DATA)
//   XREF to: 032776bc (DATA)
// 0056c58a: CMP dword ptr [EDI + 0x1cb4],0x0
// 0056c591: JNZ 0x0056c875
//   XREF to: 0056c875 (CONDITIONAL_JUMP)
// 0056c597: MOV EDI,dword ptr [EBP + -0x24]
//   Label: LAB_0056c597
//   XREF to: Stack[-0x34] (READ)
// 0056c59a: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0056c59d: MOV EDX,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056c5a3: ADD EDI,0x4
// 0056c5a6: INC EAX
// 0056c5a7: MOV dword ptr [EBP + -0x24],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 0056c5aa: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0056c5ad: CMP EAX,EDX
// 0056c5af: JL 0x0056c581
//   XREF to: 0056c581 (CONDITIONAL_JUMP)
// 0056c5b1: PUSH 0x32758e4
//   Label: LAB_0056c5b1
//   XREF to: 032758e4 (DATA)
// 0056c5b6: CALL core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70
//   XREF to: 0044cc70 (UNCONDITIONAL_CALL)
// 0056c5bb: ADD ESP,0x4
// 0056c5be: PUSH 0x1
// 0056c5c0: PUSH 0x0
// 0056c5c2: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0056c5c8: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 0056c5c9: CALL core_gore.cpp_FUN_004ed830
//   XREF to: 004ed830 (UNCONDITIONAL_CALL)
// 0056c5ce: ADD ESP,0xc
// 0056c5d1: PUSH 0x1
// 0056c5d3: PUSH 0x0
// 0056c5d5: MOV ESI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 0056c5db: PUSH ESI
//   XREF to: 02d12db0 (DATA)
// 0056c5dc: CALL core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0
//   XREF to: 004c74a0 (UNCONDITIONAL_CALL)
// 0056c5e1: MOV EAX,[0x006844f0]
//   XREF to: 03f875e0 (PARAM)
//   XREF to: 006844f0 (READ)
// 0056c5e6: MOV EDI,dword ptr [EAX]
//   XREF to: 03f875e0 (READ)
// 0056c5e8: ADD ESP,0xc
// 0056c5eb: TEST EDI,EDI
// 0056c5ed: JNZ 0x0056c5f9
//   XREF to: 0056c5f9 (CONDITIONAL_JUMP)
// 0056c5ef: PUSH EDI
// 0056c5f0: PUSH EAX
//   XREF to: 03f875e0 (DATA)
// 0056c5f1: CALL core_water.cpp_CWater_render_FUN_005ea320
//   XREF to: 005ea320 (UNCONDITIONAL_CALL)
// 0056c5f6: ADD ESP,0x8
// 0056c5f9: MOV EAX,dword ptr [EBX + 0x14d154]
//   Label: LAB_0056c5f9
// 0056c5ff: XOR EDI,EDI
// 0056c601: TEST EAX,EAX
// 0056c603: JLE 0x0056c63d
//   XREF to: 0056c63d (CONDITIONAL_JUMP)
// 0056c605: MOV ESI,EBX
// 0056c607: MOV EAX,[0x02d83360]
//   Label: LAB_0056c607
//   XREF to: 02d83360 (READ)
// 0056c60c: PUSH EAX
// 0056c60d: MOV EDX,dword ptr [ESI + 0x14d158]
// 0056c613: PUSH EDX
// 0056c614: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0056c619: ADD ESP,0x8
// 0056c61c: TEST EAX,EAX
// 0056c61e: JZ 0x0056c62f
//   XREF to: 0056c62f (CONDITIONAL_JUMP)
// 0056c620: PUSH 0x0
// 0056c622: MOV EDX,dword ptr [EAX + 0x154]
// 0056c628: PUSH EAX
// 0056c629: CALL dword ptr [EDX + 0x10]
// 0056c62c: ADD ESP,0x8
// 0056c62f: INC EDI
//   Label: LAB_0056c62f
// 0056c630: MOV EDX,dword ptr [EBX + 0x14d154]
// 0056c636: ADD ESI,0x4
// 0056c639: CMP EDI,EDX
// 0056c63b: JL 0x0056c607
//   XREF to: 0056c607 (CONDITIONAL_JUMP)
// 0056c63d: PUSH 0x0
//   Label: LAB_0056c63d
// 0056c63f: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056c644: CALL core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
//   XREF to: 0044cdf0 (UNCONDITIONAL_CALL)
// 0056c649: MOV ESI,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056c64f: XOR ECX,ECX
// 0056c651: ADD ESP,0x8
// 0056c654: MOV dword ptr [EBP + -0x20],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 0056c657: TEST ESI,ESI
// 0056c659: JLE 0x0056c68e
//   XREF to: 0056c68e (CONDITIONAL_JUMP)
// 0056c65b: MOV dword ptr [EBP + -0x28],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 0056c65e: MOV EDI,dword ptr [EBP + -0x28]
//   Label: LAB_0056c65e
//   XREF to: Stack[-0x38] (READ)
// 0056c661: MOV EDI,dword ptr [EDI + 0x32776b8]
//   XREF to: 032776b8 (DATA)
//   XREF to: 032776bc (DATA)
// 0056c667: CMP dword ptr [EDI + 0x1cb4],0x0
// 0056c66e: JNZ 0x0056c8e8
//   XREF to: 0056c8e8 (CONDITIONAL_JUMP)
// 0056c674: MOV ESI,dword ptr [EBP + -0x28]
//   Label: LAB_0056c674
//   XREF to: Stack[-0x38] (READ)
// 0056c677: MOV EDI,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0056c67a: MOV EDX,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056c680: ADD ESI,0x4
// 0056c683: INC EDI
// 0056c684: MOV dword ptr [EBP + -0x28],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 0056c687: MOV dword ptr [EBP + -0x20],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 0056c68a: CMP EDI,EDX
// 0056c68c: JL 0x0056c65e
//   XREF to: 0056c65e (CONDITIONAL_JUMP)
// 0056c68e: MOV EAX,[0x02db87d0]
//   Label: LAB_0056c68e
//   XREF to: 02db87d0 (READ)
// 0056c693: SHL EAX,0x2
// 0056c696: MOV ECX,dword ptr [EAX + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0056c69c: TEST ECX,ECX
// 0056c69e: JZ 0x0056c6b0
//   XREF to: 0056c6b0 (CONDITIONAL_JUMP)
// 0056c6a0: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 0056c6a6: CMP dword ptr [EDX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 0056c6aa: JZ 0x0056c95b
//   XREF to: 0056c95b (CONDITIONAL_JUMP)
// 0056c6b0: PUSH 0x0
//   Label: LAB_0056c6b0
// 0056c6b2: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056c6b7: XOR EDI,EDI
// 0056c6b9: CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
// 0056c6be: MOV EAX,[0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056c6c3: ADD ESP,0x8
// 0056c6c6: TEST EAX,EAX
// 0056c6c8: JLE 0x0056c6f0
//   XREF to: 0056c6f0 (CONDITIONAL_JUMP)
// 0056c6ca: XOR ESI,ESI
// 0056c6cc: MOV EDX,dword ptr [ESI + 0x3276f34]
//   Label: LAB_0056c6cc
//   XREF to: 03276f34 (READ)
//   XREF to: 03276f38 (READ)
// 0056c6d2: PUSH EDX
// 0056c6d3: ADD ESI,0x4
// 0056c6d6: INC EDI
// 0056c6d7: CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
//   XREF to: 00472f80 (UNCONDITIONAL_CALL)
// 0056c6dc: MOV ECX,dword ptr [0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056c6e2: ADD ESP,0x4
// 0056c6e5: CMP EDI,ECX
// 0056c6e7: JL 0x0056c6cc
//   XREF to: 0056c6cc (CONDITIONAL_JUMP)
// 0056c6e9: LEA EAX,[EAX]
// 0056c6ef: NOP
// 0056c6f0: MOV EAX,[0x0067b654]
//   Label: LAB_0056c6f0
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0056c6f5: CMP dword ptr [EAX + 0x20c],0x0
//   XREF to: 02d81ca8 (READ)
// 0056c6fc: JZ 0x0056c79f
//   XREF to: 0056c79f (CONDITIONAL_JUMP)
// 0056c702: MOV EDI,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0056c705: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0056c70a: SUB EAX,EDI
// 0056c70c: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0056c70f: FLD double ptr [0x00645d93]
//   XREF to: 00645d93 (READ)
// 0056c715: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0056c718: FMUL ST1
// 0056c71a: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0056c71f: MOV EDX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0056c722: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0056c728: MOV EAX,EDI
// 0056c72a: FXCH
// 0056c72c: FLD double ptr [0x00645d9b]
//   XREF to: 00645d9b (READ)
// 0056c732: FXCH
// 0056c734: FMUL ST1
// 0056c736: SUB EAX,EDX
// 0056c738: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0056c73b: FLD double ptr [0x00645da3]
//   XREF to: 00645da3 (READ)
// 0056c741: FXCH
// 0056c743: FMUL ST1
// 0056c745: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0056c748: MOV EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0056c74b: FMUL ST5
// 0056c74d: SUB EAX,EDX
// 0056c74f: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0056c752: FMUL ST3
// 0056c754: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0056c757: FMULP ST6
// 0056c759: FMUL ST2
// 0056c75b: FXCH ST5
// 0056c75d: FMULP ST3
// 0056c75f: FLD1
// 0056c761: FXCH ST3
// 0056c763: FMULP ST2
// 0056c765: FXCH ST2
// 0056c767: FDIVRP ST3,ST0
// 0056c769: FXCH
// 0056c76b: FMUL ST2
// 0056c76d: FXCH ST3
// 0056c76f: FMUL ST2
// 0056c771: FXCH
// 0056c773: FMULP ST2
// 0056c775: SUB ESP,0x8
// 0056c778: FXCH ST2
// 0056c77a: FSTP double ptr [ESP]
// 0056c77d: SUB ESP,0x8
// 0056c780: FXCH
// 0056c782: FSTP double ptr [ESP]
// 0056c785: SUB ESP,0x8
// 0056c788: FSTP double ptr [ESP]
// 0056c78b: PUSH 0x645d6b
//   XREF to: 00645d6b (DATA)
// 0056c790: MOV ESI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0056c796: PUSH ESI
//   XREF to: 0083b1a4 (DATA)
// 0056c797: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0056c79c: ADD ESP,0x20
// 0056c79f: MOV EAX,[0x0067b654]
//   Label: LAB_0056c79f
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0056c7a4: CMP dword ptr [EAX + 0x1e8],0x0
//   XREF to: 02d81c84 (READ)
// 0056c7ab: JZ 0x0056c7b6
//   XREF to: 0056c7b6 (CONDITIONAL_JUMP)
// 0056c7ad: PUSH EBX
// 0056c7ae: CALL core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70
//   XREF to: 00575f70 (UNCONDITIONAL_CALL)
// 0056c7b3: ADD ESP,0x4
// 0056c7b6: MOV EAX,dword ptr [EBX + 0x14d154]
//   Label: LAB_0056c7b6
// 0056c7bc: XOR EDX,EDX
// 0056c7be: TEST EAX,EAX
// 0056c7c0: JLE 0x0056c806
//   XREF to: 0056c806 (CONDITIONAL_JUMP)
// 0056c7c2: MOV ECX,EBX
// 0056c7c4: MOV ESI,dword ptr [ECX + 0x14d158]
//   Label: LAB_0056c7c4
// 0056c7ca: LEA EDI,[ESI + 0x128]
// 0056c7d0: LEA EAX,[ESI + 0x20]
// 0056c7d3: CMP EDI,EAX
// 0056c7d5: JNZ 0x0056c96f
//   XREF to: 0056c96f (CONDITIONAL_JUMP)
// 0056c7db: LEA EAX,[ESI + 0x134]
//   Label: LAB_0056c7db
// 0056c7e1: ADD ESI,0x30
// 0056c7e4: CMP EAX,ESI
// 0056c7e6: JZ 0x0056c7f8
//   XREF to: 0056c7f8 (CONDITIONAL_JUMP)
// 0056c7e8: MOV EDI,dword ptr [ESI]
// 0056c7ea: MOV dword ptr [EAX],EDI
// 0056c7ec: MOV EDI,dword ptr [ESI + 0x4]
// 0056c7ef: MOV dword ptr [EAX + 0x4],EDI
// 0056c7f2: MOV EDI,dword ptr [ESI + 0x8]
// 0056c7f5: MOV dword ptr [EAX + 0x8],EDI
// 0056c7f8: INC EDX
//   Label: LAB_0056c7f8
// 0056c7f9: MOV ESI,dword ptr [EBX + 0x14d154]
// 0056c7ff: ADD ECX,0x4
// 0056c802: CMP EDX,ESI
// 0056c804: JL 0x0056c7c4
//   XREF to: 0056c7c4 (CONDITIONAL_JUMP)
// 0056c806: MOV ESP,EBP
//   Label: LAB_0056c806
// 0056c808: POP EBP
// 0056c809: POP EDI
// 0056c80a: POP ESI
// 0056c80b: POP EBX
// 0056c80c: RET
// 0056c80d: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_0056c80d
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0056c812: MOV dword ptr [EBP + -0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0056c815: JMP 0x0056c1c1
//   XREF to: 0056c1c1 (UNCONDITIONAL_JUMP)
// 0056c81a: PUSH EBX
//   Label: LAB_0056c81a
// 0056c81b: CALL core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320
//   XREF to: 00571320 (UNCONDITIONAL_CALL)
// 0056c820: ADD ESP,0x4
// 0056c823: TEST EAX,EAX
// 0056c825: JZ 0x0056c1c9
//   XREF to: 0056c1c9 (CONDITIONAL_JUMP)
// 0056c82b: PUSH EBX
// 0056c82c: ADD ESP,0x4
// 0056c82f: MOV ESP,EBP
// 0056c831: POP EBP
// 0056c832: POP EDI
// 0056c833: POP ESI
// 0056c834: POP EBX
// 0056c835: RET
// 0056c836: MOV EAX,[0x0067b654]
//   Label: LAB_0056c836
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0056c83b: CMP dword ptr [EAX + 0x24],0x0
//   XREF to: 02d81ac0 (READ)
// 0056c83f: JNZ 0x0056c236
//   XREF to: 0056c236 (CONDITIONAL_JUMP)
// 0056c845: JMP 0x0056c41c
//   XREF to: 0056c41c (UNCONDITIONAL_JUMP)
// 0056c84a: PUSH 0x0
//   Label: LAB_0056c84a
// 0056c84c: DEC EAX
// 0056c84d: PUSH EAX
// 0056c84e: PUSH EBX
// 0056c84f: CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   XREF to: 005709e0 (UNCONDITIONAL_CALL)
// 0056c854: ADD ESP,0xc
// 0056c857: PUSH 0x1
// 0056c859: PUSH EDI
// 0056c85a: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056c85f: CALL core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
//   XREF to: 004518f0 (UNCONDITIONAL_CALL)
// 0056c864: ADD ESP,0xc
// 0056c867: PUSH EBX
// 0056c868: CALL core_set.cpp_FUN_00570af0
//   XREF to: 00570af0 (UNCONDITIONAL_CALL)
// 0056c86d: ADD ESP,0x4
// 0056c870: JMP 0x0056c400
//   XREF to: 0056c400 (UNCONDITIONAL_JUMP)
// 0056c875: LEA ESI,[EDI + 0x4]
//   Label: LAB_0056c875
// 0056c878: MOV EAX,dword ptr [ESI]
// 0056c87a: MOV dword ptr [EBP + -0x54],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0056c87d: LEA EAX,[ESI + 0x4]
// 0056c880: MOV EAX,dword ptr [EAX]
// 0056c882: MOV dword ptr [EBP + -0x50],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0056c885: LEA EAX,[ESI + 0x8]
// 0056c888: MOV EAX,dword ptr [EAX]
// 0056c88a: PUSH 0x0
// 0056c88c: MOV dword ptr [EBP + -0x4c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0056c88f: LEA EAX,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 0056c892: PUSH EAX
// 0056c893: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056c898: CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
//   XREF to: 004537d0 (UNCONDITIONAL_CALL)
// 0056c89d: ADD ESP,0xc
// 0056c8a0: PUSH EDI
// 0056c8a1: XOR ESI,ESI
// 0056c8a3: CALL core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20
//   XREF to: 00473a20 (UNCONDITIONAL_CALL)
// 0056c8a8: MOV EAX,dword ptr [EBX + 0x15acb4]
// 0056c8ae: ADD ESP,0x4
// 0056c8b1: TEST EAX,EAX
// 0056c8b3: JLE 0x0056c597
//   XREF to: 0056c597 (CONDITIONAL_JUMP)
// 0056c8b9: PUSH 0x0
//   Label: LAB_0056c8b9
// 0056c8bb: PUSH ESI
// 0056c8bc: PUSH EBX
// 0056c8bd: CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   XREF to: 005709e0 (UNCONDITIONAL_CALL)
// 0056c8c2: ADD ESP,0xc
// 0056c8c5: PUSH EDI
// 0056c8c6: CALL core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20
//   XREF to: 00473a20 (UNCONDITIONAL_CALL)
// 0056c8cb: ADD ESP,0x4
// 0056c8ce: PUSH EBX
// 0056c8cf: INC ESI
// 0056c8d0: CALL core_set.cpp_FUN_00570af0
//   XREF to: 00570af0 (UNCONDITIONAL_CALL)
// 0056c8d5: MOV ECX,dword ptr [EBX + 0x15acb4]
// 0056c8db: ADD ESP,0x4
// 0056c8de: CMP ESI,ECX
// 0056c8e0: JGE 0x0056c597
//   XREF to: 0056c597 (CONDITIONAL_JUMP)
// 0056c8e6: JMP 0x0056c8b9
//   XREF to: 0056c8b9 (UNCONDITIONAL_JUMP)
// 0056c8e8: LEA ESI,[EDI + 0x4]
//   Label: LAB_0056c8e8
// 0056c8eb: MOV EAX,dword ptr [ESI]
// 0056c8ed: MOV dword ptr [EBP + -0x48],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0056c8f0: LEA EAX,[ESI + 0x4]
// 0056c8f3: MOV EAX,dword ptr [EAX]
// 0056c8f5: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0056c8f8: LEA EAX,[ESI + 0x8]
// 0056c8fb: MOV EAX,dword ptr [EAX]
// 0056c8fd: PUSH 0x0
// 0056c8ff: MOV dword ptr [EBP + -0x40],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0056c902: LEA EAX,[EBP + -0x48]
//   XREF to: Stack[-0x58] (DATA)
// 0056c905: PUSH EAX
// 0056c906: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056c90b: CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
//   XREF to: 004537d0 (UNCONDITIONAL_CALL)
// 0056c910: ADD ESP,0xc
// 0056c913: PUSH EDI
// 0056c914: XOR ESI,ESI
// 0056c916: CALL core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90
//   XREF to: 00473f90 (UNCONDITIONAL_CALL)
// 0056c91b: MOV EAX,dword ptr [EBX + 0x15acb4]
// 0056c921: ADD ESP,0x4
// 0056c924: TEST EAX,EAX
// 0056c926: JLE 0x0056c674
//   XREF to: 0056c674 (CONDITIONAL_JUMP)
// 0056c92c: PUSH 0x0
//   Label: LAB_0056c92c
// 0056c92e: PUSH ESI
// 0056c92f: PUSH EBX
// 0056c930: CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   XREF to: 005709e0 (UNCONDITIONAL_CALL)
// 0056c935: ADD ESP,0xc
// 0056c938: PUSH EDI
// 0056c939: CALL core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90
//   XREF to: 00473f90 (UNCONDITIONAL_CALL)
// 0056c93e: ADD ESP,0x4
// 0056c941: PUSH EBX
// 0056c942: INC ESI
// 0056c943: CALL core_set.cpp_FUN_00570af0
//   XREF to: 00570af0 (UNCONDITIONAL_CALL)
// 0056c948: MOV EAX,dword ptr [EBX + 0x15acb4]
// 0056c94e: ADD ESP,0x4
// 0056c951: CMP ESI,EAX
// 0056c953: JGE 0x0056c674
//   XREF to: 0056c674 (CONDITIONAL_JUMP)
// 0056c959: JMP 0x0056c92c
//   XREF to: 0056c92c (UNCONDITIONAL_JUMP)
// 0056c95b: LEA EAX,[ECX + 0x1f738]
//   Label: LAB_0056c95b
// 0056c961: PUSH EAX
// 0056c962: CALL core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370
//   XREF to: 00500370 (UNCONDITIONAL_CALL)
// 0056c967: ADD ESP,0x4
// 0056c96a: JMP 0x0056c6b0
//   XREF to: 0056c6b0 (UNCONDITIONAL_JUMP)
// 0056c96f: FLD float ptr [EAX]
//   Label: LAB_0056c96f
// 0056c971: FSTP float ptr [EDI]
// 0056c973: FLD float ptr [EAX + 0x4]
// 0056c976: FSTP float ptr [EDI + 0x4]
// 0056c979: FLD float ptr [EAX + 0x8]
// 0056c97c: FSTP float ptr [EDI + 0x8]
// 0056c97f: JMP 0x0056c7db
//   XREF to: 0056c7db (UNCONDITIONAL_JUMP)
