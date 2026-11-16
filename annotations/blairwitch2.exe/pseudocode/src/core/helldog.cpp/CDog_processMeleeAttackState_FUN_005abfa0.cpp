// Name: core_helldog.cpp_CDog_processMeleeAttackState_FUN_005abfa0
// Address: 005abfa0
// Address Range: [[005abfa0, 005ac0be]]
// Convention: __cdecl
// Signature: void __cdecl core_helldog_cpp_CDog_processMeleeAttackState_FUN_005abfa0(CDog *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_helldog_cpp_CDog_processMeleeAttackState_FUN_005abfa0(CDog *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  SStateMachine *this_ptr_01;
  CCharacter *pCVar1;
  float fVar2;
  float fVar3;
  CDemonActor *pCVar4;
  byte bVar5;
  float afStackY_1030 [1015];
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  float fStack_24;
  float afStack_20 [5];
  
  bVar5 = 0;
  pCVar4 = (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  if (pCVar4 == (CDemonActor *)0x0) {
    return;
  }
  core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
            ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
  pCVar1 = (this_ptr->base).base.victim;
  fVar2 = (this_ptr->base).base.base.base.location.position.x - (pCVar1->base).location.position.x;
  fVar3 = (this_ptr->base).base.base.base.location.position.z - (pCVar1->base).location.position.z;
  afStack_20[3] = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  this_ptr_00 = &(this_ptr->base).base.base.model;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
  if (_DAT_00600c4c < afStack_20[3]) {
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
              ((CDemonActor *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position,
               &CStack_48);
    CStack_30.x = CStack_48.x;
    *(uint *)((int)&CStack_30 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&CStack_48 + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&CStack_30 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&CStack_48 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    CStack_30.y = 0.0;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_30,&CStack_3c);
    fStack_24 = CStack_3c.x;
    afStack_20[(uint)bVar5 * -2] = *(float *)((int)&CStack_3c + (uint)bVar5 * -8 + 4);
    afStack_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(float *)((int)&CStack_3c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    this_ptr_01 = &(this_ptr->base).state_machine;
    if (ABS(afStack_20[0]) < (float)_DAT_005f0da6) {
      core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(this_ptr_01,"LeapAttack");
      return;
    }
    (this_ptr->base).attack_range = _DAT_00600c4c;
    core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(this_ptr_01,"Chasing");
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,4,1);
  return;
}
