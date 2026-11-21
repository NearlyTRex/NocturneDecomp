// Name: engine_dosio.cpp_addGetFileInfoHook_FUN_00460930
// Address: 00460930
// Address Range: [[00460930, 0046097b]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00460930(FileSearchHandlerFunc *handler)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00460930(FileSearchHandlerFunc *handler)

{
  if (4 < g_NumSearchHandlers) {
    g_CurrentFilename = "..\\engine\\dosio.c";
    g_CurrentLineNumber = 106;
    core_main_c_displayErrorAndQuit_FUN_004e4500("addGetFileInfoHook - too many!");
  }
  g_SearchHandlers[g_NumSearchHandlers] = handler;
  g_NumSearchHandlers = g_NumSearchHandlers + 1;
  return;
}
