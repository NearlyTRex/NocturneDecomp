// Name: core_cloth.cpp_CClothList_add_FUN_0043c0f0
// Address: 0043c0f0
// Address Range: [[0043c0f0, 0043c164]]
// Convention: __cdecl
// Signature: void core_cloth.cpp_CClothList_add_FUN_0043c0f0(CClothList * this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_add_FUN_0043c0f0(CClothList *this_ptr)

{
  CClothList CVar1;
  CClothList *pCVar2;
  CClothList *in_stack_0000000c;
  
  if (9 < *(int *)this_ptr) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x5d1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CClothList::add - list is full");
  }
  pCVar2 = this_ptr + *(int *)this_ptr * 0x28 + 4;
  do {
    CVar1 = *in_stack_0000000c;
    *pCVar2 = CVar1;
    if (CVar1 == (CClothList)0x0) break;
    CVar1 = in_stack_0000000c[1];
    in_stack_0000000c = in_stack_0000000c + 2;
    pCVar2[1] = CVar1;
    pCVar2 = pCVar2 + 2;
  } while (CVar1 != (CClothList)0x0);
  *(uint *)(this_ptr + *(int *)this_ptr * 4 + 0x194) = 0;
  *(int *)this_ptr = *(int *)this_ptr + 1;
  return;
}
