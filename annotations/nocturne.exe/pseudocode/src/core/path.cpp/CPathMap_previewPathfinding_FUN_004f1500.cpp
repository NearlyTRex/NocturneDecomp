// Name: core_path.cpp_CPathMap_previewPathfinding_FUN_004f1500
// Address: 004f1500
// Address Range: [[004f1500, 004f15f0]]
// Convention: unknown
// Signature: undefined4 core_path_cpp_CPathMap_previewPathfinding_FUN_004f1500(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_path_cpp_CPathMap_previewPathfinding_FUN_004f1500(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte auStack_11c [256];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar4 = 0;
  iStack_18 = 0;
  iStack_14 = 0x441;
  do {
    iVar5 = 0;
    iVar3 = 0;
    iStack_1c = iStack_14;
    iVar6 = iStack_18;
    do {
      _sprintf(auStack_11c,0x58ce1b,(&PTR_DAT_005be130)[*(byte *)(iVar6 + 0x1e40098)]);
      if ((iVar3 == _DAT_01e3161c) && (iVar4 == _DAT_01e31620)) {
        auStack_11c[0] = 0x73;
      }
      if ((iVar3 == _DAT_01e31624) && (iVar4 == _DAT_01e31628)) {
        auStack_11c[0] = 100;
      }
      iVar1 = DAT_005b761c / 2 + iVar5;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0xe;
      uVar2 = engine_2d_c_drawText_FUN_00402600(auStack_11c,iVar1,iStack_1c);
    } while (iVar3 < 100);
    iVar4 = iVar4 + 1;
    iStack_14 = iStack_14 + -0xb;
    iStack_18 = iStack_18 + 100;
  } while (iVar4 < 100);
  return uVar2;
}
