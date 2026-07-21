// Name: core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0051a700
// Address: 0051a700
// Address Range: [[0051a700, 0051a77c]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0051a700(int *param_1,undefined4 param_2)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0051a700(int *param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (1 < *param_1) {
      fVar2 = (float)core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_0041d450(param_2);
      iVar1 = *param_1;
      fVar3 = (float10)round((float10)fVar2);
      iVar1 = iVar1 + -1;
      if (0 < iVar1) {
        param_1 = param_1 + iVar1 * 2;
        do {
          if ((param_1[2] == 0) && ((int)ROUND(fVar3) < param_1[1])) {
            return iVar1;
          }
          iVar1 = iVar1 + -1;
          param_1 = param_1 + -2;
        } while (0 < iVar1);
      }
      return iVar1;
    }
  }
  else {
    iVar1 = *param_1 + -1;
  }
  return iVar1;
}
