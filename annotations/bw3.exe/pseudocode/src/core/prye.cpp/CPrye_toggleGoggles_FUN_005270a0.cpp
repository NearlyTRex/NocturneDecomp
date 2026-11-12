// Name: core_prye.cpp_CPrye_toggleGoggles_FUN_005270a0
// Address: 005270a0
// Address Range: [[005270a0, 0052710e]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_toggleGoggles_FUN_005270a0(CPrye *this_ptr)

#include "nocturne.h"

void __cdecl core_prye_cpp_CPrye_toggleGoggles_FUN_005270a0(CPrye *this_ptr)

{
  CDemonActor *pCVar1;
  uint class_name_hash;
  
  class_name_hash = g_CGogglesClassInfo.name_hash;
  pCVar1 = (CDemonActor *)core_inv_cpp_FUN_004db9e0(&(this_ptr->base).inventory,"CGoggles")
  ;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840(pCVar1,class_name_hash);
  if (pCVar1 == (CDemonActor *)0x0) {
    if (g_CGamePtr->goggles_active == 0) {
      return;
    }
  }
  else {
    pCVar1[2].location.position.y = (float)(uint)(pCVar1[2].location.position.y == 0.0);
    if (g_CGamePtr->goggles_active == 0) {
      return;
    }
  }
  (**(code **)g_CGamePtr->vtable)(g_CGamePtr,0);
  return;
}
