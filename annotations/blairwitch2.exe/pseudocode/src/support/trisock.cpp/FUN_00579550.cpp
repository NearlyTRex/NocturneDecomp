// Name: support_trisock.cpp_FUN_00579550
// Address: 00579550
// Address Range: [[00579550, 0057971a]]
// Convention: unknown
// Signature: bool support_trisock_cpp_FUN_00579550(undefined4 *param_1,char *param_2)

#include "nocturne.h"

bool support_trisock_cpp_FUN_00579550(uint *param_1,char *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  char *str2;
  int iVar5;
  int in_stack_0000001c;
  int iStack_10;
  int iStack_c;
  char *pcStack_8;
  
  memset(param_2,0,0x2b8);
  if (param_1 == (uint *)0x0) {
    return false;
  }
  _strncpy(param_2,(char *)*param_1,0x7f);
  iVar5 = 0;
  iStack_10 = 0;
  pcStack_8 = param_2 + 0x84;
  do {
    while( true ) {
      puVar2 = (uint *)(param_1[1] + iStack_10);
      if ((char *)*puVar2 == (char *)0x0) goto LAB_005795b3;
      iStack_10 = iStack_10 + 4;
      _strncpy(pcStack_8,(char *)*puVar2,0x7f);
      iVar4 = _strcmp(pcStack_8,param_2);
      if (iVar4 != 0) break;
LAB_0057964b:
      if (3 < iVar5) goto LAB_005795b3;
    }
    iVar4 = 0;
    str2 = param_2 + 0x84;
    if (0 < iVar5) {
      do {
        iVar3 = _strcmp(pcStack_8,str2);
        if (iVar3 == 0) break;
        iVar4 = iVar4 + 1;
        str2 = str2 + 0x80;
      } while (iVar4 < iVar5);
    }
    if (iVar4 < iVar5) goto LAB_0057964b;
    pcStack_8 = pcStack_8 + 0x80;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
LAB_005795b3:
  *(int *)(param_2 + 0x80) = iVar5;
  if ((*(short *)(param_1 + 2) == 2) && (*(short *)((int)param_1 + 10) == 4)) {
    iVar5 = 0;
    iStack_c = 0;
    do {
      pbVar1 = *(byte **)(param_1[3] + iStack_c);
      if (pbVar1 == (byte *)0x0) break;
      iStack_c = iStack_c + 4;
      iVar4 = 0;
      support_trisock_cpp_buildIPAddress_FUN_00578d60
                ((uint8_t *)(param_2 + 0x288),(uint)*pbVar1,(uint)pbVar1[1],(uint)pbVar1[2],
                 (uint)pbVar1[3]);
      if (0 < iVar5) {
        iVar3 = in_stack_0000001c;
        do {
          if (*(int *)(pcStack_8 + iVar5 * 4) == *(int *)(iVar3 + 0x288)) break;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar4 < iVar5);
      }
      if (iVar5 <= iVar4) {
        iVar5 = iVar5 + 1;
      }
    } while (iVar5 < 0xc);
    *(int *)(param_2 + 0x284) = iVar5;
  }
  return 0 < *(int *)(param_2 + 0x284);
}
