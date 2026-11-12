// Name: core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_005058e0
// Address: 005058e0
// Address Range: [[005058e0, 00505bbc]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateGem_FUN_005058e0(CMansionPuzzleCircle *this_ptr,int gem_index,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateGem_FUN_005058e0(CMansionPuzzleCircle *this_ptr,int gem_index,float delta_time)

{
  byte bVar1;
  byte bVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  SPanel *pSVar8;
  SGem *pSVar9;
  byte bVar10;
  CMansionPuzzleCircle *in_stack_0000001c;
  CMansionPuzzleCircle *in_stack_0000002c;
  float in_stack_00000030;
  float in_stack_00000034;
  float in_stack_00000038;
  float fStack0000003c;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  int in_stack_00000050;
  int in_stack_00000064;
  int in_stack_00000074;
  int in_stack_00000084;
  uint auStack_1030 [1012];
  uint *sfx_handle;
  char *wav_filename;
  CVector3f *world_position;
  float fVar11;
  
  bVar10 = 0;
  fVar11 = (delta_time * _DAT_005e7539) / _DAT_00603444;
  pSVar9 = this_ptr->gems + gem_index;
  core_actor_cpp_FUN_00408b40(this_ptr,&pSVar9->position);
  world_position = (CVector3f *)&stack0xffffffc4;
  wav_filename = "manpuz-chargegemloop-red.wav";
  sfx_handle = pSVar9->sfx_handles;
  *(uint *)(&stack0xffffffc8 + (uint)bVar10 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar10 * -8);
  *(uint *)(&stack0xffffffcc + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
  uVar4 = core_manpuz_cpp_updateGemHumChannel_FUN_005057c0
                    (&(pSVar9->hum_color).r,(pSVar9->light).r,fVar11,sfx_handle,wav_filename,
                     world_position);
  uVar5 = core_manpuz_cpp_updateGemHumChannel_FUN_005057c0
                    (&(pSVar9->hum_color).g,(pSVar9->light).g,(float)this_ptr,
                     pSVar9->sfx_handles + 1,"manpuz-chargegemloop-green.wav",
                     (CVector3f *)&stack0xffffffdc);
  uVar6 = core_manpuz_cpp_updateGemHumChannel_FUN_005057c0
                    (&(pSVar9->hum_color).b,(pSVar9->light).b,(float)in_stack_0000001c,
                     pSVar9->sfx_handles + 2,"manpuz-chargegemloop-blue.wav",
                     (CVector3f *)&stack0xfffffff4);
  (pSVar9->light).b = 0.0;
  (pSVar9->light).g = (pSVar9->light).b;
  (pSVar9->light).r = (pSVar9->light).g;
  core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0
            (this_ptr,in_stack_00000050,(float *)&stack0x00000024,(float *)&stack0x00000018,
             (float *)&stack0x00000020);
  fStack00000048 = in_stack_00000030 / _DAT_00603448;
  fStack00000040 = in_stack_00000038 - (pSVar9->color).r;
  bVar10 = 1;
  if (fStack00000040 < -fStack00000048) {
    fVar11 = (pSVar9->color).r - fStack00000048;
LAB_00505a24:
    (pSVar9->color).r = fVar11;
    bVar10 = 0;
  }
  else {
    if (fStack00000048 < fStack00000040) {
      fVar11 = (pSVar9->color).r + fStack00000048;
      goto LAB_00505a24;
    }
    (pSVar9->color).r = in_stack_00000038;
  }
  pfVar3 = &(pSVar9->color).g;
  fStack00000044 = (float)in_stack_0000002c - *pfVar3;
  if (-fStack00000048 <= fStack00000044) {
    if (fStack00000048 < fStack00000044) {
      fVar11 = *pfVar3 + fStack00000048;
      goto LAB_00505a52;
    }
    *pfVar3 = (float)in_stack_0000002c;
    bVar2 = 1;
  }
  else {
    fVar11 = *pfVar3 - fStack00000048;
LAB_00505a52:
    *pfVar3 = fVar11;
    bVar2 = 0;
  }
  pfVar3 = &(pSVar9->color).b;
  fStack0000003c = in_stack_00000034 - *pfVar3;
  if (-fStack00000048 <= fStack0000003c) {
    if (fStack0000003c <= fStack00000048) {
      *pfVar3 = in_stack_00000034;
      bVar1 = 1;
      goto LAB_00505a84;
    }
    fVar11 = *pfVar3 + fStack00000048;
  }
  else {
    fVar11 = *pfVar3 - fStack00000048;
  }
  *pfVar3 = fVar11;
  bVar1 = 0;
LAB_00505a84:
  if ((((((bool)(bVar10 & bVar2 & bVar1)) && ((uVar4 & 1 & uVar5 & uVar6) != 0)) &&
       (pSVar8 = this_ptr->panels + in_stack_00000064, pSVar8->exists != 0)) &&
      ((ABS(pSVar8->anim_speed) == 0.0 && (ABS(pSVar8->anim_progress) == 0.0)))) &&
     (((float)(pSVar8->color).r == (pSVar9->hum_color).r &&
      (((float)(pSVar8->color).g == (pSVar9->hum_color).g &&
       ((float)(pSVar8->color).b == (pSVar9->hum_color).b)))))) {
    iVar7 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210
                      (this_ptr,in_stack_00000064);
    iVar7 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_00506390(this_ptr,iVar7);
    if (iVar7 == 0) {
      in_stack_0000001c = this_ptr;
      core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_00505ec0(this_ptr,in_stack_00000074);
      return;
    }
    in_stack_0000001c = this_ptr;
    iVar7 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_00506200
                      (this_ptr,in_stack_00000074);
    iVar7 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_00506390(this_ptr,iVar7);
    if (iVar7 == 0) {
      in_stack_0000002c = this_ptr;
      core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_00506060(this_ptr,in_stack_00000084);
      return;
    }
  }
  return;
}
