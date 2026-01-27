// Name: core_cloth.cpp_CClothList_load_FUN_0043bfa0
// Address: 0043bfa0
// Address Range: [[0043bfa0, 0043c06e]]
// Convention: __cdecl
// Signature: void core_cloth.cpp_CClothList_load_FUN_0043bfa0(CClothList * this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_load_FUN_0043bfa0(CClothList *this_ptr)

{
  CClothList *pCVar1;
  void *pvVar2;
  int iVar3;
  CClothList *pCVar4;
  int iVar5;
  CClothList *filename;
  
  iVar5 = 0;
  if (0 < this_ptr->unk) {
    filename = this_ptr + 1;
    pCVar4 = this_ptr;
    do {
      g_CurrentDebugLine = 0x5a7;
      g_CurrentDebugFilename = "..\\core\\cloth.cpp";
      if (pCVar4[0x65].unk != 0) {
        pvVar2 = (void *)core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
        shape_memdbg_cpp_debugFree_FUN_0050f210(pvVar2);
      }
      pvVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3fe70,"..\\core\\cloth.cpp",0x5a8);
      iVar3 = 0;
      if (pvVar2 != (void *)0x0) {
        iVar3 = core_cloth_cpp_FUN_00438ba0();
      }
      pCVar4[0x65].unk = iVar3;
      if (iVar3 == 0) {
        g_CurrentFilename = "..\\core\\cloth.cpp";
        g_CurrentLineNumber = 0x5a9;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CClothList::load - out of memory for CCloth object.");
      }
      pCVar1 = pCVar4 + 0x65;
      pCVar4 = pCVar4 + 1;
      iVar5 = iVar5 + 1;
      core_cloth_cpp_CCloth_load_FUN_00438cf0((CCloth *)pCVar1->unk,(char *)filename);
      filename = filename + 10;
    } while (iVar5 < this_ptr->unk);
  }
  return;
}
