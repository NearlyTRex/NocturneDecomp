// Name: engine_3d.c_renderBSPNode_FUN_00405200
// Address: 00405200
// Address Range: [[00405200, 0040523e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderBSPNode_FUN_00405200(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderBSPNode_FUN_00405200(SMRGLHeaderExtended *primitive)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610((SClipPlane *)&(primitive->base).count);
  if (iVar1 != 0) {
    engine_3d_c_dispatchMRGLBlockChain_FUN_00408e80
              ((SMRGLHeaderExtended *)((int)&(primitive->base).type + primitive[2].base.type));
    return (SMRGLHeaderExtended *)((int)&(primitive->base).type + primitive[1].child_count);
  }
  engine_3d_c_dispatchMRGLBlockChain_FUN_00408e80
            ((SMRGLHeaderExtended *)((int)&(primitive->base).type + primitive[1].child_count));
  return (SMRGLHeaderExtended *)((int)&(primitive->base).type + primitive[2].base.type);
}
