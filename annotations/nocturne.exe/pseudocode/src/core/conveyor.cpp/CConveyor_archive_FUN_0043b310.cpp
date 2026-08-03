// Name: core_conveyor.cpp_CConveyor_archive_FUN_0043b310
// Address: 0043b310
// Address Range: [[0043b310, 0043b3a4]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConveyor_archive_FUN_0043b310(CConveyor *this_ptr)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_CConveyor_archive_FUN_0043b310(CConveyor *this_ptr)

{
  core_platfrm_cpp_CPlatform_archive_FUN_004f6fa0(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->size,"size");
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->direction,"direction");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->start_event,"startEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->stop_event,"stopEvent");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->state,"state");
  if (g_INT_005ad380 < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->actor_class,"actorClass");
  return;
}
