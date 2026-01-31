// Name: core_stranger.cpp_CStranger_FUN_005c6660
// Address: 005c6660
// Address Range: [[005c6660, 005c669d]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c6660(CStranger *this_ptr,int unk)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c6660(CStranger *this_ptr,int unk)

{
  this_ptr->guns_drawn = unk;
  if ((unk == 0) && (g_CGamePtr->auto_save_blocked != 0)) {
    g_CGamePtr->auto_save_blocked = 0;
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"flashlit.wav");
    return;
  }
  return;
}
