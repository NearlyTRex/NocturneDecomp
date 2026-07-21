// Name: engine_winfont.cpp_CWinFont_reset_FUN_005586a0
// Address: 005586a0
// Address Range: [[005586a0, 00558700]]
// Convention: __cdecl
// Signature: void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_005586a0(int param_1)

#include "nocturne.h"

void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_005586a0(int param_1)

{
  if (*(HDC *)(param_1 + 4) != (HDC)0x0) {
    SelectObject(*(HDC *)(param_1 + 4),*(HGDIOBJ *)(param_1 + 0x10));
    *(uint *)(param_1 + 0x10) = 0;
    DeleteDC(*(HDC *)(param_1 + 4));
    *(uint *)(param_1 + 4) = 0;
    *(uint *)(param_1 + 8) = 0;
    *(uint *)(param_1 + 0x14) = 0;
  }
  *(uint *)(param_1 + 0x128) = 0;
  *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x128);
  *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x128);
  return;
}
