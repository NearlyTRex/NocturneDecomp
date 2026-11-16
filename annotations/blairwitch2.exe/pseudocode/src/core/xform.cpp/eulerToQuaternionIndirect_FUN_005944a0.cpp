// Name: core_xform.cpp_eulerToQuaternionIndirect_FUN_005944a0
// Address: 005944a0
// Address Range: [[005944a0, 005945a6]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternionIndirect_FUN_005944a0(CVector3f *euler_angles,CQuaternion4f *quat_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternionIndirect_FUN_005944a0(CVector3f *euler_angles,CQuaternion4f *quat_out)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  float afStackY_1820 [1524];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float afStack_10 [2];
  
  bVar3 = 0;
  fStack_20 = euler_angles->x * _DAT_005eedee;
  core_dirmat_cpp_FUN_00449c20(&stack0xffffffcc,&fStack_28,&fStack_20);
  fStack_1c = euler_angles->z * _DAT_005eedee;
  core_dirmat_cpp_FUN_00449c20(&stack0xffffffd0,afStack_10,&fStack_1c);
  fStack_18 = euler_angles->y * _DAT_005eedee;
  core_dirmat_cpp_FUN_00449c20(&fStack_2c,&fStack_24,&fStack_18);
  fStack_14 = fStack_28 * afStack_10[0];
  fStack_40 = -fStack_34 * afStack_10[0] * fStack_24 - fStack_28 * fStack_30 * fStack_2c;
  fStack_38 = fStack_34 * afStack_10[0] * fStack_2c - fStack_28 * fStack_30 * fStack_24;
  fStack_44 = fStack_34 * fStack_30 * fStack_2c + fStack_14 * fStack_24;
  fStack_3c = fStack_34 * fStack_30 * fStack_24 - fStack_14 * fStack_2c;
  puVar1 = (uint *)((int)quat_out + (uint)bVar3 * -8 + 4);
  quat_out->w = fStack_44;
  puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
  *puVar1 = *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * -8);
  *puVar2 = *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       ((uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8))
       [(uint)bVar3 * -2 + 1];
  return quat_out;
}
