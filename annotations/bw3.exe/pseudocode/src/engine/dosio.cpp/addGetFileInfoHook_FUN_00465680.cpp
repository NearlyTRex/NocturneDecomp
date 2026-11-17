// Name: engine_dosio.cpp_addGetFileInfoHook_FUN_00465680
// Address: 00465680
// Address Range: [[00465680, 004656cb]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00465680(FileSearchHandlerFunc *handler)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00465680(FileSearchHandlerFunc *handler)

{
  if (4 < g_NumSearchHandlers) {
    g_CHAR_PTR_01d71de0 = "..\\engine\\dosio.c";
    g_INT_01d71de4 = 0x6a;
    core_main_c_displayErrorAndQuit_FUN_004e4330("addGetFileInfoHook - too many!");
  }
  g_SearchHandlers[g_NumSearchHandlers] = handler;
  g_NumSearchHandlers = g_NumSearchHandlers + 1;
  return;
}
