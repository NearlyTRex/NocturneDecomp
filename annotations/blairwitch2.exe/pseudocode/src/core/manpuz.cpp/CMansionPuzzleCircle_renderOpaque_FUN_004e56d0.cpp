// Name: core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_004e56d0
// Address: 004e56d0
// Address Range: [[004e56d0, 004e57e6]]
// Convention: __cdecl
// Signature: int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderOpaque_FUN_004e56d0(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderOpaque_FUN_004e56d0(CMansionPuzzleCircle *this_ptr)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint uStack_48;
  uint auStack_30 [6];
  CVector3i CStack_18;
  
  bVar5 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar3 = &uStack_48;
  puVar4 = auStack_30;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(auStack_30);
  if (iVar1 != 0) {
    CStack_18.x = (int)ROUND(_DAT_0265370c * _DAT_005f98a0);
    CStack_18.y = (int)ROUND(_DAT_02653710 * _DAT_005f98a0);
    CStack_18.z = (int)ROUND(_DAT_02653714 * _DAT_005f98a0);
    engine_special_cpp_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[1000].projected_vertex,&CStack_18);
    iVar2 = 0;
    do {
      core_manpuz_cpp_FUN_004e6340(this_ptr,iVar2);
      core_manpuz_cpp_FUN_004e63c0(this_ptr,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xc);
    if ((*(int *)(0x01D182F0 + 0x1008) != 0) &&
       (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
       iVar2 == 0)) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xc);
    }
    iVar2 = 0;
    do {
      core_manpuz_cpp_FUN_004e6820(this_ptr,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    uStack_48 = 0x4e57b9;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
    return iVar1;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  return 0;
}
