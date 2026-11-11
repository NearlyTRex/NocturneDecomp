// Name: core_dog1.cpp_CDog_processMeleeAttackState_FUN_005abfa0
// Address: 005abfa0
// Address Range: [[005abfa0, 005ac0be]]
// Convention: __cdecl
// Signature: void __cdecl core_dog1_cpp_CDog_processMeleeAttackState_FUN_005abfa0(CDog *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dog1_cpp_CDog_processMeleeAttackState_FUN_005abfa0(CDog *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  SStateMachine *pSVar1;
  CCharacter *pCVar2;
  float fVar3;
  float fVar4;
  CDemonActor *pCVar5;
  byte bVar6;
  float afStackY_1030 [1015];
  uint uStack_48;
  uint uStack_3c;
  uint uStack_30;
  float fStack_2c;
  uint uStack_24;
  float fStack_20;
  float fStack_14;
  
  bVar6 = 0;
  pCVar5 = (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  if (pCVar5 == (CDemonActor *)0x0) {
    return;
  }
  core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
            ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
  pCVar2 = (this_ptr->base).base.victim;
  fVar3 = (this_ptr->base).base.base.base.location.position.x - (pCVar2->base).location.position.x;
  fVar4 = (this_ptr->base).base.base.base.location.position.z - (pCVar2->base).location.position.z;
  fStack_14 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  this_ptr_00 = &(this_ptr->base).base.base.model;
  core_motion_cpp_FUN_005035c0(this_ptr_00);
  if (_DAT_00600c4c < fStack_14) {
    core_actor_cpp_FUN_00408de0(this_ptr,&(((this_ptr->base).base.victim)->base).location);
    uStack_30 = uStack_48;
    (&stack0xffffffd4)[(uint)bVar6 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffbc + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fStack_2c = 0.0;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xffffffd0);
    uStack_24 = uStack_3c;
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar6 * -8);
    *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffcc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    pSVar1 = &(this_ptr->base).state_machine;
    if (ABS(fStack_20) < (float)_DAT_005f0da6) {
      unkaddr_0059d350_cpp_FUN_0059d8e0(pSVar1,"LeapAttack");
      return;
    }
    (this_ptr->base).attack_range = _DAT_00600c4c;
    unkaddr_0059d350_cpp_FUN_0059d8e0(pSVar1,"Chasing");
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,4,1);
  return;
}
