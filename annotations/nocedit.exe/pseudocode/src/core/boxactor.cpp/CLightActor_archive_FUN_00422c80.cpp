// Name: core_boxactor.cpp_CLightActor_archive_FUN_00422c80
// Address: 00422c80
// Address Range: [[00422c80, 00422d59]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_archive_FUN_00422c80(CLightActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_archive_FUN_00422c80(CLightActor *this_ptr)

{
  float local_c;
  
  core_boxactor_cpp_CBoxActor_archive_FUN_00422060(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b7f0
            ((int *)&this_ptr->light_actor_type,"lightType");
  if (this_ptr->light_actor_type == LIGHT_TYPE_CUSTOM) {
    core_actor_cpp_archiveVector_FUN_0040b340
              ((CVector3f *)(this_ptr->unk + 0x2fac),"bLightPos");
    core_actor_cpp_archiveOrientation_FUN_0040b3e0
              ((COrientation *)(this_ptr->unk + 0x2fb8),"lightOrient");
    if (g_ActorReadingMode == 1) {
      core_actor_cpp_archiveFloat_FUN_0040b770(&local_c,"lightFov");
      *(float *)(this_ptr->unk + 0x38) = local_c;
    }
    else {
      local_c = *(float *)(this_ptr->unk + 0x38);
      core_actor_cpp_archiveFloat_FUN_0040b770(&local_c,"lightFov");
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0
            ((int *)(this_ptr->unk + 0x1cb4),"light status");
  if (this_ptr->light_actor_type != LIGHT_TYPE_CUSTOM) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b770
            ((float *)(this_ptr->unk + 0x140),"light falloff");
  return;
}
