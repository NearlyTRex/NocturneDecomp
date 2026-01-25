// Name: core_boxactor.cpp_CBoxActor_load_FUN_00422060
// Address: 00422060
// Address Range: [[00422060, 0042232f]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_CBoxActor_load_FUN_00422060()

#include "nocturne.h"

/* Signature: byte actors_other_boxactor.cpp_CBoxActor_load(CBoxActor* pBoxActor) */

void core_boxactor_cpp_CBoxActor_load_FUN_00422060(void)

{
  CDemonActor *in_stack_00000004;
  char *local_10c [64];
  int local_c;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&in_stack_00000004[2].field12_0xe0.x,"weightInPounds");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&in_stack_00000004[2].orient_matrix.m[2].z,"fps");
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)&in_stack_00000004[2].orient_matrix.m[1].z,"rpm");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].location.position.y,"loopWavName");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].orient.heading,"collisionWavName");
  if (g_CBoxActorClassVersion < 7) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&local_c,"canBeCarried");
    if (local_c == 0) {
      in_stack_00000004[2].health = 0;
    }
    else {
      in_stack_00000004[2].health = 3;
    }
  }
  else {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&in_stack_00000004[2].health,"pickupType")
    ;
  }
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)&in_stack_00000004[2].validation_magic,"carriedByActor");
  if (1 < g_CBoxActorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004[2].field7_0x6c,"canBePushed");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&in_stack_00000004[2].was_created,"pushedByActor");
  }
  if (2 < g_CBoxActorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[4].create_event + 0x18),"groundType");
  }
  if (g_CBoxActorClassVersion < 4) {
    in_stack_00000004[4].create_event[0x10] = -1;
    in_stack_00000004[4].create_event[0x11] = -1;
    in_stack_00000004[4].create_event[0x12] = -1;
    in_stack_00000004[4].create_event[0x13] = -1;
  }
  else {
    core_actor_cpp_serializeSimBox_FUN_0040bd70
              ((CSimBox *)&in_stack_00000004[2].field12_0xe0.y,"simBox");
  }
  if (g_CBoxActorClassVersion < 5) {
    in_stack_00000004[4].create_event[0x1c] = '\x01';
    in_stack_00000004[4].create_event[0x1d] = '\0';
    in_stack_00000004[4].create_event[0x1e] = '\0';
    in_stack_00000004[4].create_event[0x1f] = '\0';
  }
  else {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[4].create_event + 0x1c),"plotInShadowFlag");
  }
  if (g_CBoxActorClassVersion < 6) {
    in_stack_00000004[4].create_event[0x20] = '\x01';
    in_stack_00000004[4].create_event[0x21] = '\0';
    in_stack_00000004[4].create_event[0x22] = '\0';
    in_stack_00000004[4].create_event[0x23] = '\0';
  }
  else {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[4].create_event + 0x20),"collisionFlag");
  }
  if (7 < g_CBoxActorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004->is_transparent,"isTransparent");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[4].create_event + 0x24),"dontUseNormals");
  }
  if (g_CBoxActorClassVersion == 9) {
    core_actor_cpp_serializeString_FUN_0040b5c0(local_10c,"descriptiveName");
  }
  if (10 < g_CBoxActorClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&in_stack_00000004[2].create_prob,"constrainExtentsActor");
  }
  if (0xb < g_CBoxActorClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[4].create_event + 0x28),"useEvent");
  }
  if (0xc < g_CBoxActorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004[4].field17_0x104,"allowedMeleeAttackTypes");
  }
  if (0xd < g_CBoxActorClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[2].create_event + 4),"pushSound");
  }
  if (g_CBoxActorClassVersion < 0xf) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            (&in_stack_00000004[4].scale.x,"blockVirtualDirectorFlag");
  return;
}
