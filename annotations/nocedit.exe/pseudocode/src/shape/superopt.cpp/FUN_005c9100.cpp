// Name: shape_superopt.cpp_FUN_005c9100
// Address: 005c9100
// Address Range: [[005c9100, 005c91d8]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c9100()

#include "nocturne.h"

/* Signature: byte shape_superopt.cpp_FUN_005c9100(byte param_1, uint param_2,
   uint param_3) */

double shape_superopt_cpp_FUN_005c9100(void)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  double *pdVar13;
  int in_stack_00000008;
  int in_stack_0000000c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  
  dStack_24 = 0.0;
  dStack_14 = 0.0;
  dStack_1c = 0.0;
  if (in_stack_0000000c != 0) {
    pdVar13 = (double *)(in_stack_00000008 + 0x10);
    do {
      pdVar1 = pdVar13 + 1;
      pdVar2 = pdVar13 + 4;
      pdVar3 = pdVar13 + 3;
      dVar11 = *pdVar13;
      pdVar4 = pdVar13 + 5;
      pdVar5 = pdVar13 + 2;
      pdVar6 = pdVar13 + 5;
      pdVar7 = pdVar13 + 2;
      dVar12 = *pdVar13;
      pdVar8 = pdVar13 + 4;
      pdVar9 = pdVar13 + 1;
      pdVar10 = pdVar13 + 3;
      pdVar13 = pdVar13 + 0xc;
      dStack_1c = (*pdVar3 - dVar11) * (*pdVar1 + *pdVar2) * 0.5 + dStack_1c;
      dStack_24 = (*pdVar8 - *pdVar9) * (*pdVar5 + *pdVar6) * 0.5 + dStack_24;
      dStack_14 = (dVar12 + *pdVar10) * (*pdVar4 - *pdVar7) * 0.5 + dStack_14;
    } while (pdVar13 < (double *)(in_stack_0000000c * 0x60 + 0x10 + in_stack_00000008));
  }
  return SQRT(dStack_14 * dStack_14 + dStack_24 * dStack_24 + dStack_1c * dStack_1c);
}
