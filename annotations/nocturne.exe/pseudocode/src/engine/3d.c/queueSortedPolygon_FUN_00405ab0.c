// Name: engine_3d.c_queueSortedPolygon_FUN_00405ab0
// Address: 00405ab0
// Address Range: [[00405ab0, 00405b23]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_queueSortedPolygon_FUN_00405ab0(SMRGLHeaderExtended *primitive,SMRGLHeaderExtended *owner_block,SMRGLHeaderExtended *chain_root)

#include "nocturne.h"

void __cdecl engine_3d_c_queueSortedPolygon_FUN_00405ab0(SMRGLHeaderExtended *primitive,SMRGLHeaderExtended *owner_block,SMRGLHeaderExtended *chain_root)

{
  int iVar1;
  
  if (DAT_006b0268 < 500) {
    iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610((SClipPlane *)&primitive->child_count);
    if (iVar1 != 0) {
      iVar1 = DAT_006b0268 * 0x20;
      *(SMRGLHeaderExtended **)(&DAT_006b02dc + iVar1) = primitive;
      *(SMRGLHeaderExtended **)(&DAT_006b02e0 + iVar1) = owner_block;
      *(SMRGLHeaderExtended **)(&DAT_006b02e4 + iVar1) = chain_root;
      engine_3d_c_computeSortedPolygonKey_FUN_004059c0(primitive);
      (&DAT_006b415c)[DAT_006b0268] = &DAT_006b02dc + DAT_006b0268 * 0x20;
      DAT_006b0268 = DAT_006b0268 + 1;
      return;
    }
  }
  return;
}
