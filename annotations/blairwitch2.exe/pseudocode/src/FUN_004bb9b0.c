// Name: FUN_004bb9b0
// Address: 004bb9b0
// Address Range: [[004bb9b0, 004bbf66]]
// Convention: unknown
// Signature: void FUN_004bb9b0(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bb9b0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  char *pcVar8;
  uint uVar9;
  char local_490 [520];
  byte local_288 [260];
  byte local_184 [256];
  byte local_84 [4];
  byte local_80 [60];
  byte local_44 [40];
  byte local_1c [8];
  int local_14;
  
  if (*(int *)(param_1 + 0x244) != 0) {
    uVar3 = FUN_0050fe80("GUnable to save during cinematic" + 1);
    FUN_0047be40(0x01C25594,uVar3);
    return;
  }
  FUN_005ba1e0("save\\$$SAVE$$.TMP");
  FUN_005b9e58();
  iVar2 = FUN_005b8130(local_184,&DAT_005d8427);
  if ((iVar2 == 0) || (iVar2 = FUN_005b8130(local_184,&DAT_005d842b), iVar2 == 0)) {
    pcVar6 = local_490;
    pcVar5 = &DAT_01cb7b50;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  else {
    local_490[0] = '\0';
  }
  pcVar5 = local_490;
  pcVar8 = local_490;
  pcVar6 = local_490;
  if (param_2 == (char *)0x0) {
    uVar9 = 1;
    uVar7 = 0x5d8430005d8434;
    uVar3 = FUN_0050fe80();
    iVar2 = FUN_0047d270(0x01C25594,uVar3,uVar7,pcVar8,uVar9);
    if (iVar2 == 0) {
      return;
    }
    FUN_005b9e58();
    FUN_005b7790();
  }
  else {
    do {
      cVar1 = *param_2;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  FUN_005b9c20(&DAT_005d844a);
  DAT_007bc040 = 1;
  local_14 = 1;
  iVar2 = FUN_005b910c("save\\$$SAVE$$.TMP",&DAT_005d844f);
  if (iVar2 == 0) {
    uVar3 = FUN_0050fe80("Warning!  Your game didn't save.");
    FUN_0047be40(0x01C25594,uVar3);
    DAT_007bc040 = 0;
    return;
  }
  FUN_005b8010(iVar2,"// .NOC file version\n");
  FUN_005b8010();
  FUN_004fbce0(0x01D182F0,iVar2);
  FUN_005b8010(iVar2,"// Hero count, local hero index, hero list\n");
  FUN_005b8010(iVar2,"%d, %d\n",_DAT_01cedee0,_DAT_01cedef4);
  iVar4 = 0;
  if (0 < _DAT_01cedee0) {
    do {
      iVar4 = iVar4 + 1;
      FUN_005b8010();
    } while (iVar4 < _DAT_01cedee0);
  }
  FUN_00492060(0x01C38BC0,iVar2);
  FUN_0052a400(0x01E65CD0,iVar2);
  FUN_0049eb00(0x01C3DEB4,iVar2);
  FUN_005b8010(iVar2,"Light state\n");
  FUN_005349d0(0x01E661B8,&DAT_01cb7c54);
  iVar4 = 1;
  FUN_005b8010();
  if (0 < _DAT_01cb7c54) {
    do {
      iVar4 = iVar4 + 1;
      FUN_005b8010();
    } while (iVar4 <= _DAT_01cb7c54);
  }
  FUN_005b8010(iVar2,"Game stats\n");
  FUN_005b8010(iVar2,"%f,%f,%d,%d\n",(double)*(float *)(param_1 + 0x270),
               (double)*(float *)(param_1 + 0x268),*(uint *)(param_1 + 0x26c),
               *(uint *)(param_1 + 0x274));
  FUN_00534a10(0x01E661B8,iVar2);
  FUN_004a6470(0x01CAF56C,iVar2);
  FUN_005b89c0(iVar2);
  DAT_007bc040 = 0;
  if (local_14 != 0) {
    FUN_0057cd50(local_44);
    FUN_0057db80(local_1c);
    uVar3 = FUN_0050fe80("Warning!  Your game didn't save.");
    iVar2 = FUN_0057d320(local_44,"save\\$$SAVE$$.TMP");
    if (iVar2 == 0) {
      FUN_0047be40(0x01C25594,uVar3);
      FUN_0057dc10(local_1c,0);
      FUN_0057cec0(local_44,0);
      return;
    }
    FUN_005b7790(local_288,"%s\\%s",&DAT_005d851c,local_490);
    iVar2 = FUN_0057dd90();
    if (iVar2 == 0) {
      FUN_0047be40(0x01C25594,uVar3);
      FUN_0057dc10(local_1c,0);
      FUN_0057cec0(local_44,0);
      return;
    }
    FUN_0057dca0();
    FUN_00434770();
    FUN_004347c0(local_84);
    FUN_00434810();
    FUN_00434910(local_84,local_1c);
    FUN_0057d180(local_44);
    FUN_0057dd60(local_1c);
    FUN_00434270(local_80,0);
    FUN_00433e90(local_84,1);
    FUN_0057dc10(local_1c,0);
    FUN_0057cec0(local_44,0);
  }
  FUN_005ba1e0("save\\$$SAVE$$.TMP");
  pcVar5 = &DAT_01cb7b50;
  do {
    cVar1 = *pcVar6;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  return;
}
