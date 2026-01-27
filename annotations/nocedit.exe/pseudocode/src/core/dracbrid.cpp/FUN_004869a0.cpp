// Name: core_dracbrid.cpp_FUN_004869a0
// Address: 004869a0
// Address Range: [[004869a0, 00486b04] [00486b9d, 00486c8e]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_004869a0()

#include "nocturne.h"

void core_dracbrid_cpp_FUN_004869a0(void)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  SFreaky *pSVar5;
  int iVar6;
  float *pfVar7;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_64;
  float local_60 [7];
  float local_44;
  float local_40;
  float local_3c;
  SFreaky *local_38;
  SFreaky *local_34;
  float *local_30;
  float *local_2c;
  int *local_28;
  int *local_24;
  SFreaky *local_20;
  CVector3f *local_1c;
  float local_18;
  
  fVar4 = *(float *)(in_stack_00000004 + 0xbf50) - in_stack_00000008;
  *(float *)(in_stack_00000004 + 0xbf50) = fVar4;
  if (fVar4 < 0.0) {
    *(uint *)(in_stack_00000004 + 0xbf50) = 0;
  }
  local_24 = &g_CDemonCameraInstance.base.position.y;
  local_28 = &g_CDemonCameraInstance.base.position.z;
  local_30 = &local_64;
  local_2c = local_60;
  local_34 = SFreaky_ARRAY_02c6d0c0;
  local_38 = (SFreaky *)&g_DashAnimationAccumulator;
  do {
    local_20 = local_34;
    if (in_stack_00000004 == *(int *)local_34->unk3) {
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660((uint)*(float *)local_34->unk1);
      pSVar5 = local_34;
      if (iVar6 == 0) {
        local_34->unk3[0] = '\0';
        local_34->unk3[1] = '\0';
        local_34->unk3[2] = '\0';
        local_34->unk3[3] = '\0';
      }
      else {
        pCVar1 = local_34->unk2 + 3;
        pCVar2 = local_34->unk2 + 2;
        pCVar3 = local_34->unk2 + 1;
        local_1c = local_34->unk2;
        *(float *)(local_34->unk1 + 0x1c) = *(float *)(local_34->unk1 + 0x1c) + in_stack_00000008;
        while (1.0 < *(float *)(local_20->unk1 + 0x1c)) {
          *(float *)(local_20->unk1 + 0x1c) = *(float *)(local_20->unk1 + 0x1c) + -1.0f;
          if (pCVar3 != local_1c) {
            local_1c->x = pCVar3->x;
            local_1c->y = pSVar5->unk2[1].y;
            local_1c->z = pSVar5->unk2[1].z;
          }
          if (pCVar3 != pCVar2) {
            pCVar3->x = pCVar2->x;
            pSVar5->unk2[1].y = pSVar5->unk2[2].y;
            pSVar5->unk2[1].z = pSVar5->unk2[2].z;
          }
          if (pCVar2 != pCVar1) {
            pCVar2->x = pCVar1->x;
            pSVar5->unk2[2].y = pSVar5->unk2[3].y;
            pSVar5->unk2[2].z = pSVar5->unk2[3].z;
          }
          iVar6 = g_CDemonCameraInstance.base.position.x;
          local_64 = (float)*local_24;
          local_60[0] = (float)*local_28;
          local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
          fVar4 = local_18 + (float)iVar6;
          local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
          local_64 = local_18 + local_64;
          local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
          local_60[0] = local_18 + local_60[0];
          local_40 = *local_30;
          local_3c = *local_2c;
          local_44 = fVar4;
          if (pCVar1 != (CVector3f *)&local_44) {
            pCVar1->x = fVar4;
            pSVar5->unk2[3].y = local_40;
            pSVar5->unk2[3].z = local_3c;
          }
        }
        core_spline_cpp_FUN_005b90a0();
        pfVar7 = (float *)core_spline_cpp_FUN_005b92d0();
        if ((float *)(local_20->unk1 + 4) != pfVar7) {
          *(float *)(local_20->unk1 + 4) = *pfVar7;
          *(float *)(local_20->unk1 + 8) = pfVar7[1];
          *(float *)(local_20->unk1 + 0xc) = pfVar7[2];
        }
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%5.2f %5.2f %5.2f\n",(double)*(float *)(local_20->unk1 + 4),
                   (double)*(float *)(local_20->unk1 + 8),(double)*(float *)(local_20->unk1 + 0xc));
        pfVar7 = (float *)core_spline_cpp_FUN_005b9490();
        if ((float *)(local_20->unk1 + 0x10) != pfVar7) {
          *(float *)(local_20->unk1 + 0x10) = *pfVar7;
          *(float *)(local_20->unk1 + 0x14) = pfVar7[1];
          *(float *)(local_20->unk1 + 0x18) = pfVar7[2];
        }
      }
    }
    local_34 = local_34 + 1;
  } while (local_34 != local_38);
  return;
}
