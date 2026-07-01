// Name: core_cloth.cpp_CClothList_load_FUN_0043bfa0
// Address: 0043bfa0
// Address Range: [[0043bfa0, 0043c06e]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_load_FUN_0043bfa0(CClothList *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_load_FUN_0043bfa0(CClothList *this_ptr)

{
  CCloth **ppCVar1;
  CCloth *this_ptr_00;
  CCloth *pCVar2;
  CClothList *pCVar3;
  int iVar4;
  char (*filename) [40];
  
  iVar4 = 0;
  if (0 < this_ptr->count) {
    filename = this_ptr->filenames;
    pCVar3 = this_ptr;
    do {
      g_CurrentDebugLine = 0x5a7;
      g_CurrentDebugFilename = "..\\core\\cloth.cpp";
      if (pCVar3->cloths[0] != (CCloth *)0x0) {
        pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_00438c00(pCVar3->cloths[0],0);
        shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(pCVar2);
      }
      this_ptr_00 = (CCloth *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                              (0x3fe70,"..\\core\\cloth.cpp",1448);
      pCVar2 = (CCloth *)0x0;
      if (this_ptr_00 != (CCloth *)0x0) {
        pCVar2 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0(this_ptr_00);
      }
      pCVar3->cloths[0] = pCVar2;
      if (pCVar2 == (CCloth *)0x0) {
        g_CurrentFilename = "..\\core\\cloth.cpp";
        g_CurrentLineNumber = 1449;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CClothList::load - out of memory for CCloth object.");
      }
      ppCVar1 = pCVar3->cloths;
      pCVar3 = (CClothList *)pCVar3->filenames;
      iVar4 = iVar4 + 1;
      core_cloth_cpp_CCloth_load_FUN_00438cf0(*ppCVar1,*filename);
      filename = filename + 1;
    } while (iVar4 < this_ptr->count);
  }
  return;
}
