// Name: wincore_windll.cpp_selectCard_FUN_005b7d90
// Address: 005b7d90
// Address Range: [[005b7d90, 005b7daa]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_selectCard_FUN_005b7d90(int card_index)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_selectCard_FUN_005b7d90(int card_index)

{
  int iVar1;
  
  if (g_LoadedExternalDLLRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_selectCard)(card_index);
  return iVar1;
}
