// Name: engine_3d.c_skipMRGLPrimitive_FUN_00405740
// Address: 00405740
// Address Range: [[00405740, 00405747]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_skipMRGLPrimitive_FUN_00405740(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_skipMRGLPrimitive_FUN_00405740(SMRGLHeaderExtended *primitive)

{
  return (SMRGLHeaderExtended *)((int)&(primitive->base).type + (primitive->base).count);
}
