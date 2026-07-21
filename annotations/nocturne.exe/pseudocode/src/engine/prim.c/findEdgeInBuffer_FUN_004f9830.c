// Name: engine_prim.c_findEdgeInBuffer_FUN_004f9830
// Address: 004f9830
// Address Range: [[004f9830, 004f9865]]
// Convention: __cdecl
// Signature: int * __cdecl engine_prim_c_findEdgeInBuffer_FUN_004f9830(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl engine_prim_c_findEdgeInBuffer_FUN_004f9830(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&DAT_01e52a6c;
  iVar2 = 0;
  if (0 < _DAT_01e52a68) {
    do {
      if ((param_1 == *piVar1) && (piVar1 != param_2)) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x12;
    } while (iVar2 < _DAT_01e52a68);
  }
  return (int *)0x0;
}
