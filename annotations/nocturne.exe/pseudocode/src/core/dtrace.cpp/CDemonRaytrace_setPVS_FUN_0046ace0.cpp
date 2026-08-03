// Name: core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_0046ace0
// Address: 0046ace0
// Address Range: [[0046ace0, 0046ae30]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_0046ace0(CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_0046ace0(CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices)

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
  CVector3f *pCVar10;
  int iVar11;
  CVector3f local_20 [2];
  
  _DAT_01b7b748 = 0;
  if ((0 < visible_cube_count) && (visible_cube_indices != (int *)0x0)) {
    _DAT_01b7b744 = visible_cube_count;
    if (20000 < visible_cube_count) {
      g_CHAR_PTR_01cc4800 = "..\\core\\dtrace.cpp";
      g_INT_01cc4804 = 0x8c9;
      core_main_c_FUN_004c8440("CDemonRaytrace::setPVS - Too many drawn cubes in pvs!");
    }
    iVar11 = 0;
    if (0 < _DAT_01b7b744) {
      pCVar10 = g_CVector3f_ARRAY_01b8efcc;
      do {
        iVar5 = *visible_cube_indices;
        *(CDemonCube **)(iVar11 * 4 + 0x1b7b74c) = this_ptr->cube_data + iVar5;
        iVar6 = (this_ptr->grid_coord).z;
        uVar8 = (longlong)iVar5 / (longlong)(this_ptr->grid_coord).z;
        uVar9 = (int)uVar8 >> 0x1f;
        iVar7 = (this_ptr->grid_coord).y;
        fVar1 = (this_ptr->cell_size).y;
        fVar2 = (this_ptr->bbox_min).y;
        fVar3 = (this_ptr->cell_size).z;
        fVar4 = (this_ptr->bbox_min).z;
        if (pCVar10 != local_20) {
          pCVar10->x = (float)(int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) /
                                   (longlong)(this_ptr->grid_coord).y) * (this_ptr->cell_size).x +
                       (this_ptr->bbox_min).x;
          pCVar10->y = (float)(int)((longlong)((ulonglong)uVar9 << 0x20 | uVar8 & 0xffffffff) %
                                   (longlong)iVar7) * fVar1 + fVar2;
          pCVar10->z = (float)(iVar5 % iVar6) * fVar3 + fVar4;
        }
        pCVar10 = pCVar10 + 1;
        iVar11 = iVar11 + 1;
        visible_cube_indices = visible_cube_indices + 1;
      } while (iVar11 < _DAT_01b7b744);
    }
    _DAT_01b7b748 = 1;
  }
  return;
}
