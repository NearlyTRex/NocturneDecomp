// Name: core_dracbrid.cpp_CDraculaBride_updateFreakySounds_FUN_004869a0
// Address: 004869a0
// MANUAL RECONSTRUCTION
// Address Range: [[004869a0, 00486c8e]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_updateFreakySounds_FUN_004869a0(CDraculaBride *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_updateFreakySounds_FUN_004869a0(CDraculaBride *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CVector3f *p1;
  float fVar2;
  SFreaky *pSVar3;
  int iVar4;
  CVector3f *pCVar5;
  float local_88 [8];
  float local_68;
  float local_64;
  float local_60;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  SFreaky *local_38;
  SFreaky *local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  SFreaky *local_20;
  CVector3f *local_1c;
  float local_18;
  
  fVar2 = this_ptr->freaky_timer - delta_time;
  this_ptr->freaky_timer = fVar2;
  if (fVar2 < 0.0) {
    this_ptr->freaky_timer = 0.0;
  }
  local_24 = &g_CDemonCameraInstance.base.position.f.y;
  local_28 = &g_CDemonCameraInstance.base.position.f.z;
  local_30 = &local_64;
  local_2c = &local_60;
  local_34 = SFreaky_ARRAY_02c6d0c0;
  local_38 = SFreaky_ARRAY_02c6d0c0 + 6;
  do {
    local_20 = local_34;
    if (this_ptr == local_34->owner) {
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(local_34->sfx_handle);
      pSVar3 = local_34;
      if (iVar4 == 0) {
        local_34->owner = (CDraculaBride *)0x0;
      }
      else {
        pCVar5 = local_34->control_points + 3;
        pCVar1 = local_34->control_points + 2;
        p1 = local_34->control_points + 1;
        local_1c = local_34->control_points;
        local_34->t = local_34->t + delta_time;
        while (1.0 < local_20->t) {
          local_20->t = local_20->t + -1.0f;
          if (p1 != local_1c) {
            local_1c->x = p1->x;
            local_1c->y = pSVar3->control_points[1].y;
            local_1c->z = pSVar3->control_points[1].z;
          }
          if (p1 != pCVar1) {
            p1->x = pCVar1->x;
            pSVar3->control_points[1].y = pSVar3->control_points[2].y;
            pSVar3->control_points[1].z = pSVar3->control_points[2].z;
          }
          if (pCVar1 != pCVar5) {
            pCVar1->x = pCVar5->x;
            pSVar3->control_points[2].y = pSVar3->control_points[3].y;
            pSVar3->control_points[2].z = pSVar3->control_points[3].z;
          }
          local_68 = g_CDemonCameraInstance.base.position.f.x;
          local_64 = *local_24;
          local_60 = *local_28;
          local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-5.0,5.0);
          local_68 = local_18 + local_68;
          local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-2.0,2.0);
          local_64 = local_18 + local_64;
          local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-5.0,5.0);
          local_44.x = local_68;
          local_60 = local_18 + local_60;
          local_44.y = *local_30;
          local_44.z = *local_2c;
          if (pCVar5 != &local_44) {
            pCVar5->x = local_68;
            pSVar3->control_points[3].y = local_44.y;
            pSVar3->control_points[3].z = local_44.z;
          }
        }
        core_spline_cpp_computeSplineBasis_FUN_005b90a0(local_88,local_20->t,0.0);
        pCVar5 = core_spline_cpp_evaluateSplinePoint3D_FUN_005b92d0
                           (local_88,&local_50,local_1c,p1,local_20->control_points + 2,
                            local_20->control_points + 3);
        if (&local_20->position != pCVar5) {
          local_20->position = *pCVar5;
        }
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%5.2f %5.2f %5.2f\n",(double)(local_20->position).x,
                   (double)(local_20->position).y,(double)(local_20->position).z);
        pCVar5 = core_spline_cpp_evaluateSplineTangent3D_FUN_005b9490
                           (local_88,&local_5c,local_20->control_points,local_20->control_points + 1
                            ,local_20->control_points + 2,local_20->control_points + 3);
        if (&local_20->tangent != pCVar5) {
          local_20->tangent = *pCVar5;
        }
      }
    }
    local_34 = local_34 + 1;
  } while (local_34 != local_38);
  return;
}
