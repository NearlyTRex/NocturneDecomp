// Name: engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_004060b0
// Address: 004060b0
// Address Range: [[004060b0, 00406224]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_004060b0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_004060b0(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal);
  if (iVar1 != 0) {
    if (DAT_006b0278 == 0) {
      if (0x00000001 == 0) {
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
        _DAT_01c039a0 = 0x10;
        _DAT_01c039a4 = 0;
      }
      else {
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
        _DAT_01c039a0 = 0xd0;
        _DAT_01c039a4 = 1;
      }
    }
    else {
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
      _DAT_01c039a0 = 0;
      _DAT_01c039a4 = 0;
    }
    _DAT_01c00c74 =
         engine_light_cpp_calculateLighting_FUN_004c6cc0
                   ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i
                   );
    _DAT_01c00c70 = engine_3d_c_FUN_00404680(DAT_006b0260,_DAT_01c00c74);
    engine_clipper_c_FUN_00432cd0((prim->base).count,prim + 1);
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
