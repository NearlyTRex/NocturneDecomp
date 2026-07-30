// Name: core_fire.cpp_CFireEffect_renderDecals_FUN_0048a970
// Address: 0048a970
// Address Range: [[0048a970, 0048aad4]]
// Convention: unknown
// Signature: void core_fire_cpp_CFireEffect_renderDecals_FUN_0048a970(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CFireEffect_renderDecals_FUN_0048a970(uint param_1,int param_2)

{
  int iVar1;
  CCrater *this_ptr;
  int iVar2;
  byte *puVar3;
  
  core_fire_cpp_CBulletHole_setupRenderState_FUN_00482ed0((CBulletHole *)&DAT_01c20148);
  if (param_2 == 0) {
    iVar2 = 0;
    if (0 < _DAT_01c20140) {
      iVar1 = 0;
      do {
        if ((*(int *)(iVar1 + 0x1c20154) != 0) && (*(int *)(iVar1 + 0x1c20158) == 0)) {
          core_fire_cpp_CBulletHole_render_FUN_00482f50((CBulletHole *)(&DAT_01c20148 + iVar1));
          *(uint *)(iVar1 + 0x1c20154) = 0;
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
        if (*(int *)(iVar1 + 0x1c20158) == 0) {
          core_fire_cpp_CBulletHole_render_FUN_00482f50((CBulletHole *)(&DAT_01c20148 + iVar1));
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar2 < _DAT_01c20140);
    }
  }
  if ((param_2 != 0) && (iVar2 = 0, 0 < _DAT_01c23d48)) {
    puVar3 = &DAT_01c23d50;
    iVar1 = 0;
    do {
      if (*(int *)(puVar3 + 600) == 0) {
        *(uint *)(&DAT_01c23d50 + iVar1) = 1;
LAB_0048a9ef:
        core_fire_cpp_CStake_render_FUN_004835d0((CStake *)(&DAT_01c23d50 + iVar1));
      }
      else if (*(int *)(&DAT_01c23d50 + iVar1) != 0) goto LAB_0048a9ef;
      iVar1 = iVar1 + 0x260;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x260;
    } while (iVar2 < _DAT_01c23d48);
  }
  if (param_2 == 0) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + 0x1c625fc) != 0) {
        core_fire_cpp_CCrater_render_FUN_00487af0((CCrater *)(&DAT_01c625f8 + iVar2));
        *(uint *)(iVar2 + 0x1c625fc) = 0;
      }
      iVar2 = iVar2 + 0x70;
    } while (iVar2 != 0x8c0);
  }
  else {
    this_ptr = (CCrater *)&DAT_01c625f8;
    do {
      core_fire_cpp_CCrater_render_FUN_00487af0(this_ptr);
      this_ptr = this_ptr + 1;
    } while (this_ptr != (CCrater *)&DAT_01c62eb8);
  }
  return;
}
