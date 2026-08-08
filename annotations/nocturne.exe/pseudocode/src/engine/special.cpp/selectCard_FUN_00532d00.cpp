// Name: engine_special.cpp_selectCard_FUN_00532d00
// Address: 00532d00
// Address Range: [[00532d00, 00532d1a]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectCard_FUN_00532d00(int card_index)

#include "nocturne.h"

int __cdecl engine_special_cpp_selectCard_FUN_00532d00(int card_index)

{
  int iVar1;
  
  if (g_LoadedExternalDLLRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_selectCard)(card_index);
  return iVar1;
}
