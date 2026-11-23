// Name: engine_matrix.c_integerSquareRoot_FUN_00508620
// Address: 00508620
// Address Range: [[00508620, 005086f0]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_integerSquareRoot_FUN_00508620(int value)

#include "nocturne.h"

int __cdecl engine_matrix_c_integerSquareRoot_FUN_00508620(int value)

{
  int iVar1;
  
  if (value < 1) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 913;
    core_main_c_displayErrorAndQuit_FUN_005030e0("sqrt out of domain!");
  }
  iVar1 = value / 200 + 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  return (value / iVar1 + iVar1) / 2;
}
