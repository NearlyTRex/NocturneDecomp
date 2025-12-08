// Name: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
// Address: 00499170
// Address Range: [[00499170, 00499329]]
// Convention: __cdecl
// Signature: float core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170(CDemonRaytrace * this_ptr, CVector3f * world_position)

#include "nocturne.h"

float __cdecl
core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
          (CDemonRaytrace *this_ptr,CVector3f *world_position)

{
  int iVar1;
  CDemonCube *pCVar2;
  float *extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  float fStack_44;
  int iStack_34;
  int local_30;
  
  fVar3 = ((float10)world_position->y - (float10)(this_ptr->bbox_min).y) /
          (float10)(this_ptr->cell_size).y;
  fVar4 = ((float10)world_position->z - (float10)(this_ptr->bbox_min).z) /
          (float10)(this_ptr->cell_size).z;
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    ((double)((world_position->x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x
                             ));
  fVar5 = (float10)0.125f;
  fVar6 = ((float10)*extraout_EDX -
          ((float10)(int)ROUND(dVar7) * (float10)(this_ptr->cell_size).x +
          (float10)(this_ptr->bbox_min).x)) / ((float10)(this_ptr->cell_size).x * fVar5);
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
  fVar3 = ((float10)*(float *)(extraout_EDX_00 + 4) -
          ((float10)(int)ROUND(dVar7) * (float10)(this_ptr->cell_size).y +
          (float10)(this_ptr->bbox_min).y)) / ((float10)(this_ptr->cell_size).y * fVar5);
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar4);
  iStack_34 = (int)ROUND(dVar7);
  fVar4 = ((float10)*(float *)(extraout_EDX_01 + 8) -
          ((float10)iStack_34 * (float10)(this_ptr->cell_size).z + (float10)(this_ptr->bbox_min).z))
          / ((float10)(this_ptr->cell_size).z * fVar5);
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
  local_30 = (int)ROUND(dVar7);
  crt_math_c_round_FUN_005fe6b0((double)fVar3);
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar4);
  iVar1 = (int)ROUND(dVar7);
  if (((((extraout_EDX_02 < 0) || (local_30 < 0)) || (iVar1 < 0)) ||
      ((7 < extraout_EDX_02 || (7 < local_30)))) || (7 < iVar1)) {
    fStack_44 = -999.0;
  }
  else {
    while (pCVar2 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                              (this_ptr,0x4991f3,iStack_34,0x499218), pCVar2 != (CDemonCube *)0x0) {
      if ((pCVar2->voxel_buffer1 != (SVoxelGrid *)0x0) &&
         ((pCVar2->voxel_buffer1->voxels[iVar1][local_30] &
          g_PrecomputedSurfaceNormals[0x63dc].x._0_1_) != 0)) {
        return (float)local_30 * (this_ptr->cell_size).y * 0.125f +
               (float)iStack_34 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      }
      local_30 = local_30 + -1;
      if (local_30 < 0) {
        iStack_34 = iStack_34 + -1;
        local_30 = 7;
      }
    }
    fStack_44 = -999.9;
  }
  return fStack_44;
}
