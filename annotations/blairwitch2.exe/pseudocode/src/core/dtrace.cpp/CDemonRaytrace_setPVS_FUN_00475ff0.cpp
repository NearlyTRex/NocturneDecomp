// Name: core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00475ff0
// Address: 00475ff0
// Address Range: [[00475ff0, 00476140]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_00475ff0(CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_00475ff0(CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices)

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
  
  _DAT_01bd3c60 = 0;
  if ((0 < visible_cube_count) && (visible_cube_indices != (int *)0x0)) {
    _DAT_01bd3c5c = visible_cube_count;
    if (20000 < visible_cube_count) {
      _DAT_01d046a0 = "..\\core\\dtrace.cpp";
      _DAT_01d046a4 = 0x8c9;
      core_main_c_FUN_004e4500("CDemonRaytrace::setPVS - Too many drawn cubes in pvs!");
    }
    iVar11 = 0;
    if (0 < _DAT_01bd3c5c) {
      pfVar10 = (float *)&DAT_01be74e4;
      do {
        iVar5 = *visible_cube_indices;
        *(CDemonCube **)(iVar11 * 4 + 0x1bd3c64) = this_ptr->cube_data + iVar5;
        iVar6 = (this_ptr->grid_coord).z;
        uVar8 = (longlong)iVar5 / (longlong)(this_ptr->grid_coord).z;
        uVar9 = (int)uVar8 >> 0x1f;
        iVar7 = (this_ptr->grid_coord).y;
        fVar1 = (this_ptr->cell_size).y;
        fVar2 = (this_ptr->bbox_min).y;
        fVar3 = (this_ptr->cell_size).z;
        fVar4 = (this_ptr->bbox_min).z;
        if (pfVar10 != local_20) {
          *pfVar10 = (float)(int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) /
                                 (longlong)(this_ptr->grid_coord).y) * (this_ptr->cell_size).x +
                     (this_ptr->bbox_min).x;
          pfVar10[1] = (float)(int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) %
                                   (longlong)iVar7) * fVar1 + fVar2;
          pfVar10[2] = (float)(iVar5 % iVar6) * fVar3 + fVar4;
        }
        pfVar10 = pfVar10 + 3;
        iVar11 = iVar11 + 1;
        visible_cube_indices = visible_cube_indices + 1;
      } while (iVar11 < _DAT_01bd3c5c);
    }
    _DAT_01bd3c60 = 1;
  }
  return;
}
