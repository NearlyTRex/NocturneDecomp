// Name: core_set.cpp_CDemonSet_saveStateInfo_FUN_00534a10
// Address: 00534a10
// Address Range: [[00534a10, 00534a8a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_00534a10(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_00534a10(CDemonSet *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fprintf(file_handle,"@// Set state version\n" + 1);
  _fprintf(file_handle,&DAT_005e5bf0);
  _fprintf(file_handle,"// Camera count, enabled list\n");
  iVar1 = 0;
  _fprintf(file_handle,&DAT_005e5c12);
  if (0 < this_ptr->camera_count) {
    do {
      iVar1 = iVar1 + 1;
      _fprintf(file_handle,&DAT_005e5c16);
    } while (iVar1 < this_ptr->camera_count);
  }
  return;
}
