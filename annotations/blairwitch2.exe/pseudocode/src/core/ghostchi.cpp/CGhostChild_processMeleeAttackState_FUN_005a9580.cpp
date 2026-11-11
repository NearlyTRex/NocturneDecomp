// Name: core_ghostchi.cpp_CGhostChild_processMeleeAttackState_FUN_005a9580
// Address: 005a9580
// Address Range: [[005a9580, 005a976d]]
// Convention: __cdecl
// Signature: void __cdecl core_ghostchi_cpp_CGhostChild_processMeleeAttackState_FUN_005a9580(CGhostChild *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghostchi_cpp_CGhostChild_processMeleeAttackState_FUN_005a9580(CGhostChild *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CCharacter *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonActor *pCVar5;
  int iVar6;
  SStateMachine *pSVar7;
  byte bVar8;
  float afStackY_1030 [998];
  float *pfVar9;
  SDamageInfo *this_ptr_01;
  SDamageInfo SStack_84;
  uint uStack_48;
  float afStack_44 [5];
  float afStack_30 [3];
  CVector3f CStack_24;
  float fStack_10;
  float fStack_c;
  
  bVar8 = 0;
  pCVar5 = (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  fVar4 = _DAT_006006ac;
  if (pCVar5 == (CDemonActor *)0x0) {
    return;
  }
  pCVar1 = (this_ptr->base).base.victim;
  fVar2 = (pCVar1->base).location.position.x - (this_ptr->base).base.base.base.location.position.x;
  fVar3 = (pCVar1->base).location.position.z - (this_ptr->base).base.base.base.location.position.z;
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2) <= _DAT_006006ac) {
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              ((CCharacter *)this_ptr,&(pCVar1->base).location.position);
    this_ptr_00 = &(this_ptr->base).base.base.model;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,5,1);
    iVar6 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((((*(int *)(iVar6 + 0x24) != 5) ||
         (fStack_10 = core_motion_cpp_FUN_00503e60(&this_ptr_00->base), fStack_c = fStack_10,
         fStack_10 < _DAT_006006b0)) || (_DAT_006006b4 < fStack_10)) ||
       ((this_ptr->base).flinch_active != 0)) {
      if (this_ptr->hit_count < 3) {
        return;
      }
    }
    else {
      this_ptr->hit_count = this_ptr->hit_count + 1;
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,
                 (this_ptr->base).base.base.model.bone_transform.bone_model_matrices +
                 this_ptr->hand_bone);
      pfVar9 = afStack_44 + 5;
      afStack_30[0] = (float)uStack_48;
      afStack_44[(uint)bVar8 * -2 + 6] = afStack_44[(uint)bVar8 * -2];
      afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
           afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar9);
      this_ptr_01 = &SStack_84;
      CStack_24.x = afStack_44[2];
      *(float *)((int)&CStack_24 + (uint)bVar8 * -8 + 4) = afStack_44[(uint)bVar8 * -2 + 3];
      *(float *)((int)&CStack_24 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           afStack_44[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(this_ptr_01);
      SStack_84.damage_amount = 0x41200000;
      SStack_84.attacker = (CDemonActor *)this_ptr;
      SStack_84.wielder = (CDemonActor *)this_ptr;
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                ((CEnemy *)this_ptr,&CStack_24,1.0,&SStack_84);
      if (this_ptr->hit_count < 3) {
        return;
      }
    }
    pSVar7 = &(this_ptr->base).state_machine;
    this_ptr->hit_count = 0;
    this_ptr->sleep_phase = 0;
    unkaddr_0059d350_cpp_FUN_0059d7f0(pSVar7,"SleepComplete","Alert");
    unkaddr_0059d350_cpp_FUN_0059d8e0(pSVar7,"Sleep");
    return;
  }
  pSVar7 = &(this_ptr->base).state_machine;
  (this_ptr->base).run_distance = 0.0;
  (this_ptr->base).attack_range = fVar4;
  unkaddr_0059d350_cpp_FUN_0059dcb0(pSVar7,0x3f000000);
  unkaddr_0059d350_cpp_FUN_0059d8e0(pSVar7,"Chasing");
  return;
}
