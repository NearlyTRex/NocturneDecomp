// Name: core_skeleton.cpp_FUN_0054af10
// Address: 0054af10
// Address Range: [[0054af10, 0054afaa]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_FUN_0054af10(CDeformableModel *this_ptr,CBoundingBox3D *bounding_box)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_FUN_0054af10(CDeformableModel *this_ptr,CBoundingBox3D *bounding_box)

{
  int iVar1;
  float fVar2;
  int extraout_ECX;
  int iVar3;
  float10 fVar4;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar1 != 0) {
    return *(int *)this_ptr + -1;
  }
  if ((*(int *)this_ptr < 2) || (*(int *)&g_CGamePtr->field_0x24c != 0)) {
    return 0;
  }
  fVar2 = core_box_cpp_FUN_0041e100(bounding_box);
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
