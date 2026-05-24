// Name: core_cloth.cpp_CClothList_remove_FUN_0043c170
// Address: 0043c170
// MANUAL RECONSTRUCTION
// Address Range: [[0043c170, 0043c284]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_remove_FUN_0043c170(CClothList *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_remove_FUN_0043c170(CClothList *this_ptr,int index)

{
  CCloth *ptr;
  int iVar5;
  
  if ((index < 0) || (this_ptr->count <= index)) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x5e4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CClothList::remove - invalid index");
  }
  g_CurrentDebugLine = 0x5e8;
  g_CurrentDebugFilename = "..\\core\\cloth.cpp";
  if (this_ptr->cloths[index] != (CCloth *)0x0) {
    ptr = core_cloth_cpp_CCloth_dtor_FUN_00438c00(this_ptr->cloths[index],0);
    shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  }
  for (iVar5 = index + 1; iVar5 < this_ptr->count; iVar5 = iVar5 + 1) {
    strcpy(this_ptr->filenames[iVar5 + -1], this_ptr->filenames[iVar5]);
    this_ptr->cloths[iVar5 + -1] = this_ptr->cloths[iVar5];
  }
  iVar5 = this_ptr->count;
  this_ptr->count = iVar5 + -1;
  this_ptr->filenames[iVar5 + -1][0] = '\0';
  this_ptr->cloths[this_ptr->count] = (CCloth *)0x0;
  return;
}
