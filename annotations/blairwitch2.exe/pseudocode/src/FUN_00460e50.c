// Name: FUN_00460e50
// Address: 00460e50
// Address Range: [[00460e50, 00460ec9]]
// Convention: unknown
// Signature: undefined4 FUN_00460e50(int param_1,LPCSTR param_2)

#include "nocturne.h"

uint FUN_00460e50(int param_1,LPCSTR param_2)

{
  HANDLE pvVar1;
  _WIN32_FIND_DATAA _Stack_144;
  
  FUN_00460f50(param_1);
  pvVar1 = FindFirstFileA(param_2,&_Stack_144);
  if (pvVar1 == (HANDLE)0xffffffff) {
    if (*(int *)(param_1 + 0x10c) == 0) {
      FUN_00460f90(param_1);
      return *(uint *)(param_1 + 0x10c);
    }
  }
  else {
    *(HANDLE *)(param_1 + 0x110) = pvVar1;
    FUN_00460fa0(param_1,&_Stack_144);
    *(uint *)(param_1 + 0x10c) = 1;
  }
  return *(uint *)(param_1 + 0x10c);
}
