// Name: engine_font.cpp_FUN_004a8850
// Address: 004a8850
// Address Range: [[004a8850, 004a88c7]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004a8850(CBitFont *param_1)

#include "nocturne.h"

void engine_font_cpp_FUN_004a8850(CBitFont *param_1)

{
  CBitFont *pCVar1;
  CBitFont *pCVar2;
  
  pCVar1 = param_1;
  do {
    pCVar2 = pCVar1 + 4;
    FUN_005b7fce(*(void **)(pCVar1 + 0x194));
    *(uint *)(pCVar1 + 0x194) = 0;
    pCVar1 = pCVar2;
  } while (pCVar2 != param_1 + 0x10);
  if (*(int *)(param_1 + 0x1dcc) != 0) {
    FUN_005b86a0(*(int *)(param_1 + 0x1dcc));
    *(uint *)(param_1 + 0x1dcc) = 0;
  }
  if (*(int *)(param_1 + 0x1dd4) == 0) {
    engine_font_cpp_FUN_004a7bb0(param_1);
    return;
  }
  FUN_005b86a0(*(int *)(param_1 + 0x1dd4));
  engine_font_cpp_FUN_004a7bb0(param_1);
  return;
}
