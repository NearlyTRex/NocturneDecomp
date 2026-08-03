// Name: engine_3d.c_renderPolygonTexturedUVLit_FUN_00406920
// Address: 00406920
// Address Range: [[00406920, 004069f0]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLit_FUN_00406920(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLit_FUN_00406920(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  byte bVar2;
  UIntegerFloat aUStackY_1010 [1016];
  CVector3i local_28;
  CVector3i local_1c;
  
  bVar2 = 0;
  local_28.x = *(int *)&(prim->surface_normal).A;
  local_28.y = *(int *)&(prim->surface_normal).B;
  local_28.z = *(int *)&(prim->surface_normal).C;
  engine_matrix_c_normalizeVector3DFixed_FUN_004cde10(&local_28,&local_1c);
  local_28.x = local_1c.x;
  *(uint *)((int)&local_28 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_1c + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal);
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
    _DAT_01c039a0 = 1;
    _DAT_01c039a4 = 0;
    engine_3d_c_calculatePolygonLighting_FUN_00404710(prim);
    engine_clipper_c_FUN_00432cd0((prim->base).count,prim + 1);
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
