// Name: FUN_0040a140
// Address: 0040a140
// Address Range: [[0040a140, 0040a1fb]]
// Convention: unknown
// Signature: undefined4 FUN_0040a140(int param_1,undefined4 param_2,undefined4 *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040a140(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(0x01E57284);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  FUN_005117f0(0x01E57284);
  uVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                    (0x01E57284,param_1 + 0x20,param_2);
  uVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                    (*(uint *)(0x01E57284 + 0x14cd5c),_DAT_01e428cc);
  *(uint *)(param_1 + 0xdc) = uVar3;
  iVar1 = 0x01E57284;
  if (param_3 != (uint *)0x0) {
    if (param_3 != (uint *)(0x01E57284 + 0x14cd40)) {
      *param_3 = *(uint *)(0x01E57284 + 0x14cd40);
      param_3[1] = *(uint *)(iVar1 + 0x14cd44);
      param_3[2] = *(uint *)(iVar1 + 0x14cd48);
    }
  }
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(0x01E57284);
  return uVar2;
}
