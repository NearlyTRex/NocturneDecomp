// Name: engine_dosio.cpp_addGetFileInfoHook_FUN_00460930
// Address: 00460930
// Address Range: [[00460930, 0046097b]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00460930(FileSearchHandlerFunc *handler)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00460930(FileSearchHandlerFunc *handler)

{
  if (4 < g_INT_01b4d370) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\dosio.c";
    g_INT_01d046a4 = 0x6a;
    core_main_c_displayErrorAndQuit_FUN_004e4500("addGetFileInfoHook - too many!");
  }
  g_FileSearchHandlerFunc_PTR_ARRAY_01b4d374[g_INT_01b4d370] = handler;
  g_INT_01b4d370 = g_INT_01b4d370 + 1;
  return;
}
