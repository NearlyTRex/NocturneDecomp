// Name: engine_3d.c_FUN_00406b80
// Address: 00406b80
// Address Range: [[00406b80, 00406c53]]
// Convention: unknown
// Signature: int * engine_3d_c_FUN_00406b80(SMRGLHeaderPrimitive *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * engine_3d_c_FUN_00406b80(SMRGLHeaderPrimitive *param_1)

{
  int iVar1;
  byte bVar2;
  UIntegerFloat aUStackY_1010 [1016];
  UIntegerFloat local_28;
  UIntegerFloat local_24;
  UIntegerFloat local_20;
  UIntegerFloat local_1c;
  
  bVar2 = 0;
  local_28 = (param_1->surface_normal).A;
  local_24 = (param_1->surface_normal).B;
  local_20 = (param_1->surface_normal).C;
  engine_matrix_c_normalizeVector3DFixed_FUN_004cde10(&stack0xffffffd8);
  local_28 = local_1c;
  (&stack0xffffffdc)[(uint)bVar2 * 0xfffffffe] =
       (UIntegerFloat)*(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&param_1->surface_normal);
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
    _DAT_01c039a4 = 2;
    engine_3d_c_calculatePolygonLighting_FUN_00404710(param_1);
    engine_clipper_c_FUN_00432cd0((param_1->base).count,param_1 + 1);
  }
  return &param_1[1].base.type + (param_1->base).count;
}
