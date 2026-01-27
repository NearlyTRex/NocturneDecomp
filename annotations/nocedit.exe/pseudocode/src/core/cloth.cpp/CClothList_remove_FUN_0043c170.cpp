// Name: core_cloth.cpp_CClothList_remove_FUN_0043c170
// Address: 0043c170
// Address Range: [[0043c170, 0043c284]]
// Convention: __cdecl
// Signature: void core_cloth.cpp_CClothList_remove_FUN_0043c170(CClothList * this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_remove_FUN_0043c170(CClothList *this_ptr)

{
  char cVar1;
  void *ptr;
  CClothList *pCVar2;
  CClothList *pCVar3;
  CClothList *pCVar4;
  int iVar5;
  CClothList *pCVar6;
  CClothList *pCVar7;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (this_ptr->unk <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x5e4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CClothList::remove - invalid index");
  }
  g_CurrentDebugLine = 0x5e8;
  g_CurrentDebugFilename = "..\\core\\cloth.cpp";
  if (this_ptr[in_stack_00000008 + 0x65].unk != 0) {
    ptr = (void *)core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  }
  iVar5 = in_stack_00000008 + 1;
  if (iVar5 < this_ptr->unk) {
    pCVar4 = this_ptr + iVar5 * 10 + -9;
    pCVar3 = this_ptr + iVar5 * 10 + 1;
    pCVar2 = this_ptr + iVar5;
    do {
      pCVar6 = pCVar3;
      pCVar7 = pCVar4;
      do {
        cVar1 = (char)pCVar6->unk;
        *(char *)&pCVar7->unk = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = *(char *)((int)&pCVar6->unk + 1);
        pCVar6 = (CClothList *)((int)&pCVar6->unk + 2);
        *(char *)((int)&pCVar7->unk + 1) = cVar1;
        pCVar7 = (CClothList *)((int)&pCVar7->unk + 2);
      } while (cVar1 != '\0');
      pCVar2[100].unk = pCVar2[0x65].unk;
      iVar5 = iVar5 + 1;
      pCVar4 = pCVar4 + 10;
      pCVar3 = pCVar3 + 10;
      pCVar2 = pCVar2 + 1;
    } while (iVar5 < this_ptr->unk);
  }
  iVar5 = this_ptr->unk + -1;
  this_ptr->unk = iVar5;
  *(byte *)&this_ptr[iVar5 * 10 + 1].unk = 0;
  this_ptr[this_ptr->unk + 0x65].unk = 0;
  return;
}
