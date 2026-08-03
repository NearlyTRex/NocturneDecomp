// Name: core_fire.cpp_CFireEffect_renderDecals_FUN_0048a970
// Address: 0048a970
// Address Range: [[0048a970, 0048aad4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_0048a970(CFireEffect *this_ptr,int render_mode,int render_completeness)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_0048a970(CFireEffect *this_ptr,int render_mode,int render_completeness)

{
  int iVar1;
  CCrater *this_ptr_00;
  int iVar2;
  CStake *pCVar3;
  
  core_fire_cpp_CBulletHole_setupRenderState_FUN_00482ed0(g_CBulletHole_ARRAY_01c20148);
  if (render_mode == 0) {
    iVar2 = 0;
    if (0 < _DAT_01c20140) {
      iVar1 = 0;
      do {
        if ((*(int *)((int)&g_CBulletHole_ARRAY_01c20148[0].active + iVar1) != 0) &&
           (*(int *)((int)&g_CBulletHole_ARRAY_01c20148[0].actor_ptr + iVar1) == 0)) {
          core_fire_cpp_CBulletHole_render_FUN_00482f50
                    ((CBulletHole *)((int)&g_CBulletHole_ARRAY_01c20148[0].position.x + iVar1));
          *(uint *)((int)&g_CBulletHole_ARRAY_01c20148[0].active + iVar1) = 0;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar2 < _DAT_01c20140);
    }
  }
  else {
    iVar2 = 0;
    if (0 < _DAT_01c20140) {
      iVar1 = 0;
      do {
        if (*(int *)((int)&g_CBulletHole_ARRAY_01c20148[0].actor_ptr + iVar1) == 0) {
          core_fire_cpp_CBulletHole_render_FUN_00482f50
                    ((CBulletHole *)((int)&g_CBulletHole_ARRAY_01c20148[0].position.x + iVar1));
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar2 < _DAT_01c20140);
    }
  }
  if ((render_mode != 0) && (iVar2 = 0, 0 < _DAT_01c23d48)) {
    pCVar3 = g_CStake_ARRAY_01c23d50;
    iVar1 = 0;
    do {
      if ((pCVar3->physics_box).is_valid == 0) {
        *(uint *)
         ((int)g_CStake_ARRAY_01c23d50[0].physics_box.rotation_matrix.m + iVar1 + -0x1c) = 1;
LAB_0048a9ef:
        core_fire_cpp_CStake_render_FUN_004835d0
                  ((CStake *)
                   ((int)g_CStake_ARRAY_01c23d50[0].physics_box.rotation_matrix.m + iVar1 + -0x1c));
      }
      else if (*(int *)((int)g_CStake_ARRAY_01c23d50[0].physics_box.rotation_matrix.m +
                       iVar1 + -0x1c) != 0) goto LAB_0048a9ef;
      iVar1 = iVar1 + 0x260;
      iVar2 = iVar2 + 1;
      pCVar3 = pCVar3 + 1;
    } while (iVar2 < _DAT_01c23d48);
  }
  if (render_mode == 0) {
    iVar2 = 0;
    do {
      if (*(int *)((int)(g_CCrater_ARRAY_01c625f8[0].smoke_positions + -2) + iVar2) != 0) {
        core_fire_cpp_CCrater_render_FUN_00487af0
                  ((CCrater *)((int)g_CCrater_ARRAY_01c625f8[0].smoke_positions + iVar2 + -0x1c));
        *(uint *)((int)(g_CCrater_ARRAY_01c625f8[0].smoke_positions + -2) + iVar2) = 0;
      }
      iVar2 = iVar2 + 0x70;
    } while (iVar2 != 0x8c0);
  }
  else {
    this_ptr_00 = g_CCrater_ARRAY_01c625f8;
    do {
      core_fire_cpp_CCrater_render_FUN_00487af0(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != (CCrater *)&DAT_01c62eb8);
  }
  return;
}
