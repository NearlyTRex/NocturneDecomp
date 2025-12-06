// Name: engine_3d.c_transformAndBufferVertices_FUN_00403840
// Address: 00403840
// Address Range: [[00403840, 00403944]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_transformAndBufferVertices_FUN_00403840(SVertexBatch * vertex_source, SVertexBatch * processing_params)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_transformAndBufferVertices_FUN_00403840
          (SVertexBatch *vertex_source,SVertexBatch *processing_params)

{
  int iVar1;
  SRenderVertex *output;
  CVector3i *input;
  uint uVar2;
  
  input = &vertex_source->vertex_buffer;
  g_CurrentVertexData = input;
  if (20000 < vertex_source->vertex_count) {
    g_CurrentFilename = "..\\engine\\3d.c";
    g_CurrentLineNumber = 0x15c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("vlist - too many verticies");
  }
  g_VertexProcessingEnabled = 1;
  output = g_RenderVertexBuffer + processing_params->render_queue_index + g_ProcessedVertexOffset;
  iVar1 = 0;
  uVar2 = 0;
  if (0 < processing_params->vertex_count) {
    do {
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(&output->projected_vertex,input);
      output->w_recip = g_PerspectiveReciprocal;
      if ((int)((output->projected_vertex).screen_x & -0x80000000) == 0) {
        uVar2 = uVar2 + 1;
      }
      output = output + 1;
      iVar1 = iVar1 + 1;
      input = input + 1;
    } while (iVar1 < processing_params->vertex_count);
  }
  if (g_ProcessedVertexOffset == 0) {
    g_ProcessedVertexBackupOffset = g_ProcessedVertexOffset;
  }
  if (uVar2 == processing_params->vertex_count) {
    g_VertexProcessingEnabled = uVar2 ^ processing_params->vertex_count;
  }
  return (SMRGLHeaderExtended *)
         (&processing_params->vertex_buffer + processing_params->vertex_count);
}
