// Name: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00476300
// Address: 00476300
// Address Range: [[00476300, 004764b9]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00476300(CDemonRaytrace *this_ptr,CVector3f *world_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00476300(CDemonRaytrace *this_ptr,CVector3f *world_position)

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
  float10 fVar7;
  float fStack_2c;
  int iStack_1c;
  int iStack_18;
  
  fVar3 = ((float10)world_position->x - (float10)(this_ptr->bbox_min).x) /
          (float10)(this_ptr->cell_size).x;
  fVar4 = ((float10)world_position->y - (float10)(this_ptr->bbox_min).y) /
          (float10)(this_ptr->cell_size).y;
  fVar5 = ((float10)world_position->z - (float10)(this_ptr->bbox_min).z) /
          (float10)(this_ptr->cell_size).z;
  round();
  fVar6 = (float10)_DAT_005d1d23;
  fVar7 = ((float10)*extraout_EDX -
          ((float10)(int)ROUND(fVar3) * (float10)(this_ptr->cell_size).x +
          (float10)(this_ptr->bbox_min).x)) / ((float10)(this_ptr->cell_size).x * fVar6);
  round();
  iStack_1c = (int)ROUND(fVar4);
  fVar4 = ((float10)*(float *)(extraout_EDX_00 + 4) -
          ((float10)iStack_1c * (float10)(this_ptr->cell_size).y + (float10)(this_ptr->bbox_min).y))
          / ((float10)(this_ptr->cell_size).y * fVar6);
  round();
  fVar6 = ((float10)*(float *)(extraout_EDX_01 + 8) -
          ((float10)(int)ROUND(fVar5) * (float10)(this_ptr->cell_size).z +
          (float10)(this_ptr->bbox_min).z)) / ((float10)(this_ptr->cell_size).z * fVar6);
  round();
  round();
  iStack_18 = (int)ROUND(fVar4);
  round();
  iVar1 = (int)ROUND(fVar6);
  if (((((extraout_EDX_02 < 0) || (iStack_18 < 0)) || (iVar1 < 0)) ||
      ((7 < extraout_EDX_02 || (7 < iStack_18)))) || (7 < iVar1)) {
    fStack_2c = -999.0;
  }
  else {
    while (pCVar2 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
                              (this_ptr,(int)ROUND(fVar3),iStack_1c,(int)ROUND(fVar5)),
          pCVar2 != (CDemonCube *)0x0) {
      if ((pCVar2->voxel_buffer1 != (SVoxelGrid *)0x0) &&
         ((pCVar2->voxel_buffer1->voxels[iVar1][iStack_18] & (&DAT_00613888)[(int)ROUND(fVar7)]) !=
          0)) {
        return (float)iStack_18 * (this_ptr->cell_size).y * _DAT_005d1d23 +
               (float)iStack_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      }
      iStack_18 = iStack_18 + -1;
      if (iStack_18 < 0) {
        iStack_1c = iStack_1c + -1;
        iStack_18 = 7;
      }
    }
    fStack_2c = -999.9;
  }
  return fStack_2c;
}
