// Name: engine_special.cpp_selectCard_FUN_00582b10
// Address: 00582b10
// Address Range: [[00582b10, 00582b2f]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_selectCard_FUN_00582b10(int card_index)

#include "nocturne.h"

int __cdecl engine_special_cpp_selectCard_FUN_00582b10(int card_index)

{
  int iVar1;
  
  if (g_INT_02c834ac == 0) {
    return 0;
  }
  g_INT_02c83374 = card_index;
  iVar1 = (*(code *)g_PTR_02c83414)(card_index);
  return iVar1;
}
