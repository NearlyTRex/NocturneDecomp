// Name: unkaddr_004a76f0.cpp_FUN_004a7920
// Address: 004a7920
// Address Range: [[004a7920, 004a7946]]
// Convention: unknown
// Signature: void unkaddr_004a76f0_cpp_FUN_004a7920(char *param_1)

#include "nocturne.h"

void unkaddr_004a76f0_cpp_FUN_004a7920(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = strstr(param_1,&DAT_005c0d0f);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  unkaddr_004a76f0_cpp_FUN_004a7890(param_1);
  return;
}
