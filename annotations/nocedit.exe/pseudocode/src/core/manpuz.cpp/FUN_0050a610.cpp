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
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  float *pfVar11;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  CVector3f local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_28 = in_stack_0000000c * 255f;
  local_14 = local_28 / _DAT_00660d94;
  pfVar11 = (float *)((int)&in_stack_00000004[7].previous_transform_state +
                     in_stack_00000008 * 0xb8 + 0x10);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,&local_3c,(CVector3f *)(pfVar11 + 9));
  uVar6 = core_manpuz_cpp_FUN_0050a4f0();
  uVar7 = core_manpuz_cpp_FUN_0050a4f0();
  uVar8 = core_manpuz_cpp_FUN_0050a4f0();
  pfVar11[8] = 0.0;
  pfVar11[7] = pfVar11[8];
  pfVar11[6] = pfVar11[7];
  core_manpuz_cpp_FUN_0050a420();
  local_14 = local_28 / _DAT_00660d98;
  local_20 = local_30 - *pfVar11;
  bVar5 = 1;
  if (local_20 < -local_14) {
    fVar2 = *pfVar11 - local_14;
LAB_0050a740:
    *pfVar11 = fVar2;
    bVar5 = 0;
  }
  else {
    if (local_14 < local_20) {
      fVar2 = *pfVar11 + local_14;
      goto LAB_0050a740;
    }
    *pfVar11 = local_30;
  }
  pfVar1 = pfVar11 + 1;
  local_18 = local_2c - *pfVar1;
  if (-local_14 <= local_18) {
    if (local_14 < local_18) {
      fVar2 = *pfVar1 + local_14;
      goto LAB_0050a76e;
    }
    *pfVar1 = local_2c;
    bVar4 = 1;
  }
  else {
    fVar2 = *pfVar1 - local_14;
LAB_0050a76e:
    *pfVar1 = fVar2;
    bVar4 = 0;
  }
  pfVar1 = pfVar11 + 2;
  local_1c = local_24 - *pfVar1;
  if (-local_14 <= local_1c) {
    if (local_1c <= local_14) {
      *pfVar1 = local_24;
      bVar3 = 1;
      goto LAB_0050a7a0;
    }
    fVar2 = *pfVar1 + local_14;
  }
  else {
    fVar2 = *pfVar1 - local_14;
  }
  *pfVar1 = fVar2;
  bVar3 = 0;
LAB_0050a7a0:
  if (((bool)(bVar5 & bVar4 & bVar3)) && ((uVar6 & 1 & uVar7 & uVar8) != 0)) {
    pcVar10 = in_stack_00000004[4].create_event + in_stack_00000008 * 100 + 0x18;
    if (((*(int *)pcVar10 != 0) &&
        ((((*(uint *)(pcVar10 + 8) & 0x7fffffff) == 0 &&
          ((*(uint *)(pcVar10 + 4) & 0x7fffffff) == 0)) &&
         ((float)*(int *)(pcVar10 + 0x4c) == pfVar11[3])))) &&
       ((float)*(int *)(pcVar10 + 0x50) == pfVar11[4])) {
      if ((float)*(int *)(pcVar10 + 0x54) == pfVar11[5]) {
        core_manpuz_cpp_FUN_0050aef0();
        iVar9 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040();
        if (iVar9 == 0) {
          core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0();
          return;
        }
        core_manpuz_cpp_FUN_0050aee0();
        iVar9 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040();
        if (iVar9 == 0) {
          core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40();
          return;
        }
      }
    }
  }
  return;
}
