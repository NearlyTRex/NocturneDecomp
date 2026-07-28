// Name: crt_heap.c_InsertHeapBlockInOrder_FUN_00568ce0
// Address: 00568ce0
// Address Range: [[00568ce0, 00568d56]]
// Convention: unknown
// Signature: int * crt_heap_c_InsertHeapBlockInOrder_FUN_00568ce0(int *param_1)

#include "nocturne.h"

int * InsertHeapBlockInOrder(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)0x0;
  for (piVar2 = DAT_005c1680; (piVar2 != (int *)0x0 && (piVar2 <= param_1));
      piVar2 = (int *)piVar2[2]) {
    piVar1 = piVar2;
  }
  param_1[1] = (int)piVar1;
  param_1[2] = (int)piVar2;
  if (piVar1 == (int *)0x0) {
    DAT_005c1680 = param_1;
  }
  else {
    piVar1[2] = (int)param_1;
  }
  if (piVar2 != (int *)0x0) {
    piVar2[1] = (int)param_1;
  }
  piVar1 = param_1 + 8;
  piVar2 = param_1 + 0xb;
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = (int)piVar1;
  param_1[10] = (int)piVar1;
  param_1[3] = (int)piVar1;
  *piVar2 = *param_1 + -0x2c;
  *(uint *)((int)piVar2 + *param_1 + -0x2c) = 0xffffffff;
  return piVar2;
}
