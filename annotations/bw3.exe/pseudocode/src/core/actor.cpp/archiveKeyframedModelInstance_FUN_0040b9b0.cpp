// Name: core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
// Address: 0040b9b0
// Address Range: [[0040b9b0, 0040ba27]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(CKeyFramedModelInstance *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(CKeyFramedModelInstance *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_d0 [200];
  
  pcVar3 = local_d0;
  if (DAT_007df9b8 == 1) {
    core_actor_cpp_archiveString_FUN_0040b680(local_d0,param_2);
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(param_1,local_d0);
    return;
  }
  pcVar2 = param_1->model_name;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  core_actor_cpp_archiveString_FUN_0040b680(local_d0,param_2);
  return;
}
