// Name: engine_3d.c_setRenderAlphaFromBlock_FUN_00406bd0
// Address: 00406bd0
// Address Range: [[00406bd0, 00406be7]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_setRenderAlphaFromBlock_FUN_00406bd0(SMRGLHeaderExtended *block)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_setRenderAlphaFromBlock_FUN_00406bd0(SMRGLHeaderExtended *block)

{
  engine_3d_c_setRenderAlpha_FUN_00406bf0((block->base).count);
  return (SMRGLHeaderExtended *)&block->child_count;
}
