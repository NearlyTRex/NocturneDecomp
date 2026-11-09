// Name: core_barrier.cpp_CBarrier_archive_FUN_00410940
// Address: 00410940
// Address Range: [[00410940, 00410998]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_archive_FUN_00410940(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_archive_FUN_00410940(CBarrier *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x158,&DAT_005d359a);
  if (g_CBarrierClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x168,"effectClassNameList");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x164,"addToPathGrid")
  ;
  return;
}
