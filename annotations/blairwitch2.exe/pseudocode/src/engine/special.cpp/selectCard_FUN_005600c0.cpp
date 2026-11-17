// Name: engine_special.cpp_selectCard_FUN_005600c0
// Address: 005600c0
// Address Range: [[005600c0, 005600df]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectCard_FUN_005600c0(int card_index)

#include "nocturne.h"

int __cdecl engine_special_cpp_selectCard_FUN_005600c0(int card_index)

{
  int iVar1;
  
  if (g_INT_0264bcdc == 0) {
    return 0;
  }
  g_INT_0264bba4 = card_index;
  iVar1 = (*(code *)g_PTR_0264bc44)(card_index);
  return iVar1;
}
