// Name: core_boneguy.cpp_getWorldBoundingBoxCenter_FUN_0041b2a0
// Address: 0041b2a0
// Address Range: [[0041b2a0, 0041b395]]
// Convention: unknown
// Signature: void core_boneguy_cpp_getWorldBoundingBoxCenter_FUN_0041b2a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_boneguy_cpp_getWorldBoundingBoxCenter_FUN_0041b2a0(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1040 [1004];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [5];
  uint uStack_34;
  CVector3f CStack_28;
  float fStack_1c;
  float afStack_18 [3];
  
  bVar4 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar2 = (uint *)&stack0xffffff78;
  puVar3 = &stack0xffffff90;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&CStack_28);
  CStack_28.x = fStack_70 + fStack_64;
  CStack_28.y = fStack_6c + fStack_60;
  CStack_28.z = fStack_68 + fStack_5c;
  fStack_1c = fStack_70 + fStack_64;
  afStack_18[(uint)bVar4 * -2] = *(float *)((int)&CStack_28 + (uint)bVar4 * -8 + 4);
  afStack_18[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&CStack_58);
  CStack_58.x = fStack_1c * _DAT_005d4551;
  CStack_58.y = afStack_18[0] * _DAT_005d4551;
  CStack_58.z = afStack_18[1] * _DAT_005d4551;
  fStack_4c = fStack_1c * _DAT_005d4551;
  afStack_48[(uint)bVar4 * -2] = *(float *)((int)&CStack_58 + (uint)bVar4 * -8 + 4);
  afStack_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  afStack_48[1] = fStack_68 + (float)_DAT_005d4559;
  afStack_48[2] = fStack_4c;
  afStack_48[(uint)bVar4 * -2 + 3] = afStack_48[(uint)bVar4 * -2];
  afStack_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408b40(param_1,afStack_48 + 2);
  *unaff_ESI = uStack_34;
  unaff_ESI[(uint)bVar4 * -2 + 1] = afStack_48[(uint)bVar4 * -2 + 6];
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       afStack_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  return;
}
