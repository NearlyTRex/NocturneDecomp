// Name: unkafter_bmppuzzl.cpp_FUN_00412ee0
// Address: 00412ee0
// Address Range: [[00412ee0, 004131ac]]
// Convention: unknown
// Signature: void unkafter_bmppuzzl_cpp_FUN_00412ee0(void *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void unkafter_bmppuzzl_cpp_FUN_00412ee0(void *param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  float fVar9;
  char acStack_54c [256];
  char acStack_44c [256];
  char acStack_34c [256];
  char acStack_24c [256];
  char acStack_14c [256];
  char acStack_4c [12];
  char acStack_40 [12];
  char acStack_34 [12];
  char acStack_28 [16];
  int iStack_18;
  
  bVar8 = 0;
  FUN_005a28c0(acStack_28,&DAT_005b67ca,param_4);
  FUN_005a28c0(acStack_4c,&DAT_005b67cd,param_5);
  FUN_005a28c0(acStack_40,&DAT_005b67d0,param_6);
  FUN_005a28c0(acStack_34,"AR%d_",*(uint *)((int)param_1 + 0xc04));
  pcVar5 = acStack_34;
  pcVar6 = acStack_24c;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar5 = acStack_28;
  iVar4 = -1;
  pcVar6 = acStack_24c;
  do {
    pcVar7 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar5 = acStack_4c;
  iVar4 = -1;
  pcVar6 = acStack_24c;
  do {
    pcVar7 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar5 = acStack_40;
  iVar4 = -1;
  pcVar6 = acStack_24c;
  do {
    pcVar7 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar6 = &DAT_005b67d9;
  iVar4 = -1;
  pcVar5 = acStack_24c;
  do {
    pcVar7 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar5 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iStack_18 = param_3 - *(int *)((int)param_1 + 0xc18);
  fVar9 = ABS((float)iStack_18);
  FUN_005a28c0
            (acStack_34c,&DAT_005b67de,ABS((double)(param_2 - *(int *)((int)param_1 + 0xc14))),fVar9
            );
  FUN_005a28c0(acStack_44c,&DAT_005b67e1,(double)fVar9);
  pcVar6 = &DAT_005b67e4;
  pcVar5 = acStack_14c;
  do {
    cVar1 = *pcVar6;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar5 = acStack_34c;
  iVar4 = -1;
  pcVar6 = acStack_14c;
  do {
    pcVar7 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar6 = &DAT_005b67f0;
  pcVar5 = acStack_54c;
  do {
    cVar1 = *pcVar6;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar5 = acStack_44c;
  iVar4 = -1;
  pcVar6 = acStack_54c;
  do {
    pcVar7 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar2 = core_sound_cpp_CSound_playSound_FUN_005609b0(0x02CF5680,param_1,acStack_14c);
  *(uint *)((int)param_1 + 0xc0c) = uVar2;
  uVar2 = core_sound_cpp_CSound_playSound_FUN_005609b0(0x02CF5680,param_1,acStack_54c);
  *(uint *)((int)param_1 + 0xc10) = uVar2;
  uVar3 = sound_sndmain_cpp_FUN_00556240();
  *(uint *)((int)param_1 + 0xc08) = uVar3;
  return;
}
