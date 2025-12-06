// Name: core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400
// Address: 00494400
// Address Range: [[00494400, 0049444f]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(CDemonRaytrace * this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(CDemonRaytrace *this_ptr)

{
  int iVar1;
  void *ptr;
  
  g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
  g_CurrentDebugLine = 0xb8;
  ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr->cube_data,&g_CDemonCubeTypeInfo);
  crt_memory_c_free_FUN_005fe659(ptr);
  this_ptr->cube_data = (CDemonCube *)0x0;
  (this_ptr->grid_coord).z = 0;
  iVar1 = (this_ptr->grid_coord).z;
  (this_ptr->grid_coord).y = iVar1;
  (this_ptr->grid_coord).x = iVar1;
  return;
}
