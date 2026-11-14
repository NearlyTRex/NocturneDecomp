// Name: core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0
// Address: 004268b0
// Address Range: [[004268b0, 00426981]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_renderTransparent_FUN_004268b0(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00426937) */

int __cdecl core_charactr_cpp_CCharacter_renderTransparent_FUN_004268b0(CCharacter *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_40 [6];
  uint local_28 [6];
  
  bVar4 = 0;
  if ((DAT_007bdad8 & 1) == 0) {
    DAT_007bdad8 = DAT_007bdad8 | 1;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar2 = local_40;
  puVar3 = local_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(local_28);
  if (iVar1 != 0) {
    this_ptr->was_rendered_opaque = 1;
    core_charactr_cpp_CCharacter_renderCharacter_FUN_00424bd0(this_ptr);
    core_charactr_cpp_FUN_0042b620(this_ptr);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  if ((0 < this_ptr->fire_count) && (this_ptr->was_rendered_opaque != 0)) {
    core_charactr_cpp_CCharacter_renderFlames_FUN_00426990(this_ptr);
    return this_ptr->was_rendered_opaque;
  }
  return this_ptr->was_rendered_opaque;
}
