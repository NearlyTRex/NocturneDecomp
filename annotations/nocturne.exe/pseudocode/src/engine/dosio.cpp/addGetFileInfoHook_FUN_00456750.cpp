// Name: engine_dosio.cpp_addGetFileInfoHook_FUN_00456750
// Address: 00456750
// Address Range: [[00456750, 0045679b]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00456750(FileSearchHandlerFunc *handler)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00456750(FileSearchHandlerFunc *handler)

{
  if (4 < _DAT_01af4ed8) {
    g_CurrentFilename = "..\\engine\\dosio.c";
    g_CurrentLineNumber = 77;
    core_main_c_displayErrorAndQuit_FUN_004c8440("addGetFileInfoHook - too many!");
  }
  *(FileSearchHandlerFunc **)(_DAT_01af4ed8 * 4 + 0x1af4edc) = handler;
  _DAT_01af4ed8 = _DAT_01af4ed8 + 1;
  return;
}
