// Name: engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_00408d10
// Address: 00408d10
// Address Range: [[00408d10, 00408e59]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_00408d10(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_00408d10(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal);
  if (iVar2 != 0) {
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = engine_special_cpp_FUN_005300ec;
      }
      else {
        _DAT_01c00c7c = engine_special_cpp_FUN_00530322;
      }
    }
    else if (DAT_005b7624 == 0x20) {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
    }
    else {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
    }
    _DAT_01c039a0 = render_flags;
    if ((render_flags & 0x10U) != 0) {
      _DAT_01c00c74 =
           engine_light_cpp_calculateLighting_FUN_004c6cc0
                     ((prim->surface_normal).A.i,(prim->surface_normal).B.i,
                      (prim->surface_normal).C.i);
    }
    _DAT_01c039a4 = render_state_flags;
    if (render_state_flags == 0) {
      if ((render_flags & 0xc0U) != 0) {
        _DAT_01c039a4 = 1;
      }
    }
    else {
      _DAT_01c039a4 = 5;
    }
    iVar2 = 0;
    if (0 < (prim->base).count) {
      iVar4 = 0;
      pSVar3 = prim;
      do {
        iVar1 = pSVar3[1].base.type;
        *(int *)((int)&DAT_006b029c + iVar4) = iVar1;
        (&DAT_005c502c)[iVar1 * 0xc] = pSVar3[1].base.count;
        iVar4 = iVar4 + 4;
        *(UIntegerFloat *)(&DAT_005c5030 + iVar1 * 0x30) = pSVar3[1].surface_normal.A;
        iVar2 = iVar2 + 1;
        pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
      } while (iVar2 < (prim->base).count);
    }
    if (_DAT_01c00c78 == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_004349a0((prim->base).count,&DAT_006b029c);
      return;
    }
    engine_clipper_c_FUN_00432cd0((prim->base).count,&DAT_006b029c);
  }
  return;
}
