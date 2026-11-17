// Name: engine_dosio.cpp_addGetFileInfoHook_FUN_00478e40
// Address: 00478e40
// Address Range: [[00478e40, 00478e8b]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00478e40(FileSearchHandlerFunc *handler)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00478e40(FileSearchHandlerFunc *handler)

{
  if (4 < g_INT_01b6892c) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\dosio.c";
    g_INT_01d1d404 = 0x6a;
    core_main_c_displayErrorAndQuit_FUN_005030e0("addGetFileInfoHook - too many!");
  }
  g_FileSearchHandlerFunc_PTR_ARRAY_01b68930[g_INT_01b6892c] = handler;
  g_INT_01b6892c = g_INT_01b6892c + 1;
  return;
}
