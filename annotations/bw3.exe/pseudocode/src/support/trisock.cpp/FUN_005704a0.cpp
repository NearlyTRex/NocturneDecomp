// Name: support_trisock.cpp_FUN_005704a0
// Address: 005704a0
// Address Range: [[005704a0, 00570745]]
// Convention: unknown
// Signature: undefined4 support_trisock_cpp_FUN_005704a0(undefined4 param_1,int *param_2,undefined4 param_3,code *param_4)

#include "nocturne.h"

uint support_trisock_cpp_FUN_005704a0(uint param_1,int *param_2,uint param_3,code *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint auStack_1128 [516];
  char acStack_918 [15];
  char acStack_909 [2033];
  char acStack_118 [256];
  int iStack_18;
  uint uStack_14;
  
  support_trisock_cpp_FUN_00570320(auStack_1128,param_1);
  iVar2 = support_trisock_cpp_FUN_00570420(auStack_1128,acStack_918,0x800,param_4,param_3);
  if (iVar2 != 0) {
    pcVar5 = "Unknown error";
    pcVar6 = acStack_118;
    iStack_18 = -1;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    sscanf(acStack_918,(char *)0x5d69e6);
    if (iStack_18 == -1) {
      (*param_4)(1,"Invalid HTTP header returned by server");
      return 0;
    }
    if (399 < iStack_18) {
      FUN_005a28c0(acStack_918,"%d: %s",iStack_18,acStack_118);
      (*param_4)(1,acStack_918);
      return 0;
    }
    if (299 < iStack_18) {
      FUN_005a28c0(acStack_918,"Not implemented: %d: %s",iStack_18,acStack_118);
      (*param_4)(1,acStack_918);
      return 0;
    }
    pcVar5 = "Receiving document";
    pcVar6 = acStack_118;
    uStack_14 = 0xffffffff;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    while (iVar2 = support_trisock_cpp_FUN_00570420
                             (auStack_1128,acStack_918,0x800,param_4,acStack_118), iVar2 != 0) {
      if (acStack_918[0] == '\0') {
        if ((int)uStack_14 < 0) {
          auStack_1128[0] = 1;
        }
        iVar2 = 0;
        while( true ) {
          if ((uStack_14 < 0x80000000) && ((int)uStack_14 <= iVar2)) {
            return 1;
          }
          uVar3 = support_trisock_cpp_FUN_00570350(auStack_1128,param_4,acStack_118);
          if ((int)uVar3 < 0) {
            if (uVar3 != 0xfffffffe) {
              return 0;
            }
            return 1;
          }
          iVar4 = (**(code **)(*param_2 + 4))(param_2,uVar3 & 0xff);
          if (iVar4 == -1) break;
          if (iVar4 < 0) {
            return 0;
          }
          iVar2 = iVar2 + 1;
        }
        return 1;
      }
      iVar2 = _strnicmp(acStack_918,"Content-length:",0xf);
      if (iVar2 == 0) {
        sscanf(acStack_909,(char *)0x5d6a61);
      }
    }
  }
  return 0;
}
