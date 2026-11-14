// Name: core_basicene.cpp_CBasicNPC_getDeathState_FUN_0059f930
// Address: 0059f930
// Address Range: [[0059f930, 0059f951]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_basicene_cpp_CBasicNPC_getDeathState_FUN_0059f930(CBasicNPC *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_basicene_cpp_CBasicNPC_getDeathState_FUN_0059f930(CBasicNPC *this_ptr)

{
  int iVar1;
  
  iVar1 = core_muzzle_cpp_FUN_0059daa0(&(this_ptr->base).state_machine,"Death");
  return (uint)(iVar1 != 0);
}
