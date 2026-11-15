// Name: core_fforest.cpp_FUN_005a2ac0
// Address: 005a2ac0
// Address Range: [[005a2ac0, 005a2db8]]
// Convention: unknown
// Signature: void core_fforest_cpp_FUN_005a2ac0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fforest_cpp_FUN_005a2ac0(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  float fVar2;
  CDemonActor *pCVar3;
  SMotion *pSVar4;
  byte bVar5;
  float afStackY_106c [999];
  SDamageInfo SStack_c0;
  CVector3f CStack_84;
  float fStack_78;
  float afStack_74 [2];
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  CVector3f CStack_30;
  float fStack_1c;
  float fStack_18;
  CMatrix3x4f *pCStack_14;
  
  bVar5 = 0;
  pCVar3 = (*(param_1->base).base.vtable._ub[1].getCarrier)((CDemonActor *)param_1);
  if (pCVar3 != (CDemonActor *)0x0) {
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              (&param_1->base,&(param_1->victim->base).location.position);
    this_ptr = &(param_1->base).model;
    fStack_18 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                          (&this_ptr->base);
    pCStack_14 = (CMatrix3x4f *)fStack_18;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr->base);
    if (pSVar4->state_index != 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr->base,2,1);
      return;
    }
    if ((_DAT_005ff174 <= fStack_18) && (fStack_18 <= _DAT_005ff178)) {
      param_1->speed = 1.0;
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_c0);
      SStack_c0.damage_amount = (param_1->base).size_scale * _DAT_005f001b;
      SStack_c0.attacker = (CDemonActor *)param_1;
      SStack_c0.wielder = (CDemonActor *)param_1;
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
      pCStack_14 = (param_1->base).model.bone_transform.bone_model_matrices;
      core_xform_cpp_transformVector3x4_FUN_00591530
                ((CVector3f *)&DAT_0265370c,
                 pCStack_14 +
                 (int)param_1[1].base.model.bone_transform.pose_data.bone_rotations[0x3f].x,
                 &CStack_30);
      afStack_44[2] = CStack_30.x;
      afStack_44[(uint)bVar5 * -2 + 3] = *(float *)((int)&CStack_30 + (uint)bVar5 * -8 + 4);
      afStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           *(float *)((int)&CStack_30 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_xform_cpp_transformVector3x4_FUN_00591530
                ((CVector3f *)&DAT_0265370c,
                 pCStack_14 +
                 (int)param_1[1].base.model.bone_transform.pose_data.bone_rotations[0x3f].y,
                 &CStack_54);
      fStack_48 = CStack_54.x;
      afStack_44[(uint)bVar5 * -2] = *(float *)((int)&CStack_54 + (uint)bVar5 * -8 + 4);
      afStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           *(float *)((int)&CStack_54 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      fStack_78 = fStack_48 - afStack_44[2];
      afStack_74[0] = afStack_44[0] - afStack_44[3];
      afStack_74[1] = afStack_44[1] - fStack_34;
      CStack_84.x = fStack_48 - afStack_44[2];
      *(float *)((int)&CStack_84 + (uint)bVar5 * -8 + 4) = afStack_74[(uint)bVar5 * -2];
      *(float *)((int)&CStack_84 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      CStack_84.y = CStack_84.y * _DAT_005f001f + afStack_44[3];
      CStack_84.x = CStack_84.x * _DAT_005f001f + afStack_44[2];
      CStack_84.z = CStack_84.z * _DAT_005f001f + fStack_34;
      fStack_1c = SQRT(CStack_84.z * CStack_84.z +
                       CStack_84.x * CStack_84.x + CStack_84.y * CStack_84.y);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)param_1,&CStack_84,&CStack_6c);
      CStack_60.x = CStack_6c.x;
      *(uint *)((int)&CStack_60 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_6c + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&CStack_60 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_6c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      if (&CStack_84 != &CStack_60) {
        CStack_84.x = CStack_60.x;
        CStack_84.y = CStack_60.y;
        CStack_84.z = CStack_60.z;
      }
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(param_1,&CStack_84,fStack_1c,&SStack_c0);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
      return;
    }
    if ((_DAT_005ff178 < fStack_18) &&
       (fVar1 = (param_1->victim->base).location.position.x -
                (param_1->base).base.location.position.x,
       fVar2 = (param_1->victim->base).location.position.z -
               (param_1->base).base.location.position.z,
       _DAT_005ff170 < SQRT(fVar2 * fVar2 + fVar1 * fVar1))) {
      core_muzzle_cpp_FUN_0059dcb0(param_1 + 1,0x3f800000);
      core_muzzle_cpp_FUN_0059d8e0(param_1 + 1,"Chasing");
      return;
    }
  }
  return;
}
