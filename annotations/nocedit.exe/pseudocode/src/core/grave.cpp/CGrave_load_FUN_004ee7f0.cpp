// Name: core_grave.cpp_CGrave_load_FUN_004ee7f0
// Address: 004ee7f0
// Address Range: [[004ee7f0, 004ee8e9]]
// Convention: unknown
// Signature: undefined core_grave.cpp_CGrave_load_FUN_004ee7f0()

#include "nocturne.h"

/* Signature: byte actors_other_grave.cpp_CGrave_load(CGrave* pGrave) */

void core_grave_cpp_CGrave_load_FUN_004ee7f0(void)

{
  CDemonActor *pCVar1;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  
  pCVar1 = (CDemonActor *)in_stack_00000004;
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0((CDemonActor *)in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(pCVar1 + 1),"model name");
  core_actor_cpp_serializeFloat_FUN_0040b770(&pCVar1[2].location.position.z,"fps");
  if (g_CGraveClassVersion < 2) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)&stack0x00000000,"active");
    pCVar1[2].orient.pitch = 0.0;
    if ((CDemonActor *)in_stack_00000004 != (CDemonActor *)0x0) {
      pCVar1[2].orient.pitch = 1.4013e-45;
    }
  }
  else {
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)&pCVar1[2].orient,"graveState");
  }
  core_actor_cpp_serializeFloat_FUN_0040b770(&pCVar1[2].location.position.y,"curFrame");
  if (2 < g_CGraveClassVersion) {
    in_stack_00000004 = "hideOnFirstFrame";
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&pCVar1[2].orient.bank,"hideOnFirstFrame");
    in_stack_00000008 = "startCondition";
    in_stack_00000004 = (char *)&pCVar1[2].orient.heading;
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)in_stack_00000004,"startCondition");
  }
  if (g_CGraveClassVersion < 4) {
    return;
  }
  in_stack_0000000c = "startSound";
  in_stack_00000008 = pCVar1[2].create_event + 0x24;
  in_stack_00000004 = (char *)0x4ee8e1;
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)in_stack_00000008,"startSound");
  return;
}
