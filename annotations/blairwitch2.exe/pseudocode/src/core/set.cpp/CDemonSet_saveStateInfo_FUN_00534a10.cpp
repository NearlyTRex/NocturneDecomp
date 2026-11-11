// Name: core_set.cpp_CDemonSet_saveStateInfo_FUN_00534a10
// Address: 00534a10
// Address Range: [[00534a10, 00534a8a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_00534a10(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_00534a10(CDemonSet *this_ptr,_FILE *file_handle)

{
  int iVar1;
  CDemonSet *pCVar2;
  
  FUN_005b8010(file_handle,"@// Set state version\n" + 1);
  FUN_005b8010(file_handle,&DAT_005e5bf0);
  FUN_005b8010(file_handle,"// Camera count, enabled list\n");
  iVar1 = 0;
  FUN_005b8010(file_handle,&DAT_005e5c12,this_ptr->camera_count);
  pCVar2 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      iVar1 = iVar1 + 1;
      FUN_005b8010(file_handle,&DAT_005e5c16,pCVar2->cameras[0].enabled);
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].enabled;
    } while (iVar1 < this_ptr->camera_count);
  }
  return;
}
