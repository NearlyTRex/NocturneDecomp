// Name: core_boneguy.cpp_FUN_00417e20
// Address: 00417e20
// Address Range: [[00417e20, 00417f15]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_00417e20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_boneguy_cpp_FUN_00417e20(int param_1)

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
  byte auStack_58 [4];
  float afStack_54 [4];
  float fStack_44;
  float afStack_40 [3];
  uint uStack_34;
  float fStack_28;
  float afStack_24 [4];
  float fStack_14;
  
  bVar4 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  puVar2 = (uint *)&stack0xffffff78;
  puVar3 = &stack0xffffff90;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_actor_cpp_CVector3f_ctor_FUN_0040d340((CVector3f *)&fStack_28);
  fStack_28 = fStack_70 + fStack_64;
  afStack_24[0] = fStack_6c + fStack_60;
  afStack_24[1] = fStack_68 + fStack_5c;
  afStack_24[2] = fStack_70 + fStack_64;
  afStack_24[(uint)bVar4 * -2 + 3] = afStack_24[(uint)bVar4 * -2];
  afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_CVector3f_ctor_FUN_0040d340((CVector3f *)auStack_58);
  auStack_58 = (byte  [4])(afStack_24[2] * _DAT_005cbfda);
  afStack_54[0] = afStack_24[3] * _DAT_005cbfda;
  afStack_54[1] = fStack_14 * _DAT_005cbfda;
  afStack_54[2] = afStack_24[2] * _DAT_005cbfda;
  afStack_54[(uint)bVar4 * -2 + 3] = afStack_54[(uint)bVar4 * -2];
  afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fStack_44 = fStack_68 + (float)_DAT_005cbfe2;
  afStack_40[0] = afStack_54[2];
  afStack_54[(uint)bVar4 * -2 + 6] = afStack_54[(uint)bVar4 * -2 + 3];
  afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  core_actor_cpp_FUN_00408d70(param_1,afStack_54 + 5);
  *unaff_ESI = uStack_34;
  unaff_ESI[(uint)bVar4 * -2 + 1] = afStack_54[(uint)bVar4 * -2 + 9];
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  return;
}
