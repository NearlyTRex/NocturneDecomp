// Name: shape_superopt.cpp_FUN_005cbf20
// Address: 005cbf20
// Address Range: [[005cbf20, 005cbf89]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_FUN_005cbf20(void)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_FUN_005cbf20(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar6;
  uint uVar7;
  double *pdVar8;
  int in_stack_00000008;
  uint in_stack_0000000c;
  uint uVar5;
  
  if (in_stack_0000000c != 0) {
    pdVar8 = (double *)(in_stack_00000008 + 0x10);
    uVar5 = in_stack_0000000c - 1;
    uVar6 = 0;
    do {
      iVar4 = uVar5 * 0x60;
      dVar1 = *pdVar8 - *(double *)(in_stack_00000008 + 0x28 + iVar4);
      dVar3 = pdVar8[1] - *(double *)(in_stack_00000008 + 0x30 + iVar4);
      dVar2 = pdVar8[2] - *(double *)(in_stack_00000008 + 0x38 + iVar4);
      if (9.9999999999999995e-08 < SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1)) {
        return 0;
      }
      uVar7 = uVar6 + 1;
      pdVar8 = pdVar8 + 0xc;
      uVar5 = uVar6;
      uVar6 = uVar7;
    } while (uVar7 < in_stack_0000000c);
  }
  return 1;
}
