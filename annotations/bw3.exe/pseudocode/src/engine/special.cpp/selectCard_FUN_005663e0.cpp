// Name: engine_special.cpp_selectCard_FUN_005663e0
// Address: 005663e0
// Address Range: [[005663e0, 005663ff]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectCard_FUN_005663e0(int card_index)

#include "nocturne.h"

int __cdecl engine_special_cpp_selectCard_FUN_005663e0(int card_index)

{
  int iVar1;
  
  if (g_INT_02cf6108 == 0) {
    return 0;
  }
  g_INT_02cf5fd0 = card_index;
  iVar1 = (*(code *)g_PTR_02cf6070)(card_index);
  return iVar1;
}
