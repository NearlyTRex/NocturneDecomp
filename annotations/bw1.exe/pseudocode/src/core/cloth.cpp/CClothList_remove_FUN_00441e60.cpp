// Name: core_cloth.cpp_CClothList_remove_FUN_00441e60
// Address: 00441e60
// Address Range: [[00441e60, 00441f5d]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_remove_FUN_00441e60(CClothList *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CClothList_remove_FUN_00441e60(CClothList *this_ptr,int index)

{
  char cVar1;
  CCloth *pCVar2;
  char *pcVar3;
  char (*pacVar4) [40];
  char (*pacVar5) [40];
  int iVar6;
  char (*pacVar7) [40];
  char (*pacVar8) [40];
  
  if ((index < 0) || (this_ptr->count <= index)) {
    _DAT_01d1d400 = "..\\core\\cloth.cpp";
    _DAT_01d1d404 = 0x5f1;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CClothList::remove - invalid index");
  }
  if (this_ptr->cloths[index] != (CCloth *)0x0) {
    pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_0043e620(this_ptr->cloths[index],0);
    FUN_005c0344(pCVar2);
  }
  iVar6 = index + 1;
  if (iVar6 < this_ptr->count) {
    pacVar5 = this_ptr->filenames + index;
    pacVar4 = this_ptr->filenames + index + 1;
    pcVar3 = this_ptr->filenames[0] + index * 4;
    do {
      pacVar7 = pacVar4;
      pacVar8 = pacVar5;
      do {
        cVar1 = (*pacVar7)[0];
        (*pacVar8)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = (*pacVar7)[1];
        pacVar7 = (char (*) [40])(*pacVar7 + 2);
        (*pacVar8)[1] = cVar1;
        pacVar8 = (char (*) [40])(*pacVar8 + 2);
      } while (cVar1 != '\0');
      *(uint *)(pcVar3 + 400) = *(uint *)(pcVar3 + 0x194);
      iVar6 = iVar6 + 1;
      pacVar5 = pacVar5 + 1;
      pacVar4 = pacVar4 + 1;
      pcVar3 = pcVar3 + 4;
    } while (iVar6 < this_ptr->count);
  }
  iVar6 = this_ptr->count;
  this_ptr->count = iVar6 + -1;
  this_ptr->filenames[iVar6 + -1][0] = '\0';
  this_ptr->cloths[this_ptr->count] = (CCloth *)0x0;
  return;
}
