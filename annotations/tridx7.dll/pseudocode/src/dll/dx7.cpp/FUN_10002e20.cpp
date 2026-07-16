// Name: dll_dx7.cpp_FUN_10002e20
// Address: 10002e20
// Address Range: [[10002e20, 10002e58]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_FUN_10002e20(int *param_1,undefined4 *param_2)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_FUN_10002e20(int *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = param_2;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_2 = 0x7c;
  iVar1 = (**(code **)(*param_1 + 100))(param_1,0,param_2,1,0);
  return (uint)(iVar1 == 0);
}
