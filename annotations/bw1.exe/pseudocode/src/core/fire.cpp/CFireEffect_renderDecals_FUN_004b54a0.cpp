// Name: core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0
// Address: 004b54a0
// Address Range: [[004b54a0, 004b561a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_004b54a0(CFireEffect *this_ptr,int render_mode,int render_completeness)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_004b54a0(CFireEffect *this_ptr,int render_mode,int render_completeness)

{
  int iVar1;
  CCrater *this_ptr_00;
  int iVar2;
  CStake *pCVar3;
  
  core_fire_cpp_CBulletHole_setupRenderState_FUN_004ac6f0(g_BulletHolePool);
  if (render_mode == 0) {
    iVar2 = 0;
    if (0 < g_INT_01c6eaa0) {
      iVar1 = 0;
      do {
        if (((*(int *)((int)&g_BulletHolePool[0].active + iVar1) != 0) &&
            (*(int *)((int)&g_BulletHolePool[0].actor_ptr + iVar1) == 0)) &&
           (core_fire_cpp_CBulletHole_render_FUN_004ac770
                      ((CBulletHole *)((int)&g_BulletHolePool[0].position.x + iVar1)),
           render_completeness != 0)) {
          *(uint *)((int)&g_BulletHolePool[0].active + iVar1) = 0;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar2 < g_INT_01c6eaa0);
    }
  }
  else {
    iVar2 = 0;
    if (0 < g_INT_01c6eaa0) {
      iVar1 = 0;
      do {
        if (*(int *)((int)&g_BulletHolePool[0].actor_ptr + iVar1) == 0) {
          core_fire_cpp_CBulletHole_render_FUN_004ac770
                    ((CBulletHole *)((int)&g_BulletHolePool[0].position.x + iVar1));
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar2 < g_INT_01c6eaa0);
    }
  }
  if ((render_mode != 0) && (iVar2 = 0, 0 < g_StakeActiveCount)) {
    pCVar3 = g_StakePool;
    iVar1 = 0;
    do {
      if ((pCVar3->physics_box).is_valid == 0) {
        *(uint *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c) = 1;
LAB_004b5525:
        core_fire_cpp_CStake_render_FUN_004ace60
                  ((CStake *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c));
      }
      else if (*(int *)((int)g_StakePool[0].physics_box.rotation_matrix.m + iVar1 + -0x1c) != 0)
      goto LAB_004b5525;
      iVar1 = iVar1 + 0x260;
      iVar2 = iVar2 + 1;
      pCVar3 = pCVar3 + 1;
    } while (iVar2 < g_StakeActiveCount);
  }
  if (render_mode == 0) {
    iVar2 = 0;
    do {
      if ((*(int *)((int)(g_CCrater_ARRAY_01cb4f60[0].smoke_positions + -2) + iVar2) != 0) &&
         (core_fire_cpp_CCrater_render_FUN_004b23a0
                    ((CCrater *)((int)g_CCrater_ARRAY_01cb4f60[0].smoke_positions + iVar2 + -0x1c)),
         render_completeness != 0)) {
        *(uint *)((int)(g_CCrater_ARRAY_01cb4f60[0].smoke_positions + -2) + iVar2) = 0;
      }
      iVar2 = iVar2 + 0x70;
    } while (iVar2 != 0x8c0);
  }
  else {
    this_ptr_00 = g_CCrater_ARRAY_01cb4f60;
    do {
      core_fire_cpp_CCrater_render_FUN_004b23a0(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != g_CCrater_ARRAY_01cb4f60 + sizeof(g_CCrater_ARRAY_01cb4f60) / sizeof(g_CCrater_ARRAY_01cb4f60[0]));
  }
  return;
}
