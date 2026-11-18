// Name: engine_special.cpp_lockHoldBuffer_FUN_00582b70
// Address: 00582b70
// Address Range: [[00582b70, 00582b82]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_lockHoldBuffer_FUN_00582b70(void)

#include "nocturne.h"

int __cdecl engine_special_cpp_lockHoldBuffer_FUN_00582b70(void)

{
  int iVar1;
  
  if (g_PTR_02c8341c == (byte *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_02c8341c)();
  return iVar1;
}
