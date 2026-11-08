// Name: FUN_00479360
// Address: 00479360
// Address Range: [[00479360, 004793d9]]
// Convention: unknown
// Signature: undefined4 FUN_00479360(int param_1,LPCSTR param_2)

#include "nocturne.h"

uint FUN_00479360(int param_1,LPCSTR param_2)

{
  HANDLE pvVar1;
  _WIN32_FIND_DATAA _Stack_144;
  
  FUN_00479460(param_1);
  pvVar1 = FindFirstFileA(param_2,&_Stack_144);
  if (pvVar1 == (HANDLE)0xffffffff) {
    if (*(int *)(param_1 + 0x10c) == 0) {
      FUN_004794a0(param_1);
      return *(uint *)(param_1 + 0x10c);
    }
  }
  else {
    *(HANDLE *)(param_1 + 0x110) = pvVar1;
    FUN_004794b0(param_1,&_Stack_144);
    *(uint *)(param_1 + 0x10c) = 1;
  }
  return *(uint *)(param_1 + 0x10c);
}
