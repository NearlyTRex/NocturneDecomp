// Name: core_tentacle.cpp_FUN_005732a0
// Address: 005732a0
// Address Range: [[005732a0, 005732da]]
// Convention: unknown
// Signature: int core_tentacle_cpp_FUN_005732a0(CDemonActor *param_1)

#include "nocturne.h"

int core_tentacle_cpp_FUN_005732a0(CDemonActor *param_1)

{
  char *str1;
  int iVar1;
  char *str2;
  
  str2 = &DAT_005ec542;
  str1 = (char *)core_motion_cpp_FUN_005035c0(param_1 + 1);
  iVar1 = _stricmp(str1,str2);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = core_actor_cpp_FUN_0040c890(param_1);
  return iVar1;
}
