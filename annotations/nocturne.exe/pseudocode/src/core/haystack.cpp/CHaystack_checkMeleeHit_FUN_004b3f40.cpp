// Name: core_haystack.cpp_CHaystack_checkMeleeHit_FUN_004b3f40
// Address: 004b3f40
// Address Range: [[004b3f40, 004b3fd8]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004b3f40(CHaystack *this_ptr,int bone_index)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004b3f40(CHaystack *this_ptr,int bone_index)

{
  CHaystack *this_ptr_00;
  CVector3f *input_local_point;
  int iVar1;
  int iVar2;
  SDamageInfo SStack_64;
  CVector3f local_28;
  CVector3f local_1c;
  
  input_local_point =
       core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                 (&(this_ptr->base).base.model,&local_28,bone_index);
  iVar2 = 0;
  iVar1 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,&local_1c,input_local_point);
  while( true ) {
    if (g_CDemonSet_PTR_005be368->character_count <= iVar2) break;
    this_ptr_00 = *(CHaystack **)((int)g_CDemonSet_PTR_005be368->characters + iVar1);
    if (this_ptr_00 != this_ptr) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&SStack_64);
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
