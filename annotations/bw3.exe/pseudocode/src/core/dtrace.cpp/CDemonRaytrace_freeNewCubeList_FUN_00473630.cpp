// Name: core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00473630
// Address: 00473630
// Address Range: [[00473630, 00473667]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00473630(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00473630(CDemonRaytrace *this_ptr)

{
  int iVar1;
  void *ptr;
  
  ptr = __vec_delete(this_ptr->cube_data,&g_CDemonCubeTypeInfo);
  FUN_005a30b6(ptr);
  this_ptr->cube_data = (CDemonCube *)0x0;
  (this_ptr->grid_coord).z = 0;
  iVar1 = (this_ptr->grid_coord).z;
  (this_ptr->grid_coord).y = iVar1;
  (this_ptr->grid_coord).x = iVar1;
  return;
}
