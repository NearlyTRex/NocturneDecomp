// Name: support_trisock.cpp_FUN_0059ddc0
// Address: 0059ddc0
// Address Range: [[0059ddc0, 0059ddfc]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_0059ddc0(char *param_1,char *param_2)

#include "nocturne.h"

void support_trisock_cpp_FUN_0059ddc0(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  support_trisock_cpp_FUN_0059de90(param_1);
  pcVar2 = param_1;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  support_trisock_cpp_FUN_0059deb0(param_1);
  return;
}
