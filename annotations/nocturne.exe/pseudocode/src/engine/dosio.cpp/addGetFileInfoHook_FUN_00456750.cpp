// Name: engine_dosio.cpp_addGetFileInfoHook_FUN_00456750
// Address: 00456750
// Address Range: [[00456750, 0045679b]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00456750(FileSearchHandlerFunc *handler)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00456750(FileSearchHandlerFunc *handler)

{
  if (4 < g_NumSearchHandlers) {
    g_CurrentFilename = "..\\engine\\dosio.c";
    g_CurrentLineNumber = 77;
    core_main_c_displayErrorAndQuit_FUN_004c8440("addGetFileInfoHook - too many!");
  }
  g_SearchHandlers[g_NumSearchHandlers] = handler;
  g_NumSearchHandlers = g_NumSearchHandlers + 1;
  return;
}
