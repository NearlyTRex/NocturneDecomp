// Name: core_bat.cpp_CBat_FUN_00414f00
// Address: 00414f00
// Address Range: [[00414f00, 00414fa2]]
// Convention: __cdecl
// Signature: void core_bat.cpp_CBat_FUN_00414f00(CBat * this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_FUN_00414f00(CBat *this_ptr)

{
  int iVar1;
  float fStack_c;
  
  fStack_c = 1.0;
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
  if (iVar1 != 0) {
    fStack_c = 4.0;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
  if (iVar1 != 0) {
    fStack_c = fStack_c * (float)0.25;
  }
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x34);
  if (iVar1 != 0) {
    this_ptr->param = this_ptr->param + fStack_c;
  }
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x33);
  if (iVar1 != 0) {
    this_ptr->param = this_ptr->param - fStack_c;
  }
  core_bat_cpp_FUN_00414ce0();
  return;
}
