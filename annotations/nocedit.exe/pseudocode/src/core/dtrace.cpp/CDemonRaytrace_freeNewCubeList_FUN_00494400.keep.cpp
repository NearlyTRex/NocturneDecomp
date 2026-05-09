// Name: core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400
// Address: 00494400
// MANUAL RECONSTRUCTION
// Address Range: [[00494400, 0049444f]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(CDemonRaytrace *this_ptr)

{
  void *ptr;

  g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
  g_CurrentDebugLine = 0xb8;
  ptr = __vec_delete(this_ptr->cube_data,&g_CDemonCubeTypeInfo);
  shape_memdbg_cpp_free_FUN_005fe659(ptr);
  this_ptr->cube_data = (CDemonCube *)0x0;
  memset(&this_ptr->grid_coord, 0, sizeof(this_ptr->grid_coord));
  return;
}
