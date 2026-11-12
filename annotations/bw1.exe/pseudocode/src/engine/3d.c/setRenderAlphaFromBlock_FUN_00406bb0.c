// Name: engine_3d.c_setRenderAlphaFromBlock_FUN_00406bb0
// Address: 00406bb0
// Address Range: [[00406bb0, 00406bc7]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_setRenderAlphaFromBlock_FUN_00406bb0(SMRGLHeaderExtended *block)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_setRenderAlphaFromBlock_FUN_00406bb0(SMRGLHeaderExtended *block)

{
  engine_3d_c_setRenderAlpha_FUN_00406bd0((block->base).count);
  return (SMRGLHeaderExtended *)&block->child_count;
}
