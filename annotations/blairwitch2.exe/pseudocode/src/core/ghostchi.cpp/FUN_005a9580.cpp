// Name: core_ghostchi.cpp_FUN_005a9580
// Address: 005a9580
// Address Range: [[005a9580, 005a976d]]
// Convention: unknown
// Signature: void core_ghostchi_cpp_FUN_005a9580(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_ghostchi_cpp_FUN_005a9580(CEnemy *param_1)

{
  byte *this_ptr;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1030 [998];
  uint *puVar6;
  SDamageInfo *this_ptr_00;
  SDamageInfo aSStack_84 [4];
  uint uStack_80;
  CEnemy *pCStack_50;
  CEnemy *pCStack_4c;
  uint uStack_48;
  uint auStack_44 [2];
  CVector3f CStack_3c;
  uint uStack_30;
  uint auStack_2c [2];
  CVector3f CStack_24;
  float fStack_10;
  float fStack_c;
  
  bVar5 = 0;
  iVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x17c))(param_1);
  fVar3 = _DAT_006006ac;
  if (iVar4 == 0) {
    return;
  }
  iVar4 = *(int *)&param_1->field_0x10a78;
  fVar1 = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
  fVar2 = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
  if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= _DAT_006006ac) {
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              ((CCharacter *)param_1,(CVector3f *)(iVar4 + 0x20));
    this_ptr = &param_1->field_0x2b4;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,5,1);
    iVar4 = core_motion_cpp_FUN_005035c0(this_ptr);
    if ((((*(int *)(iVar4 + 0x24) != 5) ||
         (fStack_10 = core_motion_cpp_FUN_00503e60((CMotionController *)this_ptr),
         fStack_c = fStack_10, fStack_10 < _DAT_006006b0)) || (_DAT_006006b4 < fStack_10)) ||
       (*(int *)&param_1[1].field_0x8d8 != 0)) {
      if (*(int *)&param_1[1].field_0xd64 < 3) {
        return;
      }
    }
    else {
      *(int *)&param_1[1].field_0xd64 = *(int *)&param_1[1].field_0xd64 + 1;
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,&param_1->field_0x1134 + *(int *)&param_1[1].field_0xd5c * 0x30);
      puVar6 = &uStack_30;
      uStack_30 = uStack_48;
      auStack_2c[(uint)bVar5 * -2] = auStack_44[(uint)bVar5 * -2];
      auStack_2c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           auStack_44[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      core_actor_cpp_FUN_00408d70(param_1,puVar6);
      this_ptr_00 = aSStack_84;
      CStack_24._0_4_ = CStack_3c._0_4_;
      *(uint *)((int)&CStack_24 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_3c + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&CStack_24 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_3c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(this_ptr_00);
      uStack_80 = 0x41200000;
      pCStack_50 = param_1;
      pCStack_4c = param_1;
      core_enemy_cpp_FUN_00488110(param_1,&CStack_24,1.0,aSStack_84);
      if (*(int *)&param_1[1].field_0xd64 < 3) {
        return;
      }
    }
    *(uint *)&param_1[1].field_0xd64 = 0;
    *(uint *)&param_1[1].field_0xd60 = 0;
    unkaddr_0059d350_cpp_FUN_0059d7f0(param_1 + 1,"SleepComplete","Alert");
    unkaddr_0059d350_cpp_FUN_0059d8e0(param_1 + 1,"Sleep");
    return;
  }
  *(uint *)&param_1[1].field_0x8a0 = 0;
  *(float *)&param_1[1].field_0x89c = fVar3;
  unkaddr_0059d350_cpp_FUN_0059dcb0(param_1 + 1,0x3f000000);
  unkaddr_0059d350_cpp_FUN_0059d8e0(param_1 + 1,"Chasing");
  return;
}
