// Name: core_bodypart.cpp_CBodyPart_process_FUN_004168d0
// Address: 004168d0
// Address Range: [[004168d0, 00416af1]]
// Convention: unknown
// Signature: void core_bodypart_cpp_CBodyPart_process_FUN_004168d0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bodypart_cpp_CBodyPart_process_FUN_004168d0(int param_1,float param_2)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  byte local_54 [4];
  uint local_50;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if ((*(int *)(param_1 + 0x16c) < 3) || (*(int *)(param_1 + 0x178) < 1)) {
    *(uint *)(param_1 + 0x70) = 2;
    core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(param_1,0,0);
    puVar1 = (uint *)(param_1 + 0x160);
    if (puVar1 != (uint *)&DAT_02dd1184) {
      *puVar1 = _DAT_02dd1184;
      *(uint *)(param_1 + 0x164) = _DAT_02dd1188;
      *(uint *)(param_1 + 0x168) = _DAT_02dd118c;
    }
    if ((uint *)(param_1 + 0x154) != puVar1) {
      *(uint *)(param_1 + 0x154) = *puVar1;
      *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x164);
      *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x168);
      return;
    }
  }
  else {
    if ((*(int *)(param_1 + 0x150) != 0) && (*(int *)(param_1 + 0xf08) == 0)) {
      core_bodypart_cpp_CBodyPart_processFires_FUN_00416b00(param_1,param_2);
      return;
    }
    if ((*(int *)(param_1 + 0xf10) != 0) || (*(int *)(param_1 + 0xf08) != 0)) {
      core_bodypart_cpp_CBodyPart_spawnGore_FUN_00417eb0(param_1);
    }
    if (*(int *)(param_1 + 0xf10) == 0) {
      fVar2 = *(float *)(param_1 + 0xca4) - param_2;
      *(float *)(param_1 + 0xca4) = fVar2;
      if (0.0 <= fVar2) {
        local_18 = *(uint *)(param_1 + 0x20);
        local_14 = *(uint *)(param_1 + 0x24);
        local_10 = *(uint *)(param_1 + 0x28);
        core_box_cpp_CBox_process_FUN_0041acb0((uint *)(param_1 + 0xcb4),param_2);
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0xcb4);
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0xcb8);
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0xcbc);
        if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0xcc0)) {
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0xcc0);
          *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0xcc4);
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0xcc8);
        }
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
        if (((float)3 <
             SQRT(*(float *)(param_1 + 0xcfc) * *(float *)(param_1 + 0xcfc) +
                  *(float *)(param_1 + 0xcf4) * *(float *)(param_1 + 0xcf4) +
                  *(float *)(param_1 + 0xcf8) * *(float *)(param_1 + 0xcf8))) &&
           (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                              (0x01C03A10,"disableBodyPartDamage"), iVar3 == 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_54);
          local_50 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41200000,0x41700000);
          local_20 = param_1;
          local_1c = param_1;
          local_c = local_50;
          core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00511880
                    (0x01E57284,&local_18,param_1 + 0x20,local_54);
          core_bodypart_cpp_CBodyPart_processFires_FUN_00416b00(param_1,param_2);
          return;
        }
      }
      else {
        *(uint *)(param_1 + 0xf08) = 0;
        *(uint *)(param_1 + 0xca4) = 0;
      }
    }
    core_bodypart_cpp_CBodyPart_processFires_FUN_00416b00(param_1,param_2);
  }
  return;
}
