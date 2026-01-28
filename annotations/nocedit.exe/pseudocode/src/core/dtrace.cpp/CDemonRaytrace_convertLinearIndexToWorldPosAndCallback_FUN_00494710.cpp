// Name: core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
// Address: 00494710
// Address Range: [[00494710, 0049479e]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710 (CDemonRaytrace *this_ptr,void *callback_data,int linear_index,void *user_data)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
          (CDemonRaytrace *this_ptr,void *callback_data,int linear_index,void *user_data)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CVector3f local_1c;
  int local_10;
  
  iVar2 = linear_index / ((this_ptr->grid_coord).y * (this_ptr->grid_coord).z);
  iVar1 = (this_ptr->grid_coord).z;
  local_10 = linear_index - (this_ptr->grid_coord).y * iVar2 * iVar1;
  iVar3 = local_10 / iVar1;
  local_1c.x = (float)iVar2 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
  local_1c.y = (float)iVar3 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
  local_10 = local_10 - iVar1 * iVar3;
  local_1c.z = (float)local_10 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
  core_dpart_cpp_CDemonPart_loadFromFile_FUN_004825c0(callback_data,user_data,&local_1c);
  return;
}
