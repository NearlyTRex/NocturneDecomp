// Name: core_fire.cpp_CFireEffect_renderDecals_FUN_004a1e90
// Address: 004a1e90
// Address Range: [[004a1e90, 004a200a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_004a1e90(CFireEffect *this_ptr,int render_mode,int render_completeness)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_004a1e90(CFireEffect *this_ptr,int render_mode,int render_completeness)

{
  int iVar1;
  CCrater *this_ptr_00;
  int iVar2;
  CStake *pCVar3;
  
  core_fire_cpp_FUN_004975a0(&DAT_01c8aea8);
  if (render_mode == 0) {
    iVar2 = 0;
    if (0 < _DAT_01c8aea0) {
      iVar1 = 0;
      do {
        if (((*(int *)(iVar1 + 0x1c8aeb4) != 0) && (*(int *)(iVar1 + 0x1c8aeb8) == 0)) &&
           (core_fire_cpp_CBulletHole_render_FUN_00497610((CBulletHole *)(&DAT_01c8aea8 + iVar1)),
           render_completeness != 0)) {
          *(uint *)(iVar1 + 0x1c8aeb4) = 0;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x40;
      } while (iVar2 < _DAT_01c8aea0);
    }
  }
  else {
    iVar2 = 0;
    if (0 < _DAT_01c8aea0) {
      iVar1 = 0;
      do {
        if (*(int *)(iVar1 + 0x1c8aeb8) == 0) {
          core_fire_cpp_CBulletHole_render_FUN_00497610((CBulletHole *)(&DAT_01c8aea8 + iVar1));
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x40;
      } while (iVar2 < _DAT_01c8aea0);
    }
  }
  if ((render_mode != 0) && (iVar2 = 0, 0 < _DAT_01c8eea8)) {
    pCVar3 = g_StakePool;
    iVar1 = 0;
    do {
      if ((pCVar3->physics_box).is_valid == 0) {
        *(uint *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c) = 1;
LAB_004a1f15:
        core_fire_cpp_CStake_render_FUN_00497dc0
                  ((CStake *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c));
      }
      else if (*(int *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c) != 0)
      goto LAB_004a1f15;
      iVar1 = iVar1 + 0x260;
      iVar2 = iVar2 + 1;
      pCVar3 = pCVar3 + 1;
    } while (iVar2 < _DAT_01c8eea8);
  }
  if (render_mode == 0) {
    iVar2 = 0;
    do {
      if ((*(int *)(iVar2 + 0x1cfaffc) != 0) &&
         (core_fire_cpp_CCrater_render_FUN_0049d980((CCrater *)(iVar2 + 0x1cfaff8)),
         render_completeness != 0)) {
        *(uint *)(iVar2 + 0x1cfaffc) = 0;
      }
      iVar2 = iVar2 + 0x70;
    } while (iVar2 != 0x8c0);
  }
  else {
    this_ptr_00 = (CCrater *)0x1cfaff8;
    do {
      core_fire_cpp_CCrater_render_FUN_0049d980(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != (CCrater *)&DAT_01cfb8b8);
  }
  return;
}
