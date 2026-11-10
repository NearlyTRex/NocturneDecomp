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
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  SPanel *pSVar10;
  SGem *pSVar11;
  float unaff_EBP;
  byte bVar12;
  int in_stack_0000001c;
  int in_stack_0000002c;
  int in_stack_0000003c;
  uint auStackY_1030 [1012];
  uint *puVar13;
  char *pcVar14;
  byte *puVar15;
  uint uStack_40;
  float in_stack_ffffffe4;
  float in_stack_ffffffe8;
  
  bVar12 = 0;
  fVar4 = (delta_time * _DAT_005e7539) / _DAT_00603444;
  pSVar11 = this_ptr->gems + gem_index;
  core_actor_cpp_FUN_00408b40(this_ptr,&pSVar11->position);
  puVar15 = &stack0xffffffc4;
  pcVar14 = "manpuz-chargegemloop-red.wav";
  puVar13 = pSVar11->sfx_handles;
  *(uint *)(&stack0xffffffc8 + (uint)bVar12 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar12 * -8);
  *(uint *)(&stack0xffffffcc + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
  uVar6 = core_manpuz_cpp_updateGemHumChannel_FUN_005057c0
                    (&pSVar11->hum_color,(pSVar11->light).r,fVar4,puVar13,pcVar14,puVar15);
  uVar7 = core_manpuz_cpp_updateGemHumChannel_FUN_005057c0
                    (&(pSVar11->hum_color).g,(pSVar11->light).g,fVar4,pSVar11->sfx_handles + 1,
                     "manpuz-chargegemloop-green.wav",&stack0xffffffc4);
  uVar8 = core_manpuz_cpp_updateGemHumChannel_FUN_005057c0
                    (&(pSVar11->hum_color).b,(pSVar11->light).b,fVar4,pSVar11->sfx_handles + 2,
                     "manpuz-chargegemloop-blue.wav",&stack0xffffffc4);
  (pSVar11->light).b = 0.0;
  (pSVar11->light).g = (pSVar11->light).b;
  (pSVar11->light).r = (pSVar11->light).g;
  core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0
            (this_ptr,gem_index,(float *)&stack0xffffffdc,(float *)&stack0xffffffd0,
             (float *)&stack0xffffffd8);
  in_stack_ffffffe8 = in_stack_ffffffe8 / _DAT_00603448;
  fVar1 = unaff_EBP - (pSVar11->color).r;
  bVar12 = 1;
  if (fVar1 < -in_stack_ffffffe8) {
    fVar1 = (pSVar11->color).r - in_stack_ffffffe8;
LAB_00505a24:
    (pSVar11->color).r = fVar1;
    bVar12 = 0;
  }
  else {
    if (in_stack_ffffffe8 < fVar1) {
      fVar1 = (pSVar11->color).r + in_stack_ffffffe8;
      goto LAB_00505a24;
    }
    (pSVar11->color).r = unaff_EBP;
  }
  pfVar5 = &(pSVar11->color).g;
  if (-in_stack_ffffffe8 <= in_stack_ffffffe4 - *pfVar5) {
    if (in_stack_ffffffe8 < in_stack_ffffffe4 - *pfVar5) {
      fVar1 = *pfVar5 + in_stack_ffffffe8;
      goto LAB_00505a52;
    }
    *pfVar5 = in_stack_ffffffe4;
    bVar3 = 1;
  }
  else {
    fVar1 = *pfVar5 - in_stack_ffffffe8;
LAB_00505a52:
    *pfVar5 = fVar1;
    bVar3 = 0;
  }
  pfVar5 = &(pSVar11->color).b;
  if (-in_stack_ffffffe8 <= fVar4 - *pfVar5) {
    if (fVar4 - *pfVar5 <= in_stack_ffffffe8) {
      *pfVar5 = fVar4;
      bVar2 = 1;
      goto LAB_00505a84;
    }
    in_stack_ffffffe8 = *pfVar5 + in_stack_ffffffe8;
  }
  else {
    in_stack_ffffffe8 = *pfVar5 - in_stack_ffffffe8;
  }
  *pfVar5 = in_stack_ffffffe8;
  bVar2 = 0;
LAB_00505a84:
  if ((((((bool)(bVar12 & bVar3 & bVar2)) && ((uVar6 & 1 & uVar7 & uVar8) != 0)) &&
       (pSVar10 = this_ptr->panels + in_stack_0000001c, pSVar10->exists != 0)) &&
      ((ABS(pSVar10->anim_speed) == 0.0 && (ABS(pSVar10->anim_progress) == 0.0)))) &&
     (((float)(pSVar10->color).r == (pSVar11->hum_color).r &&
      (((float)(pSVar10->color).g == (pSVar11->hum_color).g &&
       ((float)(pSVar10->color).b == (pSVar11->hum_color).b)))))) {
    uStack_40 = 0x505b60;
    iVar9 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210
                      (this_ptr,in_stack_0000001c);
    iVar9 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_00506390(this_ptr,iVar9);
    if (iVar9 == 0) {
      core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_00505ec0(this_ptr,in_stack_0000002c);
      return;
    }
    iVar9 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_00506200
                      (this_ptr,in_stack_0000002c);
    iVar9 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_00506390(this_ptr,iVar9);
    if (iVar9 == 0) {
      core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_00506060(this_ptr,in_stack_0000003c);
      return;
    }
  }
  return;
}
