// Name: core_charactr.cpp_FUN_00433320
// Address: 00433320
// Address Range: [[00433320, 00433340]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00433320(CDemonActor *param_1,int param_2,float param_3)

#include "nocturne.h"

void core_charactr_cpp_FUN_00433320(CDemonActor *param_1,int param_2,float param_3)

{
  if (*(int *)&param_1[0x26].field_0x90 != 0) {
    return;
  }
  core_actor_cpp_FUN_00409c40(param_1,param_2,param_3);
  return;
}
