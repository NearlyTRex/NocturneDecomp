// Name: core_ghostchi.cpp_CGhostChild_processMeleeAttackState_FUN_005a9580
// Address: 005a9580
// Address Range: [[005a9580, 005a976d]]
// Convention: __cdecl
// Signature: void __cdecl core_ghostchi_cpp_CGhostChild_processMeleeAttackState_FUN_005a9580(CGhostChild *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghostchi_cpp_CGhostChild_processMeleeAttackState_FUN_005a9580(CGhostChild *this_ptr,float delta_time)

{
  byte *this_ptr_00;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1030 [998];
  float *pfVar6;
  SDamageInfo *this_ptr_01;
  SDamageInfo aSStack_84 [4];
  uint uStack_80;
  CGhostChild *pCStack_50;
  CGhostChild *pCStack_4c;
  uint uStack_48;
  float afStack_44 [5];
  float afStack_30 [3];
  CVector3f CStack_24;
  float fStack_10;
  float fStack_c;
  
  bVar5 = 0;
  iVar4 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x17c))(this_ptr);
  fVar3 = _DAT_006006ac;
  if (iVar4 == 0) {
    return;
  }
  iVar4 = *(int *)&this_ptr->field_0x10a78;
  fVar1 = *(float *)(iVar4 + 0x20) - *(float *)&this_ptr->field_0x20;
  fVar2 = *(float *)(iVar4 + 0x28) - *(float *)&this_ptr->field_0x28;
  if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= _DAT_006006ac) {
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              ((CCharacter *)this_ptr,(CVector3f *)(iVar4 + 0x20));
    this_ptr_00 = &this_ptr->field_0x2b4;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_00,5,1);
    iVar4 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((((*(int *)(iVar4 + 0x24) != 5) ||
         (fStack_10 = core_motion_cpp_FUN_00503e60((CMotionController *)this_ptr_00),
         fStack_c = fStack_10, fStack_10 < _DAT_006006b0)) || (_DAT_006006b4 < fStack_10)) ||
       (*(int *)&this_ptr->field_0x113d0 != 0)) {
      if (*(int *)&this_ptr->field_0x1185c < 3) {
        return;
      }
    }
    else {
      *(int *)&this_ptr->field_0x1185c = *(int *)&this_ptr->field_0x1185c + 1;
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,&this_ptr->field_0x1134 + *(int *)&this_ptr->field_0x11854 * 0x30);
      pfVar6 = afStack_44 + 5;
      afStack_30[0] = (float)uStack_48;
      afStack_44[(uint)bVar5 * -2 + 6] = afStack_44[(uint)bVar5 * -2];
      afStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar6);
      this_ptr_01 = aSStack_84;
      CStack_24.x = afStack_44[2];
      *(float *)((int)&CStack_24 + (uint)bVar5 * -8 + 4) = afStack_44[(uint)bVar5 * -2 + 3];
      *(float *)((int)&CStack_24 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(this_ptr_01);
      uStack_80 = 0x41200000;
      pCStack_50 = this_ptr;
      pCStack_4c = this_ptr;
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                ((CEnemy *)this_ptr,&CStack_24,1.0,aSStack_84);
      if (*(int *)&this_ptr->field_0x1185c < 3) {
        return;
      }
    }
    *(uint *)&this_ptr->field_0x1185c = 0;
    *(uint *)&this_ptr->field_0x11858 = 0;
    unkaddr_0059d350_cpp_FUN_0059d7f0
              (&this_ptr->field_0x10af8,"SleepComplete","Alert");
    unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->field_0x10af8,"Sleep");
    return;
  }
  *(uint *)&this_ptr->field_0x11398 = 0;
  *(float *)&this_ptr->field_0x11394 = fVar3;
  unkaddr_0059d350_cpp_FUN_0059dcb0(&this_ptr->field_0x10af8,0x3f000000);
  unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->field_0x10af8,"Chasing");
  return;
}
