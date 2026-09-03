// Name: core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_004cb010
// Address: 004cb010
// Address Range: [[004cb010, 004cb2c4]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateGem_FUN_004cb010(CMansionPuzzleCircle *this_ptr,int gem_index,float delta_time)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateGem_FUN_004cb010(CMansionPuzzleCircle *this_ptr,int gem_index,float delta_time)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  SPanel *pSVar10;
  SGem *pSVar11;
  CVector3f local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_28 = delta_time * 255.0f;
  local_14 = local_28 / 2.0f;
  pSVar11 = this_ptr->gems + gem_index;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (&this_ptr->base,&local_3c,&pSVar11->position);
  uVar6 = core_manpuz_cpp_updateGemHumChannel_FUN_004caef0
                    (&(pSVar11->hum_color).r,(pSVar11->light).r,local_14,pSVar11->sfx_handles,
                     "manpuz-chargegemloop-red.wav",&local_3c);
  uVar7 = core_manpuz_cpp_updateGemHumChannel_FUN_004caef0
                    (&(pSVar11->hum_color).g,(pSVar11->light).g,local_14,pSVar11->sfx_handles + 1,
                     "manpuz-chargegemloop-green.wav",&local_3c);
  uVar8 = core_manpuz_cpp_updateGemHumChannel_FUN_004caef0
                    (&(pSVar11->hum_color).b,(pSVar11->light).b,local_14,pSVar11->sfx_handles + 2,
                     "manpuz-chargegemloop-blue.wav",&local_3c);
  (pSVar11->light).b = 0.0;
  (pSVar11->light).g = (pSVar11->light).b;
  (pSVar11->light).r = (pSVar11->light).g;
  core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_004cae20
            (this_ptr,gem_index,&local_30,&local_2c,&local_24);
  local_14 = local_28 / 2.0f;
  local_20 = local_30 - (pSVar11->color).r;
  bVar4 = 1;
  if (local_20 < -local_14) {
    fVar1 = (pSVar11->color).r - local_14;
LAB_004cb140:
    (pSVar11->color).r = fVar1;
    bVar4 = 0;
  }
  else {
    if (local_14 < local_20) {
      fVar1 = (pSVar11->color).r + local_14;
      goto LAB_004cb140;
    }
    (pSVar11->color).r = local_30;
  }
  pfVar5 = &(pSVar11->color).g;
  local_18 = local_2c - *pfVar5;
  if (-local_14 <= local_18) {
    if (local_14 < local_18) {
      fVar1 = *pfVar5 + local_14;
      goto LAB_004cb16e;
    }
    *pfVar5 = local_2c;
    bVar3 = 1;
  }
  else {
    fVar1 = *pfVar5 - local_14;
LAB_004cb16e:
    *pfVar5 = fVar1;
    bVar3 = 0;
  }
  pfVar5 = &(pSVar11->color).b;
  local_1c = local_24 - *pfVar5;
  if (-local_14 <= local_1c) {
    if (local_1c <= local_14) {
      *pfVar5 = local_24;
      bVar2 = 1;
      goto LAB_004cb1a0;
    }
    fVar1 = *pfVar5 + local_14;
  }
  else {
    fVar1 = *pfVar5 - local_14;
  }
  *pfVar5 = fVar1;
  bVar2 = 0;
LAB_004cb1a0:
  if ((((((bool)(bVar4 & bVar3 & bVar2)) && ((uVar6 & 1 & uVar7 & uVar8) != 0)) &&
       (pSVar10 = this_ptr->panels + gem_index, pSVar10->exists != 0)) &&
      ((ABS(pSVar10->anim_speed) == 0.0 && (ABS(pSVar10->anim_progress) == 0.0)))) &&
     (((float)(pSVar10->color).r == (pSVar11->hum_color).r &&
      (((float)(pSVar10->color).g == (pSVar11->hum_color).g &&
       ((float)(pSVar10->color).b == (pSVar11->hum_color).b)))))) {
    iVar9 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0(this_ptr,gem_index);
    iVar9 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40(this_ptr,iVar9);
    if (iVar9 == 0) {
      core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0(this_ptr,gem_index);
      return;
    }
    iVar9 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0(this_ptr,gem_index);
    iVar9 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40(this_ptr,iVar9);
    if (iVar9 == 0) {
      core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004cb740(this_ptr,gem_index);
      return;
    }
  }
  return;
}
