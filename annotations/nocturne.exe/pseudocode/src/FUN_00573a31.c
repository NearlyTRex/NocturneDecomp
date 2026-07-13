// Name: FUN_00573a31
// Address: 00573a31
// Address Range: [[00573a31, 00573afb]]
// Convention: unknown
// Signature: undefined4 FUN_00573a31(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00573a31(uint param_1,uint param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  char in_CL;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_retaddr;
  uint in_stack_00000024;
  
  *(char *)(unaff_EBX + 0x5108244c) = *(char *)(unaff_EBX + 0x5108244c) + in_CL;
  FUN_005638d0();
  FUN_005638d0(param_2);
  if (in_EAX == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_00573afc(in_stack_00000024);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar3 = 0;
  if (_DAT_02de54a8 != 0) {
    iVar1 = FUN_00574000(in_stack_00000024);
    iVar2 = FUN_005635b0(unaff_retaddr * (iVar1 + 1));
    if (iVar2 == 0) {
      FUN_0056c6d0(5);
      return 0xffffffff;
    }
    iVar1 = FUN_00574030(iVar2,in_stack_00000024,(iVar1 + 1) * unaff_EBP);
    if (iVar1 == -1) {
      FUN_005638d0(iVar2);
      return 0xffffffff;
    }
    uVar3 = FUN_00574264(iVar2);
  }
  return uVar3;
}
