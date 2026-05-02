// Name: core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40
// Address: 0059ce40
// MANUAL RECONSTRUCTION
// Address Range: [[0059ce40, 0059cebc]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0059ce40(CDeformableModel *this_ptr,CBoundingBox3D *bounding_box)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0059ce40(CDeformableModel *this_ptr,CBoundingBox3D *bounding_box)

{
  int iVar1;
  float fVar2;
  int iVar2;
  int *piVar3;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar1 == 0) {
    iVar2 = 0;
    if (1 < this_ptr->num_lods) {
      fVar2 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(bounding_box);
      iVar2 = this_ptr->num_lods + -1;
      if (0 < iVar2) {
        piVar3 = &this_ptr->lod_info[this_ptr->num_lods + -2].shadow_only_flag;
        do {
          if ((piVar3[2] == 0) && ((int)ROUND(ROUND(fVar2)) < piVar3[1])) {
            return iVar2;
          }
          iVar2 = iVar2 + -1;
          piVar3 = piVar3 + -2;
        } while (0 < iVar2);
      }
      return iVar2;
    }
  }
  else {
    iVar2 = this_ptr->num_lods + -1;
  }
  return iVar2;
}
