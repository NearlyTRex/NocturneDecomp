// Name: engine_3d.c_renderPrim_FUN_00407760
// Address: 00407760
// Address Range: [[00407760, 0040777b]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPrim_FUN_00407760(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

void __cdecl engine_3d_c_renderPrim_FUN_00407760(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  
  iVar1 = (primitive->base).type;
  if ((-1 < iVar1) && (iVar1 < 0x43)) {
    (*(code *)(&PTR_engine_3d_c_badMRGLStruct_FUN_004037b0_005f07c4)[iVar1])(primitive);
    return;
  }
  return;
}
