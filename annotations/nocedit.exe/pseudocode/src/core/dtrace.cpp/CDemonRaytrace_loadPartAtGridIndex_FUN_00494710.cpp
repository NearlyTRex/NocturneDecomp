// Name: core_dtrace.cpp_CDemonRaytrace_loadPartAtGridIndex_FUN_00494710
// Address: 00494710
// Address Range: [[00494710, 0049479e]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_loadPartAtGridIndex_FUN_00494710(CDemonRaytrace *this_ptr,CDemonPart *part,int linear_index,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_loadPartAtGridIndex_FUN_00494710(CDemonRaytrace *this_ptr,CDemonPart *part,int linear_index,_FILE *file_handle)

{
  int iVar2;
  int iVar3;
  int iVar4;
  CVector3f local_1c;
  int local_10;
  int iVar1;
  
  iVar2 = linear_index / ((this_ptr->grid_coord).y * (this_ptr->grid_coord).z);
  iVar1 = (this_ptr->grid_coord).z;
  iVar4 = linear_index - (this_ptr->grid_coord).y * iVar2 * iVar1;
  iVar3 = iVar4 / iVar1;
  local_1c.x = (float)iVar2 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
  local_1c.y = (float)iVar3 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
  local_1c.z = (float)(iVar4 - iVar1 * iVar3) * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
  core_dpart_cpp_CDemonPart_loadFromFile_FUN_004825c0(part,file_handle,&local_1c);
  return;
}
