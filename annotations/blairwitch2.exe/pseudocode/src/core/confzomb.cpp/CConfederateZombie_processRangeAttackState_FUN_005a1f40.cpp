// Name: core_confzomb.cpp_CConfederateZombie_processRangeAttackState_FUN_005a1f40
// Address: 005a1f40
// Address Range: [[005a1f40, 005a2123]]
// Convention: __cdecl
// Signature: void __cdecl core_confzomb_cpp_CConfederateZombie_processRangeAttackState_FUN_005a1f40(CConfederateZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_confzomb_cpp_CConfederateZombie_processRangeAttackState_FUN_005a1f40(CConfederateZombie *this_ptr,float delta_time)

{
  SStateMachine *pSVar1;
  CCharacter *pCVar2;
  float fVar3;
  float fVar4;
  SMotion *pSVar5;
  byte bVar6;
  float afStackY_1040 [1015];
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [4];
  uint uStack_38;
  uint uStack_34;
  float afStack_30 [4];
  uint uStack_20;
  
  bVar6 = 0;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.base.model.base);
  if (pSVar5->state_index == 2) {
    if ((this_ptr->base).base.base.model.base.current_frame_number < _DAT_005efe5f) {
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
    }
    if (_DAT_005efe63 < (this_ptr->base).base.base.model.base.current_frame_number) {
      (this_ptr->base).base.base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.base.model.accumulated_root_motion.y =
           (this_ptr->base).base.base.model.accumulated_root_motion.z;
      (this_ptr->base).base.base.model.accumulated_root_motion.x =
           (this_ptr->base).base.base.model.accumulated_root_motion.y;
      pCVar2 = (this_ptr->base).base.victim;
      fVar3 = (this_ptr->base).base.base.base.location.position.x -
              (pCVar2->base).location.position.x;
      fVar4 = (this_ptr->base).base.base.base.location.position.z -
              (pCVar2->base).location.position.z;
      pSVar1 = &(this_ptr->base).state_machine;
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= _DAT_005fef90) {
        (this_ptr->base).attack_range = _DAT_005fef94;
        core_muzzle_cpp_FUN_0059d7f0(pSVar1,"ChaseComplete","MeleeAttack");
        core_muzzle_cpp_FUN_0059d8e0(pSVar1,"MeleeAttack");
        return;
      }
      (this_ptr->base).attack_range = _DAT_005fef90;
      core_muzzle_cpp_FUN_0059d7f0(pSVar1,"ChaseComplete","RangeAttack");
      core_muzzle_cpp_FUN_0059dcb0(pSVar1,0x3dcccccd);
      core_muzzle_cpp_FUN_0059d8e0(pSVar1,"Chasing");
    }
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
            ((CDemonActor *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position,
             &CStack_58);
  fStack_4c = CStack_58.x;
  afStack_48[(uint)bVar6 * -2] = *(float *)((int)&CStack_58 + (uint)bVar6 * -8 + 4);
  afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(float *)((int)&CStack_58 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_4c);
  afStack_30[2] = (float)uStack_34;
  afStack_30[(uint)bVar6 * -2 + 3] = afStack_30[(uint)bVar6 * -2];
  afStack_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       afStack_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  if (afStack_48 + 2 != afStack_30 + 2) {
    afStack_48[2] = afStack_30[2];
    afStack_48[3] = afStack_30[3];
    uStack_38 = uStack_20;
  }
  if ((float)_DAT_005efe57 < afStack_48[3]) {
    (this_ptr->base).base.base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.base.model.accumulated_root_motion.y =
         (this_ptr->base).base.base.model.accumulated_root_motion.z;
    (this_ptr->base).base.base.model.accumulated_root_motion.x =
         (this_ptr->base).base.base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,2,1);
  return;
}
