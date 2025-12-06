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
  CClothList *pCVar3;
  int iVar4;
  CClothList *filename;
  
  iVar4 = 0;
  if (0 < *(int *)this_ptr) {
    filename = this_ptr + 4;
    pCVar3 = this_ptr;
    do {
      g_CurrentDebugLine = 0x5a7;
      g_CurrentDebugFilename = "..\\core\\cloth.cpp";
      if (*(int *)(pCVar3 + 0x194) != 0) {
        pvVar2 = (void *)core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
        shape_memdbg_cpp_debugFree_FUN_0050f210(pvVar2);
      }
      pvVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3fe70,"..\\core\\cloth.cpp",0x5a8);
      if (pvVar2 != (void *)0x0) {
        pvVar2 = (void *)core_cloth_cpp_FUN_00438ba0();
      }
      *(void **)(pCVar3 + 0x194) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        g_CurrentFilename = "..\\core\\cloth.cpp";
        g_CurrentLineNumber = 0x5a9;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CClothList::load - out of memory for CCloth object.");
      }
      pCVar1 = pCVar3 + 0x194;
      pCVar3 = pCVar3 + 4;
      iVar4 = iVar4 + 1;
      core_cloth_cpp_CCloth_load_FUN_00438cf0(*(CCloth **)pCVar1,(char *)filename);
      filename = filename + 0x28;
    } while (iVar4 < *(int *)this_ptr);
  }
  return;
}
