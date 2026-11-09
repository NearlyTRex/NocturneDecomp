// Name: core_charactr.cpp_FUN_00429e60
// Address: 00429e60
// Address Range: [[00429e60, 00429e80]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00429e60(CDemonActor *param_1,int param_2,float param_3)

#include "nocturne.h"

void core_charactr_cpp_FUN_00429e60(CDemonActor *param_1,int param_2,float param_3)

{
  if (*(int *)&param_1[0x13].field_0x208 != 0) {
    return;
  }
  core_actor_cpp_FUN_00409db0(param_1,param_2,param_3);
  return;
}
