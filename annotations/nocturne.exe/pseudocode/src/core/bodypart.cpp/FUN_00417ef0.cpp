// Name: core_bodypart.cpp_FUN_00417ef0
// Address: 00417ef0
// Address Range: [[00417ef0, 00417f09]]
// Convention: unknown
// Signature: int core_bodypart_cpp_FUN_00417ef0(CDemonActor *param_1)

#include "nocturne.h"

int core_bodypart_cpp_FUN_00417ef0(CDemonActor *param_1)

{
  int iVar1;
  
  if (*(int *)param_1[1].actor_name != 0) {
    return 0;
  }
  iVar1 = core_actor_cpp_FUN_0040b200(param_1);
  return iVar1;
}
