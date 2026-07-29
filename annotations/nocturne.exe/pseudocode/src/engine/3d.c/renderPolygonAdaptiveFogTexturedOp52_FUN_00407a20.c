// Name: engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20
// Address: 00407a20
// Address Range: [[00407a20, 00407cb3]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal);
  if (iVar1 != 0) {
    if (DAT_006b0278 == 0) {
      if (DAT_006b0274 == 0) {
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
          _DAT_01c039a4 = 0;
          _DAT_01c039a0 = 0xc1;
        }
        else {
          _DAT_01c039a4 = 1;
          _DAT_01c039a0 = 0xc1;
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
        _DAT_01c039a0 = 0xc0;
        _DAT_01c039a4 = 1;
        engine_light_cpp_calculateLighting_FUN_004c6cc0
                  ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i)
        ;
        _DAT_01c00c70 = engine_3d_c_FUN_00404680(DAT_006b0260,_DAT_01c00c74);
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
    piVar3 = &DAT_006b029c;
    pSVar2 = prim + 1;
    for (iVar1 = 0; iVar1 < (prim->base).count * 3; iVar1 = iVar1 + 3) {
      *piVar3 = (pSVar2->base).type + DAT_006b0264;
      (&DAT_005c502c)[((pSVar2->base).type + DAT_006b0264) * 0xc] = (pSVar2->base).count;
      piVar3 = piVar3 + 1;
      *(UIntegerFloat *)(&DAT_005c5030 + ((pSVar2->base).type + DAT_006b0264) * 0x30) =
           (pSVar2->surface_normal).A;
      pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
    }
    engine_clipper_c_FUN_00432cd0((prim->base).count,&DAT_006b029c);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
