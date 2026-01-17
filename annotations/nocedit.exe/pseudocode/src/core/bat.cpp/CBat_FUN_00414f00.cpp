// Name: core_bat.cpp_CBat_FUN_00414f00
// Address: 00414f00
// Address Range: [[00414f00, 00414fa2]]
// Convention: __cdecl
// Signature: void core_bat.cpp_CBat_FUN_00414f00(CBat * this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_FUN_00414f00(CBat *this_ptr)

{
  int iVar1;
  float in_stack_00000008;
  CBat *pCStack0000000c;
  float in_stack_00000010;
  
  (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
  (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x34);
  if (iVar1 != 0) {
    this_ptr->param = this_ptr->param + in_stack_00000008;
  }
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x33);
  if (iVar1 != 0) {
    this_ptr->param = this_ptr->param - in_stack_00000010;
  }
  pCStack0000000c = this_ptr;
  core_bat_cpp_FUN_00414ce0();
  return;
}
