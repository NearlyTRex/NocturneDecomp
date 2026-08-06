// Name: core_cloth.cpp_CClothList_add_FUN_00438390
// Address: 00438390
// Address Range: [[00438390, 00438404]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_add_FUN_00438390(CClothList *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_add_FUN_00438390(CClothList *this_ptr,char *filename)

{
  char cVar1;
  char (*pacVar2) [40];
  
  if (9 < this_ptr->count) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 1489;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CClothList::add - list is full");
  }
  pacVar2 = this_ptr->filenames + this_ptr->count;
  do {
    cVar1 = *filename;
    (*pacVar2)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    (*pacVar2)[1] = cVar1;
    pacVar2 = (char (*) [40])(*pacVar2 + 2);
  } while (cVar1 != '\0');
  this_ptr->cloths[this_ptr->count] = (CCloth *)0x0;
  this_ptr->count = this_ptr->count + 1;
  return;
}
