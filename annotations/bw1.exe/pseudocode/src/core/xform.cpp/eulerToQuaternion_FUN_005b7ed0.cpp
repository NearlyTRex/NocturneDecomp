// Name: core_xform.cpp_eulerToQuaternion_FUN_005b7ed0
// Address: 005b7ed0
// Address Range: [[005b7ed0, 005b7fe6]]
// Convention: __stack_esi
// Signature: CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternion_FUN_005b7ed0(CVector3f *euler_angles,CQuaternion4f *quat_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CQuaternion4f * __stack_esi core_xform_cpp_eulerToQuaternion_FUN_005b7ed0(CVector3f *euler_angles,CQuaternion4f *quat_out)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  float afStackY_181c [1524];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  bVar3 = 0;
  local_1c = euler_angles->x * _DAT_005fa1bc;
  core_dirmat_cpp_sinCos_FUN_0045fd80(&stack0xffffffd0,&local_28,&local_1c);
  local_c = euler_angles->z * _DAT_005fa1bc;
  core_dirmat_cpp_sinCos_FUN_0045fd80(&stack0xffffffd4,&local_24,&local_c);
  local_14 = euler_angles->y * _DAT_005fa1bc;
  core_dirmat_cpp_sinCos_FUN_0045fd80(&local_18,&local_20,&local_14);
  local_10 = local_24 * local_28;
  local_38 = local_10 * local_18 + -local_2c * local_20 * local_30;
  local_3c = local_2c * local_28 * local_18 + local_24 * local_20 * local_30;
  local_40 = local_10 * local_20 + local_2c * local_30 * local_18;
  local_34 = local_28 * local_20 * local_2c - local_24 * local_30 * local_18;
  puVar1 = (uint *)((int)quat_out + (uint)bVar3 * -8 + 4);
  quat_out->w = local_40;
  puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
  *puVar1 = *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8);
  *puVar2 = *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       ((uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8))
       [(uint)bVar3 * -2 + 1];
  return quat_out;
}
