// Name: engine_3d.c_transformAndBufferVertices_FUN_00403840
// Address: 00403840
// Address Range: [[00403840, 00403911]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_transformAndBufferVertices_FUN_00403840(SMRGLHeaderExtended *mrgl)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_transformAndBufferVertices_FUN_00403840(SMRGLHeaderExtended *mrgl)

{
  int iVar1;
  SRenderVertex *output;
  CVector3i *input;
  int iStack_14;
  
  iVar1 = 0;
  g_UINT_005fba40 = 1;
  output = g_SRenderVertex_ARRAY_0060b014 + (mrgl->base).count + g_UINT_007303e0;
  input = (CVector3i *)(mrgl + 1);
  iStack_14 = 0;
  g_PTR_00730414 = (byte *)input;
  if (0 < mrgl->child_count) {
    do {
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3(&output->projected_vertex,input);
      output->a = g_INT_01c6e24c;
      if ((int)((output->projected_vertex).screen_x & -0x80000000) == 0) {
        iStack_14 = iStack_14 + 1;
      }
      output = output + 1;
      iVar1 = iVar1 + 1;
      input = input + 1;
    } while (iVar1 < mrgl->child_count);
  }
  if (g_UINT_007303e0 == 0) {
    g_UINT_007303e4 = g_UINT_007303e0;
  }
  if (iStack_14 == mrgl->child_count) {
    g_UINT_005fba40 = 0;
  }
  return mrgl + mrgl->child_count + 1;
}
