// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a610
// Address: 0050a610
// Address Range: [[0050a610, 0050a8c4]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a610(CMansionPuzzleCircle * this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a610(CMansionPuzzleCircle *this_ptr)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
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
  
  local_28 = in_stack_0000000c * 255.0f;
  local_14 = local_28 / 2.0f;
  pcVar10 = this_ptr->field10_0x648 + in_stack_00000008 * 0xb8 + 0x458;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base_actor,&local_3c,(CVector3f *)(pcVar10 + 0x24));
  uVar5 = core_manpuz_cpp_FUN_0050a4f0(pcVar10 + 0xc);
  uVar6 = core_manpuz_cpp_FUN_0050a4f0(pcVar10 + 0x10);
  uVar7 = core_manpuz_cpp_FUN_0050a4f0(pcVar10 + 0x14);
  *(float *)(pcVar10 + 0x20) = 0.0;
  *(float *)(pcVar10 + 0x1c) = *(float *)(pcVar10 + 0x20);
  *(float *)(pcVar10 + 0x18) = *(float *)(pcVar10 + 0x1c);
  core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a420(this_ptr);
  local_14 = local_28 / 2.0f;
  local_20 = local_30 - *(float *)pcVar10;
  bVar4 = 1;
  if (local_20 < -local_14) {
    fVar1 = *(float *)pcVar10 - local_14;
LAB_0050a740:
    *(float *)pcVar10 = fVar1;
    bVar4 = 0;
  }
  else {
    if (local_14 < local_20) {
      fVar1 = *(float *)pcVar10 + local_14;
      goto LAB_0050a740;
    }
    *(float *)pcVar10 = local_30;
  }
  pcVar9 = pcVar10 + 4;
  local_18 = local_2c - *(float *)pcVar9;
  if (-local_14 <= local_18) {
    if (local_14 < local_18) {
      fVar1 = *(float *)pcVar9 + local_14;
      goto LAB_0050a76e;
    }
    *(float *)pcVar9 = local_2c;
    bVar3 = 1;
  }
  else {
    fVar1 = *(float *)pcVar9 - local_14;
LAB_0050a76e:
    *(float *)pcVar9 = fVar1;
    bVar3 = 0;
  }
  pcVar9 = pcVar10 + 8;
  local_1c = local_24 - *(float *)pcVar9;
  if (-local_14 <= local_1c) {
    if (local_1c <= local_14) {
      *(float *)pcVar9 = local_24;
      bVar2 = 1;
      goto LAB_0050a7a0;
    }
    fVar1 = *(float *)pcVar9 + local_14;
  }
  else {
    fVar1 = *(float *)pcVar9 - local_14;
  }
  *(float *)pcVar9 = fVar1;
  bVar2 = 0;
LAB_0050a7a0:
  if ((((((bool)(bVar4 & bVar3 & bVar2)) && ((uVar5 & 1 & uVar6 & uVar7) != 0)) &&
       (pcVar9 = this_ptr->field6_0x5f4 + in_stack_00000008 * 100 + -4, *(int *)pcVar9 != 0)) &&
      (((*(uint *)(pcVar9 + 8) & 0x7fffffff) == 0 && ((*(uint *)(pcVar9 + 4) & 0x7fffffff) == 0))))
     && (((float)*(int *)(pcVar9 + 0x4c) == *(float *)(pcVar10 + 0xc) &&
         (((float)*(int *)(pcVar9 + 0x50) == *(float *)(pcVar10 + 0x10) &&
          ((float)*(int *)(pcVar9 + 0x54) == *(float *)(pcVar10 + 0x14))))))) {
    core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050aef0(this_ptr);
    iVar8 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040(this_ptr);
    if (iVar8 == 0) {
      core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0(this_ptr);
      return;
    }
    core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050aee0(this_ptr);
    iVar8 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040(this_ptr);
    if (iVar8 == 0) {
      core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40(this_ptr);
      return;
    }
  }
  return;
}
