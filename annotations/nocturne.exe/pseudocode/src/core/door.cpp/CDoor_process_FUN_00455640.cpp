// Name: core_door.cpp_CDoor_process_FUN_00455640
// Address: 00455640
// Address Range: [[00455640, 00455d40]]
// Convention: unknown
// Signature: void core_door_cpp_CDoor_process_FUN_00455640(int param_1,float param_2)

#include "nocturne.h"

void core_door_cpp_CDoor_process_FUN_00455640(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  byte auStack_d0 [20];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  byte auStack_90 [12];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  int iStack_54;
  float local_50;
  int iStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  local_78 = *(uint *)(param_1 + 0x20);
  local_74 = *(uint *)(param_1 + 0x24);
  local_70 = *(uint *)(param_1 + 0x28);
  local_50 = *(float *)(param_1 + 0x9a4);
  if (1 < *(int *)(param_1 + 0x9c0)) {
    return;
  }
  switch(*(uint *)(param_1 + 0x2d8)) {
  case 0:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x2e0);
    if (iVar4 != 0) {
      *(uint *)(param_1 + 0x2d8) = 1;
      if (*(char *)(param_1 + 0x85c) != '\0') {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x85c);
      }
      core_setcolid_cpp_FUN_00511aa0(0x01E57284,param_1);
    }
    *(uint *)(param_1 + 0x9a4) = 0;
    break;
  case 1:
    *(float *)(param_1 + 0x9a4) =
         (param_2 * *(float *)(param_1 + 0x9a8)) / *(float *)(param_1 + 0x9ac) + local_50;
    if (*(float *)(param_1 + 0x9a8) <= 0.0) {
      if (*(float *)(param_1 + 0x9a4) < *(float *)(param_1 + 0x9a8)) {
        *(uint *)(param_1 + 0x2d8) = 2;
        *(uint *)(param_1 + 0x9a4) = *(uint *)(param_1 + 0x9a8);
        if (*(int *)(param_1 + 0x9c0) != 0) {
          *(uint *)(param_1 + 0x9c0) = 2;
        }
      }
    }
    else if (*(float *)(param_1 + 0x9a8) < *(float *)(param_1 + 0x9a4)) {
      *(uint *)(param_1 + 0x2d8) = 2;
      *(uint *)(param_1 + 0x9a4) = *(uint *)(param_1 + 0x9a8);
      if (*(int *)(param_1 + 0x9c0) != 0) {
        *(uint *)(param_1 + 0x9c0) = 2;
      }
    }
    break;
  case 2:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x344);
    if ((iVar4 != 0) && (*(uint *)(param_1 + 0x2d8) = 3, *(char *)(param_1 + 0x8c0) != '\0'))
    {
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x8c0);
    }
    *(uint *)(param_1 + 0x9a4) = *(uint *)(param_1 + 0x9a8);
    break;
  case 3:
    *(float *)(param_1 + 0x9a4) =
         local_50 - (param_2 * *(float *)(param_1 + 0x9a8)) / *(float *)(param_1 + 0x9b0);
    if (*(float *)(param_1 + 0x9a8) <= 0.0) {
      if (0.0 < *(float *)(param_1 + 0x9a4)) {
        *(uint *)(param_1 + 0x2d8) = 0;
        *(uint *)(param_1 + 0x9a4) = 0;
        if (*(int *)(param_1 + 0x9c0) != 0) {
          *(uint *)(param_1 + 0x9c0) = 2;
        }
        core_setcolid_cpp_FUN_00511a10(0x01E57284,param_1);
      }
    }
    else if (*(float *)(param_1 + 0x9a4) < 0.0) {
      *(uint *)(param_1 + 0x2d8) = 0;
      *(uint *)(param_1 + 0x9a4) = 0;
      if (*(int *)(param_1 + 0x9c0) != 0) {
        *(uint *)(param_1 + 0x9c0) = 2;
      }
      core_setcolid_cpp_FUN_00511a10(0x01E57284,param_1);
    }
  }
  if (*(int *)(param_1 + 0x2d8) == 0) {
    if (*(char *)(param_1 + 0x40c) == '\0') goto LAB_00455728;
    iVar4 = param_1 + 0x40c;
  }
  else {
    if ((*(int *)(param_1 + 0x2d8) != 2) || (*(char *)(param_1 + 0x3a8) == '\0')) goto LAB_00455728;
    iVar4 = param_1 + 0x3a8;
  }
  core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,iVar4);
