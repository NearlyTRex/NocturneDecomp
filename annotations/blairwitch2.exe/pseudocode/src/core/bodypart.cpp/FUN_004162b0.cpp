// Name: core_bodypart.cpp_FUN_004162b0
// Address: 004162b0
// Address Range: [[004162b0, 004164aa]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_004162b0(CBodyPart *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bodypart_cpp_FUN_004162b0(CBodyPart *param_1,float param_2)

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
  if ((*(int *)&param_1->field_0x2d0 < 3) || (*(int *)&param_1->field_0x2dc < 1)) {
    *(uint *)&param_1->field_0x70 = 2;
    core_bodypart_cpp_FUN_00415890(param_1,0,0);
    puVar1 = &param_1->field_0x2c4;
    if (puVar1 != &DAT_0265370c) {
      *(uint *)puVar1 = _DAT_0265370c;
      *(uint *)&param_1->field_0x2c8 = _DAT_02653710;
      *(uint *)&param_1->field_0x2cc = _DAT_02653714;
    }
    if (&param_1->field_0x2b8 != puVar1) {
      *(uint *)&param_1->field_0x2b8 = *(uint *)puVar1;
      *(uint *)&param_1->field_0x2bc = *(uint *)&param_1->field_0x2c8;
      *(uint *)&param_1->field_0x2c0 = *(uint *)&param_1->field_0x2cc;
      return;
    }
  }
  else {
    if ((*(int *)&param_1->field_0x2b4 == 0) || (*(int *)&param_1->field_0x1334 != 0)) {
      if ((*(int *)&param_1->field_0x133c != 0) || (*(int *)&param_1->field_0x1334 != 0)) {
        core_bodypart_cpp_FUN_00417a70(param_1);
      }
      if (*(int *)&param_1->field_0x133c == 0) {
        fVar2 = *(float *)&param_1->field_0x10d0 - param_2;
        *(float *)&param_1->field_0x10d0 = fVar2;
        if (0.0 <= fVar2) {
          puVar4 = (uint *)((int)param_1 + (uint)bVar5 * -8 + 0x24);
          uStack_24 = *(uint *)&param_1->field_0x20;
          auStack_20[(uint)bVar5 * -2] = *puVar4;
          auStack_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = puVar4[(uint)bVar5 * -2 + 1];
          core_box_cpp_CBox_process_FUN_005b2290((CBox *)&param_1->field_0x10e0,param_2);
          *(uint *)&param_1->field_0x20 = *(uint *)&param_1->field_0x10e0;
          *(uint *)&param_1->field_0x24 = *(uint *)&param_1->field_0x10e4;
          *(uint *)&param_1->field_0x28 = *(uint *)&param_1->field_0x10e8;
          if (&param_1->field_0x30 != &param_1->field_0x10ec) {
            *(uint *)&param_1->field_0x30 = *(uint *)&param_1->field_0x10ec;
            *(uint *)&param_1->field_0x34 = *(uint *)&param_1->field_0x10f0;
            *(uint *)&param_1->field_0x38 = *(uint *)&param_1->field_0x10f4;
          }
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)param_1);
          if ((float)_DAT_005cbf32 <
              SQRT(*(float *)&param_1->field_0x1128 * *(float *)&param_1->field_0x1128 +
                   *(float *)&param_1->field_0x1120 * *(float *)&param_1->field_0x1120 +
                   *(float *)&param_1->field_0x1124 * *(float *)&param_1->field_0x1124)) {
            iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                              (0x01C38BC0,"disableBodyPartDamage");
            if (iVar3 == 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_60);
              uStack_5c = core_actor_cpp_FUN_0040cf60(0x41200000,0x41700000);
              pCStack_2c = param_1;
              pCStack_28 = param_1;
              auStack_20[2] = uStack_5c;
              core_setcolid_cpp_FUN_00537f30
                        (g_CDemonSetPtr,&uStack_24,&param_1->field_0x20,aSStack_60);
              core_bodypart_cpp_FUN_004164b0(param_1,param_2);
              return;
            }
          }
        }
        else {
          *(uint *)&param_1->field_0x1334 = 0;
          *(uint *)&param_1->field_0x10d0 = 0;
        }
      }
    }
    core_bodypart_cpp_FUN_004164b0(param_1,param_2);
  }
  return;
}
