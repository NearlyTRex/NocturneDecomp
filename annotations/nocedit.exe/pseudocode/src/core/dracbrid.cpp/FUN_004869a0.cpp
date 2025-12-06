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
  SFreaky **ppSVar1;
  SFreaky **ppSVar2;
  SFreaky **ppSVar3;
  int *piVar4;
  int iVar5;
  SFreaky **ppSVar6;
  float fVar7;
  uint *puVar8;
  BADSPACEBASE *in_ESP;
  float unaff_EDI;
  int in_stack_00000004;
  float in_stack_00000008;
  int local_64;
  float local_60;
  int local_5c;
  SFreaky *pSStack_58;
  float local_50;
  SFreaky *local_38;
  SFreaky *local_34;
  int *local_30;
  float *local_2c;
  uint local_28;
  int *local_24;
  SFreaky *local_20;
  int *local_1c;
  SFreaky **local_18;
  int iStack_14;
  
  fVar7 = *(float *)(in_stack_00000004 + 0xbf50) - in_stack_00000008;
  *(float *)(in_stack_00000004 + 0xbf50) = fVar7;
  if (fVar7 < 0.0) {
    *(uint *)(in_stack_00000004 + 0xbf50) = 0;
  }
  local_24 = &g_CDemonCameraInstance.base.position.y;
  local_28 = 0x32758f0;
  local_30 = &local_64;
  local_2c = &local_60;
  local_34 = SFreaky_ARRAY_02c6d0c0;
  local_38 = (SFreaky *)&g_DashAnimationAccumulator;
  do {
    local_20 = local_34;
    if (in_stack_00000004 == *(int *)local_34->field2_0x50) {
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)local_34->field0_0x0);
      piVar4 = local_30;
      if (iVar5 == 0) {
        local_30[0x14] = 0;
      }
      else {
        ppSVar1 = (SFreaky **)(local_30 + 0x11);
        ppSVar2 = (SFreaky **)(local_30 + 0xe);
        ppSVar3 = (SFreaky **)(local_30 + 0xb);
        ppSVar6 = (SFreaky **)(local_30 + 8);
        local_30[7] = (int)((float)local_30[7] + in_stack_00000008);
        local_18 = ppSVar6;
        while (ppSVar6 = local_18, 1.0 < (float)local_1c[7]) {
          local_1c[7] = (int)((float)local_1c[7] + _DAT_00621c42);
          if (ppSVar3 != local_18) {
            *local_18 = *ppSVar3;
            ppSVar6[1] = (SFreaky *)piVar4[0xc];
            ppSVar6[2] = (SFreaky *)piVar4[0xd];
          }
          if (ppSVar3 != ppSVar2) {
            *ppSVar3 = *ppSVar2;
            piVar4[0xc] = piVar4[0xf];
            piVar4[0xd] = piVar4[0x10];
          }
          if (ppSVar2 != ppSVar1) {
            *ppSVar2 = *ppSVar1;
            piVar4[0xf] = piVar4[0x12];
            piVar4[0x10] = piVar4[0x13];
          }
          local_64 = g_CDemonCameraInstance.base.position.x;
          local_60 = *(float *)local_20->field0_0x0;
          local_5c = *local_24;
          fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
          local_60 = fVar7 + local_60;
          unaff_EDI = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
          pSStack_58 = (SFreaky *)(unaff_EDI + (float)pSStack_58);
          fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
          local_34 = pSStack_58;
          local_50 = fVar7 + local_50;
          local_30 = *(int **)local_20->field0_0x0;
          local_2c = (float *)*local_1c;
          if (ppSVar1 != &local_34) {
            *ppSVar1 = pSStack_58;
            piVar4[0x12] = (int)local_30;
            piVar4[0x13] = (int)local_2c;
          }
        }
        core_spline_cpp_FUN_005b90a0();
        puVar8 = (uint *)core_spline_cpp_FUN_005b92d0();
        if ((uint *)(iStack_14 + 4) != puVar8) {
          *(uint *)(iStack_14 + 4) = *puVar8;
          *(uint *)(iStack_14 + 8) = puVar8[1];
          *(uint *)(iStack_14 + 0xc) = puVar8[2];
        }
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%5.2f %5.2f %5.2f\n",(double)*(float *)(iStack_14 + 4),
                   (double)*(float *)(iStack_14 + 8));
        puVar8 = (uint *)core_spline_cpp_FUN_005b9490();
        if ((uint *)((int)unaff_EDI + 0x10) != puVar8) {
          *(uint *)((int)unaff_EDI + 0x10) = *puVar8;
          *(uint *)((int)unaff_EDI + 0x14) = puVar8[1];
          *(uint *)((int)unaff_EDI + 0x18) = puVar8[2];
        }
      }
    }
    local_34 = local_34 + 1;
  } while (local_34 != local_38);
  return;
}
