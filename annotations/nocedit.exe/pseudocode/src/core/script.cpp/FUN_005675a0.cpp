// Name: core_script.cpp_FUN_005675a0
// Address: 005675a0
// Address Range: [[005675a0, 00567623]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_FUN_005675a0(char *param_1,char *param_2)

#include "nocturne.h"

int __cdecl core_script_cpp_FUN_005675a0(char *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar4 = stricmp(param_1,param_2);
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x100) < *(int *)(param_2 + 0x100)) {
      return -1;
    }
    if (*(int *)(param_1 + 0x100) <= *(int *)(param_2 + 0x100)) {
      uVar1 = *(uint *)(param_1 + 0x104);
      if (uVar1 < *(uint *)(param_2 + 0x104)) {
        return -1;
      }
      if (uVar1 == *(uint *)(param_2 + 0x104)) {
        if (uVar1 == 0) {
          iVar4 = *(int *)(param_2 + 0x10c);
          iVar2 = *(int *)(param_1 + 0x10c);
          bVar6 = SBORROW4(iVar2,iVar4);
          iVar3 = iVar2 - iVar4;
          bVar5 = iVar2 == iVar4;
          if (iVar2 < iVar4) {
            return -1;
          }
        }
        else {
          iVar4 = *(int *)(param_2 + 0x108);
          iVar2 = *(int *)(param_1 + 0x108);
          bVar6 = SBORROW4(iVar2,iVar4);
          iVar3 = iVar2 - iVar4;
          bVar5 = iVar2 == iVar4;
          if (iVar2 < iVar4) {
            return -1;
          }
        }
        if (bVar5 || bVar6 != iVar3 < 0) {
          return 0;
        }
      }
    }
    iVar4 = 1;
  }
  return iVar4;
}
