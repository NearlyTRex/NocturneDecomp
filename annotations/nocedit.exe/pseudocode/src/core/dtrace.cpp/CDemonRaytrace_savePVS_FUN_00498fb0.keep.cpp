// Name: core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0
// Address: 00498fb0
// MANUAL RECONSTRUCTION
// Address Range: [[00498fb0, 004990e8]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_00498fb0(CDemonRaytrace *this_ptr,int *output_count,int **input_indices_array)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_00498fb0(CDemonRaytrace *this_ptr,int *output_count,int **input_indices_array)

{
  int iVar1;
  int *piVar2;
  CDemonCube *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (g_PVSReadyFlag == 0) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 2282;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRenderer::getPVS - PVS is not valid!");
  }
  iVar5 = g_PVSDrawnCubeCount;
  *output_count = g_PVSDrawnCubeCount;
  piVar2 = (int *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*input_indices_array,iVar5 << 2,"..\\core\\dtrace.cpp",2290);
  *input_indices_array = piVar2;
  if (*output_count < 1) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 2294;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::getPVS - no cubes rendered???");
  }
  if (*input_indices_array == (int *)0x0) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 2298;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::getPVS - out of memory");
  }
  iVar6 = (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
  iVar5 = 0;
  if (0 < g_PVSDrawnCubeCount) {
    do {
      iVar4 = 0;
      if (0 < iVar6) {
        pCVar3 = this_ptr->cube_data;
        do {
          if (pCVar3 == g_PVSCubePointers[iVar5]) break;
          iVar4 = iVar4 + 1;
          pCVar3 = pCVar3 + 1;
        } while (iVar4 < iVar6);
      }
      if (iVar6 <= iVar4) {
        g_CurrentFilename = "..\\core\\dtrace.cpp";
        g_CurrentLineNumber = 2311;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRenderer::savePVS - can't find drawn cube!");
      }
      iVar1 = g_PVSDrawnCubeCount;
      (*input_indices_array)[iVar5] = iVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return;
}
