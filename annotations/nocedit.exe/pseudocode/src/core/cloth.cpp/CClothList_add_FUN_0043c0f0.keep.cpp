// Name: core_cloth.cpp_CClothList_add_FUN_0043c0f0
// Address: 0043c0f0
// MANUAL RECONSTRUCTION
// Address Range: [[0043c0f0, 0043c164]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_add_FUN_0043c0f0(CClothList *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_add_FUN_0043c0f0(CClothList *this_ptr,char *filename)

{
  if (9 < this_ptr->count) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 1489;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CClothList::add - list is full");
  }
  strcpy(this_ptr->filenames[this_ptr->count], filename);
  this_ptr->cloths[this_ptr->count] = (CCloth *)0x0;
  this_ptr->count = this_ptr->count + 1;
  return;
}
