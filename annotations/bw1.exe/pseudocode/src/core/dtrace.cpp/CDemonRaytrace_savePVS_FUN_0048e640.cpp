// Name: core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_0048e640
// Address: 0048e640
// Address Range: [[0048e640, 0048e76e]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_0048e640(CDemonRaytrace *this_ptr,int *output_count,int **input_indices_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_0048e640(CDemonRaytrace *this_ptr,int *output_count,int **input_indices_array)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (_DAT_01bef21c == 0) {
    _DAT_01d1d400 = "..\\core\\dtrace.cpp";
    _DAT_01d1d404 = 0x8ea;
    core_main_c_FUN_005030e0("CDemonRenderer::getPVS - PVS is not valid!");
  }
  iVar4 = _DAT_01bef218;
  *output_count = _DAT_01bef218;
  piVar1 = (int *)realloc(*input_indices_array,iVar4 << 2);
  *input_indices_array = piVar1;
  if (*output_count < 1) {
    _DAT_01d1d400 = "..\\core\\dtrace.cpp";
    _DAT_01d1d404 = 0x8f6;
    core_main_c_FUN_005030e0("CDemonRaytrace::getPVS - no cubes rendered???");
  }
  if (*input_indices_array == (int *)0x0) {
    _DAT_01d1d400 = "..\\core\\dtrace.cpp";
    _DAT_01d1d404 = 0x8fa;
    core_main_c_FUN_005030e0("CDemonRaytrace::getPVS - out of memory");
  }
  iVar5 = *(int *)&this_ptr->field_0x48 *
          *(int *)&this_ptr->field_0x40 * *(int *)&this_ptr->field_0x44;
  iVar4 = 0;
  if (0 < _DAT_01bef218) {
    iVar6 = 0;
    do {
      iVar3 = 0;
      if (0 < iVar5) {
        iVar2 = *(int *)&this_ptr->field_0x50;
        do {
          if (iVar2 == *(int *)(iVar6 + 0x1bef220)) break;
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x34;
        } while (iVar3 < iVar5);
      }
      if (iVar5 <= iVar3) {
        _DAT_01d1d400 = "..\\core\\dtrace.cpp";
        _DAT_01d1d404 = 0x907;
        core_main_c_FUN_005030e0("CDemonRenderer::savePVS - can't find drawn cube!");
      }
      iVar2 = _DAT_01bef218;
      iVar4 = iVar4 + 1;
      *(int *)(iVar6 + (int)*input_indices_array) = iVar3;
      iVar6 = iVar6 + 4;
    } while (iVar4 < iVar2);
  }
  return;
}
