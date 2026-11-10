// Name: engine_dosio.cpp_addGetFileInfoHook_FUN_00465680
// Address: 00465680
// Address Range: [[00465680, 004656cb]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00465680(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00465680(uint param_1)

{
  if (4 < _DAT_01b8517c) {
    _DAT_01d71de0 = "..\\engine\\dosio.c";
    _DAT_01d71de4 = 0x6a;
    core_main_c_FUN_004e4330("addGetFileInfoHook - too many!");
  }
  *(uint *)(_DAT_01b8517c * 4 + 0x1b85180) = param_1;
  _DAT_01b8517c = _DAT_01b8517c + 1;
  return;
}
