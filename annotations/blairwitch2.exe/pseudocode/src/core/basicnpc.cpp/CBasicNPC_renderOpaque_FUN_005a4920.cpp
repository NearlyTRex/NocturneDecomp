// Name: core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920
// Address: 005a4920
// Address Range: [[005a4920, 005a492d]]
// Convention: __cdecl
// Signature: int __cdecl core_basicnpc_cpp_CBasicNPC_renderOpaque_FUN_005a4920(CBasicNPC *this_ptr)

#include "nocturne.h"

int __cdecl core_basicnpc_cpp_CBasicNPC_renderOpaque_FUN_005a4920(CBasicNPC *this_ptr)

{
  int iVar1;
  
  iVar1 = core_basicene_cpp_CBasicEnemy_renderOpaque_FUN_0059fa20(&this_ptr->base);
  return iVar1;
}
