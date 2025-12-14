// Name: core_setedit.cpp_FUN_005801b0
// Address: 005801b0
// Address Range: [[005801b0, 00580309]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_005801b0()

#include "nocturne.h"

/* Signature: byte core_setedit.cpp_FUN_005801b0(uint param_1, uint param_2,
   uint param_3) */

bool core_setedit_cpp_FUN_005801b0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_stack_00000008;
  int in_stack_00000010;
  
  core_setedit_cpp_SomethingMemoryConstructorMaybe_FUN_00580310();
  piVar2 = (int *)(DAT_03659384 + in_stack_00000010 * 0x4b030);
  iVar1 = in_stack_00000008[1] - piVar2[1];
  iVar3 = *in_stack_00000008 - *piVar2;
  iVar6 = in_stack_00000008[2] - piVar2[2];
  iVar5 = ((uint)((longlong)piVar2[5] * (longlong)iVar3) >> 0x10 |
          (int)((ulonglong)((longlong)piVar2[5] * (longlong)iVar3) >> 0x20) << 0x10) +
          ((uint)((longlong)piVar2[8] * (longlong)iVar1) >> 0x10 |
          (int)((ulonglong)((longlong)piVar2[8] * (longlong)iVar1) >> 0x20) << 0x10) +
          ((uint)((longlong)piVar2[0xb] * (longlong)iVar6) >> 0x10 |
          (int)((ulonglong)((longlong)piVar2[0xb] * (longlong)iVar6) >> 0x20) << 0x10);
  if ((0 < iVar5) &&
     (iVar4 = ((uint)((longlong)piVar2[3] * (longlong)iVar3) >> 0x10 |
              (int)((ulonglong)((longlong)piVar2[3] * (longlong)iVar3) >> 0x20) << 0x10) +
              ((uint)((longlong)piVar2[6] * (longlong)iVar1) >> 0x10 |
              (int)((ulonglong)((longlong)piVar2[6] * (longlong)iVar1) >> 0x20) << 0x10) +
              ((uint)((longlong)piVar2[9] * (longlong)iVar6) >> 0x10 |
              (int)((ulonglong)((longlong)piVar2[9] * (longlong)iVar6) >> 0x20) << 0x10),
     iVar4 < iVar5)) {
    if ((-iVar5 < iVar4) &&
       ((iVar1 = ((uint)((longlong)piVar2[4] * (longlong)iVar3) >> 0x10 |
                 (int)((ulonglong)((longlong)piVar2[4] * (longlong)iVar3) >> 0x20) << 0x10) +
                 ((uint)((longlong)piVar2[7] * (longlong)iVar1) >> 0x10 |
                 (int)((ulonglong)((longlong)piVar2[7] * (longlong)iVar1) >> 0x20) << 0x10) +
                 ((uint)((longlong)piVar2[10] * (longlong)iVar6) >> 0x10 |
                 (int)((ulonglong)((longlong)piVar2[10] * (longlong)iVar6) >> 0x20) << 0x10),
        iVar1 < iVar5 && (-iVar5 < iVar1)))) {
      iVar3 = (int)(((longlong)iVar4 * 0xa0) / (longlong)iVar5) + 0xa0;
      iVar6 = (int)(((longlong)iVar1 * 0x78) / (longlong)iVar5);
      iVar1 = iVar6 + 0x78;
      if ((0 < iVar3) && (((0 < iVar1 && (iVar3 < 0x13f)) && (iVar1 < 0xef)))) {
        return iVar5 + -0x100 < piVar2[iVar3 * 0xf0 + iVar6 + 0x84];
      }
    }
  }
  return false;
}
