// Name: core_pendulum.cpp_CPendulum_load_FUN_0054a3b0
// Address: 0054a3b0
// Address Range: [[0054a3b0, 0054a54b]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_CPendulum_load_FUN_0054a3b0()

#include "nocturne.h"

/* Signature: byte actors_other_pendulum.cpp_CPendulum_load(CPendulum* pPendulum) */

void core_pendulum_cpp_CPendulum_load_FUN_0054a3b0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].location.position.y,"startEvent");
  core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)&in_stack_00000004[2].unk4,"moving");
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004[2].unk4.y,"param");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[2].unk5,"maxAngle");
  if (1 < g_CPendulumClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[2].is_transparent,"swooshSound");
  }
  if (2 < g_CPendulumClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[2].unk11,"creak1Sound");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[2].previous_transform_state.dirty_flags,
               "creak2Sound");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[2].unk10,"swooshPhaseBias");
  }
  if (3 < g_CPendulumClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[3].location,"killHero");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[3].location.position.y,"killEnemy");
  }
  if (4 < g_CPendulumClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[3].location.position.z,"decay");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[3].location.area_id,"decayTimer");
  }
  if (5 < g_CPendulumClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[3].orient,"groundType");
  }
  if (6 < g_CPendulumClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[2].create_event + 0x10),"stopEvent");
  }
  if (g_CPendulumClassVersion < 8) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[3].orient.bank,"oneShot");
  return;
}
