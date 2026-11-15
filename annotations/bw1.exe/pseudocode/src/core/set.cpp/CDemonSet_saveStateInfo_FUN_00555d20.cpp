// Name: core_set.cpp_CDemonSet_saveStateInfo_FUN_00555d20
// Address: 00555d20
// Address Range: [[00555d20, 00555e24]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_00555d20(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_00555d20(CDemonSet *this_ptr,_FILE *file_handle)

{
  int iVar1;
  CDemonSet *pCVar2;
  
  FUN_005c03c0(file_handle,"@// Set state version\n" + 1);
  FUN_005c03c0(file_handle,&DAT_005f0c14,3);
  FUN_005c03c0(file_handle,"// Camera count, enabled list\n");
  iVar1 = 0;
  FUN_005c03c0(file_handle,&DAT_005f0c37,this_ptr->camera_count);
  pCVar2 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      iVar1 = iVar1 + 1;
      FUN_005c03c0(file_handle,&DAT_005f0c3b,pCVar2->cameras[0].enabled);
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].enabled;
    } while (iVar1 < this_ptr->camera_count);
  }
  iVar1 = 0;
  FUN_005c03c0(file_handle,"// Camera ambient light\n");
  pCVar2 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      iVar1 = iVar1 + 1;
      FUN_005c03c0(file_handle,&DAT_005f0c58,(double)pCVar2->cameras[0].ambient_value)
      ;
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].enabled;
    } while (iVar1 < this_ptr->camera_count);
  }
  iVar1 = 0;
  FUN_005c03c0(file_handle,"// Camera groups\n");
  pCVar2 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      iVar1 = iVar1 + 1;
      FUN_005c03c0(file_handle,&DAT_005f0c6e,pCVar2->cameras[0].camera_group);
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].enabled;
    } while (iVar1 < this_ptr->camera_count);
  }
  return;
}
