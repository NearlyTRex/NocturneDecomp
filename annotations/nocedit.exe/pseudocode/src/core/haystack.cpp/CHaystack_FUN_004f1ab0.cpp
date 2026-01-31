// Name: core_haystack.cpp_CHaystack_FUN_004f1ab0
// Address: 004f1ab0
// Address Range: [[004f1ab0, 004f1b48]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_FUN_004f1ab0(CHaystack *this_ptr)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_FUN_004f1ab0(CHaystack *this_ptr)

{
  CHaystack *this_ptr_00;
  CVector3f *input_local_point;
  int iVar1;
  int iVar2;
  int in_stack_00000008;
  SDamageInfo SStack_64;
  CVector3f local_28;
  CVector3f local_1c;
  
  input_local_point =
       core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                 (&(this_ptr->base).base.model,&local_28,in_stack_00000008);
  iVar2 = 0;
  iVar1 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_1c,input_local_point);
  while( true ) {
    if (g_CDemonSetPtr->damage_listener_count <= iVar2) break;
    this_ptr_00 = *(CHaystack **)(g_CDemonSetPtr->unk4 + iVar1 + -4);
    if (this_ptr_00 != this_ptr) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_64);
      SStack_64.damage_amount = 10.0;
      SStack_64.attacker = (CDemonActor *)this_ptr;
      SStack_64.wielder = (CDemonActor *)this_ptr;
      (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).checkCylinderCollisionWorld)
                ((CCharacter *)this_ptr_00,&local_1c,0.5,&SStack_64);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  }
  return;
}
