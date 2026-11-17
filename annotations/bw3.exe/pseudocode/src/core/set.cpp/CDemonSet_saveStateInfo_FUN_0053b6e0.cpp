// Name: core_set.cpp_CDemonSet_saveStateInfo_FUN_0053b6e0
// Address: 0053b6e0
// Address Range: [[0053b6e0, 0053b7e4]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_0053b6e0(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_0053b6e0(CDemonSet *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fprintf(file_handle,"// Set state version\n");
  _fprintf(file_handle,"%d\n");
  _fprintf(file_handle,"// Camera count, enabled list\n");
  iVar1 = 0;
  _fprintf(file_handle,"%d\n");
  if (0 < this_ptr->camera_count) {
    do {
      iVar1 = iVar1 + 1;
      _fprintf(file_handle,"%d\n");
    } while (iVar1 < this_ptr->camera_count);
  }
  iVar1 = 0;
  _fprintf(file_handle,"// Camera ambient light\n");
  if (0 < this_ptr->camera_count) {
    do {
      iVar1 = iVar1 + 1;
      _fprintf(file_handle,"%g\n");
    } while (iVar1 < this_ptr->camera_count);
  }
  iVar1 = 0;
  _fprintf(file_handle,"// Camera groups\n");
  if (0 < this_ptr->camera_count) {
    do {
      iVar1 = iVar1 + 1;
      _fprintf(file_handle,"%d\n");
    } while (iVar1 < this_ptr->camera_count);
  }
  return;
}
