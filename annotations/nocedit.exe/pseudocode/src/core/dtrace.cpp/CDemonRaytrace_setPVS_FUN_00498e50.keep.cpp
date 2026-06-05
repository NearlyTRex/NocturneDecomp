// Name: core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00498e50
// Address: 00498e50
// MANUAL RECONSTRUCTION
// Address Range: [[00498e50, 00498fa0]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_00498e50(CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_00498e50(CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices)

{
  CVector3f *pCVar10;
  int iVar11;
  CVector3f local_20 [2];
  float fVar1;
  ulonglong uVar8;
  int iVar7;
  float fVar4;
  float fVar3;
  int iVar6;
  int iVar5;
  float fVar2;
  
  g_PVSReadyFlag = 0;
  if ((0 < visible_cube_count) && (visible_cube_indices != (int *)0x0)) {
    g_PVSDrawnCubeCount = visible_cube_count;
    if (20000 < visible_cube_count) {
      g_CurrentFilename = "..\\core\\dtrace.cpp";
      g_CurrentLineNumber = 0x8c9;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::setPVS - Too many drawn cubes in pvs!");
    }
    iVar11 = 0;
    if (0 < g_PVSDrawnCubeCount) {
      pCVar10 = g_PVSCubePositions;
      do {
        iVar5 = *visible_cube_indices;
        g_PVSCubePointers[iVar11] = this_ptr->cube_data + iVar5;
        iVar6 = (this_ptr->grid_coord).z;
        uVar8 = (longlong)iVar5 / (longlong)(this_ptr->grid_coord).z;
        iVar7 = (this_ptr->grid_coord).y;
        fVar1 = (this_ptr->cell_size).y;
        fVar2 = (this_ptr->bbox_min).y;
        fVar3 = (this_ptr->cell_size).z;
        fVar4 = (this_ptr->bbox_min).z;
        if (pCVar10 != local_20) {
          pCVar10->x = (float)(int)((longlong)(int)uVar8 /
                                   (longlong)(this_ptr->grid_coord).y) * (this_ptr->cell_size).x +
                       (this_ptr->bbox_min).x;
          pCVar10->y = (float)(int)((longlong)(int)uVar8 %
                                   (longlong)iVar7) * fVar1 + fVar2;
          pCVar10->z = (float)(iVar5 % iVar6) * fVar3 + fVar4;
        }
        pCVar10 = pCVar10 + 1;
        iVar11 = iVar11 + 1;
        visible_cube_indices = visible_cube_indices + 1;
      } while (iVar11 < g_PVSDrawnCubeCount);
    }
    g_PVSReadyFlag = 1;
  }
  return;
}
