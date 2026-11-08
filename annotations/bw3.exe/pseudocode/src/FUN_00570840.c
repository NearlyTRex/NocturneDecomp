// Name: FUN_00570840
// Address: 00570840
// Address Range: [[00570840, 005709b5]]
// Convention: unknown
// Signature: undefined4 FUN_00570840(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,int *param_5,undefined4 param_6,code *param_7)

#include "nocturne.h"

uint FUN_00570840(uint param_1,uint param_2,ushort param_3,uint param_4,int *param_5,uint param_6,code *param_7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char acStack_814 [2048];
  byte auStack_14 [4];
  
  bVar8 = 0;
  pcVar7 = acStack_814;
  if (param_7 == (code *)0x0) {
    param_7 = (code *)&UNK_0056fee0;
  }
  pcVar6 = "Requesting document";
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar2 = (*param_7)(0,acStack_814);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = 0;
  uVar3 = (**(code **)(*param_5 + 0x18))(param_5);
  while( true ) {
    iVar4 = (**(code **)(*param_5 + 4))(param_5);
    if (iVar4 < 0) break;
    iVar2 = iVar2 + 1;
  }
  (**(code **)(*param_5 + 0x14))(param_5,uVar3,0);
  FUN_005a28c0(acStack_814,"POST %s HTTP/1.0\r\nHost: %s:%d\r\nContent-length: %d\r\n\r\n",param_4,param_2,param_3,iVar2);
  uVar5 = 0xffffffff;
  pcVar7 = acStack_814;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  iVar4 = FUN_0056fbb0(param_1,acStack_814,~uVar5 - 1,0);
  if (iVar4 == 0) goto LAB_00570959;
  while( true ) {
    if (iVar2 < 1) {
      uVar3 = FUN_005704a0(param_1,param_6,"Receiving server response",param_7);
      return uVar3;
    }
    iVar4 = (**(code **)(*param_5 + 4))(param_5);
    if (iVar4 < 0) break;
    auStack_14[0] = (byte)iVar4;
    iVar4 = FUN_0056fbb0(param_1,auStack_14,1,0);
    if (iVar4 == 0) {
LAB_00570959:
      iVar4 = (*param_7)(0,"Error communicating with server");
      if (iVar4 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = iVar2 + -1;
    }
  }
  (*param_7)(1,"Internal I/O error");
  return 0;
}
