// Name: core_script.cpp_CalculateCRC_FUN_00560d80
// Address: 00560d80
// Address Range: [[00560d80, 00560dd5]]
// Convention: unknown
// Signature: undefined core_script.cpp_CalculateCRC_FUN_00560d80()

#include "nocturne.h"

/* Signature: int core_script.cpp_CalculateCRC(CScript* param_1) */

uint core_script_cpp_CalculateCRC_FUN_00560d80(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  uint local_14;
  
  local_14 = 0;
  iVar4 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x30)) {
    iVar3 = 0;
    do {
      pbVar2 = *(byte **)(iVar3 + 4 + *(int *)(in_stack_00000004 + 0x34));
      bVar1 = *pbVar2;
      while (bVar1 != 0) {
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
        core_actor_cpp_crc32ProcessByte_FUN_0040ce30(&local_14,bVar1);
        bVar1 = *pbVar2;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar4 < *(int *)(in_stack_00000004 + 0x30));
  }
  return local_14;
}
