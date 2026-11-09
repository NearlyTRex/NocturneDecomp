// Name: core_twigzomb.cpp_FUN_005a2ac0
// Address: 005a2ac0
// Address Range: [[005a2ac0, 005a2db8]]
// Convention: unknown
// Signature: void core_twigzomb_cpp_FUN_005a2ac0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_twigzomb_cpp_FUN_005a2ac0(CEnemy *param_1)

{
  byte *this_ptr;
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float afStackY_106c [999];
  SDamageInfo aSStack_c0 [4];
  float fStack_bc;
  CEnemy *pCStack_8c;
  CEnemy *pCStack_88;
  byte auStack_84 [4];
  float afStack_80 [4];
  float fStack_70;
  float fStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
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
  
  bVar4 = 0;
  iVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x17c))(param_1);
  if (iVar3 != 0) {
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20));
    this_ptr = &param_1->field_0x2b4;
    fStack_18 = core_motion_cpp_FUN_00503e60((CMotionController *)this_ptr);
    puStack_14 = (byte *)fStack_18;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
    if (*(int *)(iVar3 + 0x24) != 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,2,1);
      return;
    }
    if ((_DAT_005ff174 <= fStack_18) && (fStack_18 <= _DAT_005ff178)) {
      *(uint *)&param_1->field_0x10a60 = 0x3f800000;
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_c0);
      fStack_bc = *(float *)&param_1->field_0x2824 * _DAT_005f001b;
      pCStack_8c = param_1;
      pCStack_88 = param_1;
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
      puStack_14 = &param_1->field_0x1134;
      core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_14 + *(int *)&param_1[1].field_0xd58 * 0x30)
      ;
      fStack_3c = fStack_30;
      afStack_80[(uint)bVar4 * -2 + 0x12] = afStack_80[(uint)bVar4 * -2 + 0x15];
      afStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
           afStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
      core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_14 + *(int *)&param_1[1].field_0xd5c * 0x30)
      ;
      fStack_48 = fStack_54;
      afStack_80[(uint)bVar4 * -2 + 0xf] = afStack_80[(uint)bVar4 * -2 + 0xc];
      afStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
           afStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
      afStack_80[2] = fStack_48 - fStack_3c;
      afStack_80[3] = fStack_44 - fStack_38;
      fStack_70 = fStack_40 - fStack_34;
      auStack_84 = (byte  [4])(fStack_48 - fStack_3c);
      afStack_80[(uint)bVar4 * -2] = afStack_80[(uint)bVar4 * -2 + 3];
      afStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      afStack_80[0] = afStack_80[0] * _DAT_005f001f + fStack_38;
      auStack_84 = (byte  [4])((float)auStack_84 * _DAT_005f001f + fStack_3c);
      afStack_80[1] = afStack_80[1] * _DAT_005f001f + fStack_34;
      fStack_1c = SQRT(afStack_80[1] * afStack_80[1] +
                       (float)auStack_84 * (float)auStack_84 + afStack_80[0] * afStack_80[0]);
      core_actor_cpp_FUN_00408d70(param_1,auStack_84);
      fStack_60 = fStack_6c;
      afStack_80[(uint)bVar4 * -2 + 9] = afStack_80[(uint)bVar4 * -2 + 6];
      afStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
           afStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      if ((float *)auStack_84 != afStack_80 + 8) {
        auStack_84 = (byte  [4])fStack_60;
        afStack_80[0] = fStack_5c;
        afStack_80[1] = fStack_58;
      }
      core_enemy_cpp_FUN_00488110(param_1,(CVector3f *)auStack_84,fStack_1c,aSStack_c0);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
      return;
    }
    if ((_DAT_005ff178 < fStack_18) &&
       (fVar1 = *(float *)(*(int *)&param_1->field_0x10a78 + 0x20) - *(float *)&param_1->field_0x20,
       fVar2 = *(float *)(*(int *)&param_1->field_0x10a78 + 0x28) - *(float *)&param_1->field_0x28,
       _DAT_005ff170 < SQRT(fVar2 * fVar2 + fVar1 * fVar1))) {
      unkaddr_0059d350_cpp_FUN_0059dcb0(param_1 + 1,0x3f800000);
      unkaddr_0059d350_cpp_FUN_0059d8e0(param_1 + 1,"Chasing");
      return;
    }
  }
  return;
}
