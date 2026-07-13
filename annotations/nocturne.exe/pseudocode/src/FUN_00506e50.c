// Name: FUN_00506e50
// Address: 00506e50
// Address Range: [[00506e50, 00506eb0]]
// Convention: unknown
// Signature: int FUN_00506e50(int param_1)

#include "nocturne.h"

int FUN_00506e50(int param_1)

{
  int iVar1;
  
  FUN_00506ec0(param_1);
  iVar1 = FUN_0050eb60(param_1 + 0x15b02c,0);
  iVar1 = FUN_0050eb40(iVar1 + -0x554,0);
  iVar1 = FUN_0050eb20(iVar1 + -0x141490,0);
  iVar1 = FUN_0050eb00(iVar1 + -0x19644,0);
  return iVar1 + -4;
}
