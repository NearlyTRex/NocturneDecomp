// Name: core_cloth.cpp_CClothList_add_FUN_0043c0f0
// Address: 0043c0f0
// Address Range: [[0043c0f0, 0043c164]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_add_FUN_0043c0f0(CClothList *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_add_FUN_0043c0f0(CClothList *this_ptr)

{
  char cVar1;
  CClothList *pCVar2;
  char *in_stack_00000008;
  
  if (9 < this_ptr->unk) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x5d1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CClothList::add - list is full");
  }
  pCVar2 = this_ptr + this_ptr->unk * 10 + 1;
  do {
    cVar1 = *in_stack_00000008;
    *(char *)&pCVar2->unk = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    *(char *)((int)&pCVar2->unk + 1) = cVar1;
    pCVar2 = (CClothList *)((int)&pCVar2->unk + 2);
  } while (cVar1 != '\0');
  this_ptr[this_ptr->unk + 0x65].unk = 0;
  this_ptr->unk = this_ptr->unk + 1;
  return;
}
