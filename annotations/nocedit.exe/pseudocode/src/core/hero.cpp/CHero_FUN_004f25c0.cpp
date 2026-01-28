// Name: core_hero.cpp_CHero_FUN_004f25c0
// Address: 004f25c0
// Address Range: [[004f25c0, 004f2600]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_FUN_004f25c0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f25c0(CHero *this_ptr)

{
  int iVar1;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  
  if ((g_CGamePtr->unk2 == 0) && ((this_ptr->unk1 & 0x7fffffffU) == 0)) {
    iVar1 = core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150
                      ((CDemonActor *)this_ptr,in_stack_00000008,in_stack_0000000c,in_stack_00000010
                      );
    return iVar1;
  }
  return 0;
}
