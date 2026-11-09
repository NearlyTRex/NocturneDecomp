// Name: engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046c720
// Address: 0046c720
// Address Range: [[0046c720, 0046c891]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046c720(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046c720(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  STrianglePackedIndices *pSVar7;
  STrianglePackedIndices *pSVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  
  bVar11 = 0;
  if (*(int *)(this_ptr + 0x10) == 0) {
    iVar5 = engine_prim_c_getTriangleWindingFromPackedIndices_FUN_0051ca00(triangle_indices);
    if (iVar5 == 0) {
      return;
    }
  }
  else {
    iVar5 = *(int *)this_ptr;
    uVar4 = *(uint *)(iVar5 + 0x10 + (uint)*(ushort *)(triangle_indices + 4) * 0x30) &
            *(uint *)(iVar5 + 0x10 + (uint)*(ushort *)triangle_indices * 0x30) &
            *(uint *)(iVar5 + (uint)*(ushort *)(triangle_indices + 2) * 0x30 + 0x10);
    if (((uVar4 & 0x80000000) != 0) && ((char)uVar4 != '\0')) {
      return;
    }
  }
  if (4999 < _DAT_01ba5cc4) {
    _DAT_01d046a0 = "..\\engine\\drender.cpp";
    _DAT_01d046a4 = 0xb78;
    core_main_c_FUN_004e4500("CDR::captureFace - too many faces captured");
  }
  uVar3 = _DAT_01ba5cc8;
  iVar6 = _DAT_01ba5cc4 * 0x20;
  puVar9 = (uint *)(iVar6 + 0x1ba5cdc + (uint)bVar11 * -8);
  pSVar7 = triangle_indices + (uint)bVar11 * -8 + 4;
  *(uint *)(iVar6 + 0x1ba5cd8) = *(uint *)triangle_indices;
  puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
  pSVar8 = pSVar7 + (uint)bVar11 * -8 + 4;
  *puVar9 = *(uint *)pSVar7;
  *puVar10 = *(uint *)pSVar8;
  puVar10[(uint)bVar11 * -2 + 1] = *(uint *)(pSVar8 + (uint)bVar11 * -8 + 4);
  *(ushort *)(puVar10 + (uint)bVar11 * -2 + 1 + (uint)bVar11 * -2 + 1) =
       *(ushort *)(pSVar8 + (uint)bVar11 * -8 + 4 + (uint)bVar11 * -8 + 4);
  *(uint *)(&DAT_01ba5ccc + iVar6) = uVar3;
  *(int *)(&DAT_01ba5cd0 + iVar6) = render_flags;
  iVar5 = *(int *)this_ptr;
  iVar1 = *(int *)(iVar5 + 8 + (uint)*(ushort *)triangle_indices * 0x30);
  iVar2 = *(int *)(iVar5 + (uint)*(ushort *)(triangle_indices + 2) * 0x30 + 8);
  iVar5 = *(int *)(iVar5 + 8 + (uint)*(ushort *)(triangle_indices + 4) * 0x30);
  if ((iVar1 < iVar2) && (iVar1 < iVar5)) {
    *(int *)(iVar6 + 0x1ba5cd4) = iVar1;
    _DAT_01ba5cc4 = _DAT_01ba5cc4 + 1;
    return;
  }
  if (iVar5 <= iVar2) {
    *(int *)(_DAT_01ba5cc4 * 0x20 + 0x1ba5cd4) = iVar5;
    _DAT_01ba5cc4 = _DAT_01ba5cc4 + 1;
    return;
  }
  *(int *)(_DAT_01ba5cc4 * 0x20 + 0x1ba5cd4) = iVar2;
  _DAT_01ba5cc4 = _DAT_01ba5cc4 + 1;
  return;
}
