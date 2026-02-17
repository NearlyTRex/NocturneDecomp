// Name: core_dracbrid.cpp_CDraculaBride_FUN_004869a0
// Address: 004869a0
// Address Range: [[004869a0, 00486b04] [00486b9d, 00486c8e]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_FUN_004869a0(CDraculaBride *this_ptr)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_FUN_004869a0(CDraculaBride *this_ptr)

{
  CVector3f *pCVar1;
  CVector3f *p1;
  float fVar2;
  SFreaky *pSVar3;
  int iVar4;
  CVector3f *pCVar5;
  float in_stack_00000008;
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
  int *local_28;
  int *local_24;
  SFreaky *local_20;
  CVector3f *local_1c;
  float local_18;
  
  fVar2 = *(float *)this_ptr->unk2 - in_stack_00000008;
  *(float *)this_ptr->unk2 = fVar2;
  if (fVar2 < 0.0) {
    this_ptr->unk2[0] = '\0';
    this_ptr->unk2[1] = '\0';
    this_ptr->unk2[2] = '\0';
    this_ptr->unk2[3] = '\0';
  }
  local_24 = &g_CDemonCameraInstance.base.position.y;
  local_28 = &g_CDemonCameraInstance.base.position.z;
  local_30 = &local_64;
  local_2c = &local_60;
  local_34 = SFreaky_ARRAY_02c6d0c0;
  local_38 = (SFreaky *)&g_DashAnimationAccumulator;
  do {
    local_20 = local_34;
    if (this_ptr == *(CDraculaBride **)local_34->unk3) {
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660((uint)*(float *)local_34->unk1);
      pSVar3 = local_34;
      if (iVar4 == 0) {
        local_34->unk3[0] = '\0';
        local_34->unk3[1] = '\0';
        local_34->unk3[2] = '\0';
        local_34->unk3[3] = '\0';
      }
      else {
        pCVar5 = local_34->unk2 + 3;
        pCVar1 = local_34->unk2 + 2;
        p1 = local_34->unk2 + 1;
        local_1c = local_34->unk2;
        *(float *)(local_34->unk1 + 0x1c) = *(float *)(local_34->unk1 + 0x1c) + in_stack_00000008;
        while (1.0 < *(float *)(local_20->unk1 + 0x1c)) {
          *(float *)(local_20->unk1 + 0x1c) = *(float *)(local_20->unk1 + 0x1c) + -1.0f;
          if (p1 != local_1c) {
            local_1c->x = p1->x;
            local_1c->y = pSVar3->unk2[1].y;
            local_1c->z = pSVar3->unk2[1].z;
          }
          if (p1 != pCVar1) {
            p1->x = pCVar1->x;
            pSVar3->unk2[1].y = pSVar3->unk2[2].y;
            pSVar3->unk2[1].z = pSVar3->unk2[2].z;
          }
          if (pCVar1 != pCVar5) {
            pCVar1->x = pCVar5->x;
            pSVar3->unk2[2].y = pSVar3->unk2[3].y;
            pSVar3->unk2[2].z = pSVar3->unk2[3].z;
          }
          local_68 = (float)g_CDemonCameraInstance.base.position.x;
          local_64 = (float)*local_24;
          local_60 = (float)*local_28;
          local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
          local_68 = local_18 + local_68;
          local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
          local_64 = local_18 + local_64;
          local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
          local_44.x = local_68;
          local_60 = local_18 + local_60;
          local_44.y = *local_30;
          local_44.z = *local_2c;
          if (pCVar5 != &local_44) {
            pCVar5->x = local_68;
            pSVar3->unk2[3].y = local_44.y;
            pSVar3->unk2[3].z = local_44.z;
          }
        }
        core_spline_cpp_computeSplineBasis_FUN_005b90a0
                  (local_88,*(float *)(local_20->unk1 + 0x1c),0.0);
        pCVar5 = core_spline_cpp_evaluateSplinePoint3D_FUN_005b92d0
                           (local_88,&local_50,local_1c,p1,local_20->unk2 + 2,local_20->unk2 + 3);
        if ((CVector3f *)(local_20->unk1 + 4) != pCVar5) {
          ((CVector3f *)(local_20->unk1 + 4))->x = pCVar5->x;
          *(float *)(local_20->unk1 + 8) = pCVar5->y;
          *(float *)(local_20->unk1 + 0xc) = pCVar5->z;
        }
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%5.2f %5.2f %5.2f\n",(double)*(float *)(local_20->unk1 + 4),
                   (double)*(float *)(local_20->unk1 + 8),(double)*(float *)(local_20->unk1 + 0xc));
        pCVar5 = core_spline_cpp_evaluateSplineTangent3D_FUN_005b9490
                           (local_88,&local_5c,local_20->unk2,local_20->unk2 + 1,local_20->unk2 + 2,
                            local_20->unk2 + 3);
        if ((CVector3f *)(local_20->unk1 + 0x10) != pCVar5) {
          ((CVector3f *)(local_20->unk1 + 0x10))->x = pCVar5->x;
          *(float *)(local_20->unk1 + 0x14) = pCVar5->y;
          *(float *)(local_20->unk1 + 0x18) = pCVar5->z;
        }
      }
    }
    local_34 = local_34 + 1;
  } while (local_34 != local_38);
  return;
}
