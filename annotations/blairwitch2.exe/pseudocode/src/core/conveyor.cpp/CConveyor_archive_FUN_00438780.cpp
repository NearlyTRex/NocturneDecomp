// Name: core_conveyor.cpp_CConveyor_archive_FUN_00438780
// Address: 00438780
// Address Range: [[00438780, 00438814]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConveyor_archive_FUN_00438780(CConveyor *this_ptr)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_CConveyor_archive_FUN_00438780(CConveyor *this_ptr)

{
  core_platfrm_cpp_CPlatform_archive_FUN_005193f0(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->size,&DAT_005cdf96);
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->direction,"direction");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->start_event,"startEvent");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->stop_event,"stopEvent");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->state,"state");
  if (g_CConveyorClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->actor_class,"actorClass");
  return;
}
