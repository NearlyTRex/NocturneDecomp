// Name: engine_3d.c_setRenderAlphaFromBlock_FUN_00408350
// Address: 00408350
// Address Range: [[00408350, 00408367]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_setRenderAlphaFromBlock_FUN_00408350(SMRGLHeaderExtended *block)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_setRenderAlphaFromBlock_FUN_00408350(SMRGLHeaderExtended *block)

{
  engine_3d_c_setRenderAlpha_FUN_00408370((block->base).count);
  return (SMRGLHeaderExtended *)&block->child_count;
}
