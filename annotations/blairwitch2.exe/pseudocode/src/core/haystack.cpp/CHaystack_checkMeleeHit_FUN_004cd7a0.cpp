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
  float afStackY_1028 [999];
  float *pfVar4;
  SDamageInfo SStack_7c;
  float local_40;
  float afStack_3c [5];
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar3 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,bone_index,&local_28);
  pfVar4 = afStack_3c + 2;
  afStack_3c[2] = local_28.x;
  afStack_3c[(uint)bVar3 * -2 + 3] = *(float *)((int)&local_28 + (uint)bVar3 * -8 + 4);
  afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       *(float *)((int)&local_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  core_actor_cpp_FUN_00408d70(this_ptr,pfVar4);
  local_1c.x = local_40;
  *(float *)((int)&local_1c + (uint)bVar3 * -8 + 4) = afStack_3c[(uint)bVar3 * -2];
  *(float *)((int)&local_1c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
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
                ((CCharacter *)this_ptr_00,&local_1c,0.5,&SStack_7c);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  }
  return;
}
