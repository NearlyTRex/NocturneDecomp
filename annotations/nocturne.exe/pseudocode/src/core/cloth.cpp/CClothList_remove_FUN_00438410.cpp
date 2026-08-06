// Name: core_cloth.cpp_CClothList_remove_FUN_00438410
// Address: 00438410
// Address Range: [[00438410, 0043850d]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_remove_FUN_00438410(CClothList *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_remove_FUN_00438410(CClothList *this_ptr,int index)

{
  char cVar1;
  CCloth *ptr;
  char *pcVar2;
  char (*pacVar3) [40];
  char (*pacVar4) [40];
  int iVar5;
  char (*pacVar6) [40];
  char (*pacVar7) [40];
  
  if ((index < 0) || (this_ptr->count <= index)) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 1508;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CClothList::remove - invalid index");
  }
  if (this_ptr->cloths[index] != (CCloth *)0x0) {
    ptr = core_cloth_cpp_CCloth_dtor_FUN_00435160(this_ptr->cloths[index],0);
    operator_delete(ptr);
  }
  iVar5 = index + 1;
  if (iVar5 < this_ptr->count) {
    pacVar4 = this_ptr->filenames + index;
    pacVar3 = this_ptr->filenames + index + 1;
    pcVar2 = this_ptr->filenames[0] + index * 4;
    do {
      pacVar6 = pacVar3;
      pacVar7 = pacVar4;
      do {
        cVar1 = (*pacVar6)[0];
        (*pacVar7)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = (*pacVar6)[1];
        pacVar6 = (char (*) [40])(*pacVar6 + 2);
        (*pacVar7)[1] = cVar1;
        pacVar7 = (char (*) [40])(*pacVar7 + 2);
      } while (cVar1 != '\0');
      *(uint *)(pcVar2 + 400) = *(uint *)(pcVar2 + 0x194);
      iVar5 = iVar5 + 1;
      pacVar4 = pacVar4 + 1;
      pacVar3 = pacVar3 + 1;
      pcVar2 = pcVar2 + 4;
    } while (iVar5 < this_ptr->count);
  }
  iVar5 = this_ptr->count;
  this_ptr->count = iVar5 + -1;
  this_ptr->filenames[iVar5 + -1][0] = '\0';
  this_ptr->cloths[this_ptr->count] = (CCloth *)0x0;
  return;
}
