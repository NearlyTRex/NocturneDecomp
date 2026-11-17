// Name: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0046bd60
// Address: 0046bd60
// Address Range: [[0046bd60, 0046be54]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0046bd60(CDemonRenderer *this_ptr,SInputFace *face)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0046bd60(CDemonRenderer *this_ptr,SInputFace *face)

{
  ushort *puVar1;
  ushort uVar2;
  SInputFace *pSVar3;
  
  if ((this_ptr->shadow_pass_active == 0) && (this_ptr->skip_uv_extraction == 0)) {
    pSVar3 = face;
    do {
      uVar2 = (pSVar3->vertex_indices).vertex_index_0;
      this_ptr->vertex_buffer_ptr[uVar2].u = (uint)pSVar3->u_coord_0 << 8;
      puVar1 = &pSVar3->v_coord_0;
      pSVar3 = (SInputFace *)&(pSVar3->vertex_indices).vertex_index_1;
      this_ptr->vertex_buffer_ptr[uVar2].v = (uint)*puVar1 << 8;
    } while (pSVar3 != (SInputFace *)&face->u_coord_0);
  }
  g_INT_ARRAY_01bdd818[0] = (int)(face->vertex_indices).vertex_index_0;
  g_INT_ARRAY_01bdd818[1] = (int)(face->vertex_indices).vertex_index_1;
  g_INT_ARRAY_01bdd818[2] = (int)(face->vertex_indices).vertex_index_2;
  if (this_ptr->shadow_pass_active == 0) {
    if (g_INT_005fba20 == 0x20) {
      g_PTR_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
    }
    else {
      g_PTR_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    g_INT_01c6e2b8 = 6;
    g_BIT_INTEGER32_01c6e2b4.dword = 0x2cd;
  }
  else {
    g_BIT_INTEGER32_01c6e2b4.dword = 0;
    g_INT_01c6e2b8 = 0;
    g_PTR_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
  }
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(this_ptr,3,g_INT_ARRAY_01bdd818);
  return;
}
