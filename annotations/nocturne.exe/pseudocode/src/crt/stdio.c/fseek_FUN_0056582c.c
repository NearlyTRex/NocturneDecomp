// Name: crt_stdio.c_fseek_FUN_0056582c
// Address: 0056582c
// Address Range: [[0056582c, 00565a12]]
// Convention: __cdecl
// Signature: undefined4 __cdecl crt_stdio_c_fseek_FUN_0056582c(undefined4 *param_1,int param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005658f8) */

uint __cdecl _fseek(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  (*(code *)PTR_FUN_005c1ac0)(param_1[4]);
  if ((*(byte *)(param_1 + 3) & 6) != 0) {
    if ((*(byte *)((int)param_1 + 0xd) & 0x10) == 0) {
      if (param_3 == 1) {
        param_2 = param_2 - param_1[1];
      }
      uVar1 = *(uint *)(param_1[2] + 8);
      param_1[1] = 0;
      *param_1 = uVar1;
    }
    else {
      iVar2 = FUN_00568890(param_1);
      if (iVar2 != 0) {
        if ((param_3 == 0) && (param_2 < 0)) {
          FUN_00568e80(9);
        }
        (*(code *)PTR_FUN_005c1ac4)(param_1[4]);
        return 0xffffffff;
      }
    }
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xeb;
    iVar2 = FUN_005689c0(param_1[4],param_2,param_3);
    if (iVar2 == -1) {
      (*(code *)PTR_FUN_005c1ac4)(param_1[4]);
      return 0xffffffff;
    }
    goto LAB_005659ff;
  }
  if (param_3 == 0) {
    iVar2 = FUN_0056bc10(param_1[4]);
    iVar2 = FUN_005657d0(param_2 - (iVar2 - param_1[1]),param_1);
    if (iVar2 == 0) goto LAB_005659ff;
    iVar2 = FUN_005689c0(param_1[4],param_2,0);
    if (iVar2 == -1) {
      (*(code *)PTR_FUN_005c1ac4)(param_1[4]);
      return 0xffffffff;
    }
  }
  else {
    if (1 < param_3) {
      if (param_3 != 2) {
        FUN_00568e80(9);
        (*(code *)PTR_FUN_005c1ac4)(param_1[4]);
        return 0xffffffff;
      }
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xef;
      uVar1 = *(uint *)(param_1[2] + 8);
      param_1[1] = 0;
      *param_1 = uVar1;
      iVar2 = FUN_005689c0(param_1[4],param_2,2);
      if (iVar2 == -1) {
        (*(code *)PTR_FUN_005c1ac4)(param_1[4]);
        return 0xffffffff;
      }
      goto LAB_005659ff;
    }
    iVar2 = param_1[1];
    iVar3 = FUN_005657d0(param_2,param_1);
    if (iVar3 == 0) goto LAB_005659ff;
    iVar2 = FUN_005689c0(param_1[4],param_2 - iVar2,param_3);
    if (iVar2 == -1) {
      (*(code *)PTR_FUN_005c1ac4)(param_1[4]);
      return 0xffffffff;
    }
  }
  FUN_00565814(param_1);
LAB_005659ff:
  (*(code *)PTR_FUN_005c1ac4)(param_1[4]);
  return 0;
}
