// Name: unkafter_trisock.cpp_FUN_00579550
// Address: 00579550
// Address Range: [[00579550, 0057971a]]
// Convention: unknown
// Signature: bool unkafter_trisock_cpp_FUN_00579550(undefined4 *param_1,char *param_2)

#include "nocturne.h"

bool unkafter_trisock_cpp_FUN_00579550(uint *param_1,char *param_2)

{
  byte *puVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcStack_14;
  int iStack_10;
  int iStack_c;
  char *pcStack_8;
  
  memset(param_2,0,0x2b8);
  if (param_1 == (uint *)0x0) {
    return false;
  }
  _strncpy(param_2,(char *)*param_1,0x7f);
  iVar6 = 0;
  iStack_10 = 0;
  pcStack_8 = param_2 + 0x84;
  do {
    while( true ) {
      puVar2 = (uint *)(param_1[1] + iStack_10);
      if ((char *)*puVar2 == (char *)0x0) goto LAB_005795b3;
      iStack_10 = iStack_10 + 4;
      _strncpy(pcStack_8,(char *)*puVar2,0x7f);
      iVar5 = _strcmp(pcStack_8,param_2);
      if (iVar5 != 0) break;
LAB_0057964b:
      if (3 < iVar6) goto LAB_005795b3;
    }
    iVar5 = 0;
    pcVar4 = param_2 + 0x84;
    if (0 < iVar6) {
      do {
        iVar3 = _strcmp(pcStack_8,pcVar4);
        if (iVar3 == 0) break;
        iVar5 = iVar5 + 1;
        pcVar4 = pcVar4 + 0x80;
      } while (iVar5 < iVar6);
    }
    if (iVar5 < iVar6) goto LAB_0057964b;
    pcStack_8 = pcStack_8 + 0x80;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
LAB_005795b3:
  *(int *)(param_2 + 0x80) = iVar6;
  if ((*(short *)(param_1 + 2) == 2) && (*(short *)((int)param_1 + 10) == 4)) {
    iVar6 = 0;
    iStack_c = 0;
    pcStack_14 = param_2 + 0x288;
    do {
      puVar1 = *(byte **)(param_1[3] + iStack_c);
      if (puVar1 == (byte *)0x0) break;
      iStack_c = iStack_c + 4;
      iVar5 = 0;
      support_trisock_cpp_buildIPAddress_FUN_00578d60
                (pcStack_14,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
      if (0 < iVar6) {
        pcVar4 = param_2;
        do {
          if (*(int *)(param_2 + 0x288 + iVar6 * 4) == *(int *)(pcVar4 + 0x288)) break;
          iVar5 = iVar5 + 1;
          pcVar4 = pcVar4 + 4;
        } while (iVar5 < iVar6);
      }
      if (iVar6 <= iVar5) {
        pcStack_14 = pcStack_14 + 4;
        iVar6 = iVar6 + 1;
      }
    } while (iVar6 < 0xc);
    *(int *)(param_2 + 0x284) = iVar6;
  }
  return 0 < *(int *)(param_2 + 0x284);
}
