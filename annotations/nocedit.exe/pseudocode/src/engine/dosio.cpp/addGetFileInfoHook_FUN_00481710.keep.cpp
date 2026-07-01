// Name: engine_dosio.cpp_addGetFileInfoHook_FUN_00481710
// Address: 00481710
// MANUAL RECONSTRUCTION
// Address Range: [[00481710, 0048175b]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00481710(FileSearchHandlerFunc *handler)

#include "nocturne.h"
#include "debug_log.h"

void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00481710(FileSearchHandlerFunc *handler)

{
  if (4 < g_NumSearchHandlers) {
    g_CurrentFilename = "..\\engine\\dosio.c";
    g_CurrentLineNumber = 83;
    core_main_c_displayErrorAndQuit_FUN_00506f10("addGetFileInfoHook - too many!");
  }
  DLOG("addGetFileInfoHook: handler=%p, count before=%d", (void*)handler, g_NumSearchHandlers);
  g_SearchHandlers[g_NumSearchHandlers] = handler;
  g_NumSearchHandlers = g_NumSearchHandlers + 1;
  DLOG("count after=%d", g_NumSearchHandlers);
  return;
}
