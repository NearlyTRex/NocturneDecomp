// Name: engine_3d.c_renderPolygonWithRenderFlags_FUN_00408c10
// Address: 00408c10
// Address Range: [[00408c10, 00408d02]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_00408c10(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_00408c10(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&primitive->surface_normal);
  if (iVar1 != 0) {
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
                     ((primitive->surface_normal).A.i,(primitive->surface_normal).B.i,
                      (primitive->surface_normal).C.i);
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
    if (_DAT_01c00c78 == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_004349a0
                ((primitive->base).count,(int *)(primitive + 1));
      return;
    }
    engine_clipper_c_FUN_00432cd0((primitive->base).count,primitive + 1);
  }
  return;
}
