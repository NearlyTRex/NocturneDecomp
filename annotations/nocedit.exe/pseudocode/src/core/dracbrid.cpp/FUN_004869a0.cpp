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
  uint **ppuVar1;
  uint **ppuVar2;
  uint **ppuVar3;
  int iVar4;
  uint **ppuVar5;
  float fVar6;
  uint *puVar7;
  uint *puVar8;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  uint in_stack_00000004;
  float in_stack_00000008;
  uint local_64;
  uint local_60;
  float local_5c;
  uint uStack_58;
  uint *puStack_54;
  float fStack_4c;
  float *local_38;
  SFreaky *local_34;
  uint *local_30;
  uint *local_2c;
  uint local_28;
  uint local_24;
  uint *local_20;
  float *local_1c;
  uint *local_18;
  uint **ppuStack_14;
  
  fVar6 = *(float *)(in_stack_00000004 + 0xbf50) - in_stack_00000008;
  *(float *)(in_stack_00000004 + 0xbf50) = fVar6;
  if (fVar6 < 0.0) {
    *(uint *)(in_stack_00000004 + 0xbf50) = 0;
  }
  local_24 = 0x32758ec;
  local_28 = 0x32758f0;
  local_30 = &local_64;
  local_2c = &local_60;
  local_34 = SFreaky_ARRAY_02c6d0c0;
  local_38 = &g_DashAnimationAccumulator;
  do {
    local_18 = local_2c;
    if (in_stack_00000004 == local_2c[0x14]) {
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*local_2c);
      puVar8 = local_2c;
      if (iVar4 == 0) {
        local_2c[0x14] = 0;
      }
      else {
        ppuVar1 = (uint **)(local_2c + 0x11);
        ppuVar2 = (uint **)(local_2c + 0xe);
        ppuVar3 = (uint **)(local_2c + 0xb);
        ppuVar5 = (uint **)(local_2c + 8);
        local_2c[7] = (uint)((float)local_2c[7] + in_stack_00000008);
        ppuStack_14 = ppuVar5;
        while (1.0 < (float)local_18[7]) {
          local_18[7] = (uint)((float)local_18[7] + _DAT_00621c42);
          ppuVar5 = ppuStack_14;
          if (ppuVar3 != ppuStack_14) {
            *ppuStack_14 = *ppuVar3;
            ppuVar5[1] = (uint *)puVar8[0xc];
            ppuVar5[2] = (uint *)puVar8[0xd];
          }
          if (ppuVar3 != ppuVar2) {
            *ppuVar3 = *ppuVar2;
            puVar8[0xc] = puVar8[0xf];
            puVar8[0xd] = puVar8[0x10];
          }
          if (ppuVar2 != ppuVar1) {
            *ppuVar2 = *ppuVar1;
            puVar8[0xf] = puVar8[0x12];
            puVar8[0x10] = puVar8[0x13];
          }
          local_60 = g_CDemonCameraInstance.base.position.x;
          local_5c = *local_1c;
          uStack_58 = *local_20;
          fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
          local_5c = fVar6 + local_5c;
          fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
          puStack_54 = (uint *)(fVar6 + (float)puStack_54);
          fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
          local_30 = puStack_54;
          fStack_4c = fVar6 + fStack_4c;
          local_2c = (uint *)*local_1c;
          local_28 = *local_18;
          if (ppuVar1 != &local_30) {
            *ppuVar1 = puStack_54;
            puVar8[0x12] = (uint)local_2c;
            puVar8[0x13] = local_28;
          }
        }
        core_spline_cpp_FUN_005b90a0();
        puVar7 = (uint *)core_spline_cpp_FUN_005b92d0();
        if ((uint *)(unaff_EBP + 4) != puVar7) {
          *(uint *)(unaff_EBP + 4) = *puVar7;
          *(uint *)(unaff_EBP + 8) = puVar7[1];
          *(uint *)(unaff_EBP + 0xc) = puVar7[2];
        }
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%5.2f %5.2f %5.2f\n",(double)*(float *)(unaff_EBP + 4),
                   (double)*(float *)(unaff_EBP + 8));
        puVar8 = (uint *)core_spline_cpp_FUN_005b9490();
        if (local_18 + 4 != puVar8) {
          local_18[4] = *puVar8;
          local_18[5] = puVar8[1];
          local_18[6] = puVar8[2];
        }
      }
    }
    local_2c = local_2c + 0x15;
  } while (local_2c != local_30);
  return;
}
