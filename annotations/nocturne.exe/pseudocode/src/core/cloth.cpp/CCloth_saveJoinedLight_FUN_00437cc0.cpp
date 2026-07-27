// Name: core_cloth.cpp_CCloth_saveJoinedLight_FUN_00437cc0
// Address: 00437cc0
// Address Range: [[00437cc0, 00437da4]]
// Convention: unknown
// Signature: int core_cloth_cpp_CCloth_saveJoinedLight_FUN_00437cc0(int param_1,int param_2)

#include "nocturne.h"

int core_cloth_cpp_CCloth_saveJoinedLight_FUN_00437cc0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == 0) {
    PTR_01cc4800 = "..\\core\\cloth.cpp";
    INT_01cc4804 = 0x4e3;
    core_main_c_FUN_004c8440("CCloth::saveJoinedLight - Can't save light with no model!");
  }
  iVar5 = *(int *)(param_2 + 0x2230);
  if (iVar5 < 0) {
    PTR_01cc4800 = "..\\core\\cloth.cpp";
    INT_01cc4804 = 0x4e8;
    core_main_c_FUN_004c8440("CCloth::saveJoinedLight - Model wasn't drawn");
  }
  iVar3 = *(int *)(param_1 + 0x39ce8);
  iVar6 = 0;
  if (0 < iVar3) {
    iVar5 = iVar5 * 400 + param_1;
    iVar2 = param_1;
    do {
      piVar1 = DAT_005ae704;
      iVar4 = *(int *)(iVar5 + 0x39e7c) * 0x30;
      *(uint *)(iVar2 + 0x3a64c) = *(uint *)(iVar4 + 0x20 + *DAT_005ae704);
      *(uint *)(iVar2 + 0x3a7dc) = *(uint *)(iVar4 + 0x24 + *piVar1);
      iVar3 = iVar2 + 4;
      *(uint *)(iVar2 + 0x3a96c) = *(uint *)(iVar4 + 0x28 + *piVar1);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar2 = iVar3;
    } while (iVar6 < *(int *)(param_1 + 0x39ce8));
  }
  return iVar3;
}
