// Name: core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0
// Address: 0040b8f0
// MANUAL RECONSTRUCTION
// Address Range: [[0040b8f0, 0040b967]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance *model_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance *model_ptr,char *property_name)

{
  char model_filename_buffer [200];

  if (g_ActorReadingMode == 1) {
    core_actor_cpp_archiveString_FUN_0040b5c0(model_filename_buffer,property_name);
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              (model_ptr,model_filename_buffer);
    return;
  }
  strcpy(model_filename_buffer,model_ptr->model_name);
  core_actor_cpp_archiveString_FUN_0040b5c0(model_filename_buffer,property_name);
  return;
}
