// Name: FUN_004feff0
// Address: 004feff0
// Address Range: [[004feff0, 004ff163]]
// Convention: unknown
// Signature: void FUN_004feff0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004feff0(uint *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char local_70 [100];
  
  bVar6 = 0;
  param_1[0x10] = 0;
  *(byte *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0xbf800000;
  param_1[0x12] = 0xbf800000;
  *param_1 = 0;
  iVar2 = _DAT_01cae0e8;
  param_1[1] = 0;
  param_1[3] = *(uint *)(iVar2 * 4 + 0x1cae0d8);
  iVar2 = 0x01C775EC;
  param_1[4] = 1;
  *(uint *)(iVar2 + 0x22c) = 1;
  *(uint *)(iVar2 + 0x230) = 1;
  *(uint *)(iVar2 + 0x228) = 0;
  _DAT_01e56c20 = 0;
  param_1[0x113] = 0xbf800000;
  param_1[0x114] = 0xffffffff;
  iVar2 = 0x01E57284 + 0x14cd08;
  param_1[0x115] = 0;
  _DAT_01e56c28 = 0;
  param_1[5] = 0;
  splitpath(iVar2,0,0,local_70,0);
  pcVar3 = ".wav";
  iVar2 = -1;
  pcVar5 = local_70;
  do {
    pcVar4 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = pcVar5 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar2 = _stricmp(local_70,"smill.wav");
  if (iVar2 == 0) {
    pcVar3 = "@0.85";
    iVar2 = -1;
    pcVar5 = local_70;
    do {
      pcVar4 = pcVar5;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar4 = pcVar5 + (uint)bVar6 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar4;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + -1;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  iVar2 = _stricmp(local_70,"town.wav");
  if (iVar2 == 0) {
    pcVar3 = "@0.85";
    iVar2 = -1;
    pcVar5 = local_70;
    do {
      pcVar4 = pcVar5;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar4 = pcVar5 + (uint)bVar6 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar4;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + -1;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  core_sound_cpp_CSound_playAmbientSound_FUN_0052e9d0(0x02DC9450,local_70);
  param_1[6] = 0;
  return;
}
