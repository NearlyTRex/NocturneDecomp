// Name: core_skeleton.cpp_FUN_0056b610
// Address: 0056b610
// Address Range: [[0056b610, 0056b646]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_0056b610(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_0056b610(void)

{
  CDeformableModel *this_ptr;
  
  this_ptr = g_DeformableModelPool;
  do {
    core_skeleton_cpp_CDeformableModel_free_FUN_005637d0(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CDeformableModel *)&DAT_027902bc);
  memset(&DAT_027902bc,0,0x100);
  return;
}
