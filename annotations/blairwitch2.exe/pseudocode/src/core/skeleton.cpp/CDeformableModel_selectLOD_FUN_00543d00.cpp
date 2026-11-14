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
  int *piVar3;
  float10 fVar4;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (1 < this_ptr->num_lods) {
      fVar2 = core_box_cpp_FUN_0041ae50(bounding_box);
      fVar4 = (float10)fVar2;
      round();
      iVar1 = extraout_ECX + -1;
      if (0 < iVar1) {
        piVar3 = &this_ptr->lod_info[extraout_ECX + -2].shadow_only_flag;
        do {
          if ((piVar3[2] == 0) && ((int)ROUND(fVar4) < piVar3[1])) {
            return iVar1;
          }
          iVar1 = iVar1 + -1;
          piVar3 = piVar3 + -2;
        } while (0 < iVar1);
      }
      return iVar1;
    }
  }
  else {
    iVar1 = this_ptr->num_lods + -1;
  }
  return iVar1;
}
