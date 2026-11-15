// Name: engine_3d.c_renderPrim_FUN_00407720
// Address: 00407720
// Address Range: [[00407720, 0040773b]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPrim_FUN_00407720(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

void __cdecl engine_3d_c_renderPrim_FUN_00407720(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  
  iVar1 = (primitive->base).type;
  if ((-1 < iVar1) && (iVar1 < 0x43)) {
    (*(code *)(&PTR_engine_3d_c_badMRGLStruct_FUN_004037b0_006104f4)[iVar1])(primitive);
    return;
  }
  return;
}
