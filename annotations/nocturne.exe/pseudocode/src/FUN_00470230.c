// Name: FUN_00470230
// Address: 00470230
// Address Range: [[00470230, 0047030f]]
// Convention: unknown
// Signature: bool FUN_00470230(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

bool FUN_00470230(uint param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  byte local_17c [20];
  char local_168 [348];
  byte *local_c;
  
  local_c = &stack0x0000000c;
  FUN_00563a08(0x1bcb4d0,param_2,&local_c);
  local_c = (byte *)0x0;
  FUN_00474c90(local_17c);
  uVar2 = FUN_004ee370("[Y]es, I know what I'm doing and I hate these annoying prompts.");
  FUN_00473cb0(local_17c,uVar2);
  uVar2 = FUN_004ee370("[N]o, please, I didn't mean to do it!");
  FUN_00473cb0(local_17c,uVar2);
  pcVar3 = (char *)FUN_004ee370(&DAT_0057e64b);
  pcVar5 = local_168;
  do {
    cVar1 = *pcVar3;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar4 = FUN_00474d70(local_17c,0x1bcb4d0,0xffffffff);
  FUN_00474cf0(local_17c,0);
  return iVar4 == 0;
}
