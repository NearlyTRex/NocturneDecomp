// Name: core_manpuz.cpp_CMirrorHack_process_FUN_004cbbc0
// Address: 004cbbc0
// Address Range: [[004cbbc0, 004cbc44]]
// Convention: unknown
// Signature: void core_manpuz_cpp_CMirrorHack_process_FUN_004cbbc0(int param_1,float param_2)

#include "nocturne.h"

void core_manpuz_cpp_CMirrorHack_process_FUN_004cbbc0(int param_1,float param_2)

{
  int iVar1;
  uint local_10;
  
  local_10 = (param_2 * (float)6.2831853070000001) / (float)30;
  iVar1 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x38);
  if (iVar1 != 0) {
    local_10 = local_10 * (float)0.20000000000000001;
  }
  iVar1 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x33);
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) - local_10;
  }
  iVar1 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x34);
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + local_10;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
  return;
}
