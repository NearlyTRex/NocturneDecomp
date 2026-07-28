// Name: core_path.cpp_CPathMap_previewPathfinding_FUN_004f1500
// Address: 004f1500
// Address Range: [[004f1500, 004f15f0]]
// Convention: unknown
// Signature: void core_path_cpp_CPathMap_previewPathfinding_FUN_004f1500(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_CPathMap_previewPathfinding_FUN_004f1500(void)

{
  int x;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char acStack_11c [256];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar2 = 0;
  iStack_18 = 0;
  iStack_14 = 0x441;
  do {
    iVar3 = 0;
    iVar1 = 0;
    iStack_1c = iStack_14;
    iVar4 = iStack_18;
    do {
      _sprintf(acStack_11c,"%s",(&PTR_s_x_005be130)[*(byte *)(iVar4 + 0x1e40098)]);
      if ((iVar1 == _DAT_01e3161c) && (iVar2 == _DAT_01e31620)) {
        acStack_11c[0] = 's';
      }
      if ((iVar1 == _DAT_01e31624) && (iVar2 == _DAT_01e31628)) {
        acStack_11c[0] = 'd';
      }
      x = DAT_005b761c / 2 + iVar3;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xe;
      engine_2d_c_drawText_FUN_00402600(acStack_11c,x,iStack_1c);
    } while (iVar1 < 100);
    iVar2 = iVar2 + 1;
    iStack_14 = iStack_14 + -0xb;
    iStack_18 = iStack_18 + 100;
  } while (iVar2 < 100);
  return;
}
