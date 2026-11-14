// Name: engine_dosio.cpp_addGetFileInfoHook_FUN_00478e40
// Address: 00478e40
// Address Range: [[00478e40, 00478e8b]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00478e40(FileSearchHandlerFunc *handler)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00478e40(FileSearchHandlerFunc *handler)

{
  if (4 < _DAT_01b6892c) {
    _DAT_01d1d400 = "..\\engine\\dosio.c";
    _DAT_01d1d404 = 0x6a;
    core_main_c_FUN_005030e0("addGetFileInfoHook - too many!");
  }
  *(FileSearchHandlerFunc **)(_DAT_01b6892c * 4 + 0x1b68930) = handler;
  _DAT_01b6892c = _DAT_01b6892c + 1;
  return;
}
