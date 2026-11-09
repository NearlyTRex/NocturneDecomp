// Name: unkaddr_0059d350.cpp_FUN_0059d880
// Address: 0059d880
// Address Range: [[0059d880, 0059d8df]]
// Convention: unknown
// Signature: undefined4 unkaddr_0059d350_cpp_FUN_0059d880(int param_1,char *param_2)

#include "nocturne.h"

uint unkaddr_0059d350_cpp_FUN_0059d880(int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *str2;
  
  if ((*(int *)(param_1 + 0x838) != 0) && (iVar3 = 0, 0 < *(int *)(param_1 + 0x838))) {
    str2 = (char *)(param_1 + 500);
    do {
      iVar1 = _strcmp(param_2,str2);
      if (iVar1 == 0) {
        uVar2 = unkaddr_0059d350_cpp_FUN_0059d940
                          (param_1,*(uint *)(param_1 + 0x210 + iVar3 * 0x20));
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      str2 = str2 + 0x20;
    } while (iVar3 < *(int *)(param_1 + 0x838));
  }
  return 0;
}
