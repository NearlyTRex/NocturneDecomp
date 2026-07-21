// Name: core_script.cpp_CScript_computeChecksum_FUN_00505820
// Address: 00505820
// Address Range: [[00505820, 00505875]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_script_cpp_CScript_computeChecksum_FUN_00505820(int param_1)

#include "nocturne.h"

uint __cdecl core_script_cpp_CScript_computeChecksum_FUN_00505820(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  
  local_14 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar3 = 0;
    do {
      pcVar2 = *(char **)(iVar3 + 4 + *(int *)(param_1 + 0x2c));
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        core_actor_cpp_crc32ProcessByte_FUN_0040dfc0(&local_14,cVar1);
        cVar1 = *pcVar2;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x28));
  }
  return local_14;
}
