// Name: engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046d960
// Address: 0046d960
// Address Range: [[0046d960, 0046dbcd]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_0046d960(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_0046d960(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags)

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
  
  if (((*(int *)(this_ptr + 0x10) == 0) && (*(int *)(this_ptr + 0xc) == 0)) && (DAT_007303fc != 0))
  {
    if (*(int *)(this_ptr + 4) == 0) {
      if (DAT_005fba20 == 0x20) {
        _DAT_01c6b5cc = engine_special_cpp_FUN_00560f31;
      }
      else {
        _DAT_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
      }
      _DAT_01c6e2b4 = render_flags;
      _DAT_01c6e2b8 = 6;
      if (_DAT_01c6cee8 == 0) {
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
          unkafter_dpart_cpp_FUN_00466d50(&local_28,*(int *)(primitive_array + 4));
          primitive_array = primitive_array + primitive_stride;
        }
      }
      else {
        iVar3 = 0;
        local_14 = 0;
        if (0 < primitive_count) {
          local_18 = 0;
          do {
            iVar2 = engine_prim_c_FUN_00515b80((SMRGLPrimitiveTriangle *)primitive_array);
            if (iVar2 != 0) {
              iVar3 = iVar3 + 1;
              iVar2 = local_18 + 4;
              *(SMRGLPrimitiveQuad **)(&DAT_005f2b04 + local_18) = primitive_array;
              local_18 = iVar2;
              if (1999 < iVar3) {
                _DAT_01d71de0 = "..\\engine\\drender.cpp";
                _DAT_01d71de4 = 0x9b6;
                core_main_c_FUN_004e4330("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar3);
              }
            }
            local_14 = local_14 + 1;
            primitive_array = primitive_array + primitive_stride;
          } while (local_14 < primitive_count);
        }
        if (0 < iVar3) {
          engine_special_cpp_drawPolyList_FUN_00565c70
                    (*(uint *)this_ptr,&DAT_005f2b04,iVar3,_DAT_01c6e2b4);
          return;
        }
      }
    }
    else {
      _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
      _DAT_01c6e2b4 = 0;
      _DAT_01c6e2b8 = _DAT_01c6e2b4;
      for (; 0 < primitive_count; primitive_count = primitive_count + -1) {
        local_28 = *(int *)(primitive_array + 0x18);
        local_24 = *(int *)(primitive_array + 0x24);
        local_20 = *(int *)(primitive_array + 0x30);
        if (*(int *)(primitive_array + 4) == 4) {
          local_1c = *(int *)(primitive_array + 0x3c);
        }
        pSVar1 = primitive_array + 4;
        primitive_array = primitive_array + primitive_stride;
        unkafter_dpart_cpp_FUN_004673d0((CVector3i *)&local_28,*(int *)pSVar1);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < primitive_count) {
      do {
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
                  (this_ptr,(SMRGLPrimitivePoly *)primitive_array,render_flags);
        iVar3 = iVar3 + 1;
        primitive_array = primitive_array + primitive_stride;
      } while (iVar3 < primitive_count);
    }
  }
  return;
}
