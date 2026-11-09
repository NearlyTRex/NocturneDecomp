// Name: core_bodypart.cpp_FUN_00419740
// Address: 00419740
// Address Range: [[00419740, 0041993a]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_00419740(CBodyPart *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bodypart_cpp_FUN_00419740(CBodyPart *param_1,float param_2)

{
  byte *puVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_100c [999];
  SDamageInfo aSStack_60 [4];
  uint uStack_5c;
  CBodyPart *pCStack_2c;
  CBodyPart *pCStack_28;
  uint uStack_24;
  uint auStack_20 [4];
  
  bVar5 = 0;
  if ((*(int *)&param_1->field_0x174 < 3) || (*(int *)&param_1->field_0x180 < 1)) {
    *(uint *)&param_1->field_0x70 = 2;
    core_bodypart_cpp_FUN_00418d00(param_1,0,0);
    puVar1 = &param_1->field_0x168;
    if (puVar1 != &DAT_02c8af28) {
      *(uint *)puVar1 = _DAT_02c8af28;
      *(uint *)&param_1->field_0x16c = _DAT_02c8af2c;
      *(uint *)&param_1->field_0x170 = _DAT_02c8af30;
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
        core_bodypart_cpp_CBodyPart_spawnGore_FUN_0041aef0(param_1);
      }
      if (*(int *)&param_1->field_0xf2c == 0) {
        fVar2 = *(float *)&param_1->field_0xcbc - param_2;
        *(float *)&param_1->field_0xcbc = fVar2;
        if (0.0 <= fVar2) {
          puVar4 = (uint *)((int)param_1 + (uint)bVar5 * -8 + 0x24);
          uStack_24 = *(uint *)&param_1->field_0x20;
          auStack_20[(uint)bVar5 * -2] = *puVar4;
          auStack_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = puVar4[(uint)bVar5 * -2 + 1];
          core_box_cpp_CBox_process_FUN_0041e0d0((CBox *)&param_1->field_0xcd0,param_2);
          *(uint *)&param_1->field_0x20 = *(uint *)&param_1->field_0xcd0;
          *(uint *)&param_1->field_0x24 = *(uint *)&param_1->field_0xcd4;
          *(uint *)&param_1->field_0x28 = *(uint *)&param_1->field_0xcd8;
          if (&param_1->field_0x30 != &param_1->field_0xcdc) {
            *(uint *)&param_1->field_0x30 = *(uint *)&param_1->field_0xcdc;
            *(uint *)&param_1->field_0x34 = *(uint *)&param_1->field_0xce0;
            *(uint *)&param_1->field_0x38 = *(uint *)&param_1->field_0xce4;
          }
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)param_1);
          if ((float)_DAT_005d44a9 <
              SQRT(*(float *)&param_1->field_0xd18 * *(float *)&param_1->field_0xd18 +
                   *(float *)&param_1->field_0xd10 * *(float *)&param_1->field_0xd10 +
                   *(float *)&param_1->field_0xd14 * *(float *)&param_1->field_0xd14)) {
            iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                              (0x01C51D80,"disableBodyPartDamage");
            if (iVar3 == 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_60);
              uStack_5c = core_actor_cpp_FUN_0040cc00(0x41200000,0x41700000);
              pCStack_2c = param_1;
              pCStack_28 = param_1;
              auStack_20[2] = uStack_5c;
              core_setcolid_cpp_FUN_00559350
                        (g_CDemonSetPtr,&uStack_24,&param_1->field_0x20,aSStack_60);
              core_bodypart_cpp_FUN_00419940(param_1,param_2);
              return;
            }
          }
        }
        else {
          *(uint *)&param_1->field_0xf24 = 0;
          *(uint *)&param_1->field_0xcbc = 0;
        }
      }
    }
    core_bodypart_cpp_FUN_00419940(param_1,param_2);
  }
  return;
}
