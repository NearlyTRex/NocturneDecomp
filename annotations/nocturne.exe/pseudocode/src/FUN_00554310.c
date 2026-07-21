// Name: FUN_00554310
// Address: 00554310
// Address Range: [[00554310, 005543a0]]
// Convention: unknown
// Signature: void FUN_00554310(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_00554310(int param_1,uint *param_2)

{
  uint *puVar1;
  byte local_14 [12];
  
  *(uint *)(param_1 + 0x2fc) = 0;
  core_weapon_cpp_CWeapon_setupPhysicsBox_FUN_00554660(param_1);
  if (param_2 != (uint *)0x0) {
    puVar1 = (uint *)
             core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                       (param_1 + 0x318,local_14,param_2);
    if ((uint *)(param_1 + 0x34c) != puVar1) {
      *(uint *)(param_1 + 0x34c) = *puVar1;
      *(uint *)(param_1 + 0x350) = puVar1[1];
      *(uint *)(param_1 + 0x354) = puVar1[2];
    }
    if ((uint *)(param_1 + 0x340) != param_2) {
      *(uint *)(param_1 + 0x340) = *param_2;
      *(uint *)(param_1 + 0x344) = param_2[1];
      *(uint *)(param_1 + 0x348) = param_2[2];
    }
  }
  (**(code **)(*(int *)(param_1 + 0x14c) + 0xd4))(param_1,0);
  *(uint *)(param_1 + 0x568) = 0x40a00000;
  return;
}
