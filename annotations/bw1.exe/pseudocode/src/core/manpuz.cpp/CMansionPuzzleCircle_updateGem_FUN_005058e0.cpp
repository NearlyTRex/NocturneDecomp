// Name: core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_005058e0
// Address: 005058e0
// Address Range: [[005058e0, 00505bbc]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateGem_FUN_005058e0(CMansionPuzzleCircle *this_ptr,int gem_index,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateGem_FUN_005058e0(CMansionPuzzleCircle *this_ptr,int gem_index,float delta_time)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  float unaff_EBP;
  byte bVar11;
  int in_stack_0000001c;
  int in_stack_0000002c;
  int in_stack_0000003c;
  uint auStackY_1030 [1012];
  float *pfVar12;
  char *pcVar13;
  byte *puVar14;
  uint uStack_40;
  float in_stack_ffffffe4;
  float in_stack_ffffffe8;
  
  bVar11 = 0;
  fVar4 = (delta_time * _DAT_005e7539) / _DAT_00603444;
  pfVar10 = (float *)(&this_ptr->field_0xaa0 + gem_index * 0xb8);
  core_actor_cpp_FUN_00408b40(this_ptr,pfVar10 + 9);
  puVar14 = &stack0xffffffc4;
  pcVar13 = "manpuz-chargegemloop-red.wav";
  pfVar12 = pfVar10 + 0x2b;
  *(uint *)(&stack0xffffffc8 + (uint)bVar11 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar11 * -8);
  *(uint *)(&stack0xffffffcc + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
  uVar5 = core_manpuz_cpp_updateGemHumChannel_FUN_005057c0
                    (pfVar10 + 3,pfVar10[6],fVar4,pfVar12,pcVar13,puVar14);
  uVar6 = core_manpuz_cpp_updateGemHumChannel_FUN_005057c0
                    (pfVar10 + 4,pfVar10[7],fVar4,pfVar10 + 0x2c,"manpuz-chargegemloop-green.wav"
                     ,&stack0xffffffc4);
  uVar7 = core_manpuz_cpp_updateGemHumChannel_FUN_005057c0
                    (pfVar10 + 5,pfVar10[8],fVar4,pfVar10 + 0x2d,"manpuz-chargegemloop-blue.wav"
                     ,&stack0xffffffc4);
  pfVar10[8] = 0.0;
  pfVar10[7] = pfVar10[8];
  pfVar10[6] = pfVar10[7];
  core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0
            (this_ptr,gem_index,(float *)&stack0xffffffdc,(float *)&stack0xffffffd0,
             (float *)&stack0xffffffd8);
  in_stack_ffffffe8 = in_stack_ffffffe8 / _DAT_00603448;
  bVar11 = 1;
  if (unaff_EBP - *pfVar10 < -in_stack_ffffffe8) {
    fVar1 = *pfVar10 - in_stack_ffffffe8;
LAB_00505a24:
    *pfVar10 = fVar1;
    bVar11 = 0;
  }
  else {
    if (in_stack_ffffffe8 < unaff_EBP - *pfVar10) {
      fVar1 = *pfVar10 + in_stack_ffffffe8;
      goto LAB_00505a24;
    }
    *pfVar10 = unaff_EBP;
  }
  pfVar12 = pfVar10 + 1;
  if (-in_stack_ffffffe8 <= in_stack_ffffffe4 - *pfVar12) {
    if (in_stack_ffffffe8 < in_stack_ffffffe4 - *pfVar12) {
      fVar1 = *pfVar12 + in_stack_ffffffe8;
      goto LAB_00505a52;
    }
    *pfVar12 = in_stack_ffffffe4;
    bVar3 = 1;
  }
  else {
    fVar1 = *pfVar12 - in_stack_ffffffe8;
LAB_00505a52:
    *pfVar12 = fVar1;
    bVar3 = 0;
  }
  pfVar12 = pfVar10 + 2;
  if (-in_stack_ffffffe8 <= fVar4 - *pfVar12) {
    if (fVar4 - *pfVar12 <= in_stack_ffffffe8) {
      *pfVar12 = fVar4;
      bVar2 = 1;
      goto LAB_00505a84;
    }
    in_stack_ffffffe8 = *pfVar12 + in_stack_ffffffe8;
  }
  else {
    in_stack_ffffffe8 = *pfVar12 - in_stack_ffffffe8;
  }
  *pfVar12 = in_stack_ffffffe8;
  bVar2 = 0;
LAB_00505a84:
  if ((((((bool)(bVar11 & bVar3 & bVar2)) && ((uVar5 & 1 & uVar6 & uVar7) != 0)) &&
       (piVar9 = (int *)(&this_ptr->field_0x5f0 + in_stack_0000001c * 100), *piVar9 != 0)) &&
      (((piVar9[2] & 0x7fffffffU) == 0 && ((piVar9[1] & 0x7fffffffU) == 0)))) &&
     (((float)piVar9[0x13] == pfVar10[3] &&
      (((float)piVar9[0x14] == pfVar10[4] && ((float)piVar9[0x15] == pfVar10[5])))))) {
    uStack_40 = 0x505b60;
    iVar8 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210
                      (this_ptr,in_stack_0000001c);
    iVar8 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_00506390(this_ptr,iVar8);
    if (iVar8 == 0) {
      core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_00505ec0(this_ptr,in_stack_0000002c);
      return;
    }
    iVar8 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_00506200
                      (this_ptr,in_stack_0000002c);
    iVar8 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_00506390(this_ptr,iVar8);
    if (iVar8 == 0) {
      core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_00506060(this_ptr,in_stack_0000003c);
      return;
    }
  }
  return;
}
