// Name: engine_3d.c_computeSortedPolygonKey_FUN_004059c0
// Address: 004059c0
// Address Range: [[004059c0, 00405a55]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_computeSortedPolygonKey_FUN_004059c0(SMRGLHeaderExtended *primitive)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_computeSortedPolygonKey_FUN_004059c0(SMRGLHeaderExtended *primitive)

{
  SMRGLHeaderExtended *pSVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 1;
  iVar4 = (&DAT_005c501c)[(primitive[2].base.type + DAT_006b0264) * 0xc];
  pSVar1 = primitive;
  if (1 < (primitive->base).count) {
    do {
      if ((int)(&DAT_005c501c)[(pSVar1[3].base.type + DAT_006b0264) * 0xc] < iVar4) {
        iVar4 = (&DAT_005c501c)[(pSVar1[3].base.type + DAT_006b0264) * 0xc];
      }
      iVar3 = iVar3 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar3 < (primitive->base).count);
  }
  iVar3 = DAT_006b0268 * 0x20;
  *(int *)(&DAT_006b02e8 + iVar3) = iVar4;
  uVar2 = _DAT_01c039dc;
  *(int *)(&DAT_006b02ec + iVar3) = DAT_006b0264;
  *(uint *)(&DAT_006b02f0 + iVar3) = uVar2;
  *(uint *)(&DAT_006b02f4 + iVar3) = _DAT_01c039e0;
  *(uint *)(&DAT_006b02f8 + iVar3) = _DAT_01c039e4;
  return;
}
