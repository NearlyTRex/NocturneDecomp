// Name: core_dcamera.cpp_FUN_004451a0
// Address: 004451a0
// Address Range: [[004451a0, 00445304]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_004451a0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_FUN_004451a0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  
  piVar5 = (int *)(param_1 * 0xf00 + 0x7f7378 + param_2 * 0xc);
  pcVar6 = (char *)(param_2 + param_1 * 0x140 + 0xa9d078);
  puVar1 = (uint *)(param_1 * 0x500 + 0x146ba10 + param_2 * 4);
  puVar4 = (uint *)(*(int *)(&DAT_01bd4260 + (param_1 << (DAT_012b0660 & 0x1f)) * 4) +
                   (param_2 << (DAT_012b0660 & 0x1f)) * 4);
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    if ((((*puVar4 < *puVar1) &&
         (uVar7 = *piVar5 - *_DAT_014b8458,
         (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) < _DAT_014b8458[3])) &&
        (uVar3 = piVar5[1] - _DAT_014b8458[1],
        (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < _DAT_014b8458[3])) &&
       (uVar8 = piVar5[2] - _DAT_014b8458[2],
       (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) < _DAT_014b8458[3])) {
      iVar2 = uVar8 * uVar8 + uVar3 * uVar3 + uVar7 * uVar7;
      if (iVar2 < _DAT_014b8458[4]) {
        *pcVar6 = *pcVar6 + (char)((ulonglong)
                                   ((longlong)(_DAT_014b8458[4] - iVar2 >> 0x10) *
                                   (longlong)_DAT_014b8458[5]) >> 0x10);
      }
    }
    piVar5 = piVar5 + 3;
    pcVar6 = pcVar6 + 1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + (1 << (DAT_012b0660 & 0x1f));
  }
  return;
}
