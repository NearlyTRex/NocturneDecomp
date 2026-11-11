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
  int iVar5;
  byte bVar6;
  float afStackY_1040 [1015];
  uint uStack_58;
  uint uStack_4c;
  uint uStack_40;
  float fStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_28;
  float fStack_24;
  uint uStack_20;
  
  bVar6 = 0;
  iVar5 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.base.model);
  if (*(int *)(iVar5 + 0x24) == 2) {
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
        unkaddr_0059d350_cpp_FUN_0059d7f0(pSVar1,"ChaseComplete","MeleeAttack");
        unkaddr_0059d350_cpp_FUN_0059d8e0(pSVar1,"MeleeAttack");
        return;
      }
      (this_ptr->base).attack_range = _DAT_005fef90;
      unkaddr_0059d350_cpp_FUN_0059d7f0(pSVar1,"ChaseComplete","RangeAttack");
      unkaddr_0059d350_cpp_FUN_0059dcb0(pSVar1,0x3dcccccd);
      unkaddr_0059d350_cpp_FUN_0059d8e0(pSVar1,"Chasing");
    }
    return;
  }
  core_actor_cpp_FUN_00408de0(this_ptr,&(((this_ptr->base).base.victim)->base).location);
  uStack_4c = uStack_58;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffac + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffb0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xffffffb4);
  uStack_28 = uStack_34;
  (&stack0xffffffdc)[(uint)bVar6 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if (&stack0xffffffc0 != &stack0xffffffd8) {
    uStack_40 = uStack_28;
    fStack_3c = fStack_24;
    uStack_38 = uStack_20;
  }
  if ((float)_DAT_005efe57 < fStack_3c) {
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
