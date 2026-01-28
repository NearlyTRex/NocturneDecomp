// Name: core_boxactor.cpp_CLightActor_serialize_FUN_00422c80
// Address: 00422c80
// Address Range: [[00422c80, 00422d59]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_serialize_FUN_00422c80(CLightActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_serialize_FUN_00422c80(CLightActor *this_ptr)

{
  float local_c;
  
  core_boxactor_cpp_CBoxActor_serialize_FUN_00422060(&this_ptr->base);
  core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)this_ptr->unk,"lightType");
  if (*(int *)this_ptr->unk == 0) {
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)(this_ptr->unk + 0x2fb0),"bLightPos");
    core_actor_cpp_serializeOrientation_FUN_0040b3e0
              ((COrientation *)(this_ptr->unk + 0x2fbc),"lightOrient");
    if (g_ActorReadingMode == 1) {
      core_actor_cpp_serializeFloat_FUN_0040b770(&local_c,"lightFov");
      *(float *)(this_ptr->unk + 0x3c) = local_c;
    }
    else {
      local_c = *(float *)(this_ptr->unk + 0x3c);
      core_actor_cpp_serializeFloat_FUN_0040b770(&local_c,"lightFov");
    }
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(this_ptr->unk + 0x1cb8),"light status");
  if (*(int *)this_ptr->unk != 0) {
    return;
  }
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(this_ptr->unk + 0x144),"light falloff");
  return;
}
