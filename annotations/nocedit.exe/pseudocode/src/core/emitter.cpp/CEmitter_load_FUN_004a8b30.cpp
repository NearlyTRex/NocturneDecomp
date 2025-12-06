// Name: core_emitter.cpp_CEmitter_load_FUN_004a8b30
// Address: 004a8b30
// Address Range: [[004a8b30, 004a8d01]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_CEmitter_load_FUN_004a8b30()

#include "nocturne.h"

/* Signature: byte actors_other_emitter.cpp_CEmitter_load(CEmitter* pEmitter) */

void core_emitter_cpp_CEmitter_load_FUN_004a8b30(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004 + 1),"emitterType");
  core_actor_cpp_serializeVector_FUN_0040b340
            ((CVector3f *)(in_stack_00000004[1].actor_name + 4),"emitterSize");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].actor_name + 0x14),"eventOn");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)in_stack_00000004[1].create_event,"eventOff");
  if (1 < g_CEmitterClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[1].actor_name + 0x10),"emitterState");
  }
  if (*(int *)in_stack_00000004[1].actor_name == 3) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].field12_0xe0.y,"laserR");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].field12_0xe0.z,"laserG");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].field13_0xec,"laserB");
    if (2 < g_CEmitterClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0
                ((int *)&in_stack_00000004[1].field12_0xe0,"laserType");
    }
  }
  if (2 < g_CEmitterClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[1].field11_0xdc,"maxEmitTime");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[3].orient_matrix,"emitPeriod");
  }
  if (3 < g_CEmitterClassVersion) {
    core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].field13_0xec.y,"modelName")
    ;
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[2].field19_0x114,"rockSpeed");
  }
  if (4 < g_CEmitterClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004[2].field20_0x118,"periodicFlag");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)&in_stack_00000004[2].field21_0x11c,"maxWaitTime");
  }
  if (5 < g_CEmitterClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&in_stack_00000004[2].field22_0x120,"destActor");
  }
  if (g_CEmitterClassVersion < 7) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].field23_0x124,"wavName");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[3].orient.bank,"sfxType");
  return;
}
