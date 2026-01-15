// Name: core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0
// Address: 004c74a0
// Address Range: [[004c74a0, 004c761a]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0(CFireEffect * this_ptr, int render_mode, int render_completeness)

#include "nocturne.h"

void __cdecl
core_fire_cpp_CFireEffect_renderDecals_FUN_004c74a0
          (CFireEffect *this_ptr,int render_mode,int render_completeness)

{
  char *pcVar1;
  int iVar2;
  CCrater *this_ptr_00;
  int iVar3;
  CStake *pCVar4;
  
  core_fire_cpp_CBulletHole_initRender_FUN_004bfa40(g_BulletHolePool);
  if (render_mode == 0) {
    iVar3 = 0;
    if (0 < g_BulletHoleActiveCount) {
      iVar2 = 0;
      do {
        if (((*(int *)((int)&g_BulletHolePool[0].active + iVar2) != 0) &&
            (*(int *)((int)&g_BulletHolePool[0].actor_ptr + iVar2) == 0)) &&
           (core_fire_cpp_CBulletHole_render_FUN_004bfac0
                      ((CBulletHole *)((int)&g_BulletHolePool[0].position.x + iVar2)),
           render_completeness != 0)) {
          *(uint *)((int)&g_BulletHolePool[0].active + iVar2) = 0;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x3c;
      } while (iVar3 < g_BulletHoleActiveCount);
    }
  }
  else {
    iVar3 = 0;
    if (0 < g_BulletHoleActiveCount) {
      iVar2 = 0;
      do {
        if (*(int *)((int)&g_BulletHolePool[0].actor_ptr + iVar2) == 0) {
          core_fire_cpp_CBulletHole_render_FUN_004bfac0
                    ((CBulletHole *)((int)&g_BulletHolePool[0].position.x + iVar2));
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x3c;
      } while (iVar3 < g_BulletHoleActiveCount);
    }
  }
  if ((render_mode != 0) && (iVar3 = 0, 0 < g_StakeActiveCount)) {
    pCVar4 = g_StakePool;
    iVar2 = 0;
    do {
      if ((pCVar4->box).is_valid == 0) {
        *(uint *)((int)g_StakePool[0].box.rotation_matrix.m + iVar2 + -0x1c) = 1;
LAB_004c7525:
        core_fire_cpp_CStake_render_FUN_004c0140
                  ((CStake *)((int)g_StakePool[0].box.rotation_matrix.m + iVar2 + -0x1c));
      }
      else if (*(int *)((int)g_StakePool[0].box.rotation_matrix.m + iVar2 + -0x1c) != 0)
      goto LAB_004c7525;
      iVar2 = iVar2 + 0x260;
      iVar3 = iVar3 + 1;
      pCVar4 = pCVar4 + 1;
    } while (iVar3 < g_StakeActiveCount);
  }
  if (render_mode == 0) {
    iVar3 = 0;
    do {
      if ((*(int *)(g_CraterPool[0].field0_0x0 + iVar3 + 4) != 0) &&
         (core_fire_cpp_CCrater_render_FUN_004c4620((CCrater *)(g_CraterPool[0].field0_0x0 + iVar3))
         , render_completeness != 0)) {
        pcVar1 = g_CraterPool[0].field0_0x0 + iVar3 + 4;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
      }
      iVar3 = iVar3 + 0x70;
    } while (iVar3 != 0x8c0);
  }
  else {
    this_ptr_00 = g_CraterPool;
    do {
      core_fire_cpp_CCrater_render_FUN_004c4620(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != (CCrater *)&g_CraterActiveListHead);
  }
  return;
}
