// Name: shape_superopt.cpp_FUN_005c91e0
// Address: 005c91e0
// Address Range: [[005c91e0, 005c9339]]
// Convention: unknown
// Signature: uint shape_superopt_cpp_FUN_005c91e0(void)

#include "nocturne.h"

uint shape_superopt_cpp_FUN_005c91e0(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  void *dest;
  uint uVar8;
  int in_stack_00000008;
  uint *in_stack_0000000c;
  
  iVar4 = shape_superopt_cpp_FUN_005c8280();
  if (iVar4 == 0) {
    return 0;
  }
  shape_superopt_cpp_FUN_005c9340();
  if (*in_stack_0000000c == 0) {
    return 1;
  }
  uVar8 = 0;
  do {
    iVar4 = uVar8 * 0x60 + in_stack_00000008;
    uVar6 = uVar8 + 1;
    if (uVar6 < *in_stack_0000000c) {
      pdVar7 = (double *)(uVar6 * 0x60 + 0x28 + in_stack_00000008);
      do {
        dVar1 = *(double *)(iVar4 + 0x10) - *pdVar7;
        dVar3 = *(double *)(iVar4 + 0x18) - pdVar7[1];
        dVar2 = *(double *)(iVar4 + 0x20) - pdVar7[2];
        if (SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1) < 1e-10) break;
        uVar6 = uVar6 + 1;
        pdVar7 = pdVar7 + 0xc;
      } while (uVar6 < *in_stack_0000000c);
    }
    if (uVar6 == *in_stack_0000000c) {
      return uVar6 ^ *in_stack_0000000c;
    }
    iVar4 = (uVar6 - uVar8) + 1;
    dest = (void *)(in_stack_00000008 + uVar8 * 0x60);
    iVar5 = shape_superopt_cpp_FUN_005cb3a0();
    if ((iVar5 == 0) || (iVar5 = shape_superopt_cpp_FUN_005cbf90(), iVar5 != 0)) {
      uVar8 = uVar8 + iVar4;
    }
    else {
      iVar5 = shape_superopt_cpp_CondCallDebugMallocUnknownString_FUN_005cbe20();
      if (iVar5 == 0) {
        return 0;
      }
      crt_string_c_memmove_FUN_005fe5e0
                (dest,(void *)(iVar4 * 0x60 + (int)dest),
                 (*in_stack_0000000c - (uVar8 + iVar4)) * 0x60);
      *in_stack_0000000c = *in_stack_0000000c - iVar4;
    }
    if (*in_stack_0000000c <= uVar8) {
      return 1;
    }
  } while( true );
}
