// Name: core_cloth.cpp_CClothList_load_FUN_00438270
// Address: 00438270
// Address Range: [[00438270, 00438312]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_load_FUN_00438270(CClothList *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_load_FUN_00438270(CClothList *this_ptr)

{
  CCloth **ppCVar1;
  CCloth *this_ptr_00;
  CCloth *pCVar2;
  CClothList *pCVar3;
  char (*filename) [40];
  int iVar4;
  
  iVar4 = 0;
  if (0 < this_ptr->count) {
    filename = this_ptr->filenames;
    pCVar3 = this_ptr;
    do {
      if (pCVar3->cloths[0] != (CCloth *)0x0) {
        pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_00435160(pCVar3->cloths[0],0);
        operator_delete(pCVar2);
      }
      this_ptr_00 = operator_new(0x3ab30);
      pCVar2 = (CCloth *)0x0;
      if (this_ptr_00 != (CCloth *)0x0) {
        pCVar2 = core_cloth_cpp_CCloth_ctor_FUN_00435100(this_ptr_00);
      }
      pCVar3->cloths[0] = pCVar2;
      if (pCVar2 == (CCloth *)0x0) {
        g_CurrentFilename = "..\\core\\cloth.cpp";
        g_CurrentLineNumber = 1449;
        core_main_c_displayErrorAndQuit_FUN_004c8440("CClothList::load - out of memory for CCloth object.");
      }
      ppCVar1 = pCVar3->cloths;
      pCVar3 = (CClothList *)pCVar3->filenames;
      iVar4 = iVar4 + 1;
      core_cloth_cpp_CCloth_load_FUN_00435240(*ppCVar1,*filename);
      filename = filename + 1;
    } while (iVar4 < this_ptr->count);
  }
  return;
}
