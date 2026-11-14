// Name: engine_3d.c_setRenderAlphaFromBlock_FUN_00406d80
// Address: 00406d80
// Address Range: [[00406d80, 00406d97]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_setRenderAlphaFromBlock_FUN_00406d80(SMRGLHeaderExtended *block)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_setRenderAlphaFromBlock_FUN_00406d80(SMRGLHeaderExtended *block)

{
  engine_3d_c_setRenderAlpha_FUN_00406da0((block->base).count);
  return (SMRGLHeaderExtended *)&block->child_count;
}
