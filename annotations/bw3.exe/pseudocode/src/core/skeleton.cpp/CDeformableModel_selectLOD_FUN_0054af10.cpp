// Name: core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0054af10
// Address: 0054af10
// Address Range: [[0054af10, 0054afaa]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0054af10(CDeformableModel *this_ptr,CBoundingBox3D *bounding_box)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0054af10(CDeformableModel *this_ptr,CBoundingBox3D *bounding_box)

{
  int iVar1;
  float fVar2;
  int extraout_ECX;
  int *piVar3;
  float10 fVar4;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar1 != 0) {
    return this_ptr->num_lods + -1;
  }
  if ((this_ptr->num_lods < 2) || (g_CGamePtr->letterbox_mode != 0)) {
    return 0;
  }
  fVar2 = core_box_cpp_FUN_0041e100(bounding_box);
  fVar4 = (float10)fVar2;
  round();
  iVar1 = extraout_ECX + -1;
  if (0 < iVar1) {
    piVar3 = &this_ptr->lod_info[extraout_ECX + -2].shadow_only_flag;
    do {
      while (piVar3[2] == 0) {
        if ((int)ROUND(fVar4) < piVar3[1]) {
          return iVar1;
        }
        iVar1 = iVar1 + -1;
        piVar3 = piVar3 + -2;
        if (iVar1 < 1) {
          return iVar1;
        }
      }
      iVar1 = iVar1 + -1;
      piVar3 = piVar3 + -2;
    } while (0 < iVar1);
  }
  return iVar1;
}
