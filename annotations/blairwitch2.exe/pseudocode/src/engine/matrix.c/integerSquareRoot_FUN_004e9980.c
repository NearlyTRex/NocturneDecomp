// Name: engine_matrix.c_integerSquareRoot_FUN_004e9980
// Address: 004e9980
// Address Range: [[004e9980, 004e9a50]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_integerSquareRoot_FUN_004e9980(int value)

#include "nocturne.h"

int __cdecl engine_matrix_c_integerSquareRoot_FUN_004e9980(int value)

{
  int iVar1;
  
  if (value < 1) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 913;
    core_main_c_displayErrorAndQuit_FUN_004e4500("sqrt out of domain!");
  }
  iVar1 = value / 200 + 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  return (value / iVar1 + iVar1) / 2;
}
