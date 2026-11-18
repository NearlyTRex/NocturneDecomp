// Name: engine_3d.c_renderPrim_FUN_004078f0
// Address: 004078f0
// Address Range: [[004078f0, 0040790b]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPrim_FUN_004078f0(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

void __cdecl engine_3d_c_renderPrim_FUN_004078f0(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  
  iVar1 = (primitive->base).type;
  if ((-1 < iVar1) && (iVar1 < 0x43)) {
    (*(code *)g_ARRAY_PTR_006093c4[iVar1])(primitive);
    return;
  }
  return;
}
