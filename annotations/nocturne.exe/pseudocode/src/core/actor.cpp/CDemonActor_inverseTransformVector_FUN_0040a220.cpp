// Name: core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
// Address: 0040a220
// Address Range: [[0040a220, 0040a23e]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220(int param_1,uint param_2,uint param_3)

{
  core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(param_1 + 0x3c,param_2,param_3);
  return param_2;
}
