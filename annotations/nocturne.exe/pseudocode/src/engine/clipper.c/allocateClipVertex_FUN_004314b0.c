// Name: engine_clipper.c_allocateClipVertex_FUN_004314b0
// Address: 004314b0
// Address Range: [[004314b0, 004314fe]]
// Convention: __cdecl
// Signature: SRenderVertex * __cdecl engine_clipper_c_allocateClipVertex_FUN_004314b0(void)

#include "nocturne.h"

SRenderVertex * __cdecl engine_clipper_c_allocateClipVertex_FUN_004314b0(void)

{
  int iVar1;
  
  if (0xb < g_ClipperTempCount) {
    g_CurrentFilename = "..\\engine\\clipper.c";
    g_CurrentLineNumber = 94;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
  }
  iVar1 = g_ClipperTempCount;
  g_ClipperTempCount = g_ClipperTempCount + 1;
  return g_ClipperTempBuffer + iVar1;
}
