// Name: engine_special.cpp_masterZBuffer_FUN_00560030
// Address: 00560030
// Address Range: [[00560030, 0056004a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_masterZBuffer_FUN_00560030(int slot)

#include "nocturne.h"

int __cdecl engine_special_cpp_masterZBuffer_FUN_00560030(int slot)

{
  int iVar1;
  
  if (g_INT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*(code *)g_PTR_0264bc38)(slot);
  return iVar1;
}
