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
  int extraout_ECX;
  int *piVar3;
  double dVar4;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (1 < this_ptr->num_lods) {
      fVar2 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(bounding_box);
      dVar4 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
      iVar1 = extraout_ECX + -1;
      if (0 < iVar1) {
        piVar3 = &this_ptr->lod_info[extraout_ECX + -2].shadow_only_flag;
        do {
          if ((piVar3[2] == 0) && ((int)ROUND(dVar4) < piVar3[1])) {
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
