// Name: core_vessel.cpp_CCryptVessel_archive_FUN_00576fe0
// Address: 00576fe0
// Address Range: [[00576fe0, 005770ec]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_archive_FUN_00576fe0(CCryptVessel *this_ptr)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_archive_FUN_00576fe0(CCryptVessel *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
            (&this_ptr->field_0x158,"modelName");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0x2d8,&DAT_005d70f3);
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0x2dc,"neutral");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2e0,"destroyedEvent");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0x3a8,"startLoc");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0x3ac,"endLoc");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x3b8,"state");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x3bc,"timer");
  if (1 < g_CCryptVesselClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x344,"winEvent");
  }
  if (2 < g_CCryptVesselClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x3b0,"eatDistance");
  }
  if (g_CCryptVesselClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x3b4,"visualType");
  return;
}
