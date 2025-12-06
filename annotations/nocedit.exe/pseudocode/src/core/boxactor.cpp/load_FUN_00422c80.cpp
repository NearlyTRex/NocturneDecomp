// Name: core_boxactor.cpp_load_FUN_00422c80
// Address: 00422c80
// Address Range: [[00422c80, 00422d59]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_load_FUN_00422c80()

#include "nocturne.h"

void core_boxactor_cpp_load_FUN_00422c80(void)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000004;
  char *in_stack_00000008;
  
  fVar1 = (float)in_stack_00000004;
  core_boxactor_cpp_CBoxActor_load_FUN_00422060();
  core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)((int)fVar1 + 0x66c),"lightType");
  if (*(int *)((int)fVar1 + 0x66c) == 0) {
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)((int)fVar1 + 0x361c),"bLightPos");
    core_actor_cpp_serializeOrientation_FUN_0040b3e0
              ((COrientation *)((int)fVar1 + 0x3628),"lightOrient");
    if (g_ActorReadingMode == 1) {
      core_actor_cpp_serializeFloat_FUN_0040b770((float *)&stack0x00000004,"lightFov");
      *(char **)((int)fVar1 + 0x6a8) = in_stack_00000008;
    }
    else {
      in_stack_00000004 = *(char **)((int)fVar1 + 0x6a8);
      core_actor_cpp_serializeFloat_FUN_0040b770((float *)&stack0x00000004,"lightFov");
    }
  }
  in_stack_00000004 = "light status";
  core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)((int)fVar1 + 0x2324),"light status")
  ;
  if (*(int *)((int)fVar1 + 0x66c) != 0) {
    return;
  }
  in_stack_00000008 = "light falloff";
  in_stack_00000004 = (char *)((int)fVar1 + 0x7b0);
  core_actor_cpp_serializeFloat_FUN_0040b770((float *)in_stack_00000004,"light falloff");
  return;
}
