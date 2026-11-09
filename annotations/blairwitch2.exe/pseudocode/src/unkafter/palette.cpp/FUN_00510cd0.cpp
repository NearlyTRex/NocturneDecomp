// Name: unkafter_palette.cpp_FUN_00510cd0
// Address: 00510cd0
// Address Range: [[00510cd0, 00510d42]]
// Convention: unknown
// Signature: undefined4 unkafter_palette_cpp_FUN_00510cd0(int *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

uint unkafter_palette_cpp_FUN_00510cd0(int *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int *piVar2;
  
  if (99 < *param_1) {
    return 0;
  }
  piVar2 = param_1 + *param_1 * 0x40 + 0xc9;
  do {
    cVar1 = *param_2;
    *(char *)piVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    *(char *)((int)piVar2 + 1) = cVar1;
    piVar2 = (int *)((int)piVar2 + 2);
  } while (cVar1 != '\0');
  param_1[*param_1 + 1] = param_3;
  param_1[*param_1 + 0x65] = param_4;
  param_1[*param_1 + 0x19c9] = param_5;
  param_1[*param_1 + 0x1a2d] = param_6;
  *param_1 = *param_1 + 1;
  return 0;
}
