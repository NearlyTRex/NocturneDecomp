// Name: core_skeleton.cpp_CDeformableModel_selectLOD_FUN_00566380
// Address: 00566380
// Address Range: [[00566380, 0056641a]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_selectLOD_FUN_00566380(CDeformableModel *this_ptr,CBoundingBox3D *bounding_box)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_selectLOD_FUN_00566380(CDeformableModel *this_ptr,CBoundingBox3D *bounding_box)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar1 != 0) {
    return this_ptr->num_lods + -1;
  }
  if ((this_ptr->num_lods < 2) || (g_CGamePtr->letterbox_mode != 0)) {
    return 0;
  }
  fVar2 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420dc0(bounding_box);
  iVar1 = this_ptr->num_lods;
  dVar5 = round((double)fVar2);
  iVar3 = iVar1 + -1;
  if (0 < iVar3) {
    piVar4 = &this_ptr->lod_info[iVar1 + -2].shadow_only_flag;
    do {
      while (piVar4[2] == 0) {
        if ((int)ROUND(dVar5) < piVar4[1]) {
          return iVar3;
        }
        iVar3 = iVar3 + -1;
        piVar4 = piVar4 + -2;
        if (iVar3 < 1) {
          return iVar3;
        }
      }
      iVar3 = iVar3 + -1;
      piVar4 = piVar4 + -2;
    } while (0 < iVar3);
  }
  return iVar3;
}
