// Name: core_manpuz.cpp_FUN_0050a610
// Address: 0050a610
// Address Range: [[0050a610, 0050a8c4]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050a610()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_manpuz.cpp_FUN_0050a610(uint param_1, uint
   param_2, uint param_3) */

void core_manpuz_cpp_FUN_0050a610(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  float *pfVar12;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  CVector3f local_3c;
  CDemonActor *local_30;
  CDemonActor *local_2c;
  CDemonActor *local_28;
  CDemonActor *local_24;
  CDemonActor *local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_28 = (CDemonActor *)(in_stack_0000000c * 255f);
  local_14 = (float)local_28 / _DAT_00660d94;
  pfVar12 = (float *)((int)&in_stack_00000004[7].previous_transform_state +
                     (int)in_stack_00000008 * 0xb8 + 0x10);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,&local_3c,(CVector3f *)(pfVar12 + 9));
  local_3c.x = (float)&local_3c.y;
  uVar7 = core_manpuz_cpp_FUN_0050a4f0();
  local_3c.y = (float)&local_3c.z;
  local_3c.x = (float)"manpuz-chargegemloop-green.wav";
  uVar8 = core_manpuz_cpp_FUN_0050a4f0();
  local_3c.z = (float)&local_30;
  local_3c.y = (float)"manpuz-chargegemloop-blue.wav";
  local_3c.x = (float)(pfVar12 + 0x2d);
  uVar9 = core_manpuz_cpp_FUN_0050a4f0();
  local_30 = (CDemonActor *)&local_14;
  local_3c.z = (float)&local_1c;
  pfVar12[8] = 0.0;
  local_3c.y = (float)&local_20;
  pfVar12[7] = pfVar12[8];
  local_3c.x = in_stack_00000008;
  pfVar12[6] = pfVar12[7];
  core_manpuz_cpp_FUN_0050a420();
  fVar3 = local_14 / _DAT_00660d98;
  bVar6 = 1;
  if (local_1c - *pfVar12 < -fVar3) {
    fVar2 = *pfVar12 - fVar3;
LAB_0050a740:
    *pfVar12 = fVar2;
    bVar6 = 0;
  }
  else {
    if (fVar3 < local_1c - *pfVar12) {
      fVar2 = *pfVar12 + fVar3;
      goto LAB_0050a740;
    }
    *pfVar12 = local_1c;
  }
  pfVar1 = pfVar12 + 1;
  if (-fVar3 <= local_18 - *pfVar1) {
    if (fVar3 < local_18 - *pfVar1) {
      fVar2 = *pfVar1 + fVar3;
      goto LAB_0050a76e;
    }
    *pfVar1 = local_18;
    bVar5 = 1;
  }
  else {
    fVar2 = *pfVar1 - fVar3;
LAB_0050a76e:
    *pfVar1 = fVar2;
    bVar5 = 0;
  }
  pfVar1 = pfVar12 + 2;
  if (-fVar3 <= unaff_EBP - *pfVar1) {
    if (unaff_EBP - *pfVar1 <= fVar3) {
      *pfVar1 = unaff_EBP;
      bVar4 = 1;
      goto LAB_0050a7a0;
    }
    fVar3 = *pfVar1 + fVar3;
  }
  else {
    fVar3 = *pfVar1 - fVar3;
  }
  *pfVar1 = fVar3;
  bVar4 = 0;
LAB_0050a7a0:
  if (((bool)(bVar6 & bVar5 & bVar4)) && ((uVar7 & 1 & uVar8 & uVar9) != 0)) {
    pcVar11 = in_stack_00000004[4].create_event + (int)in_stack_00000008 * 100 + 0x18;
    if (((*(int *)pcVar11 != 0) &&
        ((((*(uint *)(pcVar11 + 8) & 0x7fffffff) == 0 &&
          ((*(uint *)(pcVar11 + 4) & 0x7fffffff) == 0)) &&
         ((float)*(int *)(pcVar11 + 0x4c) == pfVar12[3])))) &&
       ((float)*(int *)(pcVar11 + 0x50) == pfVar12[4])) {
      if ((float)*(int *)(pcVar11 + 0x54) == pfVar12[5]) {
        local_2c = (CDemonActor *)in_stack_00000008;
        local_30 = in_stack_00000004;
        local_3c.z = 7.407269e-39;
        local_28 = (CDemonActor *)core_manpuz_cpp_FUN_0050aef0();
        local_2c = in_stack_00000004;
        local_30 = (CDemonActor *)0x50a87e;
        iVar10 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040();
        if (iVar10 == 0) {
          local_24 = (CDemonActor *)in_stack_00000008;
          local_28 = in_stack_00000004;
          local_2c = (CDemonActor *)0x50a8ba;
          core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0();
          return;
        }
        local_24 = (CDemonActor *)in_stack_00000008;
        local_28 = in_stack_00000004;
        local_2c = (CDemonActor *)0x50a88c;
        local_20 = (CDemonActor *)core_manpuz_cpp_FUN_0050aee0();
        local_24 = in_stack_00000004;
        local_28 = (CDemonActor *)0x50a896;
        iVar10 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040();
        if (iVar10 == 0) {
          local_1c = in_stack_00000008;
          local_20 = in_stack_00000004;
          local_24 = (CDemonActor *)0x50a8a8;
          core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40();
          return;
        }
      }
    }
  }
  return;
}
