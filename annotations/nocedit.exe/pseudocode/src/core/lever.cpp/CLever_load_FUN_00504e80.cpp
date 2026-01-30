// Name: core_lever.cpp_CLever_load_FUN_00504e80
// Address: 00504e80
// Address Range: [[00504e80, 0050505a]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_load_FUN_00504e80(void)

#include "nocturne.h"

/* Signature: byte actors_other_lever.cpp_CLever_load(CLever* pLever) */

void __cdecl core_lever_cpp_CLever_load_FUN_00504e80(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  CDemonActor *in_stack_00000004;
  uint local_d4;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  pcVar3 = (char *)&local_d4;
  if (g_ActorReadingMode == 1) {
    core_actor_cpp_serializeString_FUN_0040b5c0((char **)&local_d4,"modelName");
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),(char *)&local_d4);
  }
  else {
    pcVar2 = in_stack_00000004[1].create_event;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    core_actor_cpp_serializeString_FUN_0040b5c0((char **)&local_d4,"modelName");
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.z,"leverType");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].orient,"onEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[2].create_event + 0x1c),"offEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)&in_stack_00000004[2].unk5,"sound");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[2].location.area_id,"param");
  if (1 < g_CLeverClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[3].actor_name + 4),"momentaryFlag");
  }
  if (2 < g_CLeverClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(in_stack_00000004[3].actor_name + 8),"linkedLever");
  }
  if (3 < g_CLeverClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[3].actor_name + 0xc),"endVertexIndex");
  }
  if (4 < g_CLeverClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[3].actor_name + 0x10),"moving");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000004[3].actor_name + 0x14),"moveToPct");
  }
  if (5 < g_CLeverClassVersion) {
    core_actor_cpp_serializeRules_FUN_0040c000
              (in_stack_00000004[3].actor_name + 0x18,"rules");
  }
  if (6 < g_CLeverClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[5].vtable,"allowedSides");
  }
  if (g_CLeverClassVersion < 8) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004 + 6),"enableCollision");
  return;
}
