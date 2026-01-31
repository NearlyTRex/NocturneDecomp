// Name: core_hostage.cpp_CHostage_renderBackground_FUN_004f6120
// Address: 004f6120
// Address Range: [[004f6120, 004f616e]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_renderBackground_FUN_004f6120(CHostage *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl
core_hostage_cpp_CHostage_renderBackground_FUN_004f6120(CHostage *this_ptr,int layer_flag)

{
  int iVar1;
  int in_stack_0000000c;
  
  iVar1 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)((CCharacter *)this_ptr);
  if (0 < iVar1) {
    iVar1 = stricmp((char *)this_ptr,"ScatDazzle");
    if (iVar1 != 0) {
      if (in_stack_0000000c != 0) {
        (this_ptr->base).base.unk1[0] = '\x01';
        (this_ptr->base).base.unk1[1] = '\0';
        (this_ptr->base).base.unk1[2] = '\0';
        (this_ptr->base).base.unk1[3] = '\0';
      }
      core_npc_cpp_CNPC_FUN_00544b70(&this_ptr->base);
      return;
    }
  }
  return;
}
