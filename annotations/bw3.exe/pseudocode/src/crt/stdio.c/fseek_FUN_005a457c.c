// Name: crt_stdio.c_fseek_FUN_005a457c
// Address: 005a457c
// Address Range: [[005a457c, 005a4762]]
// Convention: __cdecl
// Signature: undefined4 __cdecl crt_stdio_c_fseek_FUN_005a457c(undefined4 *param_1,int param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005a4648) */

uint __cdecl _fseek(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a4)(param_1[4]);
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
      iVar2 = FUN_005a9bc0(param_1);
      if (iVar2 != 0) {
        if ((param_3 == 0) && (param_2 < 0)) {
          setErrno(9);
        }
        (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(param_1[4]);
        return 0xffffffff;
      }
    }
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xeb;
    iVar2 = FUN_005a9cf0(param_1[4],param_2,param_3);
    if (iVar2 == -1) {
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(param_1[4]);
      return 0xffffffff;
    }
    goto LAB_005a474f;
  }
  if (param_3 == 0) {
    iVar2 = FUN_005aa380(param_1[4]);
    iVar2 = FUN_005a4520(param_2 - (iVar2 - param_1[1]),param_1);
    if (iVar2 == 0) goto LAB_005a474f;
    iVar2 = FUN_005a9cf0(param_1[4],param_2,0);
    if (iVar2 == -1) {
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(param_1[4]);
      return 0xffffffff;
    }
  }
  else {
    if (1 < param_3) {
      if (param_3 != 2) {
        setErrno(9);
        (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(param_1[4]);
        return 0xffffffff;
      }
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xef;
      uVar1 = *(uint *)(param_1[2] + 8);
      param_1[1] = 0;
      *param_1 = uVar1;
      iVar2 = FUN_005a9cf0(param_1[4],param_2,2);
      if (iVar2 == -1) {
        (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(param_1[4]);
        return 0xffffffff;
      }
      goto LAB_005a474f;
    }
    iVar2 = param_1[1];
    iVar3 = FUN_005a4520(param_2,param_1);
    if (iVar3 == 0) goto LAB_005a474f;
    iVar2 = FUN_005a9cf0(param_1[4],param_2 - iVar2,param_3);
    if (iVar2 == -1) {
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(param_1[4]);
      return 0xffffffff;
    }
  }
  FUN_005a4564(param_1);
LAB_005a474f:
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(param_1[4]);
  return 0;
}
