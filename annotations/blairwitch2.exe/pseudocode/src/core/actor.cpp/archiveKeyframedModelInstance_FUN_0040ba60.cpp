// Name: core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
// Address: 0040ba60
// Address Range: [[0040ba60, 0040bad7]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(CKeyFramedModelInstance *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(CKeyFramedModelInstance *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_d0 [200];
  
  pcVar3 = local_d0;
  if (DAT_007bc038 == 1) {
    core_actor_cpp_archiveString_FUN_0040b730(local_d0,param_2);
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(param_1,local_d0);
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
  core_actor_cpp_archiveString_FUN_0040b730(local_d0,param_2);
  return;
}
