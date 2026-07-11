// Name: FUN_004533e0
// Address: 004533e0
// Address Range: [[004533e0, 00453611]]
// Convention: unknown
// Signature: void FUN_004533e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004533e0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  FUN_00452f10(param_1);
  *(uint *)(param_1 + 0x104) = param_2;
  *(uint *)(param_1 + 0x110) = param_3;
  *(uint *)(param_1 + 0x120) = param_4;
  *(uint *)(param_1 + 0x244) = param_5;
  *(uint *)(param_1 + 0x100) = param_6;
  if (4 < *(int *)(param_1 + 0x120)) {
    _DAT_01cc4800 = "@o@..\\core\\dmodel.cpp" + 3;
    _DAT_01cc4804 = 0x2c0;
    FUN_004c8440("Too many materials!");
  }
  if (0x1e < *(int *)(param_1 + 0x244)) {
    _DAT_01cc4800 = "..\\core\\dmodel.cpp";
    _DAT_01cc4804 = 0x2c1;
    FUN_004c8440("Too many parts!");
  }
  uVar1 = FUN_00564c18(*(int *)(param_1 + 0x100) * *(int *)(param_1 + 0x104) * 0xc);
  *(uint *)(param_1 + 0x10c) = uVar1;
  uVar1 = FUN_00564c18(*(int *)(param_1 + 0x110) * 0x48);
  *(uint *)(param_1 + 0x114) = uVar1;
  uVar1 = FUN_00564c18(*(int *)(param_1 + 0x110) << 2);
  iVar4 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x118) = uVar1;
  piVar2 = (int *)FUN_00564c18(iVar4 * 0x18 + 4);
  piVar3 = piVar2;
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2 + 1;
    *piVar2 = iVar4;
  }
  *(int **)(param_1 + 0x350) = piVar3;
  if ((((*(int *)(param_1 + 0x10c) == 0) ||
       ((0 < *(int *)(param_1 + 0x110) && (*(int *)(param_1 + 0x114) == 0)))) ||
      ((0 < *(int *)(param_1 + 0x110) && (*(int *)(param_1 + 0x118) == 0)))) ||
     (*(int *)(param_1 + 0x350) == 0)) {
    FUN_00452f10(param_1);
    _DAT_01cc4804 = 0x2d3;
    _DAT_01cc4800 = "..\\core\\dmodel.cpp";
    FUN_004c8440("Out of memory in CKeyFramedModel::allocate.  frameCount=%d, vertexCount=%d, polyCount=%d",*(uint *)(param_1 + 0x100),
                 *(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x110));
    if (*(int *)(param_1 + 0x100) != 1) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x100) != 1) {
    return;
  }
  iVar4 = FUN_00564c18(*(int *)(param_1 + 0x104) * 0xc);
  *(int *)(param_1 + 0x108) = iVar4;
  if (iVar4 != 0) {
    return;
  }
  _DAT_01cc4800 = "..\\core\\dmodel.cpp";
  _DAT_01cc4804 = 0x2db;
  FUN_004c8440("Out of memory for vertex normals in CKeyFramedModel::allocate.  vertexCount=%d",*(uint *)(param_1 + 0x104));
  return;
}
