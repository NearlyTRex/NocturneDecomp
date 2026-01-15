// Name: core_cloth.cpp_CClothList_remove_FUN_0043c170
// Address: 0043c170
// Address Range: [[0043c170, 0043c284]]
// Convention: __cdecl
// Signature: void core_cloth.cpp_CClothList_remove_FUN_0043c170(CClothList * this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_remove_FUN_0043c170(CClothList *this_ptr)

{
  CClothList CVar1;
  void *ptr;
  CClothList *pCVar2;
  CClothList *pCVar3;
  CClothList *pCVar4;
  int iVar5;
  CClothList *pCVar6;
  CClothList *pCVar7;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (*(int *)this_ptr <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x5e4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CClothList::remove - invalid index");
  }
  g_CurrentDebugLine = 0x5e8;
  g_CurrentDebugFilename = "..\\core\\cloth.cpp";
  if (*(int *)(this_ptr + in_stack_00000008 * 4 + 0x194) != 0) {
    ptr = (void *)core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  }
  iVar5 = in_stack_00000008 + 1;
  if (iVar5 < *(int *)this_ptr) {
    pCVar4 = this_ptr + iVar5 * 0x28 + -0x24;
    pCVar3 = this_ptr + iVar5 * 0x28 + 4;
    pCVar2 = this_ptr + iVar5 * 4;
    do {
      pCVar6 = pCVar3;
      pCVar7 = pCVar4;
      do {
        CVar1 = *pCVar6;
        *pCVar7 = CVar1;
        if (CVar1 == (CClothList)0x0) break;
        CVar1 = pCVar6[1];
        pCVar6 = pCVar6 + 2;
        pCVar7[1] = CVar1;
        pCVar7 = pCVar7 + 2;
      } while (CVar1 != (CClothList)0x0);
      *(uint *)(pCVar2 + 400) = *(uint *)(pCVar2 + 0x194);
      iVar5 = iVar5 + 1;
      pCVar4 = pCVar4 + 0x28;
      pCVar3 = pCVar3 + 0x28;
      pCVar2 = pCVar2 + 4;
    } while (iVar5 < *(int *)this_ptr);
  }
  iVar5 = *(int *)this_ptr;
  *(int *)this_ptr = iVar5 + -1;
  this_ptr[(iVar5 + -1) * 0x28 + 4] = (CClothList)0x0;
  *(uint *)(this_ptr + *(int *)this_ptr * 4 + 0x194) = 0;
  return;
}
