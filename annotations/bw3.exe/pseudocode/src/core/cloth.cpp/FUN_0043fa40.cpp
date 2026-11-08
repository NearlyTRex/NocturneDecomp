// Name: FUN_0043fa40
// Address: 0043fa40
// Address Range: [[0043fa40, 0043fab4]]
// Convention: unknown
// Signature: void FUN_0043fa40(int *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043fa40(int *param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  
  if (9 < *param_1) {
    _DAT_01d71de0 = "..\\core\\cloth.cpp";
    _DAT_01d71de4 = 0x5de;
    FUN_004e4330("CClothList::add - list is full");
  }
  piVar2 = param_1 + *param_1 * 10 + 1;
  do {
    cVar1 = *param_2;
    *(char *)piVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    *(char *)((int)piVar2 + 1) = cVar1;
    piVar2 = (int *)((int)piVar2 + 2);
  } while (cVar1 != '\0');
  param_1[*param_1 + 0x65] = 0;
  *param_1 = *param_1 + 1;
  return;
}
