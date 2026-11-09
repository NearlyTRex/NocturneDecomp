// Name: core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_0048e4e0
// Address: 0048e4e0
// Address Range: [[0048e4e0, 0048e630]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_0048e4e0(CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_0048e4e0(CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  float local_20 [6];
  
  _DAT_01bef21c = 0;
  if ((0 < visible_cube_count) && (visible_cube_indices != (int *)0x0)) {
    _DAT_01bef218 = visible_cube_count;
    if (20000 < visible_cube_count) {
      _DAT_01d1d400 = "..\\core\\dtrace.cpp";
      _DAT_01d1d404 = 0x8c9;
      core_main_c_FUN_005030e0("CDemonRaytrace::setPVS - Too many drawn cubes in pvs!");
    }
    iVar11 = 0;
    if (0 < _DAT_01bef218) {
      pfVar10 = (float *)&DAT_01c02aa0;
      do {
        iVar5 = *visible_cube_indices;
        *(int *)(iVar11 * 4 + 0x1bef220) = iVar5 * 0x34 + *(int *)&this_ptr->field_0x50;
        iVar6 = *(int *)&this_ptr->field_0x48;
        uVar8 = (longlong)iVar5 / (longlong)*(int *)&this_ptr->field_0x48;
        uVar9 = (int)uVar8 >> 0x1f;
        iVar7 = *(int *)&this_ptr->field_0x44;
        fVar1 = *(float *)&this_ptr->field_0x2c;
        fVar2 = *(float *)&this_ptr->field_0x14;
        fVar3 = *(float *)&this_ptr->field_0x30;
        fVar4 = *(float *)&this_ptr->field_0x18;
        if (pfVar10 != local_20) {
          *pfVar10 = (float)(int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) /
                                 (longlong)*(int *)&this_ptr->field_0x44) *
                     *(float *)&this_ptr->field_0x28 + *(float *)&this_ptr->field_0x10;
          pfVar10[1] = (float)(int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) %
                                   (longlong)iVar7) * fVar1 + fVar2;
          pfVar10[2] = (float)(iVar5 % iVar6) * fVar3 + fVar4;
        }
        pfVar10 = pfVar10 + 3;
        iVar11 = iVar11 + 1;
        visible_cube_indices = visible_cube_indices + 1;
      } while (iVar11 < _DAT_01bef218);
    }
    _DAT_01bef21c = 1;
  }
  return;
}
