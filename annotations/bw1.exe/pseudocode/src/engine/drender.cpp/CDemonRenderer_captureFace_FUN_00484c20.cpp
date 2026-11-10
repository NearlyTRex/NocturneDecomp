// Name: engine_drender.cpp_CDemonRenderer_captureFace_FUN_00484c20
// Address: 00484c20
// Address Range: [[00484c20, 00484d91]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_00484c20(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_00484c20(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  STrianglePackedIndices *pSVar8;
  STrianglePackedIndices *pSVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  
  bVar12 = 0;
  if (this_ptr->face_capture_enabled == 0) {
    iVar6 = engine_prim_c_getTriangleWindingFromPackedIndices_FUN_0053e000(triangle_indices);
    if (iVar6 == 0) {
      return;
    }
  }
  else {
    pSVar1 = this_ptr->vertex_buffer_ptr;
    uVar5 = *(uint *)(pSVar1 + (uint)*(ushort *)(triangle_indices + 4) * 0x30 + 0x10) &
            *(uint *)(pSVar1 + (uint)*(ushort *)triangle_indices * 0x30 + 0x10) &
            *(uint *)(pSVar1 + (uint)*(ushort *)(triangle_indices + 2) * 0x30 + 0x10);
    if (((uVar5 & 0x80000000) != 0) && ((char)uVar5 != '\0')) {
      return;
    }
  }
  if (4999 < _DAT_01bc1280) {
    _DAT_01d1d400 = "..\\engine\\drender.cpp";
    _DAT_01d1d404 = 0xb78;
    core_main_c_FUN_005030e0("CDR::captureFace - too many faces captured");
  }
  uVar4 = _DAT_01bc1284;
  iVar7 = _DAT_01bc1280 * 0x20;
  puVar10 = (uint *)(iVar7 + 0x1bc1298 + (uint)bVar12 * -8);
  pSVar8 = triangle_indices + (uint)bVar12 * -8 + 4;
  *(uint *)(iVar7 + 0x1bc1294) = *(uint *)triangle_indices;
  puVar11 = puVar10 + (uint)bVar12 * -2 + 1;
  pSVar9 = pSVar8 + (uint)bVar12 * -8 + 4;
  *puVar10 = *(uint *)pSVar8;
  *puVar11 = *(uint *)pSVar9;
  puVar11[(uint)bVar12 * -2 + 1] = *(uint *)(pSVar9 + (uint)bVar12 * -8 + 4);
  *(ushort *)(puVar11 + (uint)bVar12 * -2 + 1 + (uint)bVar12 * -2 + 1) =
       *(ushort *)(pSVar9 + (uint)bVar12 * -8 + 4 + (uint)bVar12 * -8 + 4);
  *(uint *)(&DAT_01bc1288 + iVar7) = uVar4;
  *(int *)(&DAT_01bc128c + iVar7) = render_flags;
  pSVar1 = this_ptr->vertex_buffer_ptr;
  iVar6 = *(int *)(pSVar1 + (uint)*(ushort *)triangle_indices * 0x30 + 8);
  iVar2 = *(int *)(pSVar1 + (uint)*(ushort *)(triangle_indices + 2) * 0x30 + 8);
  iVar3 = *(int *)(pSVar1 + (uint)*(ushort *)(triangle_indices + 4) * 0x30 + 8);
  if ((iVar6 < iVar2) && (iVar6 < iVar3)) {
    *(int *)(iVar7 + 0x1bc1290) = iVar6;
    _DAT_01bc1280 = _DAT_01bc1280 + 1;
    return;
  }
  if (iVar3 <= iVar2) {
    *(int *)(_DAT_01bc1280 * 0x20 + 0x1bc1290) = iVar3;
    _DAT_01bc1280 = _DAT_01bc1280 + 1;
    return;
  }
  *(int *)(_DAT_01bc1280 * 0x20 + 0x1bc1290) = iVar2;
  _DAT_01bc1280 = _DAT_01bc1280 + 1;
  return;
}
