// Name: core_set.cpp_FUN_00535da0
// Address: 00535da0
// Address Range: [[00535da0, 005365b7]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_00535da0(CDemonSet *this_ptr,int skip_prerender)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_00535da0(CDemonSet *this_ptr,int skip_prerender)

{
  CDemonLight *light_source;
  CDemonGlobe *globe;
  double dVar1;
  CDemonSet *pCVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  byte bVar6;
  uint auStackY_106c [1010];
  CDemonCamera *pCVar7;
  CVector3f *pCVar8;
  SProjectedVertex *pSVar9;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CDemonLight *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  if (*(int *)&g_CGamePtr->field_0x230 != 0) {
    local_18 = wincore_winrun_cpp_FUN_005806a0();
  }
  if ((skip_prerender != 0) &&
     (iVar3 = core_set_cpp_CDemonSet_isCameraPanning_FUN_0053b9a0(this_ptr), iVar3 != 0)) {
    return;
  }
  if (skip_prerender == 0) {
    _DAT_0203ad1c = skip_prerender;
    _DAT_0203ad30 = skip_prerender;
    core_set_cpp_FUN_00537270(this_ptr,&g_CDemonLightInstance);
    core_set_cpp_FUN_00535a80(this_ptr);
  }
  core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_00449430(&g_CDemonCameraInstance);
  if (*(int *)&this_ptr->field_0x16166c != 0) {
    core_set_cpp_FUN_0053b0d0(this_ptr);
    *(uint *)&this_ptr->field_0x16166c = 0;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00448ff0(&g_CDemonCameraInstance,1);
  if ((_DAT_0207bad4 != 0) || (*(int *)&g_CGamePtr->field_0x24 != 0)) {
    iVar3 = 0;
    _DAT_0207bad4 = 0;
    core_dcamera_cpp_CDemonCamera_processCorona_FUN_0044ded0(&g_CDemonCameraInstance);
    if (0 < _DAT_0203a598) {
      iVar5 = 0;
      do {
        if (*(int *)&(*(CDemonLight **)(&DAT_0203a59c + iVar5))->field_0x1cb4 != 0) {
          core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_0044db70
                    (&g_CDemonCameraInstance,*(CDemonLight **)(&DAT_0203a59c + iVar5));
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar3 < _DAT_0203a598);
    }
    local_2c = 0;
    if (0 < _DAT_0203ad1c) {
      local_24 = 0;
      do {
        light_source = *(CDemonLight **)(local_24 + 0x203ad20);
        if ((*(int *)&light_source->field_0x1cb4 != 0) && (*(int *)&light_source->field_0x1cd0 != 0)
           ) {
          iVar5 = 0;
          core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_0044d800
                    (&g_CDemonCameraInstance,light_source);
          iVar3 = local_24;
          if (0 < *(int *)&this_ptr->field_0x15acc8) {
            do {
              core_set_cpp_FUN_0053adf0(this_ptr,iVar5,0);
              core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_0044d800
                        (&g_CDemonCameraInstance,*(CDemonLight **)(iVar3 + 0x203ad20));
              iVar5 = iVar5 + 1;
              core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
            } while (iVar5 < *(int *)&this_ptr->field_0x15acc8);
          }
        }
        local_24 = local_24 + 4;
        local_2c = local_2c + 1;
      } while (local_2c < _DAT_0203ad1c);
    }
    local_3c = 0;
    if (0 < _DAT_0203ad30) {
      local_28 = 0;
      do {
        iVar5 = 0;
        core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690
                  (&g_CDemonCameraInstance,*(CDemonGlobe **)(local_28 + 0x203ad34),0);
        iVar3 = local_28;
        if (0 < *(int *)&this_ptr->field_0x15acc8) {
          do {
            core_set_cpp_FUN_0053adf0(this_ptr,iVar5,0);
            core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690
                      (&g_CDemonCameraInstance,*(CDemonGlobe **)(iVar3 + 0x203ad34),1);
            iVar5 = iVar5 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
          } while (iVar5 < *(int *)&this_ptr->field_0x15acc8);
        }
        local_28 = local_28 + 4;
        local_3c = local_3c + 1;
      } while (local_3c < _DAT_0203ad30);
    }
    local_30 = 0;
    _DAT_0203b1e8 = 0;
    if (0 < _DAT_0203aec4) {
      iVar3 = 0;
      do {
        globe = *(CDemonGlobe **)(iVar3 + 0x203aec8);
        if (*(int *)(iVar3 + 0x203b058) == 0) {
          core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690
                    (&g_CDemonCameraInstance,globe,0);
          *(CDemonGlobe **)(&DAT_0203b1ec + _DAT_0203b1e8 * 4) = globe;
          _DAT_0203b1e8 = _DAT_0203b1e8 + 1;
        }
        else {
          core_set_cpp_FUN_0053adf0(this_ptr,*(int *)(iVar3 + 0x203b058) + -1,0);
          core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_0044e690
                    (&g_CDemonCameraInstance,globe,1);
          core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
        }
        local_30 = local_30 + 1;
        iVar3 = iVar3 + 4;
      } while (local_30 < _DAT_0203aec4);
    }
    _DAT_0203aec4 = 0;
    if (0.0 < *(float *)&this_ptr->field_0x14d160) {
      core_dcamera_cpp_FUN_0044dd00();
    }
  }
  if (*(int *)&g_CGamePtr->field_0x230 != 0) {
    local_4c = wincore_winrun_cpp_FUN_005806a0();
  }
  core_dcamera_cpp_CDemonCamera_lockAndRenderToBuffer_FUN_0044df60(&g_CDemonCameraInstance);
  if (*(int *)&g_CGamePtr->field_0x230 != 0) {
    local_48 = wincore_winrun_cpp_FUN_005806a0();
  }
  iVar3 = 0;
  if (0 < _DAT_0203a598) {
    iVar5 = 0;
    do {
      puVar4 = (uint *)(&DAT_0203a59c + iVar5);
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0045ca30((CDemonLight *)*puVar4);
    } while (iVar3 < _DAT_0203a598);
  }
  core_set_cpp_FUN_00539f30(this_ptr,0xc);
  core_set_cpp_FUN_00536c90();
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00450580
            (&g_CDemonCameraInstance,(CVector3f *)0x0,(SProjectedVertex *)0x0);
  core_gore_cpp_FUN_004ce5b0(g_CGorePtr);
  iVar3 = 0;
  if (0 < *(int *)&this_ptr->field_0x15acc8) {
    do {
      core_set_cpp_FUN_0053adf0(this_ptr,iVar3,0);
      core_gore_cpp_FUN_004ce5b0(g_CGorePtr);
      iVar3 = iVar3 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
    } while (iVar3 < *(int *)&this_ptr->field_0x15acc8);
  }
  if (*(int *)g_CWaterPtr != 0) {
    core_water_cpp_FUN_00577760(g_CWaterPtr,0);
  }
  core_set_cpp_FUN_00536f90();
  if (*(int *)&this_ptr->field_0x15acb8 != 0) {
    core_terrain_cpp_CTerrain_render_FUN_005723d0(0x02CFD8B8,0);
  }
  iVar3 = 0;
  core_fire_cpp_FUN_004a1ad0(0x01C73654);
  if (0 < *(int *)&this_ptr->field_0x15acc8) {
    do {
      core_set_cpp_FUN_0053adf0(this_ptr,iVar3,0);
      core_fire_cpp_FUN_004a1ad0(0x01C73654);
      iVar3 = iVar3 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
    } while (iVar3 < *(int *)&this_ptr->field_0x15acc8);
  }
  core_weather_cpp_FUN_0057c890(0x02D0C1A0);
  local_34 = 0;
  if (0 < _DAT_0203ad1c) {
    local_44 = 0;
    do {
      local_20 = *(CDemonLight **)(local_44 + 0x203ad20);
      if (*(int *)&local_20->field_0x1cb4 != 0) {
        pSVar9 = (SProjectedVertex *)0x0;
        pCVar8 = &local_60;
        puVar4 = (uint *)((int)local_20 + (uint)bVar6 * -8 + 8);
        local_84._0_4_ = *(uint *)&local_20->field_0x4;
        *(uint *)((int)&local_84 + (uint)bVar6 * -8 + 4) = *puVar4;
        *(uint *)((int)&local_84 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             puVar4[(uint)bVar6 * -2 + 1];
        pCVar7 = &g_CDemonCameraInstance;
        local_60._0_4_ = local_84._0_4_;
        *(uint *)((int)&local_60 + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&local_84 + (uint)bVar6 * -8 + 4);
        *(uint *)((int)&local_60 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&local_84 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00450580(pCVar7,pCVar8,pSVar9);
        core_dlight_cpp_FUN_0045d530(local_20);
        iVar3 = 0;
        if (0 < *(int *)&this_ptr->field_0x15acc8) {
          do {
            core_set_cpp_FUN_0053adf0(this_ptr,iVar3,0);
            core_dlight_cpp_FUN_0045d530(local_20);
            iVar3 = iVar3 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
          } while (iVar3 < *(int *)&this_ptr->field_0x15acc8);
        }
      }
      local_34 = local_34 + 1;
      local_44 = local_44 + 4;
    } while (local_34 < _DAT_0203ad1c);
  }
  core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00449840(&g_CDemonCameraInstance);
  core_gore_cpp_CGore_renderDecals_FUN_004ce630(g_CGorePtr,0,1);
  core_fire_cpp_CFireEffect_renderDecals_FUN_004a1e90(0x01C73654,0,1);
  if (*(int *)g_CWaterPtr == 0) {
    core_water_cpp_FUN_00577760(g_CWaterPtr,0);
  }
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x14d164) {
    do {
      iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840(*(uint *)&pCVar2->field_0x14d168);
      if (iVar5 != 0) {
        (**(code **)(*(int *)(iVar5 + 0x154) + 0x18))(iVar5);
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CDemonSet *)&pCVar2->field_0x4;
    } while (iVar3 < *(int *)&this_ptr->field_0x14d164);
  }
  core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00449a00(&g_CDemonCameraInstance,0);
  local_38 = 0;
  if (0 < _DAT_0203ad1c) {
    local_40 = 0;
    do {
      local_1c = *(int *)(local_40 + 0x203ad20);
      if (*(int *)(local_1c + 0x1cb4) != 0) {
        pSVar9 = (SProjectedVertex *)0x0;
        pCVar8 = &local_78;
        puVar4 = (uint *)(local_1c + 8 + (uint)bVar6 * -8);
        local_6c._0_4_ = *(uint *)(local_1c + 4);
        *(uint *)((int)&local_6c + (uint)bVar6 * -8 + 4) = *puVar4;
        *(uint *)((int)&local_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             puVar4[(uint)bVar6 * -2 + 1];
        pCVar7 = &g_CDemonCameraInstance;
        local_78._0_4_ = local_6c._0_4_;
        *(uint *)((int)&local_78 + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&local_6c + (uint)bVar6 * -8 + 4);
        *(uint *)((int)&local_78 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&local_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00450580(pCVar7,pCVar8,pSVar9);
        iVar3 = 0;
        core_dlight_cpp_FUN_0045d560();
        if (0 < *(int *)&this_ptr->field_0x15acc8) {
          do {
            core_set_cpp_FUN_0053adf0(this_ptr,iVar3,0);
            core_dlight_cpp_FUN_0045d560();
            iVar3 = iVar3 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
          } while (iVar3 < *(int *)&this_ptr->field_0x15acc8);
        }
      }
      local_38 = local_38 + 1;
      local_40 = local_40 + 4;
    } while (local_38 < _DAT_0203ad1c);
  }
  iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  if ((iVar3 != 0) && (*(int *)(0x01D81080 + 0x1008) == 0)) {
    core_inv_cpp_FUN_004dd770((CInventory *)(iVar3 + 0x206e8));
  }
  core_dcamera_cpp_CDemonCamera_endScene_FUN_00449750(&g_CDemonCameraInstance,0);
  if (*(int *)&g_CGamePtr->field_0x230 != 0) {
    iVar3 = wincore_winrun_cpp_FUN_005806a0();
    local_14 = local_4c - local_18;
    dVar1 = 1.0 / (double)*(float *)&g_CGamePtr->field_0x314;
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"@comp: %3.2f/%3.2f actren : %3.2f\n" + 1,
               (double)local_14 * _DAT_005d059f * _DAT_005d05a7 * _DAT_005d05af * dVar1,
               (double)(local_48 - local_18) * _DAT_005d059f * _DAT_005d05a7 * _DAT_005d05af * dVar1
               ,(double)(iVar3 - local_48) * _DAT_005d059f * _DAT_005d05a7 * _DAT_005d05af * dVar1);
  }
  if (*(int *)&g_CGamePtr->field_0x20c != 0) {
    core_setdir_cpp_FUN_00540eb0();
  }
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x14d164) {
    do {
      iVar5 = *(int *)&pCVar2->field_0x14d168;
      if ((uint *)(iVar5 + 300) != (uint *)(iVar5 + 0x20)) {
        *(uint *)(iVar5 + 300) = *(uint *)(iVar5 + 0x20);
        *(uint *)(iVar5 + 0x130) = *(uint *)(iVar5 + 0x24);
        *(uint *)(iVar5 + 0x134) = *(uint *)(iVar5 + 0x28);
      }
      if ((uint *)(iVar5 + 0x138) != (uint *)(iVar5 + 0x30)) {
        *(uint *)(iVar5 + 0x138) = *(uint *)(iVar5 + 0x30);
        *(uint *)(iVar5 + 0x13c) = *(uint *)(iVar5 + 0x34);
        *(uint *)(iVar5 + 0x140) = *(uint *)(iVar5 + 0x38);
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CDemonSet *)&pCVar2->field_0x4;
    } while (iVar3 < *(int *)&this_ptr->field_0x14d164);
  }
  if (_DAT_0207baa8 != 0) {
    engine_special_cpp_clearScreen_FUN_00560d70();
    _DAT_0207baa8 = 0;
    return;
  }
  return;
}
