// Name: core_basicene.cpp_CBasicEnemy_applyFlinch_FUN_0059f390
// Address: 0059f390
// Address Range: [[0059f390, 0059f40e]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_applyFlinch_FUN_0059f390(CBasicEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_applyFlinch_FUN_0059f390(CBasicEnemy *this_ptr)

{
  EDeathState EVar1;
  
  if ((this_ptr->can_flinch != 0) && (this_ptr->flinch_active != 0)) {
    EVar1 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    if ((int)EVar1 < 1) {
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
                (&(this_ptr->base).base.model,this_ptr->flinch_motion_index,
                 (this_ptr->flinch_timer / this_ptr->flinch_duration) *
                 (float)this_ptr->flinch_frame_count,0.99,this_ptr->flinch_bone,
                 core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
      return;
    }
  }
  return;
}
