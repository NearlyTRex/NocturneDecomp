// Name: core_boxactor.cpp_load_FUN_00422c80
// Address: 00422c80
// Address Range: [[00422c80, 00422d59]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_load_FUN_00422c80()

#include "nocturne.h"

void core_boxactor_cpp_load_FUN_00422c80(void)

{
  int in_stack_00000004;
  float local_c;
  
  core_boxactor_cpp_CBoxActor_load_FUN_00422060();
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004 + 0x66c),"lightType");
  if (*(int *)(in_stack_00000004 + 0x66c) == 0) {
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)(in_stack_00000004 + 0x361c),"bLightPos");
    core_actor_cpp_serializeOrientation_FUN_0040b3e0
              ((COrientation *)(in_stack_00000004 + 0x3628),"lightOrient");
    if (g_ActorReadingMode == 1) {
      core_actor_cpp_serializeFloat_FUN_0040b770(&local_c,"lightFov");
      *(float *)(in_stack_00000004 + 0x6a8) = local_c;
    }
    else {
      local_c = *(float *)(in_stack_00000004 + 0x6a8);
      core_actor_cpp_serializeFloat_FUN_0040b770(&local_c,"lightFov");
    }
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004 + 0x2324),"light status");
  if (*(int *)(in_stack_00000004 + 0x66c) != 0) {
    return;
  }
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004 + 0x7b0),"light falloff");
  return;
}
