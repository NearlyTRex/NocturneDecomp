// Name: engine_matrix.c_integerSquareRoot_FUN_004cdd30
// Address: 004cdd30
// Address Range: [[004cdd30, 004cde00]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_integerSquareRoot_FUN_004cdd30(int value)

#include "nocturne.h"

int __cdecl engine_matrix_c_integerSquareRoot_FUN_004cdd30(int value)

{
  int iVar1;
  
  if (value < 1) {
    PTR_01cc4800 = "..\\engine\\matrix.c";
    INT_01cc4804 = 0x38e;
    core_main_c_FUN_004c8440("sqrt out of domain!");
  }
  iVar1 = value / 200 + 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  return (value / iVar1 + iVar1) / 2;
}
