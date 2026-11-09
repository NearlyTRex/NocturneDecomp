// Name: core_barrier.cpp_CBarrier_archive_FUN_0040ebd0
// Address: 0040ebd0
// Address Range: [[0040ebd0, 0040ec28]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_archive_FUN_0040ebd0(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_archive_FUN_0040ebd0(CBarrier *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->field_0x158,&DAT_005b61f7);
  if (g_CBarrierClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x168,"effectClassNameList");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x164,"addToPathGrid")
  ;
  return;
}
