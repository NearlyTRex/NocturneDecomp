// Name: core_steuben.cpp_FUN_005a5c40
// Address: 005a5c40
// Address Range: [[005a5c40, 005a5d02]]
// Convention: unknown
// Signature: void core_steuben_cpp_FUN_005a5c40(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_steuben_cpp_FUN_005a5c40(int param_1,float param_2)

{
  int iVar1;
  CClothList *this_ptr;
  byte bVar2;
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
  
  bVar2 = 0;
  iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Death");
  if (iVar1 == 0) {
    iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Animation");
    if (iVar1 == 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
    }
  }
  fStack_30 = *(float *)(param_1 + 0x11354) * _DAT_005f0622;
  fStack_2c = *(float *)(param_1 + 0x11358) * _DAT_005f0622;
  fStack_28 = *(float *)(param_1 + 0x1135c) * _DAT_005f0622;
  fStack_3c = fStack_30;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  wind_velocity = &CStack_24;
  this_ptr = (CClothList *)(param_1 + 0x2d0c);
  fStack_18 = fStack_3c * param_2;
  afStack_14[0] = fStack_38 * param_2;
  afStack_14[1] = fStack_34 * param_2;
  CStack_24.x = fStack_3c * param_2;
  *(float *)((int)&CStack_24 + (uint)bVar2 * -8 + 4) = afStack_14[(uint)bVar2 * -2];
  *(float *)((int)&CStack_24 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       afStack_14[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  core_cloth_cpp_CClothList_setWindVelocity_FUN_005b1890(this_ptr,wind_velocity);
  return;
}
