// Name: core_charactr.cpp_FUN_00422ec0
// Address: 00422ec0
// Address Range: [[00422ec0, 00422f36]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00422ec0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00422ec0(int param_1,uint param_2,uint param_3)

{
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x100))(param_1);
  core_actor_cpp_FUN_00409e70(param_1,param_2,param_3);
  *(uint *)(param_1 + 0x2590) = 0;
  *(uint *)(param_1 + 0x258c) = *(uint *)(param_1 + 0x2590);
  *(uint *)(param_1 + 0x2588) = *(uint *)(param_1 + 0x258c);
  *(uint *)(param_1 + 0x2574) = _DAT_005f4084;
  core_cloth_cpp_CClothList_process_FUN_005b1780
            ((CClothList *)(param_1 + 0x2d0c),(CVector3f *)(param_1 + 0x20),
             (CVector3f *)(param_1 + 0x30),10.0,*(float *)(param_1 + 0x2574),
             (CDeformableModelInstance *)(param_1 + 0x2b4));
  return;
}
