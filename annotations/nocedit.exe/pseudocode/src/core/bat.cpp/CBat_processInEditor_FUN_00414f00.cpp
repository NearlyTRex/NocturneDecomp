// Name: core_bat.cpp_CBat_processInEditor_FUN_00414f00
// Address: 00414f00
// Address Range: [[00414f00, 00414fa2]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_processInEditor_FUN_00414f00(CBat *this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_processInEditor_FUN_00414f00(CBat *this_ptr)

{
  int iVar1;
  int iVar2;
  float local_10;
  
  local_10 = 1.0;
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
  if (iVar1 != 0) {
    local_10 = 4.0;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
  if (iVar2 != 0) {
    local_10 = local_10 * (float)0.25;
  }
  iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_PERIOD);
  if (iVar2 != 0) {
    this_ptr->param = this_ptr->param + local_10;
  }
  iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_COMMA);
  if (iVar2 != 0) {
    this_ptr->param = this_ptr->param - local_10;
  }
  core_bat_cpp_CBat_updateCoursePosition_FUN_00414ce0(this_ptr);
  return;
}
