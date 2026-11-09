// Name: core_pendulum.cpp_CPendulum_archive_FUN_0050ef30
// Address: 0050ef30
// Address Range: [[0050ef30, 0050f0cb]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_archive_FUN_0050ef30(CPendulum *this_ptr)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_CPendulum_archive_FUN_0050ef30(CPendulum *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&this_ptr->field_0x158,"?modelName" + 1);
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2d4,"startEvent");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x39c,"moving");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x3a0,"param");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x3a8,"maxAngle");
  if (1 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x3ac,"swooshSound");
  }
  if (2 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x3d0,"creak1Sound");
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x3f0,"creak2Sound");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x3cc,"swooshPhaseBias");
  }
  if (3 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x428,"killHero");
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x42c,"killEnemy");
  }
  if (4 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x430,"decay");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x434,"decayTimer");
  }
  if (5 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x438,"groundType");
  }
  if (6 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x338,"stopEvent");
  }
  if (g_CPendulumClassVersion < 8) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x43c,"oneShot");
  return;
}
