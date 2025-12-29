// Name: core_bat.cpp_CBat_FUN_00414f00
// Address: 00414f00
// Address Range: [[00414f00, 00414fa2]]
// Convention: __cdecl
// Signature: void core_bat.cpp_CBat_FUN_00414f00(CBat * this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_FUN_00414f00(CBat *this_ptr)

{
  int iVar1;
  uint uStack0000000c;
  uint uStack00000020;
  float in_stack_0000002c;
  uint uStack00000038;
  CBat *pCStack0000003c;
  float in_stack_00000040;
  
  (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
  (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
  uStack0000000c = 0x414f5c;
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x34);
  if (iVar1 != 0) {
    this_ptr->param = this_ptr->param + in_stack_0000002c;
  }
  uStack00000020 = 0x414f7f;
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x33);
  if (iVar1 != 0) {
    this_ptr->param = this_ptr->param - in_stack_00000040;
  }
  pCStack0000003c = this_ptr;
  uStack00000038 = 0x414f9b;
  core_bat_cpp_FUN_00414ce0();
  return;
}
