// Name: core_flamegun.cpp_FUN_004a0db0
// Address: 004a0db0
// Address Range: [[004a0db0, 004a0e57]]
// Convention: unknown
// Signature: undefined4 core_flamegun_cpp_FUN_004a0db0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_flamegun_cpp_FUN_004a0db0(int param_1)

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
  if (*(int *)(param_1 + 0x6c4) < 1) {
    return 0;
  }
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))(param_1);
  puVar3 = &uStack_1c;
  uStack_1c = auStack_18[2];
  auStack_18[(uint)bVar2 * -2] = auStack_18[(uint)bVar2 * -2 + 3];
  auStack_18[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       auStack_18[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  core_actor_cpp_FUN_00408d70(param_1,puVar3);
  flame_type = 1;
  flame_count = 3;
  euler_angles = (CVector3f *)(param_1 + 0x30);
  position = &CStack_28;
  CStack_28._0_4_ = CStack_34._0_4_;
  *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_34 + (uint)bVar2 * -8 + 4);
  this_ptr = 0x01C3DEB4;
  *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  core_fire_cpp_CFireEffect_createGunFlames_FUN_0049e680
            (this_ptr,position,euler_angles,flame_count,flame_type);
  if (*(int *)(param_1 + 0x6dc) == 0) {
    fVar1 = 1.0 / _DAT_005f6b50;
    *(int *)(param_1 + 0x6c4) = *(int *)(param_1 + 0x6c4) + -1;
    *(float *)(param_1 + 0x6e0) = fVar1;
  }
  *(uint *)(param_1 + 0x6d4) = 1;
  return 1;
}
