// Name: core_fire.cpp_FUN_0048a970
// Address: 0048a970
// Address Range: [[0048a970, 0048aad4]]
// Convention: unknown
// Signature: int core_fire_cpp_FUN_0048a970(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_fire_cpp_FUN_0048a970(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = core_fire_cpp_CBulletHole_setupRenderState_FUN_00482ed0(&DAT_01c20148);
  if (param_2 == 0) {
    iVar4 = 0;
    if (0 < _DAT_01c20140) {
      iVar2 = 0;
      do {
        if ((*(int *)(iVar2 + 0x1c20154) != 0) && (*(int *)(iVar2 + 0x1c20158) == 0)) {
          iVar1 = core_fire_cpp_CBulletHole_render_FUN_00482f50(&DAT_01c20148 + iVar2);
          *(uint *)(iVar2 + 0x1c20154) = 0;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x3c;
      } while (iVar4 < _DAT_01c20140);
    }
  }
  else {
    iVar4 = 0;
    if (0 < _DAT_01c20140) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar2 + 0x1c20158) == 0) {
          core_fire_cpp_CBulletHole_render_FUN_00482f50(&DAT_01c20148 + iVar2);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x3c;
        iVar1 = _DAT_01c20140;
      } while (iVar4 < _DAT_01c20140);
    }
  }
  if ((param_2 != 0) && (iVar4 = 0, 0 < _DAT_01c23d48)) {
    iVar5 = 0x1c23d50;
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar5 + 600);
      if (iVar1 == 0) {
        *(uint *)(iVar2 + 0x1c23d50) = 1;
LAB_0048a9ef:
        iVar1 = core_fire_cpp_CStake_render_FUN_004835d0(iVar2 + 0x1c23d50);
      }
      else if (*(int *)(iVar2 + 0x1c23d50) != 0) goto LAB_0048a9ef;
      iVar2 = iVar2 + 0x260;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x260;
    } while (iVar4 < _DAT_01c23d48);
  }
  if (param_2 == 0) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar4 + 0x1c625fc) != 0) {
        iVar1 = core_fire_cpp_CCrater_render_FUN_00487af0(iVar4 + 0x1c625f8);
        *(uint *)(iVar4 + 0x1c625fc) = 0;
      }
      iVar4 = iVar4 + 0x70;
    } while (iVar4 != 0x8c0);
  }
  else {
    puVar3 = (byte *)0x1c625f8;
    do {
      iVar1 = core_fire_cpp_CCrater_render_FUN_00487af0(puVar3);
      puVar3 = puVar3 + 0x70;
    } while (puVar3 != &DAT_01c62eb8);
  }
  return iVar1;
}
