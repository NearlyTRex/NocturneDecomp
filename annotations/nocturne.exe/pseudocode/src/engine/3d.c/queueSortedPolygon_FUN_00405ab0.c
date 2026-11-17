// Name: engine_3d.c_queueSortedPolygon_FUN_00405ab0
// Address: 00405ab0
// Address Range: [[00405ab0, 00405b23]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_queueSortedPolygon_FUN_00405ab0(SMRGLHeaderExtended *primitive,SMRGLHeaderExtended *owner_block,SMRGLHeaderExtended *chain_root)

#include "nocturne.h"

void __cdecl engine_3d_c_queueSortedPolygon_FUN_00405ab0(SMRGLHeaderExtended *primitive,SMRGLHeaderExtended *owner_block,SMRGLHeaderExtended *chain_root)

{
  uint uVar1;
  int iVar2;
  
  if ((int)g_ProcessedVertexBackupOffset < 500) {
    iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610((SClipPlane *)&primitive->child_count);
    uVar1 = g_ProcessedVertexBackupOffset;
    if (iVar2 != 0) {
      g_ProcessedVertexIndices[g_ProcessedVertexBackupOffset * 8 + 0x10] = (int)primitive;
      g_ProcessedVertexIndices[uVar1 * 8 + 0x11] = (int)owner_block;
      g_ProcessedVertexIndices[uVar1 * 8 + 0x12] = (int)chain_root;
      engine_3d_c_computeSortedPolygonKey_FUN_004059c0(primitive);
      g_INT_ARRAY_006b415c[g_ProcessedVertexBackupOffset] =
           g_ProcessedVertexBackupOffset * 0x20 + 0x6b02dc;
      g_ProcessedVertexBackupOffset = g_ProcessedVertexBackupOffset + 1;
      return;
    }
  }
  return;
}
