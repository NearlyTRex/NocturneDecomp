// Name: core_set.cpp_CDemonSet_saveStateInfo_FUN_00555d20
// Address: 00555d20
// Address Range: [[00555d20, 00555e24]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_00555d20(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_00555d20(CDemonSet *this_ptr,_FILE *file_handle)

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
