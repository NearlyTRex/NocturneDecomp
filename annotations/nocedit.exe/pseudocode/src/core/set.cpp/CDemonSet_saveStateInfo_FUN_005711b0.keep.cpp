// Name: core_set.cpp_CDemonSet_saveStateInfo_FUN_005711b0
// Address: 005711b0
// MANUAL RECONSTRUCTION
// Address Range: [[005711b0, 0057122a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_005711b0(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_005711b0(CDemonSet *this_ptr,_FILE *file_handle)

{
  int iVar1;

  _fprintf(file_handle,"// Set state version\n");
  _fprintf(file_handle,"1\n");
  _fprintf(file_handle,"// Camera count, enabled list\n");
  _fprintf(file_handle,"%d\n",this_ptr->camera_count);
  for (iVar1 = 0; iVar1 < this_ptr->camera_count; iVar1 = iVar1 + 1) {
    _fprintf(file_handle,"%d\n",this_ptr->cameras[iVar1].enabled);
  }
  return;
}
