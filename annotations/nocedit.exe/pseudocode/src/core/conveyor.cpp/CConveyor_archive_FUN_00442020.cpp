// Name: core_conveyor.cpp_CConveyor_archive_FUN_00442020
// Address: 00442020
// Address Range: [[00442020, 004420b4]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConveyor_archive_FUN_00442020(CConveyor *this_ptr)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_CConveyor_archive_FUN_00442020(CConveyor *this_ptr)

{
  core_platfrm_cpp_CPlatform_archive_FUN_0054dbc0(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->size,"size");
  core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->direction,"direction");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->start_event,"startEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->stop_event,"stopEvent");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->state,"state");
  if (g_CConveyorClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->actor_class,"actorClass");
  return;
}
