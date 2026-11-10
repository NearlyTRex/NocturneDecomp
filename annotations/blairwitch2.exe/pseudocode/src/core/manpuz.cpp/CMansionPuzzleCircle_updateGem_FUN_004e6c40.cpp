// Name: core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_004e6c40
// Address: 004e6c40
// Address Range: [[004e6c40, 004e6f1c]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateGem_FUN_004e6c40(CMansionPuzzleCircle *this_ptr,int gem_index,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateGem_FUN_004e6c40(CMansionPuzzleCircle *this_ptr,int gem_index,float delta_time)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  SPanel *pSVar9;
  SGem *pSVar10;
  float unaff_EBP;
  byte bVar11;
  int in_stack_0000001c;
  int in_stack_0000002c;
  int in_stack_0000003c;
  uint auStackY_1030 [1012];
  byte *puVar12;
  char *pcVar13;
  byte *puVar14;
  uint uStack_40;
  float in_stack_ffffffe4;
  float in_stack_ffffffe8;
  
  bVar11 = 0;
  fVar4 = (delta_time * _DAT_005dc5e9) / _DAT_005f98c4;
  pSVar10 = this_ptr->gems + gem_index;
  core_actor_cpp_FUN_00408d70(this_ptr,&pSVar10->field_0x24);
  puVar14 = &stack0xffffffc4;
  pcVar13 = "p?manpuz-chargegemloop-red.wav" + 2;
  puVar12 = &pSVar10->field_0xac;
  *(uint *)(&stack0xffffffc8 + (uint)bVar11 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar11 * -8);
  *(uint *)(&stack0xffffffcc + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
  uVar5 = core_manpuz_cpp_updateGemHumChannel_FUN_004e6b20
                    (&pSVar10->field_0xc,*(uint *)&pSVar10->field_0x18,fVar4,puVar12,pcVar13,
                     puVar14);
  uVar6 = core_manpuz_cpp_updateGemHumChannel_FUN_004e6b20
                    (&pSVar10->field_0x10,*(uint *)&pSVar10->field_0x1c,fVar4,
                     &pSVar10->field_0xb0,"manpuz-chargegemloop-green.wav",&stack0xffffffc4);
  uVar7 = core_manpuz_cpp_updateGemHumChannel_FUN_004e6b20
                    (&pSVar10->field_0x14,*(uint *)&pSVar10->field_0x20,fVar4,
                     &pSVar10->field_0xb4,"manpuz-chargegemloop-blue.wav",&stack0xffffffc4);
  *(uint *)&pSVar10->field_0x20 = 0;
  *(uint *)&pSVar10->field_0x1c = *(uint *)&pSVar10->field_0x20;
  *(uint *)&pSVar10->field_0x18 = *(uint *)&pSVar10->field_0x1c;
  core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_004e6a50
            (this_ptr,gem_index,(float *)&stack0xffffffdc,(float *)&stack0xffffffd0,
             (float *)&stack0xffffffd8);
  in_stack_ffffffe8 = in_stack_ffffffe8 / _DAT_005f98c8;
  bVar11 = 1;
  if (unaff_EBP - *(float *)pSVar10 < -in_stack_ffffffe8) {
    fVar1 = *(float *)pSVar10 - in_stack_ffffffe8;
LAB_004e6d84:
    *(float *)pSVar10 = fVar1;
    bVar11 = 0;
  }
  else {
    if (in_stack_ffffffe8 < unaff_EBP - *(float *)pSVar10) {
      fVar1 = *(float *)pSVar10 + in_stack_ffffffe8;
      goto LAB_004e6d84;
    }
    *(float *)pSVar10 = unaff_EBP;
  }
  puVar12 = &pSVar10->field_0x4;
  if (-in_stack_ffffffe8 <= in_stack_ffffffe4 - *(float *)puVar12) {
    if (in_stack_ffffffe8 < in_stack_ffffffe4 - *(float *)puVar12) {
      fVar1 = *(float *)puVar12 + in_stack_ffffffe8;
      goto LAB_004e6db2;
    }
    *(float *)puVar12 = in_stack_ffffffe4;
    bVar3 = 1;
  }
  else {
    fVar1 = *(float *)puVar12 - in_stack_ffffffe8;
LAB_004e6db2:
    *(float *)puVar12 = fVar1;
    bVar3 = 0;
  }
  puVar12 = &pSVar10->field_0x8;
  if (-in_stack_ffffffe8 <= fVar4 - *(float *)puVar12) {
    if (fVar4 - *(float *)puVar12 <= in_stack_ffffffe8) {
      *(float *)puVar12 = fVar4;
      bVar2 = 1;
      goto LAB_004e6de4;
    }
    in_stack_ffffffe8 = *(float *)puVar12 + in_stack_ffffffe8;
  }
  else {
    in_stack_ffffffe8 = *(float *)puVar12 - in_stack_ffffffe8;
  }
  *(float *)puVar12 = in_stack_ffffffe8;
  bVar2 = 0;
LAB_004e6de4:
  if ((((((bool)(bVar11 & bVar3 & bVar2)) && ((uVar5 & 1 & uVar6 & uVar7) != 0)) &&
       (pSVar9 = this_ptr->panels + in_stack_0000001c, *(int *)pSVar9 != 0)) &&
      (((*(uint *)&pSVar9->field_0x8 & 0x7fffffff) == 0 &&
       ((*(uint *)&pSVar9->field_0x4 & 0x7fffffff) == 0)))) &&
     (((float)*(int *)&pSVar9->field_0x4c == *(float *)&pSVar10->field_0xc &&
      (((float)*(int *)&pSVar9->field_0x50 == *(float *)&pSVar10->field_0x10 &&
       ((float)*(int *)&pSVar9->field_0x54 == *(float *)&pSVar10->field_0x14)))))) {
    uStack_40 = 0x4e6ec0;
    iVar8 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570
                      (this_ptr,in_stack_0000001c);
    iVar8 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004e76f0(this_ptr,iVar8);
    if (iVar8 == 0) {
      core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004e7220(this_ptr,in_stack_0000002c);
      return;
    }
    iVar8 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560
                      (this_ptr,in_stack_0000002c);
    iVar8 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004e76f0(this_ptr,iVar8);
    if (iVar8 == 0) {
      core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004e73c0(this_ptr,in_stack_0000003c);
      return;
    }
  }
  return;
}
