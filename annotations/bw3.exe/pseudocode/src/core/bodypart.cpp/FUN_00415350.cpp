// Name: core_bodypart.cpp_FUN_00415350
// Address: 00415350
// Address Range: [[00415350, 00415563]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_00415350(CBodyPart *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bodypart_cpp_FUN_00415350(CBodyPart *param_1,float param_2)

{
  byte *puVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_100c [993];
  SDamageInfo aSStack_78 [4];
  uint uStack_74;
  uint uStack_48;
  CBodyPart *pCStack_44;
  CBodyPart *pCStack_40;
  uint uStack_24;
  uint auStack_20 [4];
  
  bVar5 = 0;
  if ((*(int *)&param_1->field_0x174 < 3) || (*(int *)&param_1->field_0x180 < 1)) {
    *(uint *)&param_1->field_0x70 = 2;
    core_bodypart_cpp_FUN_00414910(param_1,0,0);
    puVar1 = &param_1->field_0x168;
    if (puVar1 != &DAT_02cfd900) {
      *(uint *)puVar1 = _DAT_02cfd900;
      *(uint *)&param_1->field_0x16c = _DAT_02cfd904;
      *(uint *)&param_1->field_0x170 = _DAT_02cfd908;
    }
    if (&param_1->field_0x15c != puVar1) {
      *(uint *)&param_1->field_0x15c = *(uint *)puVar1;
      *(uint *)&param_1->field_0x160 = *(uint *)&param_1->field_0x16c;
      *(uint *)&param_1->field_0x164 = *(uint *)&param_1->field_0x170;
      return;
    }
  }
  else {
    if ((*(int *)&param_1->field_0x158 == 0) || (*(int *)&param_1->field_0xf24 != 0)) {
      if ((*(int *)&param_1->field_0xf2c != 0) || (*(int *)&param_1->field_0xf24 != 0)) {
        core_bodypart_cpp_CBodyPart_spawnGore_FUN_00416b20(param_1);
      }
      if (*(int *)&param_1->field_0xf2c == 0) {
        fVar2 = *(float *)&param_1->field_0xcbc - param_2;
        *(float *)&param_1->field_0xcbc = fVar2;
        if (0.0 <= fVar2) {
          puVar4 = (uint *)((int)param_1 + (uint)bVar5 * -8 + 0x24);
          uStack_24 = *(uint *)&param_1->field_0x20;
          auStack_20[(uint)bVar5 * -2] = *puVar4;
          auStack_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = puVar4[(uint)bVar5 * -2 + 1];
          core_box_cpp_CBox_process_FUN_0041b410((CBox *)&param_1->field_0xcd0,param_2);
          *(uint *)&param_1->field_0x20 = *(uint *)&param_1->field_0xcd0;
          *(uint *)&param_1->field_0x24 = *(uint *)&param_1->field_0xcd4;
          *(uint *)&param_1->field_0x28 = *(uint *)&param_1->field_0xcd8;
          if (&param_1->field_0x30 != &param_1->field_0xcdc) {
            *(uint *)&param_1->field_0x30 = *(uint *)&param_1->field_0xcdc;
            *(uint *)&param_1->field_0x34 = *(uint *)&param_1->field_0xce0;
            *(uint *)&param_1->field_0x38 = *(uint *)&param_1->field_0xce4;
          }
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)param_1);
          if (((float)_DAT_005b6c52 <
               SQRT(*(float *)&param_1->field_0xd18 * *(float *)&param_1->field_0xd18 +
                    *(float *)&param_1->field_0xd10 * *(float *)&param_1->field_0xd10 +
                    *(float *)&param_1->field_0xd14 * *(float *)&param_1->field_0xd14)) &&
             (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                                (0x01C6E360,"disableBodyPartDamage"), iVar3 == 0)) {
            (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_78);
            uStack_74 = core_actor_cpp_FUN_0040ce40(0x41200000,0x41700000);
            pCStack_44 = param_1;
            pCStack_40 = param_1;
            uStack_48 = 0x70;
            auStack_20[2] = uStack_74;
            core_setcolid_cpp_FUN_0053ed10
                      (g_CDemonSetPtr,&uStack_24,&param_1->field_0x20,aSStack_78);
            core_bodypart_cpp_FUN_00415570(param_1,param_2);
            return;
          }
        }
        else {
          *(uint *)&param_1->field_0xf24 = 0;
          *(uint *)&param_1->field_0xcbc = 0;
        }
      }
    }
    core_bodypart_cpp_FUN_00415570(param_1,param_2);
  }
  return;
}
