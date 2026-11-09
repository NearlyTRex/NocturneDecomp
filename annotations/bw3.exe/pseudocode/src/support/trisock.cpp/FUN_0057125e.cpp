// Name: support_trisock.cpp_FUN_0057125e
// Address: 0057125e
// Address Range: [[0057125e, 005712f4]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_0057125e(int param_1,char *param_2)

#include "nocturne.h"

void support_trisock_cpp_FUN_0057125e(int param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar1 = (char *)(param_1 + 0x200);
  pcVar4 = pcVar1;
  do {
    cVar2 = *param_2;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = param_2[1];
    param_2 = param_2 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  iVar3 = support_trisock_cpp_FUN_005709c0
                    (pcVar1,param_1 + 0x400,param_1 + 0x604,param_1 + 0x500,0x100);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0xd28) = 1;
    support_trisock_cpp_FUN_00570db0(param_1 + 0xd30,param_1 + 0x400);
    return;
  }
  *(uint *)(param_1 + 0xd28) = 0xffffffff;
  FUN_005a28c0(param_1 + 0xa18,"Invalid URL: %s",pcVar1);
  return;
}
