// Name: core_manpuz.cpp_CMirrorHack_process_FUN_004e7870
// Address: 004e7870
// Address Range: [[004e7870, 004e78f4]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_process_FUN_004e7870(CMirrorHack *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_process_FUN_004e7870(CMirrorHack *this_ptr,float delta_time)

{
  int iVar1;
  float fStack_10;
  
  fStack_10 = (delta_time * 6.283185f) / 30.0f;
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
  if (iVar1 != 0) {
    fStack_10 = fStack_10 * (float)0.20000000000000001;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_COMMA);
  if (iVar1 != 0) {
    (this_ptr->base).orient.vec.y = (this_ptr->base).orient.vec.y - fStack_10;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_PERIOD);
  if (iVar1 != 0) {
    (this_ptr->base).orient.vec.y = (this_ptr->base).orient.vec.y + fStack_10;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(&this_ptr->base);
  return;
}
