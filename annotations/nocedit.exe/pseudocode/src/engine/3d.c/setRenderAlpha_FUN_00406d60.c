// Name: engine_3d.c_setRenderAlpha_FUN_00406d60
// Address: 00406d60
// Address Range: [[00406d60, 00406d77]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_setRenderAlpha_FUN_00406d60(SMRGLHeaderExtended *block)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_setRenderAlpha_FUN_00406d60(SMRGLHeaderExtended *block)

{
  engine_3d_c_setRenderAlpha_FUN_00406d80((block->base).count);
  return (SMRGLHeaderExtended *)&block->child_count;
}
