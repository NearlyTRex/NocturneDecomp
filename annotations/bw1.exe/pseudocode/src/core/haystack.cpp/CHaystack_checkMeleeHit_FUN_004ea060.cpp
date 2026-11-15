// Name: core_haystack.cpp_CHaystack_checkMeleeHit_FUN_004ea060
// Address: 004ea060
// Address Range: [[004ea060, 004ea116]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004ea060(CHaystack *this_ptr,int bone_index)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004ea060(CHaystack *this_ptr,int bone_index)

{
  CHaystack *this_ptr_00;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint auStackY_1028 [999];
  CVector3f *input_local_point;
  SDamageInfo SStack_7c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar3 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (&(this_ptr->base).base.model,bone_index,&local_28);
  input_local_point = &local_34;
  local_34.x = local_28.x;
  *(uint *)((int)&local_34 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&local_28 + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&local_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,input_local_point,&local_40);
  local_1c.x = local_40.x;
  *(uint *)((int)&local_1c + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&local_40 + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&local_1c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&local_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  iVar2 = 0;
  iVar1 = 0;
  while( true ) {
    if (g_CDemonSetPtr->character_count <= iVar2) break;
    this_ptr_00 = *(CHaystack **)((int)g_CDemonSetPtr->characters + iVar1);
    if (this_ptr_00 != this_ptr) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_7c);
      SStack_7c.damage_amount = 10.0;
      SStack_7c.attacker = (CDemonActor *)this_ptr;
      SStack_7c.wielder = (CDemonActor *)this_ptr;
      (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).checkCylinderCollisionWorld)
                ((CCharacter *)this_ptr_00,&local_1c,0.5,&SStack_7c);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  }
  return;
}
