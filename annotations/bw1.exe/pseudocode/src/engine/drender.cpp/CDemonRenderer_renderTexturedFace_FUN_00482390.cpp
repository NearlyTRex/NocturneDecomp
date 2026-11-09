// Name: engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00482390
// Address: 00482390
// Address Range: [[00482390, 004824a5]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_00482390(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_00482390(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)

{
  SInputFace *pSVar1;
  ushort uVar2;
  SInputFace *pSVar3;
  
  if (render_flags == -1) {
    render_flags = 0x2cd;
  }
  if (*(int *)(this_ptr + 0x1c) != 0) {
    engine_drender_cpp_CDemonRenderer_captureFace_FUN_00484c20
              (this_ptr,(STrianglePackedIndices *)face,render_flags);
    return;
  }
  if ((*(int *)(this_ptr + 4) == 0) && (*(int *)(this_ptr + 0x20) == 0)) {
    pSVar3 = face;
    do {
      uVar2 = *(ushort *)pSVar3;
      *(uint *)((uint)uVar2 * 0x30 + 0x18 + *(int *)this_ptr) = (uint)*(ushort *)(pSVar3 + 6) << 8;
      pSVar1 = pSVar3 + 0xc;
      pSVar3 = pSVar3 + 2;
      *(uint *)((uint)uVar2 * 0x30 + 0x1c + *(int *)this_ptr) = (uint)*(ushort *)pSVar1 << 8;
    } while (pSVar3 != face + 6);
  }
  _DAT_01bc1240 = (uint)*(ushort *)face;
  _DAT_01bc1244 = (uint)*(ushort *)(face + 2);
  _DAT_01bc1248 = (uint)*(ushort *)(face + 4);
  if (*(int *)(this_ptr + 4) == 0) {
    if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f02c = engine_special_cpp_FUN_0057de01;
    }
    else {
      _DAT_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
    }
    _DAT_01c51d14 = render_flags;
    _DAT_01c51d18 = 6;
    engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(this_ptr,3,(int *)&DAT_01bc1240);
    return;
  }
  _DAT_01c51d14 = 0;
  _DAT_01c51d18 = 0;
  _DAT_01c4f02c = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26;
  engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(this_ptr,3,(int *)&DAT_01bc1240);
  return;
}
