// Name: FUN_00518430
// Address: 00518430
// Address Range: [[00518430, 00518674]]
// Convention: unknown
// Signature: void FUN_00518430(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00518430(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  FUN_004da4e0(param_1 + 0x206e8);
  uVar2 = FUN_0040c4f0("CFlintlock",_DAT_02d0c150);
  pcVar3 = (char *)FUN_0040c840(uVar2);
  if (pcVar3 == (char *)0x0) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0x39f;
    FUN_004e4330("Out of memory!");
  }
  pcVar4 = "Prye's flintlock";
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  FUN_004da880(param_1 + 0x206e8,pcVar3,1);
  FUN_004dbb40(param_1 + 0x206e8,0,5,1);
  uVar2 = FUN_0040c4f0("CHolycross",_DAT_02d0c150);
  pcVar3 = (char *)FUN_0040c840(uVar2);
  if (pcVar3 == (char *)0x0) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0x3ab;
    FUN_004e4330("Out of memory!");
  }
  pcVar4 = "Prye's holy cross";
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  FUN_004da880(param_1 + 0x206e8,pcVar3,1);
  uVar2 = FUN_0040c4f0("CLightActor",DAT_007e1a50);
  pcVar3 = (char *)FUN_0040c840(uVar2);
  if (pcVar3 == (char *)0x0) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0x3b3;
    FUN_004e4330("Out of memory!");
  }
  pcVar4 = "Prye's lantern";
  pcVar3[0x6e8] = '\x02';
  pcVar3[0x6e9] = '\0';
  pcVar3[0x6ea] = '\0';
  pcVar3[0x6eb] = '\0';
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  (*(code *)**(uint **)(pcVar3 + 0x154))(pcVar3);
  FUN_004da880(param_1 + 0x206e8,pcVar3,1);
  uVar2 = FUN_0040c4f0("CBoxActor",DAT_007e17b4);
  pcVar3 = (char *)FUN_0040c840(uVar2);
  if (pcVar3 == (char *)0x0) {
    _DAT_01d71de0 = "..\\core\\prye.cpp";
    _DAT_01d71de4 = 0x3bd;
    FUN_004e4330("Out of memory!");
  }
  FUN_004625f0(pcVar3 + 0x158,"journal.kfm");
  pcVar4 = "Prye's journal";
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  FUN_004da880(param_1 + 0x206e8,pcVar3,1);
  return;
}
