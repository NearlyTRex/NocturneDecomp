// Name: engine_dosio.cpp_addGetFileInfoHook_FUN_00481710
// Address: 00481710
// Address Range: [[00481710, 0048175b]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00481710(FileSearchHandlerFunc *handler)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00481710(FileSearchHandlerFunc *handler)

{
  if (4 < g_NumSearchHandlers) {
    g_CurrentFilename = "..\\engine\\dosio.c";
    g_CurrentLineNumber = 0x53;
    core_main_c_displayErrorAndQuit_FUN_00506f10("addGetFileInfoHook - too many!");
  }
  g_SearchHandlers[g_NumSearchHandlers] = handler;
  g_NumSearchHandlers = g_NumSearchHandlers + 1;
  return;
}
