// Name: unkafter_tawiscar.cpp_FUN_00595e90
// Address: 00595e90
// Address Range: [[00595e90, 00595f8b]]
// Convention: unknown
// Signature: void unkafter_tawiscar_cpp_FUN_00595e90(int param_1)

#include "nocturne.h"

void unkafter_tawiscar_cpp_FUN_00595e90(int param_1)

{
  core_enemy_cpp_FUN_00489120(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcdcc,"?speed" + 1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xcddc,"guardDistance");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd06c),"lightUpEyes");
  core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0xd080,"chainAnchor");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xd084,"chainLength");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd054),&DAT_005d9408);
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 0xd090),"phase");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0xd094,"phaseTimer");
  core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0xd088,"alpha1");
  core_actor_cpp_archiveActor_FUN_0040b930(param_1 + 0xd08c,"alpha2");
  return;
}
