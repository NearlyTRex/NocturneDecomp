// Name: core_haystack.cpp_CHaystack_checkMeleeHit_FUN_004cd7a0
// Address: 004cd7a0
// Address Range: [[004cd7a0, 004cd856]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004cd7a0(CHaystack *this_ptr,int bone_index)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004cd7a0(CHaystack *this_ptr,int bone_index)

{
  CHaystack *this_ptr_00;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint auStackY_1028 [999];
  uint *puVar4;
  SDamageInfo SStack_7c;
  uint local_40;
  uint auStack_3c [5];
  uint local_28;
  CVector3f local_1c;
  
  bVar3 = 0;
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,bone_index);
  puVar4 = auStack_3c + 2;
  auStack_3c[2] = local_28;
  auStack_3c[(uint)bVar3 * -2 + 3] = auStack_3c[(uint)bVar3 * -2 + 6];
  auStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       auStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
  core_actor_cpp_FUN_00408d70(this_ptr,puVar4);
  local_1c.x = (float)local_40;
  auStack_3c[(uint)bVar3 * -2 + 9] = auStack_3c[(uint)bVar3 * -2];
  auStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
       auStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  iVar2 = 0;
  iVar1 = 0;
  while( true ) {
    if (g_CDemonSetPtr->character_count <= iVar2) break;
    this_ptr_00 = *(CHaystack **)((int)g_CDemonSetPtr->characters + iVar1);
    if (this_ptr_00 != this_ptr) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_7c);
      SStack_7c.damage_amount = 10.0;
      SStack_7c.attacker = (CDemonActor *)this_ptr;
      SStack_7c.wielder = (CDemonActor *)this_ptr;
      (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).checkCylinderCollisionWorld)
                ((CCharacter *)this_ptr_00,(CVector3f *)(auStack_3c + 8),0.5,&SStack_7c);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  }
  return;
}
