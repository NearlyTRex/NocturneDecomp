// Name: engine_console.cpp_CConsole_writeChar_FUN_0043ad30
// Address: 0043ad30
// Address Range: [[0043ad30, 0043adf8]]
// Convention: unknown
// Signature: void engine_console_cpp_CConsole_writeChar_FUN_0043ad30(int param_1,char param_2)

#include "nocturne.h"

void engine_console_cpp_CConsole_writeChar_FUN_0043ad30(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == '\n') {
    *(uint *)(param_1 + 0xfa4) = 0;
    iVar2 = *(int *)(param_1 + 0xfa8) + 1;
    iVar1 = *(int *)(param_1 + 0xfb0) + -1;
    *(int *)(param_1 + 0xfa8) = iVar2;
    if (iVar1 < iVar2) {
LAB_0043adc5:
      *(int *)(param_1 + 0xfa8) = iVar1;
      engine_console_cpp_CConsole_scrollUp_FUN_0043ae40(param_1);
      return;
    }
  }
  else {
    if (param_2 == '\0') {
      *(byte *)(*(int *)(param_1 + 0xfa8) * 0x50 + param_1 + *(int *)(param_1 + 0xfa4) + 4) =
           0;
      return;
    }
    *(char *)(*(int *)(param_1 + 0xfa8) * 0x50 + param_1 + *(int *)(param_1 + 0xfa4) + 4) = param_2;
    iVar1 = *(int *)(param_1 + 0xfa4) + 1;
    *(int *)(param_1 + 0xfa4) = iVar1;
    if (*(int *)(param_1 + 0xfac) + -1 < iVar1) {
      *(uint *)(param_1 + 0xfa4) = 0;
      iVar2 = *(int *)(param_1 + 0xfa8) + 1;
      iVar1 = *(int *)(param_1 + 0xfb0) + -1;
      *(int *)(param_1 + 0xfa8) = iVar2;
      if (iVar1 < iVar2) goto LAB_0043adc5;
    }
  }
  return;
}
