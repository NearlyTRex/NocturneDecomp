// Name: core_box.cpp_CBox_setupVelocities_FUN_0041cb40
// Address: 0041cb40
// Address Range: [[0041cb40, 0041cbbe]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_setupVelocities_FUN_0041cb40(int param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_setupVelocities_FUN_0041cb40(int param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  byte local_14 [12];
  
  if (param_2 != (uint *)0x0) {
    if ((uint *)(param_1 + 0x40) != param_2) {
      *(uint *)(param_1 + 0x40) = *param_2;
      *(uint *)(param_1 + 0x44) = param_2[1];
      *(uint *)(param_1 + 0x48) = param_2[2];
    }
    puVar1 = (uint *)
             core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                       (param_1 + 0x18,local_14,param_1 + 0x40);
    if ((uint *)(param_1 + 0x4c) != puVar1) {
      *(uint *)(param_1 + 0x4c) = *puVar1;
      *(uint *)(param_1 + 0x50) = puVar1[1];
      *(uint *)(param_1 + 0x54) = puVar1[2];
    }
  }
  if ((param_3 != (uint *)0x0) && ((uint *)(param_1 + 0x70) != param_3)) {
    *(uint *)(param_1 + 0x70) = *param_3;
    *(uint *)(param_1 + 0x74) = param_3[1];
    *(uint *)(param_1 + 0x78) = param_3[2];
    return;
  }
  return;
}
