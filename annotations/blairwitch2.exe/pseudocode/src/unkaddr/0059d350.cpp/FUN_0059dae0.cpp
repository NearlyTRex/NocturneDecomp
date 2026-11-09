// Name: unkaddr_0059d350.cpp_FUN_0059dae0
// Address: 0059dae0
// Address Range: [[0059dae0, 0059db4c]]
// Convention: unknown
// Signature: undefined4 unkaddr_0059d350_cpp_FUN_0059dae0(int param_1,char *param_2,char *param_3)

#include "nocturne.h"

uint unkaddr_0059d350_cpp_FUN_0059dae0(int param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  char *str2;
  
  if ((*(int *)(param_1 + 0x838) != 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 0x838))) {
    str2 = (char *)(param_1 + 500);
    do {
      iVar1 = _strcmp(param_2,str2);
      if (iVar1 == 0) {
        iVar1 = _strcmp
                          (*(char **)(param_1 + 0x210 + iVar2 * 0x20),param_3);
        if (iVar1 == 0) {
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
      str2 = str2 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x838));
  }
  return 0;
}
