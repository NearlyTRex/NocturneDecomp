// Name: core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_0048e640
// Address: 0048e640
// Address Range: [[0048e640, 0048e76e]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_0048e640(CDemonRaytrace *this_ptr,int *output_count,int **input_indices_array)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_0048e640(CDemonRaytrace *this_ptr,int *output_count,int **input_indices_array)

{
  int iVar1;
  int *piVar2;
  CDemonCube *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (g_INT_01bef21c == 0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dtrace.cpp";
    g_INT_01d1d404 = 0x8ea;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonRenderer::getPVS - PVS is not valid!");
  }
  iVar5 = g_INT_01bef218;
  *output_count = g_INT_01bef218;
  piVar2 = (int *)realloc(*input_indices_array,iVar5 << 2);
  *input_indices_array = piVar2;
  if (*output_count < 1) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dtrace.cpp";
    g_INT_01d1d404 = 0x8f6;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonRaytrace::getPVS - no cubes rendered???");
  }
  if (*input_indices_array == (int *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dtrace.cpp";
    g_INT_01d1d404 = 0x8fa;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonRaytrace::getPVS - out of memory");
  }
  iVar6 = (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
  iVar5 = 0;
  if (0 < g_INT_01bef218) {
    iVar7 = 0;
    do {
      iVar4 = 0;
      if (0 < iVar6) {
        pCVar3 = this_ptr->cube_data;
        do {
          if (pCVar3 == *(CDemonCube **)((int)g_CDemonCube_PTR_ARRAY_01bef220 + iVar7)) break;
          iVar4 = iVar4 + 1;
          pCVar3 = pCVar3 + 1;
        } while (iVar4 < iVar6);
      }
      if (iVar6 <= iVar4) {
        g_CHAR_PTR_01d1d400 = "..\\core\\dtrace.cpp";
        g_INT_01d1d404 = 0x907;
        core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonRenderer::savePVS - can't find drawn cube!");
      }
      iVar1 = g_INT_01bef218;
      iVar5 = iVar5 + 1;
      *(int *)(iVar7 + (int)*input_indices_array) = iVar4;
      iVar7 = iVar7 + 4;
    } while (iVar5 < iVar1);
  }
  return;
}
