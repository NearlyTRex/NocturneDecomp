// Name: core_charactr.cpp_FUN_00433e50
// Address: 00433e50
// Address Range: [[00433e50, 00433e70]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00433e50(CDemonActor *param_1,int param_2,float param_3)

#include "nocturne.h"

void core_charactr_cpp_FUN_00433e50(CDemonActor *param_1,int param_2,float param_3)

{
  if (*(int *)&param_1[0x24].field_0xc0 != 0) {
    return;
  }
  core_actor_cpp_FUN_00409c00(param_1,param_2,param_3);
  return;
}
