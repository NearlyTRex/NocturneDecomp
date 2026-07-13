// Name: FUN_00470310
// Address: 00470310
// Address Range: [[00470310, 004703ef]]
// Convention: unknown
// Signature: bool FUN_00470310(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

bool FUN_00470310(uint param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  byte auStack_17c [20];
  char acStack_168 [348];
  byte *puStack_c;
  
  puStack_c = &stack0x0000000c;
  FUN_00563a08(0x1bcb8d0,param_2,&puStack_c);
  puStack_c = (byte *)0x0;
  FUN_00474c90(auStack_17c);
  uVar2 = FUN_004ee370(0x57e64e);
  FUN_00473cb0(auStack_17c,uVar2);
  uVar2 = FUN_004ee370(0x57e654);
  FUN_00473cb0(auStack_17c,uVar2);
  pcVar3 = (char *)FUN_004ee370(0x57e659);
  pcVar5 = acStack_168;
  do {
    cVar1 = *pcVar3;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar4 = FUN_00474d70(auStack_17c,0x1bcb8d0,0xffffffff);
  FUN_00474cf0(auStack_17c,0);
  return iVar4 == 0;
}
