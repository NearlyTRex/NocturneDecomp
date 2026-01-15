// Name: core_dracbrid.cpp_FUN_004869a0
// Address: 004869a0
// Address Range: [[004869a0, 00486b04] [00486b9d, 00486c8e]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_004869a0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_draculabride.cpp_FUN_004869a0(uint param_1, uint
   param_2) */

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
  float local_60;
  float local_5c [7];
  float local_40;
  float local_3c;
  float local_38;
  SFreaky *local_34;
  SFreaky *local_30;
  float *local_2c;
  float *local_28;
  int *local_24;
  int *local_20;
  SFreaky *local_1c;
  CVector3f *local_18;
  float fStack_14;
  
  fVar4 = *(float *)(in_stack_00000004 + 0xbf50) - in_stack_00000008;
  *(float *)(in_stack_00000004 + 0xbf50) = fVar4;
  if (fVar4 < 0.0) {
    *(uint *)(in_stack_00000004 + 0xbf50) = 0;
  }
  local_20 = &g_CDemonCameraInstance.base.position.y;
  local_24 = &g_CDemonCameraInstance.base.position.z;
  local_2c = &local_60;
  local_28 = local_5c;
  local_30 = SFreaky_ARRAY_02c6d0c0;
  local_34 = (SFreaky *)&g_DashAnimationAccumulator;
  do {
    local_1c = local_30;
    if (in_stack_00000004 == *(int *)local_30->field2_0x50) {
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660((uint)*(float *)local_30->field0_0x0);
      pSVar5 = local_30;
      if (iVar6 == 0) {
        local_30->field2_0x50[0] = '\0';
        local_30->field2_0x50[1] = '\0';
        local_30->field2_0x50[2] = '\0';
        local_30->field2_0x50[3] = '\0';
      }
      else {
        pCVar1 = local_30->field1_0x20 + 3;
        pCVar2 = local_30->field1_0x20 + 2;
        pCVar3 = local_30->field1_0x20 + 1;
        local_18 = local_30->field1_0x20;
        *(float *)(local_30->field0_0x0 + 0x1c) =
             *(float *)(local_30->field0_0x0 + 0x1c) + in_stack_00000008;
        while (1.0 < *(float *)(local_1c->field0_0x0 + 0x1c)) {
          *(float *)(local_1c->field0_0x0 + 0x1c) =
               *(float *)(local_1c->field0_0x0 + 0x1c) + _DAT_00621c42;
          if (pCVar3 != local_18) {
            local_18->x = pCVar3->x;
            local_18->y = pSVar5->field1_0x20[1].y;
            local_18->z = pSVar5->field1_0x20[1].z;
          }
          if (pCVar3 != pCVar2) {
            pCVar3->x = pCVar2->x;
            pSVar5->field1_0x20[1].y = pSVar5->field1_0x20[2].y;
            pSVar5->field1_0x20[1].z = pSVar5->field1_0x20[2].z;
          }
          if (pCVar2 != pCVar1) {
            pCVar2->x = pCVar1->x;
            pSVar5->field1_0x20[2].y = pSVar5->field1_0x20[3].y;
            pSVar5->field1_0x20[2].z = pSVar5->field1_0x20[3].z;
          }
          iVar6 = g_CDemonCameraInstance.base.position.x;
          local_60 = (float)*local_20;
          local_5c[0] = (float)*local_24;
          fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
          fVar4 = fStack_14 + (float)iVar6;
          fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
          local_60 = fStack_14 + local_60;
          fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
          local_5c[0] = fStack_14 + local_5c[0];
          local_3c = *local_2c;
          local_38 = *local_28;
          local_40 = fVar4;
          if (pCVar1 != (CVector3f *)&local_40) {
            pCVar1->x = fVar4;
            pSVar5->field1_0x20[3].y = local_3c;
            pSVar5->field1_0x20[3].z = local_38;
          }
        }
        core_spline_cpp_FUN_005b90a0();
        pfVar7 = (float *)core_spline_cpp_FUN_005b92d0();
        if ((float *)(local_1c->field0_0x0 + 4) != pfVar7) {
          *(float *)(local_1c->field0_0x0 + 4) = *pfVar7;
          *(float *)(local_1c->field0_0x0 + 8) = pfVar7[1];
          *(float *)(local_1c->field0_0x0 + 0xc) = pfVar7[2];
        }
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%5.2f %5.2f %5.2f\n",
                   (double)*(float *)(local_1c->field0_0x0 + 4),
                   (double)*(float *)(local_1c->field0_0x0 + 8),
                   (double)*(float *)(local_1c->field0_0x0 + 0xc));
        pfVar7 = (float *)core_spline_cpp_FUN_005b9490();
        if ((float *)(local_1c->field0_0x0 + 0x10) != pfVar7) {
          *(float *)(local_1c->field0_0x0 + 0x10) = *pfVar7;
          *(float *)(local_1c->field0_0x0 + 0x14) = pfVar7[1];
          *(float *)(local_1c->field0_0x0 + 0x18) = pfVar7[2];
        }
      }
    }
    local_30 = local_30 + 1;
  } while (local_30 != local_34);
  return;
}
