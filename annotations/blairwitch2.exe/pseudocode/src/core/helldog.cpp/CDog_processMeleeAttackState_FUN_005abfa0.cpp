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
  SStateMachine *pSVar1;
  CCharacter *pCVar2;
  float fVar3;
  float fVar4;
  CDemonActor *pCVar5;
  byte bVar6;
  float afStackY_1030 [1015];
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  float fStack_24;
  float afStack_20 [5];
  
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
  afStack_20[3] = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  this_ptr_00 = &(this_ptr->base).base.base.model;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
  if (_DAT_00600c4c < afStack_20[3]) {
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
              ((CDemonActor *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position,
               &CStack_48);
    CStack_30.x = CStack_48.x;
    *(uint *)((int)&CStack_30 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&CStack_48 + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&CStack_30 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&CStack_48 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    CStack_30.y = 0.0;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_30,&CStack_3c);
    fStack_24 = CStack_3c.x;
    afStack_20[(uint)bVar6 * -2] = *(float *)((int)&CStack_3c + (uint)bVar6 * -8 + 4);
    afStack_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(float *)((int)&CStack_3c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    pSVar1 = &(this_ptr->base).state_machine;
    if (ABS(afStack_20[0]) < (float)_DAT_005f0da6) {
      core_muzzle_cpp_FUN_0059d8e0(pSVar1,"LeapAttack");
      return;
    }
    (this_ptr->base).attack_range = _DAT_00600c4c;
    core_muzzle_cpp_FUN_0059d8e0(pSVar1,"Chasing");
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,4,1);
  return;
}
