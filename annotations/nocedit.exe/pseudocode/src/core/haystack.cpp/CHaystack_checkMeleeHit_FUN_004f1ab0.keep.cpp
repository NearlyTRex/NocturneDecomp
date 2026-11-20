// Name: core_haystack.cpp_CHaystack_checkMeleeHit_FUN_004f1ab0
// Address: 004f1ab0
// MANUAL RECONSTRUCTION
// Address Range: [[004f1ab0, 004f1b48]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004f1ab0(CHaystack *this_ptr,int bone_index)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004f1ab0(CHaystack *this_ptr,int bone_index)

{
  CVector3f *input_local_point;
  int iVar2;
  SDamageInfo SStack_64;
  CVector3f local_28;
  CVector3f local_1c;
  CHaystack *this_ptr_00;
#if !NOCTURNE_AUTHENTIC_HERO_ACTIONS
  int landed = 0;
#endif

  input_local_point =
       core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0059fb00
                 (&(this_ptr->base).base.model,&local_28,bone_index);
  iVar2 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_1c,input_local_point);
  while( true ) {
    if (g_CDemonSetPtr->character_count <= iVar2) break;
    this_ptr_00 = (CHaystack *)g_CDemonSetPtr->characters[iVar2];
    if (this_ptr_00 != this_ptr) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_64);
      SStack_64.damage_amount = 10.0;
      SStack_64.attacker = (CDemonActor *)this_ptr;
      SStack_64.wielder = (CDemonActor *)this_ptr;
#if NOCTURNE_AUTHENTIC_HERO_ACTIONS
      (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).checkCylinderCollisionWorld)
                ((CCharacter *)this_ptr_00,&local_1c,0.5,&SStack_64);
#else
      landed |= (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).checkCylinderCollisionWorld)
                  ((CCharacter *)this_ptr_00,&local_1c,0.5,&SStack_64);
#endif
    }
    iVar2 = iVar2 + 1;
  }
#if !NOCTURNE_AUTHENTIC_HERO_ACTIONS
  if ((landed != 0) &&
      (_stricmp(core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
                    (&(this_ptr->base).base.model.base),"SPAR") != 0)) {
    (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,"box-punch?.wav");
  }
#endif
  return;
}
