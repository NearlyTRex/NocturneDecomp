// Name: engine_3d.c_transformAndBufferVertices_FUN_00403840
// Address: 00403840
// Address Range: [[00403840, 00403944]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_transformAndBufferVertices_FUN_00403840(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_transformAndBufferVertices_FUN_00403840(SMRGLHeaderExtended *mrgl)

{
  int iVar1;
  SRenderVertex *output;
  CVector3i *input;
  uint local_14;
  
  input = (CVector3i *)(mrgl + 1);
  g_CurrentVertexData = input;
  if (20000 < mrgl->child_count) {
    g_CurrentFilename = "..\\engine\\3d.c";
    g_CurrentLineNumber = 0x15c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("vlist - too many verticies");
  }
  g_VertexProcessingEnabled = 1;
  output = g_RenderVertexBuffer + (mrgl->base).count + g_ProcessedVertexOffset;
  iVar1 = 0;
  local_14 = 0;
  if (0 < mrgl->child_count) {
    do {
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(&output->projected_vertex,input);
      output->fog = (int)g_PerspectiveReciprocal;
      if ((int)((output->projected_vertex).screen_x & -0x80000000) == 0) {
        local_14 = local_14 + 1;
      }
      output = output + 1;
      iVar1 = iVar1 + 1;
      input = input + 1;
    } while (iVar1 < mrgl->child_count);
  }
  if (g_ProcessedVertexOffset == 0) {
    g_ProcessedVertexBackupOffset = g_ProcessedVertexOffset;
  }
  if (local_14 == mrgl->child_count) {
    g_VertexProcessingEnabled = local_14 ^ mrgl->child_count;
  }
  return mrgl + mrgl->child_count + 1;
}
