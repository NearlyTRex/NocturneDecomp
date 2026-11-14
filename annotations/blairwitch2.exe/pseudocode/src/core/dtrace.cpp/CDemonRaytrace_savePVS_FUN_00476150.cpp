// Name: core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00476150
// Address: 00476150
// Address Range: [[00476150, 0047627e]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_00476150(CDemonRaytrace *this_ptr,int *output_count,int **input_indices_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_00476150(CDemonRaytrace *this_ptr,int *output_count,int **input_indices_array)

{
  int iVar1;
  int *piVar2;
  CDemonCube *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (_DAT_01bd3c60 == 0) {
    _DAT_01d046a0 = "..\\core\\dtrace.cpp";
    _DAT_01d046a4 = 0x8ea;
    core_main_c_FUN_004e4500("CDemonRenderer::getPVS - PVS is not valid!");
  }
  iVar5 = _DAT_01bd3c5c;
  *output_count = _DAT_01bd3c5c;
  piVar2 = (int *)realloc(*input_indices_array,iVar5 << 2);
  *input_indices_array = piVar2;
  if (*output_count < 1) {
    _DAT_01d046a0 = "..\\core\\dtrace.cpp";
    _DAT_01d046a4 = 0x8f6;
    core_main_c_FUN_004e4500("CDemonRaytrace::getPVS - no cubes rendered???");
  }
  if (*input_indices_array == (int *)0x0) {
    _DAT_01d046a0 = "..\\core\\dtrace.cpp";
    _DAT_01d046a4 = 0x8fa;
    core_main_c_FUN_004e4500("CDemonRaytrace::getPVS - out of memory");
  }
  iVar6 = (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
  iVar5 = 0;
  if (0 < _DAT_01bd3c5c) {
    iVar7 = 0;
    do {
      iVar4 = 0;
      if (0 < iVar6) {
        pCVar3 = this_ptr->cube_data;
        do {
          if (pCVar3 == *(CDemonCube **)(iVar7 + 0x1bd3c64)) break;
          iVar4 = iVar4 + 1;
          pCVar3 = pCVar3 + 1;
        } while (iVar4 < iVar6);
      }
      if (iVar6 <= iVar4) {
        _DAT_01d046a0 = "..\\core\\dtrace.cpp";
        _DAT_01d046a4 = 0x907;
        core_main_c_FUN_004e4500("CDemonRenderer::savePVS - can't find drawn cube!");
      }
      iVar1 = _DAT_01bd3c5c;
      iVar5 = iVar5 + 1;
      *(int *)(iVar7 + (int)*input_indices_array) = iVar4;
      iVar7 = iVar7 + 4;
    } while (iVar5 < iVar1);
  }
  return;
}
