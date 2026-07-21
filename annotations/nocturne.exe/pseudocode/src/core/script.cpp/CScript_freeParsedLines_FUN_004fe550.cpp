// Name: core_script.cpp_CScript_freeParsedLines_FUN_004fe550
// Address: 004fe550
// Address Range: [[004fe550, 004fe5a7]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_freeParsedLines_FUN_004fe550(int param_1)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_freeParsedLines_FUN_004fe550(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + iVar3 + 4);
        if (iVar1 != 0) {
          FUN_005638d0(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 8;
      } while (iVar2 < *(int *)(param_1 + 0x28));
    }
    FUN_005638d0(*(uint *)(param_1 + 0x2c));
    *(uint *)(param_1 + 0x2c) = 0;
  }
  *(uint *)(param_1 + 0x28) = 0;
  return;
}
