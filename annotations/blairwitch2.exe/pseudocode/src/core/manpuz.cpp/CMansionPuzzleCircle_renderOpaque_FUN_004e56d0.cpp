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
  int in_stack_ffffffbc;
  uint uStack_30;
  CBoundingBox3D CStack_28;
  int iStack_10;
  
  bVar5 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar3 = (uint *)&stack0xffffffc0;
  puVar4 = &uStack_30;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840(&CStack_28,in_stack_ffffffbc);
  if (iVar1 != 0) {
    iStack_10 = (int)ROUND(_DAT_0265370c * _DAT_005f98a0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[1000].projected_vertex,(CVector3i *)&iStack_10);
    iVar2 = 0;
    do {
      core_manpuz_cpp_CMansionPuzzleCircle_renderPanel_FUN_004e6340(this_ptr,iVar2);
      core_manpuz_cpp_CMansionPuzzleCircle_renderGem_FUN_004e63c0(this_ptr,iVar2);
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
      core_manpuz_cpp_CMansionPuzzleCircle_renderReflector_FUN_004e6820(this_ptr,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    uStack_30 = 0x4e57b9;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
    return iVar1;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  return 0;
}
