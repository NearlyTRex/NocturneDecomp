// Name: core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40
// Address: 0059ce40
// Address Range: [[0059ce40, 0059cebc]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40(CDeformableModel * this_ptr, CBoundingBox3D * bounding_box)

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0059ce40
          (CDeformableModel *this_ptr,CBoundingBox3D *bounding_box)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (1 < this_ptr->num_lods) {
      fVar2 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(bounding_box);
      iVar1 = this_ptr->num_lods;
      dVar5 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
      iVar3 = iVar1 + -1;
      if (0 < iVar3) {
        piVar4 = &this_ptr->lod_info[iVar1 + -2].shadow_only_flag;
        do {
          if ((piVar4[2] == 0) && ((int)ROUND(dVar5) < piVar4[1])) {
            return iVar3;
          }
          iVar3 = iVar3 + -1;
          piVar4 = piVar4 + -2;
        } while (0 < iVar3);
      }
      return iVar3;
    }
  }
  else {
    iVar1 = this_ptr->num_lods + -1;
  }
  return iVar1;
}
