// Name: core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00543d00
// Address: 00543d00
// Address Range: [[00543d00, 00543d7c]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_selectLOD_FUN_00543d00(CDeformableModel *this_ptr,CBoundingBox3D *bounding_box)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_selectLOD_FUN_00543d00(CDeformableModel *this_ptr,CBoundingBox3D *bounding_box)

{
  int iVar1;
  float fVar2;
  int extraout_ECX;
  int iVar3;
  float10 fVar4;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (1 < *(int *)this_ptr) {
      fVar2 = core_box_cpp_FUN_0041ae50(bounding_box);
      fVar4 = (float10)fVar2;
      round();
      iVar1 = extraout_ECX + -1;
      if (0 < iVar1) {
        iVar3 = iVar1 * 8 + (int)this_ptr;
        do {
          if ((*(int *)(iVar3 + 8) == 0) && ((int)ROUND(fVar4) < *(int *)(iVar3 + 4))) {
            return iVar1;
          }
          iVar1 = iVar1 + -1;
          iVar3 = iVar3 + -8;
        } while (0 < iVar1);
      }
      return iVar1;
    }
  }
  else {
    iVar1 = *(int *)this_ptr + -1;
  }
  return iVar1;
}
