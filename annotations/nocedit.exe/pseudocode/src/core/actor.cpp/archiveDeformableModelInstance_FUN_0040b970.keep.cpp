// Name: core_actor.cpp_archiveDeformableModelInstance_FUN_0040b970
// Address: 0040b970
// MANUAL RECONSTRUCTION
// Address Range: [[0040b970, 0040b9ea]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970(CDeformableModelInstance *model_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970(CDeformableModelInstance *model_ptr,char *property_name)

{
  char local_d0 [200];

  if (g_ActorReadingMode == 1) {
    core_actor_cpp_archiveString_FUN_0040b5c0(local_d0,property_name);
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(model_ptr,local_d0);
    return;
  }
  strcpy(local_d0,model_ptr->model_name);
  core_actor_cpp_archiveString_FUN_0040b5c0(local_d0,property_name);
  return;
}
