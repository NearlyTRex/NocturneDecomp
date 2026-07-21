// Name: core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00508890
// Address: 00508890
// Address Range: [[00508890, 005088e9]]
// Convention: unknown
// Signature: void core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(undefined4 param_1,int param_2)

#include "nocturne.h"

void core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(uint param_1,int param_2)

{
  *(uint *)(param_2 + 0x140) = 0x1f;
  if ((uint *)(param_2 + 0x128) == (uint *)(param_2 + 0x20)) {
    if (param_2 + 0x134 == param_2 + 0x30) {
      return;
    }
  }
  else {
    *(uint *)(param_2 + 0x128) = *(uint *)(param_2 + 0x20);
    *(uint *)(param_2 + 300) = *(uint *)(param_2 + 0x24);
    *(uint *)(param_2 + 0x130) = *(uint *)(param_2 + 0x28);
    if (param_2 + 0x134 == param_2 + 0x30) {
      return;
    }
  }
  *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x138) = *(uint *)(param_2 + 0x34);
  *(uint *)(param_2 + 0x13c) = *(uint *)(param_2 + 0x38);
  return;
}
