// Name: engine_matrix.c_integerSquareRoot_FUN_0050d890
// Address: 0050d890
// Address Range: [[0050d890, 0050d960]]
// Convention: __cdecl
// Signature: int engine_matrix.c_integerSquareRoot_FUN_0050d890(int value)

#include "nocturne.h"

int __cdecl engine_matrix_c_integerSquareRoot_FUN_0050d890(int value)

{
  int iVar1;
  
  if (value < 1) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 0x391;
    core_main_c_displayErrorAndQuit_FUN_00506f10("sqrt out of domain!");
  }
  iVar1 = value / 200 + 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  iVar1 = (value / iVar1 + iVar1) / 2;
  return (value / iVar1 + iVar1) / 2;
}
