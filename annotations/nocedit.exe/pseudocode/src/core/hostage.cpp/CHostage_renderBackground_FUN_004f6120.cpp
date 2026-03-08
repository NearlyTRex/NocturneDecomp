// Name: core_hostage.cpp_CHostage_renderBackground_FUN_004f6120
// Address: 004f6120
// Address Range: [[004f6120, 004f616e]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_renderBackground_FUN_004f6120(CHostage *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_hostage_cpp_CHostage_renderBackground_FUN_004f6120(CHostage *this_ptr,int layer_flag)

{
  EDeathState EVar1;
  int iVar2;
  
  EVar1 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (0 < (int)EVar1) {
    iVar2 = _stricmp((char *)this_ptr,"ScatDazzle");
    if (iVar2 != 0) {
      if (layer_flag != 0) {
        (this_ptr->base).base.render_active = 1;
      }
      core_npc_cpp_CNPC_renderBackground_FUN_00544b70(&this_ptr->base,layer_flag);
      return;
    }
  }
  return;
}
