// Name: core_flamegun.cpp_FUN_004b9660
// Address: 004b9660
// Address Range: [[004b9660, 004b9707]]
// Convention: unknown
// Signature: undefined4 core_flamegun_cpp_FUN_004b9660(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_flamegun_cpp_FUN_004b9660(int param_1)

{
  float fVar1;
  byte bVar2;
  uint auStackY_101c [1011];
  CFireEffect *this_ptr;
  CVector3f *position;
  CVector3f *euler_angles;
  int flame_count;
  uint *puVar3;
  int flame_type;
  CVector3f CStack_34;
  CVector3f CStack_28;
  uint uStack_1c;
  uint auStack_18 [5];
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0x568) < 1) {
    return 0;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))(param_1);
  puVar3 = &uStack_1c;
  uStack_1c = auStack_18[2];
  auStack_18[(uint)bVar2 * -2] = auStack_18[(uint)bVar2 * -2 + 3];
  auStack_18[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       auStack_18[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  core_actor_cpp_FUN_00408b40(param_1,puVar3);
  flame_type = 1;
  flame_count = 3;
  euler_angles = (CVector3f *)(param_1 + 0x30);
  position = &CStack_28;
  CStack_28._0_4_ = CStack_34._0_4_;
  *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_34 + (uint)bVar2 * -8 + 4);
  this_ptr = 0x01C57074;
  *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  core_fire_cpp_CFireEffect_createGunFlames_FUN_004b6f80
            (this_ptr,position,euler_angles,flame_count,flame_type);
  if (*(int *)(param_1 + 0x580) == 0) {
    fVar1 = 1.0 / _DAT_006005c0;
    *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) + -1;
    *(float *)(param_1 + 0x584) = fVar1;
  }
  *(uint *)(param_1 + 0x578) = 1;
  return 1;
}
