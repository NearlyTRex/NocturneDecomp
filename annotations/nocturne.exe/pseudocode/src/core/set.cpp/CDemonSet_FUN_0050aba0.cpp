// Name: core_set.cpp_CDemonSet_FUN_0050aba0
// Address: 0050aba0
// Address Range: [[0050aba0, 0050ad16]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_0050aba0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_FUN_0050aba0(CDemonSet *this_ptr)

{
  CVector3f *pCVar1;
  uint *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  CVector3f local_2c [2];
  
  iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  fVar3 = *(float *)(iVar4 + 0x20) - this_ptr->cameras[this_ptr->selected_camera_index].position.x;
  local_2c[0].x =
       (*(float *)(iVar4 + 0x24) - this_ptr->cameras[this_ptr->selected_camera_index].position.y) +
       (float)4;
  fVar6 = (float10)*(float *)(iVar4 + 0x28) -
          (float10)this_ptr->cameras[this_ptr->selected_camera_index].position.z;
  local_2c[0].y = (float)fVar6;
  atan2((float10)fVar3,fVar6);
  fVar6 = SQRT((float10)7.40862e-39 * (float10)7.40862e-39 +
               (float10)local_2c[0].x * (float10)local_2c[0].x);
  fVar7 = atan2((float10)fVar3,fVar6);
  local_2c[0].z = 0.0;
  local_2c[0].y = (float)fVar6;
  local_2c[0].x = (float)-fVar7;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            (&g_CDemonCamera_01fb8508.rotation_matrix,local_2c);
  iVar4 = this_ptr->selected_camera_index;
  pCVar1 = &this_ptr->cameras[iVar4].orientation;
  if (pCVar1 != local_2c) {
    pCVar1->x = local_2c[0].x;
    this_ptr->cameras[iVar4].orientation.y = local_2c[0].y;
    this_ptr->cameras[iVar4].orientation.z = local_2c[0].z;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(&g_CDemonCamera_01fb8508,0);
  core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(this_ptr,0x10);
  core_set_cpp_CDemonSet_renderOpaqueActors_FUN_0050a640(this_ptr);
  iVar4 = 0;
  core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(&g_CDemonCamera_01fb8508,0);
  if (0 < _DAT_01fb9b54) {
    iVar5 = 0;
    do {
      puVar2 = (uint *)(&DAT_01fb9b58 + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970((CDemonLight *)*puVar2);
    } while (iVar4 < _DAT_01fb9b54);
  }
  return;
}
