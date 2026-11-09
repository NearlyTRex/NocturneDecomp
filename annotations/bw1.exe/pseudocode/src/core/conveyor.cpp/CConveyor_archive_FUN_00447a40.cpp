// Name: core_conveyor.cpp_CConveyor_archive_FUN_00447a40
// Address: 00447a40
// Address Range: [[00447a40, 00447ad4]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConveyor_archive_FUN_00447a40(CConveyor *this_ptr)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_CConveyor_archive_FUN_00447a40(CConveyor *this_ptr)

{
  core_platfrm_cpp_CPlatform_archive_FUN_0053a740((CPlatform *)this_ptr);
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x728,&DAT_005d7102);
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x734,"direction");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x740,"startEvent");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x7a4,"stopEvent");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x808,"state");
  if (g_CConveyorClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x80c,"actorClass");
  return;
}
