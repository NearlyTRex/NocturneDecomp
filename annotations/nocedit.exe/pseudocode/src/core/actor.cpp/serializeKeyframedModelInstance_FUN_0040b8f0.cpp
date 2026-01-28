// Name: core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
// Address: 0040b8f0
// Address Range: [[0040b8f0, 0040b967]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0 (CKeyFramedModelInstance *model_ptr,char *property_name)

#include "nocturne.h"

void __cdecl
core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
          (CKeyFramedModelInstance *model_ptr,char *property_name)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint model_filename_buffer;
  
  pcVar3 = (char *)&model_filename_buffer;
  if (g_ActorReadingMode == 1) {
    core_actor_cpp_serializeString_FUN_0040b5c0((char **)&model_filename_buffer,property_name);
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (model_ptr,(char *)&model_filename_buffer);
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
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)&model_filename_buffer,property_name);
  return;
}
