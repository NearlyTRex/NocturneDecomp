// Name: dll_dx7.cpp_FUN_10002ea0
// Address: 10002ea0
// Address Range: [[10002ea0, 10002f35]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_10002ea0(void)

#include "nocturne.h"

void dll_dx7_cpp_FUN_10002ea0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  iVar3 = 0;
  do {
    iVar5 = 4;
    iVar2 = iVar3;
    do {
      piVar4 = *(int **)((int)&DAT_10138f30 + iVar2);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
        *(uint *)((int)&DAT_10138f30 + iVar2) = 0;
      }
      piVar4 = *(int **)((int)&DAT_10139048 + iVar2);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
        *(uint *)((int)&DAT_10139048 + iVar2) = 0;
      }
      iVar2 = iVar2 + 0x20;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x20);
  piVar4 = &DAT_1020de40;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar4 = 0;
    }
    piVar1 = (int *)piVar4[1];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      piVar4[1] = 0;
    }
    piVar4 = piVar4 + 2;
  } while (piVar4 < &DAT_10215e40);
  puVar6 = &DAT_1020de40;
  for (iVar3 = 0x2000; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  return;
}
