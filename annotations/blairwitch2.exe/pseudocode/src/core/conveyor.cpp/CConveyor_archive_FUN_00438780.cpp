// Name: core_conveyor.cpp_CConveyor_archive_FUN_00438780
// Address: 00438780
// Address Range: [[00438780, 00438814]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConveyor_archive_FUN_00438780(CConveyor *this_ptr)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_CConveyor_archive_FUN_00438780(CConveyor *this_ptr)

{
  core_platfrm_cpp_CPlatform_archive_FUN_005193f0((CPlatform *)this_ptr);
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->field_0x884,&DAT_005cdf96);
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->field_0x890,"direction");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x89c,"startEvent");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x900,"stopEvent");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x964,"state");
  if (g_CConveyorClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x968,"actorClass");
  return;
}
