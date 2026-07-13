// Name: FUN_004703f0
// Address: 004703f0
// Address Range: [[004703f0, 00470549]]
// Convention: unknown
// Signature: undefined4 FUN_004703f0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004703f0(uint param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  byte auStack_180 [20];
  char acStack_16c [348];
  byte *puStack_10;
  
  puStack_10 = &stack0x0000000c;
  FUN_00563a08(0x1bcbcd0,param_2,&puStack_10);
  puStack_10 = (byte *)0x0;
  FUN_00474c90(auStack_180);
  uVar2 = FUN_004ee370(0x57e65c);
  FUN_00473cb0(auStack_180,uVar2);
  uVar2 = FUN_004ee370("Yes to [A]ll");
  FUN_00473cb0(auStack_180,uVar2);
  uVar2 = FUN_004ee370(0x57e66f);
  FUN_00473cb0(auStack_180,uVar2);
  uVar2 = FUN_004ee370("[C]ancel");
  FUN_00473cb0(auStack_180,uVar2);
  pcVar3 = (char *)FUN_004ee370(0x57e67d);
  pcVar5 = acStack_16c;
  do {
    cVar1 = *pcVar3;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar4 = FUN_00474d70(auStack_180,0x1bcbcd0,0xffffffff);
  if (iVar4 == 0) {
    uVar2 = 1;
  }
  else if (iVar4 == 1) {
    uVar2 = 2;
  }
  else {
    if (iVar4 != 2) {
      FUN_00474cf0(auStack_180,0);
      return 0xffffffff;
    }
    uVar2 = 0;
  }
  FUN_00474cf0(auStack_180,0);
  return uVar2;
}
