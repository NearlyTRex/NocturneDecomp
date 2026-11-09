// Name: core_manpuz.cpp_FUN_004e6c40
// Address: 004e6c40
// Address Range: [[004e6c40, 004e6f1c]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_FUN_004e6c40(CMansionPuzzleCircle *this_ptr,int gem_index,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_FUN_004e6c40(CMansionPuzzleCircle *this_ptr,int gem_index,float delta_time)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  byte bVar9;
  int in_stack_00000018;
  int in_stack_00000028;
  uint auStackY_1030 [1012];
  float *pfVar10;
  char *pcVar11;
  byte *puVar12;
  float in_stack_ffffffd0;
  float fVar13;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar9 = 0;
  fVar13 = delta_time * _DAT_005dc5e9;
  fStack_14 = fVar13 / _DAT_005f98c4;
  pfVar8 = (float *)(&this_ptr->field_0xbfc + gem_index * 0xb8);
  core_actor_cpp_FUN_00408d70(this_ptr,pfVar8 + 9);
  puVar12 = &stack0xffffffc4;
  pcVar11 = "p?manpuz-chargegemloop-red.wav" + 2;
  pfVar10 = pfVar8 + 0x2b;
  *(uint *)(&stack0xffffffc8 + (uint)bVar9 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar9 * -8);
  *(uint *)(&stack0xffffffcc + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  uVar3 = core_manpuz_cpp_updateGemHumChannel_FUN_004e6b20
                    (pfVar8 + 3,pfVar8[6],fStack_14,pfVar10,pcVar11,puVar12);
  uVar4 = core_manpuz_cpp_updateGemHumChannel_FUN_004e6b20
                    (pfVar8 + 4,pfVar8[7],fStack_14,pfVar8 + 0x2c,
                     "manpuz-chargegemloop-green.wav",&stack0xffffffc4);
  uVar5 = core_manpuz_cpp_updateGemHumChannel_FUN_004e6b20
                    (pfVar8 + 5,pfVar8[8],fStack_14,pfVar8 + 0x2d,
                     "manpuz-chargegemloop-blue.wav",&stack0xffffffc4);
  pfVar8[8] = 0.0;
  pfVar8[7] = pfVar8[8];
  pfVar8[6] = pfVar8[7];
  core_manpuz_cpp_FUN_004e6a50(this_ptr,gem_index,&fStack_24,&stack0xffffffd0,&fStack_28);
  fStack_14 = fVar13 / _DAT_005f98c8;
  fStack_1c = fStack_24 - *pfVar8;
  bVar9 = 1;
  if (fStack_1c < -fStack_14) {
    fVar13 = *pfVar8 - fStack_14;
LAB_004e6d84:
    *pfVar8 = fVar13;
    bVar9 = 0;
  }
  else {
    if (fStack_14 < fStack_1c) {
      fVar13 = *pfVar8 + fStack_14;
      goto LAB_004e6d84;
    }
    *pfVar8 = fStack_24;
  }
  pfVar10 = pfVar8 + 1;
  fStack_18 = in_stack_ffffffd0 - *pfVar10;
  if (-fStack_14 <= fStack_18) {
    if (fStack_14 < fStack_18) {
      fVar13 = *pfVar10 + fStack_14;
      goto LAB_004e6db2;
    }
    *pfVar10 = in_stack_ffffffd0;
    bVar2 = 1;
  }
  else {
    fVar13 = *pfVar10 - fStack_14;
LAB_004e6db2:
    *pfVar10 = fVar13;
    bVar2 = 0;
  }
  pfVar10 = pfVar8 + 2;
  fStack_20 = fStack_28 - *pfVar10;
  if (-fStack_14 <= fStack_20) {
    if (fStack_20 <= fStack_14) {
      *pfVar10 = fStack_28;
      bVar1 = 1;
      goto LAB_004e6de4;
    }
    fVar13 = *pfVar10 + fStack_14;
  }
  else {
    fVar13 = *pfVar10 - fStack_14;
  }
  *pfVar10 = fVar13;
  bVar1 = 0;
LAB_004e6de4:
  if ((((((bool)(bVar9 & bVar2 & bVar1)) && ((uVar3 & 1 & uVar4 & uVar5) != 0)) &&
       (piVar7 = (int *)(&this_ptr->field_0x74c + gem_index * 100), *piVar7 != 0)) &&
      (((piVar7[2] & 0x7fffffffU) == 0 && ((piVar7[1] & 0x7fffffffU) == 0)))) &&
     (((float)piVar7[0x13] == pfVar8[3] &&
      (((float)piVar7[0x14] == pfVar8[4] && ((float)piVar7[0x15] == pfVar8[5])))))) {
    iVar6 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570(this_ptr,gem_index);
    iVar6 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004e76f0(this_ptr,iVar6);
    if (iVar6 == 0) {
      core_manpuz_cpp_FUN_004e7220(this_ptr,in_stack_00000018);
      return;
    }
    iVar6 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560
                      (this_ptr,in_stack_00000018);
    iVar6 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004e76f0(this_ptr,iVar6);
    if (iVar6 == 0) {
      core_manpuz_cpp_FUN_004e73c0(this_ptr,in_stack_00000028);
      return;
    }
  }
  return;
}
