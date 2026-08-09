// Name: core_set.cpp_CDemonSet_FUN_0050aba0
// Address: 0050aba0
// Address Range: [[0050aba0, 0050ad16]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_0050aba0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_FUN_0050aba0(CDemonSet *this_ptr)

{
  CVector3f *pCVar1;
  uint *puVar2;
  CHero *pCVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  CVector3f local_2c [2];
  
  pCVar3 = g_HeroActors[g_LocalHeroIndex];
  fVar4 = (pCVar3->base).base.location.position.x -
          this_ptr->cameras[this_ptr->selected_camera_index].position.x;
  local_2c[0].x =
       ((pCVar3->base).base.location.position.y -
       this_ptr->cameras[this_ptr->selected_camera_index].position.y) + (float)4;
  fVar7 = (float10)(pCVar3->base).base.location.position.z -
          (float10)this_ptr->cameras[this_ptr->selected_camera_index].position.z;
  local_2c[0].y = (float)fVar7;
  atan2((float10)fVar4,fVar7);
  fVar7 = SQRT((float10)7.40862e-39 * (float10)7.40862e-39 +
               (float10)local_2c[0].x * (float10)local_2c[0].x);
  fVar8 = atan2((float10)fVar4,fVar7);
  local_2c[0].z = 0.0;
  local_2c[0].y = (float)fVar7;
  local_2c[0].x = (float)-fVar8;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            (&g_CDemonCamera_01fb8508.rotation_matrix,local_2c);
  iVar5 = this_ptr->selected_camera_index;
  pCVar1 = &this_ptr->cameras[iVar5].orientation;
  if (pCVar1 != local_2c) {
    pCVar1->x = local_2c[0].x;
    this_ptr->cameras[iVar5].orientation.y = local_2c[0].y;
    this_ptr->cameras[iVar5].orientation.z = local_2c[0].z;
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_00440290(&g_CDemonCamera_01fb8508,0);
  core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(this_ptr,0x10);
  core_set_cpp_CDemonSet_renderOpaqueActors_FUN_0050a640(this_ptr);
  iVar5 = 0;
  core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(&g_CDemonCamera_01fb8508,0);
  if (0 < _DAT_01fb9b54) {
    iVar6 = 0;
    do {
      puVar2 = (uint *)(&DAT_01fb9b58 + iVar6);
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970((CDemonLight *)*puVar2);
    } while (iVar5 < _DAT_01fb9b54);
  }
  return;
}
