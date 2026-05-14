// Name: core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0
// Address: 004c74a0
// MANUAL RECONSTRUCTION
// Address Range: [[004c74a0, 004c761a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_004c74a0(CFireEffect *this_ptr,int render_mode,int render_completeness)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_004c74a0(CFireEffect *this_ptr,int render_mode,int render_completeness)

{
  CCrater *this_ptr_00;
  int iVar2;
  
  core_fire_cpp_CBulletHole_setupRenderState_FUN_004bfa40(g_BulletHolePool);
  if (render_mode == 0) {
    for (iVar2 = 0; iVar2 < g_BulletHoleActiveCount; iVar2 = iVar2 + 1) {
      if ((g_BulletHolePool[iVar2].active != 0) &&
          (g_BulletHolePool[iVar2].actor_ptr == (CDemonActor *)0x0)) {
        core_fire_cpp_CBulletHole_render_FUN_004bfac0(&g_BulletHolePool[iVar2]);
        if (render_completeness != 0) {
          g_BulletHolePool[iVar2].active = 0;
        }
      }
    }
  }
  else {
    for (iVar2 = 0; iVar2 < g_BulletHoleActiveCount; iVar2 = iVar2 + 1) {
      if (g_BulletHolePool[iVar2].actor_ptr == (CDemonActor *)0x0) {
        core_fire_cpp_CBulletHole_render_FUN_004bfac0(&g_BulletHolePool[iVar2]);
      }
    }
  }
  if (render_mode != 0) {
    for (iVar2 = 0; iVar2 < g_StakeActiveCount; iVar2 = iVar2 + 1) {
      if ((g_StakePool[iVar2].physics_box).is_valid == 0) {
        g_StakePool[iVar2].active = 1;
        core_fire_cpp_CStake_render_FUN_004c0140(&g_StakePool[iVar2]);
      }
      else if (g_StakePool[iVar2].active != 0) {
        core_fire_cpp_CStake_render_FUN_004c0140(&g_StakePool[iVar2]);
      }
    }
  }
  if (render_mode == 0) {
    iVar2 = 0;
    do {
      if ((g_CraterPool[iVar2].has_smoke != 0) &&
         (core_fire_cpp_CCrater_render_FUN_004c4620(&g_CraterPool[iVar2]),
         render_completeness != 0)) {
        g_CraterPool[iVar2].has_smoke = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 20);
  }
  else {
    this_ptr_00 = g_CraterPool;
    do {
      core_fire_cpp_CCrater_render_FUN_004c4620(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != g_CraterPool + 20);
  }
  return;
}
