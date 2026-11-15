// Name: core_dracbrid.cpp_FUN_0047de00
// Address: 0047de00
// Address Range: [[0047de00, 0047e147]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_FUN_0047de00(CDraculaBride *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_FUN_0047de00(CDraculaBride *this_ptr,float delta_time)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  CVector3f *p1;
  float *pfVar4;
  byte bVar5;
  float afStackY_1068 [1002];
  float max_value;
  float local_80;
  float local_74;
  float local_68;
  float local_64;
  float local_60;
  CVector3f local_5c;
  CVector3f local_50;
  float local_44;
  float local_40;
  uint local_3c;
  float local_38;
  uint local_34;
  uint local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  CVector3f *local_20;
  CVector3f *local_1c;
  CVector3f *local_18;
  float local_14;
  
  bVar5 = 0;
  fVar3 = this_ptr->freaky_timer - delta_time;
  this_ptr->freaky_timer = fVar3;
  if (fVar3 < 0.0) {
    this_ptr->freaky_timer = 0.0;
  }
  local_28 = (uint *)&DAT_01bc0d54;
  local_2c = (uint *)&DAT_01bc0f4c;
  do {
    local_24 = local_28;
    if (this_ptr == (CDraculaBride *)local_28[0x14]) {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(*local_28);
      puVar1 = local_28;
      if (iVar2 == 0) {
        local_28[0x14] = 0;
      }
      else {
        local_18 = (CVector3f *)(local_28 + 0x11);
        local_28[7] = (uint)((float)local_28[7] + delta_time);
        local_1c = (CVector3f *)(local_28 + 0xe);
        local_20 = (CVector3f *)(local_28 + 8);
        p1 = (CVector3f *)(local_28 + 0xb);
        while (1.0 < (float)local_24[7]) {
          local_24[7] = (uint)((float)local_24[7] + _DAT_005dafe9);
          if (p1 != local_20) {
            local_20->x = p1->x;
            local_20->y = (float)puVar1[0xc];
            local_20->z = (float)puVar1[0xd];
          }
          if (p1 != local_1c) {
            p1->x = local_1c->x;
            puVar1[0xc] = (uint)local_1c->y;
            puVar1[0xd] = (uint)local_1c->z;
          }
          if (local_1c != local_18) {
            local_1c->x = local_18->x;
            local_1c->y = local_18->y;
            local_1c->z = local_18->z;
          }
          max_value = 5.0;
          fVar3 = -5.0;
          local_80 = g_CDemonCameraInstance.base.position.f.x;
          *(uint *)(&stack0xffffff84 + (uint)bVar5 * -8) =
               *(uint *)((int)&g_CDemonCameraInstance + (uint)bVar5 * -8 + 8);
          *(uint *)(&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)((uint)bVar5 * -8 + 0x1fe37f8 + (uint)bVar5 * -8);
          fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fVar3,max_value);
          local_14 = fVar3;
          local_68 = local_80;
          *(uint *)(&stack0xffffff90 + ((uint)bVar5 * -2 + 3) * 4) =
               *(uint *)(&stack0xffffff84 + (uint)bVar5 * -8);
          *(uint *)(&stack0xffffff90 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4) =
               *(uint *)(&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          local_68 = fVar3 + local_68;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-2.0,2.0);
          local_64 = local_14 + local_64;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-5.0,5.0);
          local_60 = local_14 + local_60;
          local_50.x = local_68;
          *(uint *)((int)&local_50 + (uint)bVar5 * -8 + 4) =
               *(uint *)(&stack0xffffff90 + ((uint)bVar5 * -2 + 3) * 4);
          *(uint *)((int)&local_50 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               *(uint *)(&stack0xffffff90 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4);
          if (&local_50 != local_18) {
            local_18->x = local_50.x;
            local_18->y = local_50.y;
            local_18->z = local_50.z;
          }
        }
        core_spline_cpp_computeSplineBasis_FUN_00583d60
                  ((float *)&stack0xffffff60,(float)local_24[7],0.0);
        core_spline_cpp_evaluateSplinePoint3D_FUN_00583f90
                  ((float *)&stack0xffffff60,local_20,p1,(CVector3f *)(local_24 + 0xe),
                   (CVector3f *)(local_24 + 0x11),&local_5c);
        puVar1 = local_24;
        pfVar4 = (float *)(local_24 + 1);
        local_44 = local_5c.x;
        (&local_40)[(uint)bVar5 * -2] = *(float *)((int)&local_5c + (uint)bVar5 * -8 + 4);
        (&local_40)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             *(float *)((int)&local_5c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        if (pfVar4 != &local_44) {
          *pfVar4 = local_44;
          puVar1[2] = (uint)local_40;
          puVar1[3] = local_3c;
        }
        engine_console_cpp_CConsole_printf_FUN_00445430
                  (g_CConsolePtr,"@%5.2f %5.2f %5.2f\n" + 1);
        core_spline_cpp_FUN_005841d0();
        local_38 = local_74;
        (&local_40)[(uint)bVar5 * -2 + 3] = *(float *)(&stack0xffffff90 + (uint)bVar5 * -8);
        (&local_40)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             *(float *)(&stack0xffffff90 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
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
