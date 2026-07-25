// Name: core_baron.cpp_CBaron_updateMountedPosition_FUN_00410bf0
// Address: 00410bf0
// Address Range: [[00410bf0, 00410cb2]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_00410bf0(int param_1)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_00410bf0(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float local_34;
  float local_30;
  float local_2c;
  byte local_28 [12];
  uint local_1c;
  uint local_18;
  uint local_14;
  
  if (*(int *)(param_1 + 0x1fb14) != 0) {
    iVar3 = *(int *)(param_1 + 0x14c);
    local_14 = 0xc0000000;
    local_1c = 0;
    local_18 = 0;
    pfVar2 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                (*(uint *)(param_1 + 0x1fb14),local_28,&local_1c,
                                 *(int *)(param_1 + 0x1fb14) + 0x30);
    iVar1 = *(int *)(param_1 + 0x1fb14);
    local_34 = *(float *)(iVar1 + 0x20) + *pfVar2;
    local_30 = *(float *)(iVar1 + 0x24) + pfVar2[1];
    local_2c = *(float *)(iVar1 + 0x28) + pfVar2[2];
    (**(code **)(iVar3 + 0x60))(param_1,&local_34);
    iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(param_1 + 0x1fb14),CDemonActorType_00765a60.name_hash);
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3);
      if (iVar3 == 2) {
        core_baron_cpp_CBaron_detachFromOwner_FUN_00410bb0
                  (param_1,*(uint *)(param_1 + 0x1fb14));
        return;
      }
    }
  }
  return;
}
