// Name: core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50
// Address: 0049cb50
// Address Range: [[0049cb50, 0049ccca]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_0049cb50(CFireEffect *this_ptr,int render_mode,int render_completeness)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_0049cb50(CFireEffect *this_ptr,int render_mode,int render_completeness)

{
  int iVar1;
  CCrater *this_ptr_00;
  int iVar2;
  CStake *pCVar3;
  
  core_fire_cpp_CBulletHole_setupRenderState_FUN_00493d50((CBulletHole *)&DAT_01c558e8);
  if (render_mode == 0) {
    iVar2 = 0;
    if (0 < _DAT_01c558e0) {
      iVar1 = 0;
      do {
        if (((*(int *)(iVar1 + 0x1c558f4) != 0) && (*(int *)(iVar1 + 0x1c558f8) == 0)) &&
           (core_fire_cpp_CBulletHole_render_FUN_00493dd0((CBulletHole *)(&DAT_01c558e8 + iVar1)),
           render_completeness != 0)) {
          *(uint *)(iVar1 + 0x1c558f4) = 0;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar2 < _DAT_01c558e0);
    }
  }
  else {
    iVar2 = 0;
    if (0 < _DAT_01c558e0) {
      iVar1 = 0;
      do {
        if (*(int *)(iVar1 + 0x1c558f8) == 0) {
          core_fire_cpp_CBulletHole_render_FUN_00493dd0((CBulletHole *)(&DAT_01c558e8 + iVar1));
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar2 < _DAT_01c558e0);
    }
  }
  if ((render_mode != 0) && (iVar2 = 0, 0 < _DAT_01c594e8)) {
    pCVar3 = g_StakePool;
    iVar1 = 0;
    do {
      if (*(int *)&pCVar3->field_0x258 == 0) {
        *(uint *)(&g_StakePool[0].field_0x0 + iVar1) = 1;
LAB_0049cbd5:
        core_fire_cpp_FUN_004944c0((CStake *)(&g_StakePool[0].field_0x0 + iVar1));
      }
      else if (*(int *)(&g_StakePool[0].field_0x0 + iVar1) != 0) goto LAB_0049cbd5;
      iVar1 = iVar1 + 0x260;
      iVar2 = iVar2 + 1;
      pCVar3 = pCVar3 + 1;
    } while (iVar2 < _DAT_01c594e8);
  }
  if (render_mode == 0) {
    iVar2 = 0;
    do {
      if ((*(int *)(iVar2 + 0x1c9c4d8) != 0) &&
         (core_fire_cpp_CCrater_render_FUN_00499a00((CCrater *)(iVar2 + 0x1c9c4d4)),
         render_completeness != 0)) {
        *(uint *)(iVar2 + 0x1c9c4d8) = 0;
      }
      iVar2 = iVar2 + 0x70;
    } while (iVar2 != 0x8c0);
  }
  else {
    this_ptr_00 = (CCrater *)0x1c9c4d4;
    do {
      core_fire_cpp_CCrater_render_FUN_00499a00(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != (CCrater *)&DAT_01c9cd94);
  }
  return;
}
