// Name: core_carved.cpp_FUN_00428450
// Address: 00428450
// Address Range: [[00428450, 00428545]]
// Convention: unknown
// Signature: void core_carved_cpp_FUN_00428450(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_carved_cpp_FUN_00428450(CDemonActor *param_1)

{
  int iVar1;
  float unaff_EBP;
  float *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1038 [1003];
  CBoundingBox3D *in_stack_ffffff78;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [2];
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  (*((param_1->vtable)._ub)->getBoundingBox)(param_1,in_stack_ffffff78);
  puVar2 = (uint *)&stack0xffffff80;
  puVar3 = (uint *)&stack0xffffff90;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&CStack_20);
  CStack_20.x = fStack_68 + fStack_5c;
  CStack_20.y = fStack_64 + fStack_58;
  CStack_20.z = fStack_60 + fStack_54;
  fStack_14 = fStack_68 + fStack_5c;
  (&fStack_10)[(uint)bVar4 * -2] = *(float *)((int)&CStack_20 + (uint)bVar4 * -8 + 4);
  *(uint *)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&CStack_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&CStack_50);
  CStack_50.x = fStack_14 * _DAT_005d51bd;
  CStack_50.y = fStack_10 * _DAT_005d51bd;
  CStack_50.z = unaff_EBP * _DAT_005d51bd;
  fStack_44 = fStack_14 * _DAT_005d51bd;
  afStack_40[(uint)bVar4 * -2] = *(float *)((int)&CStack_50 + (uint)bVar4 * -8 + 4);
  afStack_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_50 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  afStack_40[1] = fStack_60 + (float)_DAT_005d51c5;
  CStack_38.x = fStack_44;
  *(float *)((int)&CStack_38 + (uint)bVar4 * -8 + 4) = afStack_40[(uint)bVar4 * -2];
  *(float *)((int)&CStack_38 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(param_1,&CStack_38,&CStack_2c);
  *unaff_ESI = CStack_2c.x;
  unaff_ESI[(uint)bVar4 * -2 + 1] = *(float *)((int)&CStack_2c + (uint)bVar4 * -8 + 4);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  return;
}
