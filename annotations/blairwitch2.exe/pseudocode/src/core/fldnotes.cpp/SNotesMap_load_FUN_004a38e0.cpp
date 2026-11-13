// Name: core_fldnotes.cpp_SNotesMap_load_FUN_004a38e0
// Address: 004a38e0
// Address Range: [[004a38e0, 004a3a5e]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_SNotesMap_load_FUN_004a38e0(SNotesMap *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fldnotes_cpp_SNotesMap_load_FUN_004a38e0(SNotesMap *this_ptr)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  SNotesMapSet *pSVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  
  bVar9 = 0;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&this_ptr->image,this_ptr->image_name,this_ptr->width,this_ptr->height);
  pvVar1 = realloc
                     (this_ptr->saved_alpha,(this_ptr->image).width * (this_ptr->image).height);
  this_ptr->saved_alpha = pvVar1;
  if (pvVar1 == (void *)0x0) {
    _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
    _DAT_01d046a4 = 0x71e;
    core_main_c_FUN_004e4500("Out of memory!");
  }
  uVar4 = (this_ptr->image).height * (this_ptr->image).width;
  pcVar7 = (this_ptr->image).opa;
  pcVar8 = this_ptr->saved_alpha;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(uint *)pcVar8 = *(uint *)pcVar7;
    pcVar7 = pcVar7 + (uint)bVar9 * -8 + 4;
    pcVar8 = pcVar8 + (uint)bVar9 * -8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
    pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
  }
  iVar2 = this_ptr->width / 2;
  iVar3 = this_ptr->height / 2;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  engine_alphabit_cpp_CAlphaBitmap_allocate_FUN_0040d460(&this_ptr->reveal_mask,iVar2,iVar3);
  iVar2 = engine_alphabit_cpp_FUN_0040dd20(&this_ptr->reveal_mask,0);
  iVar3 = 0;
  if (0 < this_ptr->set_count) {
    pSVar6 = this_ptr->sets;
    do {
      iVar2 = this_ptr->width * this_ptr->height;
      iVar3 = iVar3 + 1;
      pSVar6->reveal_scale =
           SQRT(((float)((this_ptr->reveal_mask).width * (this_ptr->reveal_mask).height) *
                (ABS((float)((pSVar6->map_left - pSVar6->map_right) *
                            (pSVar6->map_top - pSVar6->map_bottom))) /
                ABS((pSVar6->world_z0 - pSVar6->world_z1) * (pSVar6->world_x0 - pSVar6->world_x1))))
                / (float)iVar2);
      pSVar6 = pSVar6 + 1;
    } while (iVar3 < this_ptr->set_count);
  }
  return iVar2;
}
