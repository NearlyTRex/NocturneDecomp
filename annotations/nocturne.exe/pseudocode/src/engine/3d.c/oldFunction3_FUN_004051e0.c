// Name: engine_3d.c_oldFunction3_FUN_004051e0
// Address: 004051e0
// Address Range: [[004051e0, 004051f7]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction3_FUN_004051e0(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction3_FUN_004051e0(SMRGLHeaderExtended *primitive)

{
  engine_3d_c_dispatchMRGLBlockChain_FUN_00408e80
            ((SMRGLHeaderExtended *)((int)&(primitive->base).type + (primitive->base).count));
  return (SMRGLHeaderExtended *)&primitive->child_count;
}
