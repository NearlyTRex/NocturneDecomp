// Name: core_twigzomb.cpp_FUN_005a2910
// Address: 005a2910
// Address Range: [[005a2910, 005a2a87]]
// Convention: unknown
// Signature: void core_twigzomb_cpp_FUN_005a2910(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_twigzomb_cpp_FUN_005a2910(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  CClothList *this_ptr;
  byte bVar4;
  float afStackY_1024 [1016];
  CVector3f *wind_velocity;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f CStack_24;
  float fStack_18;
  float afStack_14 [2];
  
  bVar4 = 0;
  iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Death");
  if ((iVar2 == 0) ||
     (iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Animation"), iVar2 == 0)
     ) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  }
  iVar2 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
  if ((*(int *)(iVar2 + 0x24) == 1) ||
     (iVar2 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4), *(int *)(iVar2 + 0x24) == 6)) {
    if (*(char *)(param_1 + 0x11741) == '\0') {
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x11848));
    }
    else {
      fVar1 = *(float *)(param_1 + 0x11840) - param_2;
      *(float *)(param_1 + 0x11840) = fVar1;
      if (fVar1 <= 0.0) {
        *(uint *)(param_1 + 0x11840) = *(uint *)(param_1 + 0x11844);
        uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x11741);
        *(uint *)(param_1 + 0x11848) = uVar3;
      }
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x11848));
  }
  fStack_30 = *(float *)(param_1 + 0x11354) * _DAT_005f000f;
  fStack_2c = *(float *)(param_1 + 0x11358) * _DAT_005f000f;
  fStack_28 = *(float *)(param_1 + 0x1135c) * _DAT_005f000f;
  fStack_3c = fStack_30;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  wind_velocity = &CStack_24;
  this_ptr = (CClothList *)(param_1 + 0x2d0c);
  fStack_18 = fStack_3c * param_2;
  afStack_14[0] = fStack_38 * param_2;
  afStack_14[1] = fStack_34 * param_2;
  CStack_24.x = fStack_3c * param_2;
  *(float *)((int)&CStack_24 + (uint)bVar4 * -8 + 4) = afStack_14[(uint)bVar4 * -2];
  *(float *)((int)&CStack_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_14[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_cloth_cpp_CClothList_setWindVelocity_FUN_005b1890(this_ptr,wind_velocity);
  return;
}
