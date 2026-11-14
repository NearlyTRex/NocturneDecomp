// Name: engine_3d.c_flushRenderQueue_FUN_004077b0
// Address: 004077b0
// Address Range: [[004077b0, 00407819]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushRenderQueue_FUN_004077b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_flushRenderQueue_FUN_004077b0(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_007c1070 != 0) {
    if (_DAT_01c50948 != 0) {
      engine_special_cpp_drawPolyList_FUN_005823a0
                ((SRenderVertex *)&DAT_00629014,(SMRGLPrimitiveQuad **)0x7c1074,_DAT_007c1070,0xcd);
      _DAT_007c1070 = 0;
      return;
    }
    iVar3 = 0;
    if (0 < _DAT_007c1070) {
      iVar2 = 0;
      do {
        puVar1 = (uint *)(iVar2 + 0x7c1074);
        iVar2 = iVar2 + 4;
        iVar3 = iVar3 + 1;
        engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0
                  ((SMRGLHeaderPrimitive *)*puVar1);
      } while (iVar3 < _DAT_007c1070);
    }
    _DAT_007c1070 = 0;
  }
  return;
}
