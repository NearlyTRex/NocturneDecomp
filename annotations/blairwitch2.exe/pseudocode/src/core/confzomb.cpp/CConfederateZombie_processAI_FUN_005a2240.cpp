// Name: core_confzomb.cpp_CConfederateZombie_processAI_FUN_005a2240
// Address: 005a2240
// Address Range: [[005a2240, 005a249e]]
// Convention: __cdecl
// Signature: void __cdecl core_confzomb_cpp_CConfederateZombie_processAI_FUN_005a2240(CConfederateZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_confzomb_cpp_CConfederateZombie_processAI_FUN_005a2240(CConfederateZombie *this_ptr,float delta_time)

{
  SStateMachine *pSVar1;
  float fVar2;
  CCharacter *pCVar3;
  float fVar4;
  int iVar5;
  byte bVar6;
  float afStackY_102c [1014];
  CClothList *this_ptr_00;
  CVector3f *wind_velocity;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [4];
  
  bVar6 = 0;
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((this_ptr->base).base.base.base.particle_systems + 4,delta_time);
  iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0
                    (&(this_ptr->base).state_machine,&DAT_005efe97);
  if (iVar5 != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.base.model.base,8,1);
  }
  pSVar1 = &(this_ptr->base).state_machine;
  iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar1,&DAT_005efe9c);
  if (((((iVar5 != 0) ||
        (iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar1,"Chasing"),
        iVar5 != 0)) ||
       (iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar1,"MeleeAttack"),
       iVar5 != 0)) ||
      (iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar1,"RangeAttack"),
      iVar5 != 0)) &&
     (((this_ptr->base).fade_state == 0 && (fVar2 = (this_ptr->base).fade_val, ABS(fVar2) == 0.0))))
  {
    core_basicene_cpp_CBasicEnemy_setFade_FUN_005a01a0(&this_ptr->base,fVar2,1.0,0.5);
    core_basicene_cpp_CBasicEnemy_startFade_FUN_0059f570(&this_ptr->base);
  }
  pSVar1 = &(this_ptr->base).state_machine;
  iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar1,"Death");
  if (((iVar5 == 0) &&
      (iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar1,"Animation"),
      iVar5 == 0)) &&
     (iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar1,&DAT_005efed1), iVar5 == 0))
  {
    (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  }
  if ((this_ptr->base).base.victim != (CCharacter *)0x0) {
    pSVar1 = &(this_ptr->base).state_machine;
    iVar5 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(pSVar1,"Chasing");
    if (((iVar5 != 0) &&
        (iVar5 = core_muzzle_cpp_SStateMachine_isRefStateTarget_FUN_0059dae0
                           (pSVar1,"ChaseComplete","MeleeAttack"), iVar5 != 0)) &&
       (pCVar3 = (this_ptr->base).base.victim,
       fVar2 = (pCVar3->base).location.position.x -
               (this_ptr->base).base.base.base.location.position.x,
       fVar4 = (pCVar3->base).location.position.z -
               (this_ptr->base).base.base.base.location.position.z,
       SQRT(fVar4 * fVar4 + fVar2 * fVar2) < _DAT_005fef90)) {
      (this_ptr->base).attack_range = _DAT_005fef90;
      core_muzzle_cpp_SStateMachine_setRefState_FUN_0059d7f0
                (pSVar1,"ChaseComplete","RangeAttack");
    }
  }
  fStack_38 = (this_ptr->base).move_velocity.x * _DAT_005eff13;
  fStack_34 = (this_ptr->base).move_velocity.y * _DAT_005eff13;
  fStack_30 = (this_ptr->base).move_velocity.z * _DAT_005eff13;
  fStack_44 = fStack_38;
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  wind_velocity = &CStack_2c;
  this_ptr_00 = &(this_ptr->base).base.base.cloth_list;
  fStack_20 = fStack_44 * delta_time;
  afStack_1c[0] = fStack_40 * delta_time;
  afStack_1c[1] = fStack_3c * delta_time;
  CStack_2c.x = fStack_44 * delta_time;
  *(float *)((int)&CStack_2c + (uint)bVar6 * -8 + 4) = afStack_1c[(uint)bVar6 * -2];
  *(float *)((int)&CStack_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       afStack_1c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  core_cloth_cpp_CClothList_setWindVelocity_FUN_005b1890(this_ptr_00,wind_velocity);
  return;
}
