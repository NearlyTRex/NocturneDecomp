// Name: core_twigzomb.cpp_FUN_005a2ac0
// Address: 005a2ac0
// Address Range: [[005a2ac0, 005a2db8]]
// Convention: unknown
// Signature: void core_twigzomb_cpp_FUN_005a2ac0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_twigzomb_cpp_FUN_005a2ac0(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  byte bVar5;
  float afStackY_106c [999];
  SDamageInfo aSStack_c0 [4];
  float fStack_bc;
  CEnemy *pCStack_8c;
  CEnemy *pCStack_88;
  CVector3f CStack_84;
  float fStack_78;
  float afStack_74 [5];
  CVector3f CStack_60;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_1c;
  float fStack_18;
  byte *puStack_14;
  
  bVar5 = 0;
  pCVar3 = (*(param_1->base).base.vtable._ub[1].getCarrier)((CDemonActor *)param_1);
  if (pCVar3 != (CDemonActor *)0x0) {
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              (&param_1->base,(CVector3f *)&(param_1->victim->base).field_0x20);
    this_ptr = &(param_1->base).model;
    fStack_18 = core_motion_cpp_FUN_00503e60((CMotionController *)this_ptr);
    puStack_14 = (byte *)fStack_18;
    iVar4 = core_motion_cpp_FUN_005035c0(this_ptr);
    if (*(int *)(iVar4 + 0x24) != 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,2,1);
      return;
    }
    if ((_DAT_005ff174 <= fStack_18) && (fStack_18 <= _DAT_005ff178)) {
      param_1->speed = 1.0;
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_c0);
      fStack_bc = *(float *)&(param_1->base).field_0x2824 * _DAT_005f001b;
      pCStack_8c = param_1;
      pCStack_88 = param_1;
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
      puStack_14 = &(param_1->base).model.field_0xe80;
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,puStack_14 + *(int *)&param_1[1].base.model.field_0xaa4 * 0x30);
      fStack_3c = fStack_30;
      afStack_74[(uint)bVar5 * -2 + 0xf] = afStack_74[(uint)bVar5 * -2 + 0x12];
      afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
           afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,puStack_14 + *(int *)&param_1[1].base.model.field_0xaa8 * 0x30);
      fStack_48 = fStack_54;
      afStack_74[(uint)bVar5 * -2 + 0xc] = afStack_74[(uint)bVar5 * -2 + 9];
      afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
      fStack_78 = fStack_48 - fStack_3c;
      afStack_74[0] = fStack_44 - fStack_38;
      afStack_74[1] = fStack_40 - fStack_34;
      CStack_84.x = fStack_48 - fStack_3c;
      *(float *)((int)&CStack_84 + (uint)bVar5 * -8 + 4) = afStack_74[(uint)bVar5 * -2];
      *(float *)((int)&CStack_84 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      CStack_84.y = CStack_84.y * _DAT_005f001f + fStack_38;
      CStack_84.x = CStack_84.x * _DAT_005f001f + fStack_3c;
      CStack_84.z = CStack_84.z * _DAT_005f001f + fStack_34;
      fStack_1c = SQRT(CStack_84.z * CStack_84.z +
                       CStack_84.x * CStack_84.x + CStack_84.y * CStack_84.y);
      core_actor_cpp_FUN_00408d70(param_1,&CStack_84);
      CStack_60.x = afStack_74[2];
      afStack_74[(uint)bVar5 * -2 + 6] = afStack_74[(uint)bVar5 * -2 + 3];
      afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      if (&CStack_84 != (CVector3f *)(afStack_74 + 5)) {
        CStack_84.x = CStack_60.x;
        CStack_84.y = CStack_60.y;
        CStack_84.z = CStack_60.z;
      }
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(param_1,&CStack_84,fStack_1c,aSStack_c0);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
      return;
    }
    if ((_DAT_005ff178 < fStack_18) &&
       (fVar1 = *(float *)&(param_1->victim->base).field_0x20 -
                *(float *)&(param_1->base).base.field_0x20,
       fVar2 = *(float *)&(param_1->victim->base).field_0x28 -
               *(float *)&(param_1->base).base.field_0x28,
       _DAT_005ff170 < SQRT(fVar2 * fVar2 + fVar1 * fVar1))) {
      unkaddr_0059d350_cpp_FUN_0059dcb0(param_1 + 1,0x3f800000);
      unkaddr_0059d350_cpp_FUN_0059d8e0(param_1 + 1,"Chasing");
      return;
    }
  }
  return;
}
