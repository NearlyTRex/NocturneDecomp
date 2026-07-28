// Name: core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
// Address: 0040ca00
// Address Range: [[0040ca00, 0040ca77]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance *model_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance *model_ptr,char *property_name)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_d0 [200];
  
  pcVar3 = local_d0;
  if (DAT_00763e88 == 1) {
    core_actor_cpp_archiveString_FUN_0040c6d0(local_d0,property_name);
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(model_ptr,local_d0);
    return;
  }
  pcVar2 = model_ptr->model_name;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  core_actor_cpp_archiveString_FUN_0040c6d0(local_d0,property_name);
  return;
}
