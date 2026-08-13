// Name: core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_004673a0
// Address: 004673a0
// Address Range: [[004673a0, 004673d7]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_004673a0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_004673a0(CDemonRaytrace *this_ptr)

{
  int iVar1;
  void *ptr;
  
  ptr = __vec_delete(this_ptr->cube_data,&g_CDemonCubeTypeInfo_0059c8c0);
  shape_memdbg_cpp_free_FUN_00564486(ptr);
  this_ptr->cube_data = (CDemonCube *)0x0;
  (this_ptr->grid_coord).z = 0;
  iVar1 = (this_ptr->grid_coord).z;
  (this_ptr->grid_coord).y = iVar1;
  (this_ptr->grid_coord).x = iVar1;
  return;
}
