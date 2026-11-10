// Name: core_dracbrid.cpp_FUN_004658e0
// Address: 004658e0
// Address Range: [[004658e0, 00465c27]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_FUN_004658e0(CDraculaBride *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_FUN_004658e0(CDraculaBride *this_ptr,float delta_time)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1068 [1002];
  float max_value;
  float local_80;
  float local_74;
  float local_68;
  float local_64;
  float local_60;
  uint local_5c;
  float afStack_58 [4];
  float local_48;
  uint local_44;
  float local_40;
  uint local_3c;
  float local_38;
  uint local_34;
  uint local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  float *local_20;
  float *local_1c;
  float *local_18;
  float local_14;
  
  bVar6 = 0;
  fVar3 = this_ptr->freaky_timer - delta_time;
  this_ptr->freaky_timer = fVar3;
  if (fVar3 < 0.0) {
    this_ptr->freaky_timer = 0.0;
  }
  local_28 = (uint *)&DAT_01ba5798;
  local_2c = (uint *)&DAT_01ba5990;
  do {
    local_24 = local_28;
    if (this_ptr == (CDraculaBride *)local_28[0x14]) {
      iVar2 = sound_sndmain_cpp_FUN_00550b70(*local_28);
      puVar1 = local_28;
      if (iVar2 == 0) {
        local_28[0x14] = 0;
      }
      else {
        local_18 = (float *)(local_28 + 0x11);
        local_28[7] = (uint)((float)local_28[7] + delta_time);
        local_1c = (float *)(local_28 + 0xe);
        local_20 = (float *)(local_28 + 8);
        pfVar4 = (float *)(local_28 + 0xb);
        while (1.0 < (float)local_24[7]) {
          local_24[7] = (uint)((float)local_24[7] + _DAT_005d11f0);
          if (pfVar4 != local_20) {
            *local_20 = *pfVar4;
            local_20[1] = (float)puVar1[0xc];
            local_20[2] = (float)puVar1[0xd];
          }
          if (pfVar4 != local_1c) {
            *pfVar4 = *local_1c;
            puVar1[0xc] = (uint)local_1c[1];
            puVar1[0xd] = (uint)local_1c[2];
          }
          if (local_1c != local_18) {
            *local_1c = *local_18;
            local_1c[1] = local_18[1];
            local_1c[2] = local_18[2];
          }
          max_value = 5.0;
          fVar3 = -5.0;
          local_80 = g_CDemonCameraInstance.base.position.f.x;
          *(uint *)(&stack0xffffff84 + (uint)bVar6 * -8) =
               *(uint *)((int)&g_CDemonCameraInstance + (uint)bVar6 * -8 + 8);
          *(uint *)(&stack0xffffff88 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)((uint)bVar6 * -8 + 0x1fc7844 + (uint)bVar6 * -8);
          fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar3,max_value);
          local_14 = fVar3;
          local_68 = local_80;
          *(uint *)(&stack0xffffff90 + ((uint)bVar6 * -2 + 3) * 4) =
               *(uint *)(&stack0xffffff84 + (uint)bVar6 * -8);
          *(uint *)(&stack0xffffff90 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4) =
               *(uint *)(&stack0xffffff88 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          local_68 = fVar3 + local_68;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-2.0,2.0);
          local_64 = local_14 + local_64;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-5.0,5.0);
          local_60 = local_14 + local_60;
          afStack_58[2] = local_68;
          afStack_58[(uint)bVar6 * -2 + 3] =
               *(float *)(&stack0xffffff90 + ((uint)bVar6 * -2 + 3) * 4);
          afStack_58[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               *(float *)(&stack0xffffff90 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4);
          if (afStack_58 + 2 != local_18) {
            *local_18 = afStack_58[2];
            local_18[1] = afStack_58[3];
            local_18[2] = local_48;
          }
        }
        core_spline_cpp_FUN_00561310((float *)&stack0xffffff60,(float)local_24[7],0.0);
        core_spline_cpp_FUN_00561540();
        puVar1 = local_24;
        puVar5 = local_24 + 1;
        local_44 = local_5c;
        (&local_40)[(uint)bVar6 * -2] = afStack_58[(uint)bVar6 * -2];
        (&local_40)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_58[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        if (puVar5 != &local_44) {
          *puVar5 = local_44;
          puVar1[2] = (uint)local_40;
          puVar1[3] = local_3c;
        }
        engine_console_cpp_FUN_00436710
                  (g_CConsolePtr,"@%5.2f %5.2f %5.2f\n" + 1,(double)(float)local_24[1],
                   (double)(float)local_24[2],(double)(float)local_24[3]);
        core_spline_cpp_FUN_00561780();
        local_38 = local_74;
        (&local_40)[(uint)bVar6 * -2 + 3] = *(float *)(&stack0xffffff90 + (uint)bVar6 * -8);
        (&local_40)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             *(float *)(&stack0xffffff90 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
        if ((float *)(local_24 + 4) != &local_38) {
          local_24[4] = (uint)local_38;
          local_24[5] = local_34;
          local_24[6] = local_30;
        }
      }
    }
    local_28 = local_28 + 0x15;
  } while (local_28 != local_2c);
  return;
}
