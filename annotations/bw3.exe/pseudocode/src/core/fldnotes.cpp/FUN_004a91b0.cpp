// Name: core_fldnotes.cpp_FUN_004a91b0
// Address: 004a91b0
// Address Range: [[004a91b0, 004a922c]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a91b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004a91b0(int param_1)

{
  int iVar1;
  uint *puVar2;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  iVar1 = FUN_005a3cb2(0x120);
  puVar2 = (uint *)0x0;
  if (iVar1 != 0) {
    puVar2 = (uint *)
             core_fldnotes_cpp_FUN_004a8490(iVar1,param_1 + 0x48,*(uint *)(param_1 + 0x2c));
  }
  if (puVar2 == (uint *)0x0) {
    _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
    _DAT_01d71de4 = 0x578;
    core_main_c_FUN_004e4330("Out of memory");
  }
  *puVar2 = *(uint *)(param_1 + 0x40);
  puVar2[1] = *(uint *)(param_1 + 0x44);
  puVar2[6] = *(uint *)(param_1 + 0x34);
  core_fldnotes_cpp_FUN_004a9230(param_1,puVar2);
  *(byte *)(param_1 + 0x48) = 0;
  return;
}
