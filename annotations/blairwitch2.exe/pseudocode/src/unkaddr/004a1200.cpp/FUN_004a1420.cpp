// Name: unkaddr_004a1200.cpp_FUN_004a1420
// Address: 004a1420
// Address Range: [[004a1420, 004a1446]]
// Convention: unknown
// Signature: void unkaddr_004a1200_cpp_FUN_004a1420(char *param_1)

#include "nocturne.h"

void unkaddr_004a1200_cpp_FUN_004a1420(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = strstr(param_1,&DAT_005d59e0);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  unkaddr_004a1200_cpp_FUN_004a1390(param_1);
  return;
}
