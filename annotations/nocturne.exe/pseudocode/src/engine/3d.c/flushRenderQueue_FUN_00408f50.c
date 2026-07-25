// Name: engine_3d.c_flushRenderQueue_FUN_00408f50
// Address: 00408f50
// Address Range: [[00408f50, 00408fb9]]
// Convention: unknown
// Signature: void engine_3d_c_flushRenderQueue_FUN_00408f50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_3d_c_flushRenderQueue_FUN_00408f50(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_00761ec4 != 0) {
    if (_DAT_01c02594 != 0) {
      wincore_windll_cpp_drawPolyList_FUN_00532680(&DAT_005c5014,&DAT_00761ec8,DAT_00761ec4,0xcd);
      DAT_00761ec4 = 0;
      return;
    }
    iVar3 = 0;
    if (0 < DAT_00761ec4) {
      iVar2 = 0;
      do {
        puVar1 = (uint *)((int)&DAT_00761ec8 + iVar2);
        iVar2 = iVar2 + 4;
        iVar3 = iVar3 + 1;
        engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120(*puVar1);
      } while (iVar3 < DAT_00761ec4);
    }
    DAT_00761ec4 = 0;
  }
  return;
}
