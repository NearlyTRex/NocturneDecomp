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
  SFreaky *pSVar4;
  int iVar5;
  float fVar6;
  uint *puVar7;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_60;
  int local_5c;
  SFreaky *pSStack_58;
  float local_50;
  SFreaky *local_34;
  SFreaky *local_30;
  float *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  SFreaky *local_1c;
  CVector3f *local_18;
  
  fVar6 = *(float *)(in_stack_00000004 + 0xbf50) - in_stack_00000008;
  *(float *)(in_stack_00000004 + 0xbf50) = fVar6;
  if (fVar6 < 0.0) {
    *(uint *)(in_stack_00000004 + 0xbf50) = 0;
  }
  local_20 = &g_CDemonCameraInstance.base.position.y;
  local_24 = &g_CDemonCameraInstance.base.position.z;
  local_2c = &local_60;
  local_28 = &local_5c;
  local_30 = SFreaky_ARRAY_02c6d0c0;
  local_34 = (SFreaky *)&g_DashAnimationAccumulator;
  do {
    local_1c = local_30;
    if (in_stack_00000004 == *(int *)local_30->field2_0x50) {
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)local_30->field0_0x0);
      pSVar4 = local_30;
      if (iVar5 == 0) {
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
            local_18->x = (float)pCVar3->x;
            local_18->y = pSVar4->field1_0x20[1].y;
            local_18->z = pSVar4->field1_0x20[1].z;
          }
          if (pCVar3 != pCVar2) {
            pCVar3->x = (float)pCVar2->x;
            pSVar4->field1_0x20[1].y = pSVar4->field1_0x20[2].y;
            pSVar4->field1_0x20[1].z = pSVar4->field1_0x20[2].z;
          }
          if (pCVar2 != pCVar1) {
            pCVar2->x = (float)pCVar1->x;
            pSVar4->field1_0x20[2].y = pSVar4->field1_0x20[3].y;
            pSVar4->field1_0x20[2].z = pSVar4->field1_0x20[3].z;
          }
          local_60 = (float)*local_20;
          local_5c = *local_24;
          fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
          local_60 = fVar6 + local_60;
          fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
          pSStack_58 = (SFreaky *)(fVar6 + (float)pSStack_58);
          fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
          local_34 = pSStack_58;
          local_50 = fVar6 + local_50;
          local_30 = (SFreaky *)*local_20;
          local_2c = *(float **)local_1c->field0_0x0;
          if (pCVar1 != (CVector3f *)&local_34) {
            pCVar1->x = (float)pSStack_58;
            pSVar4->field1_0x20[3].y = (float)local_30;
            pSVar4->field1_0x20[3].z = (float)local_2c;
          }
        }
        core_spline_cpp_FUN_005b90a0();
        puVar7 = (uint *)core_spline_cpp_FUN_005b92d0();
        if (local_1c->field0_0x0 + 4 != (char *)puVar7) {
          *(uint *)(local_1c->field0_0x0 + 4) = *puVar7;
          *(uint *)(local_1c->field0_0x0 + 8) = puVar7[1];
          *(uint *)(local_1c->field0_0x0 + 0xc) = puVar7[2];
        }
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%5.2f %5.2f %5.2f\n",
                   (double)*(float *)(local_1c->field0_0x0 + 4),
                   (double)*(float *)(local_1c->field0_0x0 + 8),
                   (double)*(float *)(local_1c->field0_0x0 + 0xc));
        puVar7 = (uint *)core_spline_cpp_FUN_005b9490();
        if (local_1c->field0_0x0 + 0x10 != (char *)puVar7) {
          *(uint *)(local_1c->field0_0x0 + 0x10) = *puVar7;
          *(uint *)(local_1c->field0_0x0 + 0x14) = puVar7[1];
          *(uint *)(local_1c->field0_0x0 + 0x18) = puVar7[2];
        }
      }
    }
    local_30 = local_30 + 1;
  } while (local_30 != local_34);
  return;
}
