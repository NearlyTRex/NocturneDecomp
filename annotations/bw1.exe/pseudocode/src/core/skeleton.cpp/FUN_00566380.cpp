// Name: core_skeleton.cpp_FUN_00566380
// Address: 00566380
// Address Range: [[00566380, 0056641a]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_FUN_00566380(CDeformableModel *this_ptr,CBoundingBox3D *bounding_box)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_FUN_00566380(CDeformableModel *this_ptr,CBoundingBox3D *bounding_box)

{
  int iVar1;
  float fVar2;
  int extraout_ECX;
  int iVar3;
  float10 fVar4;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar1 != 0) {
    return *(int *)this_ptr + -1;
  }
  if ((*(int *)this_ptr < 2) || (*(int *)&g_CGamePtr->field_0x244 != 0)) {
    return 0;
  }
  fVar2 = core_box_cpp_FUN_00420dc0(bounding_box);
  fVar4 = (float10)fVar2;
  round();
  iVar1 = extraout_ECX + -1;
  if (0 < iVar1) {
    iVar3 = iVar1 * 8 + (int)this_ptr;
    do {
      while (*(int *)(iVar3 + 8) == 0) {
        if ((int)ROUND(fVar4) < *(int *)(iVar3 + 4)) {
          return iVar1;
        }
        iVar1 = iVar1 + -1;
        iVar3 = iVar3 + -8;
        if (iVar1 < 1) {
          return iVar1;
        }
      }
      iVar1 = iVar1 + -1;
      iVar3 = iVar3 + -8;
    } while (0 < iVar1);
  }
  return iVar1;
}
