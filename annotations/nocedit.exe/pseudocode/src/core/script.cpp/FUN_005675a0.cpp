// Name: core_script.cpp_FUN_005675a0
// Address: 005675a0
// Address Range: [[005675a0, 00567623]]
// Convention: unknown
// Signature: int core_script_cpp_FUN_005675a0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_005675a0(uint param_1, uint param_2) */

int core_script_cpp_FUN_005675a0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  char *in_stack_00000004;
  char *in_stack_00000008;
  
  iVar4 = stricmp(in_stack_00000004,in_stack_00000008);
  if (iVar4 == 0) {
    if (*(int *)(in_stack_00000004 + 0x100) < *(int *)(in_stack_00000008 + 0x100)) {
      return -1;
    }
    if (*(int *)(in_stack_00000004 + 0x100) <= *(int *)(in_stack_00000008 + 0x100)) {
      uVar1 = *(uint *)(in_stack_00000004 + 0x104);
      if (uVar1 < *(uint *)(in_stack_00000008 + 0x104)) {
        return -1;
      }
      if (uVar1 == *(uint *)(in_stack_00000008 + 0x104)) {
        if (uVar1 == 0) {
          iVar4 = *(int *)(in_stack_00000008 + 0x10c);
          iVar2 = *(int *)(in_stack_00000004 + 0x10c);
          bVar6 = SBORROW4(iVar2,iVar4);
          iVar3 = iVar2 - iVar4;
          bVar5 = iVar2 == iVar4;
          if (iVar2 < iVar4) {
            return -1;
          }
        }
        else {
          iVar4 = *(int *)(in_stack_00000008 + 0x108);
          iVar2 = *(int *)(in_stack_00000004 + 0x108);
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
