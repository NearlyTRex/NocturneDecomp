// Name: engine_clipper.c_allocateClipVertex_FUN_00435980
// Address: 00435980
// Address Range: [[00435980, 004359ce]]
// Convention: __cdecl
// Signature: SRenderVertex * engine_clipper.c_allocateClipVertex_FUN_00435980(void)

#include "nocturne.h"

SRenderVertex * __cdecl engine_clipper_c_allocateClipVertex_FUN_00435980(void)

{
  int iVar1;
  
  if (0xb < g_ClipperTempCount) {
    g_CurrentFilename = "..\\engine\\clipper.c";
    g_CurrentLineNumber = 0x5e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
  }
  iVar1 = g_ClipperTempCount;
  g_ClipperTempCount = g_ClipperTempCount + 1;
  return g_ClipperTempBuffer + iVar1;
}
