// Name: support_trisock.cpp_FUN_0059e26e
// Address: 0059e26e
// Address Range: [[0059e26e, 0059e304]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_0059e26e(int param_1,char *param_2)

#include "nocturne.h"

void support_trisock_cpp_FUN_0059e26e(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(param_1 + 0x200);
  do {
    cVar1 = *param_2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  iVar2 = support_trisock_cpp_FUN_0059d9d0
                    ((char *)(param_1 + 0x200),param_1 + 0x400,param_1 + 0x604,param_1 + 0x500,0x100
                    );
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0xd28) = 1;
    support_trisock_cpp_FUN_0059ddc0(param_1 + 0xd30,param_1 + 0x400);
    return;
  }
  *(uint *)(param_1 + 0xd28) = 0xffffffff;
  _sprintf((char *)(param_1 + 0xa18),"Invalid URL: %s");
  return;
}
