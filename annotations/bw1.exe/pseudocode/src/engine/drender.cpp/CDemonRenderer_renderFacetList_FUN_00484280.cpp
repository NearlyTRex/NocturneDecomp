// Name: engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_00484280
// Address: 00484280
// Address Range: [[00484280, 004844ed]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_00484280(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_00484280(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)

{
  SMRGLPrimitiveQuad *pSVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (((*(int *)(this_ptr + 0x10) == 0) && (*(int *)(this_ptr + 0xc) == 0)) && (DAT_00713a7c != 0))
  {
    if (*(int *)(this_ptr + 4) == 0) {
      if (DAT_0061b4a0 == 0x20) {
        _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
      }
      else {
        _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
      }
      _DAT_01c51d14 = render_flags;
      _DAT_01c51d18 = 6;
      if (_DAT_01c50948 == 0) {
        for (; 0 < primitive_count; primitive_count = primitive_count + -1) {
          local_28 = *(int *)(primitive_array + 0x18);
          local_24 = *(int *)(primitive_array + 0x24);
          local_20 = *(int *)(primitive_array + 0x30);
          if (*(int *)(primitive_array + 4) == 4) {
            local_1c = *(int *)(primitive_array + 0x3c);
          }
          if (*(int *)(this_ptr + 0x20) == 0) {
            *(uint *)(local_28 * 0x30 + *(int *)this_ptr + 0x18) =
                 *(uint *)(primitive_array + 0x1c);
            *(uint *)(*(int *)this_ptr + local_28 * 0x30 + 0x1c) =
                 *(uint *)(primitive_array + 0x20);
            *(uint *)(*(int *)this_ptr + local_24 * 0x30 + 0x18) =
                 *(uint *)(primitive_array + 0x28);
            *(uint *)(local_24 * 0x30 + *(int *)this_ptr + 0x1c) =
                 *(uint *)(primitive_array + 0x2c);
            *(uint *)(*(int *)this_ptr + local_20 * 0x30 + 0x18) =
                 *(uint *)(primitive_array + 0x34);
            *(uint *)(local_20 * 0x30 + *(int *)this_ptr + 0x1c) =
                 *(uint *)(primitive_array + 0x38);
            if (*(int *)(primitive_array + 4) == 4) {
              *(uint *)(*(int *)this_ptr + local_1c * 0x30 + 0x18) =
                   *(uint *)(primitive_array + 0x40);
              *(uint *)(local_1c * 0x30 + *(int *)this_ptr + 0x1c) =
                   *(uint *)(primitive_array + 0x44);
            }
          }
          core_dpart_cpp_FUN_0047a480(&local_28,*(int *)(primitive_array + 4));
          primitive_array = primitive_array + primitive_stride;
        }
      }
      else {
        iVar3 = 0;
        local_14 = 0;
        if (0 < primitive_count) {
          local_18 = 0;
          do {
            iVar2 = engine_prim_c_calculateTriangleWindingOrderFromIndices_FUN_0053de20
                              ((SMRGLPrimitiveTriangle *)primitive_array);
            if (iVar2 != 0) {
              iVar3 = iVar3 + 1;
              iVar2 = local_18 + 4;
              *(SMRGLPrimitiveQuad **)(&DAT_00612568 + local_18) = primitive_array;
              local_18 = iVar2;
              if (1999 < iVar3) {
                _DAT_01d1d400 = "..\\engine\\drender.cpp";
                _DAT_01d1d404 = 0x9b6;
                core_main_c_FUN_005030e0("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar3);
              }
            }
            local_14 = local_14 + 1;
            primitive_array = primitive_array + primitive_stride;
          } while (local_14 < primitive_count);
        }
        if (0 < iVar3) {
          engine_special_cpp_drawPolyList_FUN_005823a0
                    (*(uint *)this_ptr,&DAT_00612568,iVar3,_DAT_01c51d14);
          return;
        }
      }
    }
    else {
      _DAT_01c4f02c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26;
      _DAT_01c51d14 = 0;
      _DAT_01c51d18 = _DAT_01c51d14;
      for (; 0 < primitive_count; primitive_count = primitive_count + -1) {
        local_28 = *(int *)(primitive_array + 0x18);
        local_24 = *(int *)(primitive_array + 0x24);
        local_20 = *(int *)(primitive_array + 0x30);
        if (*(int *)(primitive_array + 4) == 4) {
          local_1c = *(int *)(primitive_array + 0x3c);
        }
        pSVar1 = primitive_array + 4;
        primitive_array = primitive_array + primitive_stride;
        core_dpart_cpp_FUN_0047ab00((CVector3i *)&local_28,*(int *)pSVar1);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < primitive_count) {
      do {
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
                  (this_ptr,(SMRGLPrimitivePoly *)primitive_array,render_flags);
        iVar3 = iVar3 + 1;
        primitive_array = primitive_array + primitive_stride;
      } while (iVar3 < primitive_count);
    }
  }
  return;
}