LAB_00455728:
  core_door_cpp_CDoor_reposition_FUN_004552a0(param_1);
  if ((*(float *)(param_1 + 0x9a4) != local_50) && (*(int *)(param_1 + 0x2d0) != 3)) {
    iVar4 = 0;
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&local_a8);
    iStack_54 = 0;
    iStack_4c = param_1 + 0x3c;
    iStack_18 = 0;
    while( true ) {
      if (*(int *)(0x01E57284 + 0x14ecb0) <= iStack_18) break;
      iVar1 = *(int *)(iVar4 + 0x14ecb4 + 0x01E57284);
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(auStack_d0);
      iVar2 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x34))(iVar1,auStack_d0);
      if (((iVar2 == 2) &&
          (fStack_bc + *(float *)(iVar1 + 0x24) <= *(float *)(param_1 + 0x24) + fStack_98)) &&
         (*(float *)(param_1 + 0x24) + fStack_a4 <= fStack_b8 + *(float *)(iVar1 + 0x24))) {
        fStack_84 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_80 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_7c = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
        pfVar3 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                                    (iStack_4c,auStack_90,&fStack_84);
        if (&fStack_6c != pfVar3) {
          fStack_6c = *pfVar3;
          fStack_68 = pfVar3[1];
          fStack_64 = pfVar3[2];
        }
        fStack_48 = fStack_6c + fStack_b4;
        if (((local_a8 <= fStack_48) && (fStack_44 = fStack_6c - fStack_b4, fStack_44 <= fStack_9c))
           && ((fStack_40 = fStack_64 + fStack_b4, fStack_a0 <= fStack_40 &&
               (fStack_3c = fStack_64 - fStack_b4, fStack_3c <= fStack_94)))) {
          if (((local_a8 <= fStack_44) && (fStack_48 <= fStack_9c)) &&
             ((fStack_a0 <= fStack_3c && (fStack_40 <= fStack_94)))) goto LAB_00455b1d;
          fStack_14 = fStack_b4 * fStack_b4;
          fStack_30 = SQRT(fStack_14 - (fStack_9c - fStack_6c) * (fStack_9c - fStack_6c));
          fStack_34 = fStack_64 + fStack_30;
          fStack_30 = fStack_64 - fStack_30;
          if (((fStack_a0 <= fStack_34) && (fStack_34 <= fStack_94)) ||
             ((fStack_a0 <= fStack_30 && (fStack_30 <= fStack_94)))) goto LAB_00455b1d;
          fStack_1c = SQRT(fStack_14 - (local_a8 - fStack_6c) * (local_a8 - fStack_6c));
          fStack_24 = fStack_64 + fStack_1c;
          fStack_1c = fStack_64 - fStack_1c;
          if (((fStack_a0 <= fStack_24) && (fStack_24 <= fStack_94)) ||
             ((fStack_a0 <= fStack_1c && (fStack_1c <= fStack_94)))) goto LAB_00455b1d;
          fStack_20 = SQRT(fStack_14 - (fStack_94 - fStack_64) * (fStack_94 - fStack_64));
          fStack_28 = fStack_6c + fStack_20;
          fStack_20 = fStack_6c - fStack_20;
          if (((local_a8 <= fStack_28) && (fStack_28 <= fStack_9c)) ||
             ((local_a8 <= fStack_20 && (fStack_20 <= fStack_9c)))) goto LAB_00455b1d;
          fStack_38 = SQRT(fStack_14 - (fStack_a0 - fStack_64) * (fStack_a0 - fStack_64));
          fStack_2c = fStack_6c + fStack_38;
          fStack_38 = fStack_6c - fStack_38;
          if (((local_a8 <= fStack_2c) && (fStack_2c <= fStack_9c)) ||
             ((local_a8 <= fStack_38 && (fStack_38 <= fStack_9c)))) goto LAB_00455b1d;
        }
      }
      iStack_18 = iStack_18 + 1;
      iVar4 = iVar4 + 4;
    }
    if (iStack_54 != 0) {
LAB_00455b1d:
      *(uint *)(param_1 + 0x20) = local_78;
      *(uint *)(param_1 + 0x24) = local_74;
      *(uint *)(param_1 + 0x28) = local_70;
      *(float *)(param_1 + 0x9a4) = local_50;
      core_door_cpp_CDoor_reposition_FUN_004552a0(param_1);
      return;
    }
  }
  return;
}
