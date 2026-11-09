// Name: unkafter_bmppuzzl.cpp_FUN_00412bc0
// Address: 00412bc0
// Address Range: [[00412bc0, 00412c21]]
// Convention: unknown
// Signature: undefined4 unkafter_bmppuzzl_cpp_FUN_00412bc0(int param_1,int param_2,int param_3)

#include "nocturne.h"

uint unkafter_bmppuzzl_cpp_FUN_00412bc0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    if (*(int *)(param_1 + 0x1c) + 1 <= iVar2) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x7c) == 1) {
      if ((((*(int *)(iVar1 + 0x6c) <= param_2) &&
           (param_2 <= *(int *)(iVar1 + 0x74) + *(int *)(iVar1 + 0x6c))) &&
          (*(int *)(iVar1 + 0x70) <= param_3)) &&
         (param_3 <= *(int *)(iVar1 + 0x78) + *(int *)(iVar1 + 0x70))) {
        *(int *)(param_1 + 0x20) = iVar2;
        return 1;
      }
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x2c;
  } while( true );
}
