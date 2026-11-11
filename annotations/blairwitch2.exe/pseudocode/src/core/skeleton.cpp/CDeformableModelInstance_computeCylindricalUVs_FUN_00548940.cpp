// Name: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_00548940
// Address: 00548940
// Address Range: [[00548940, 00548a8d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_00548940(CDeformableModelInstance *this_ptr,int u_offset,int v_offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_00548940(CDeformableModelInstance *this_ptr,int u_offset,int v_offset)

{
  int iVar1;
  CVector3i *pCVar2;
  CDeformableModel *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  ulonglong uVar12;
  
  if (this_ptr->cached_skinned_lod_index < 0) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0xfb6;
    core_main_c_FUN_004e4500("CDeformableModelInstance::computeCylindricalUVs - points not generated");
  }
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  iVar1 = pCVar3->vertex_count[this_ptr->cached_skinned_lod_index];
  pCVar2 = this_ptr->skinned_vertices_buffer;
  iVar10 = 1;
  iVar8 = pCVar2->y;
  iVar9 = iVar8;
  iVar5 = iVar8;
  if (1 < iVar1) {
    do {
      iVar6 = pCVar2[1].y;
      iVar9 = iVar6;
      if ((iVar5 <= iVar6) && (iVar9 = iVar5, iVar8 < iVar6)) {
        iVar8 = iVar6;
      }
      iVar10 = iVar10 + 1;
      iVar5 = iVar9;
      pCVar2 = pCVar2 + 1;
    } while (iVar10 < iVar1);
  }
  iVar8 = iVar8 - iVar9;
  if (iVar8 < 1) {
    iVar8 = 1;
  }
  if (0 < iVar1) {
    iVar10 = 0;
    iVar5 = 0;
    do {
      piVar7 = (int *)((int)&this_ptr->skinned_vertices_buffer->x + iVar10);
      if ((*piVar7 == 0) && (piVar7[2] == 0)) {
        iVar6 = *DAT_0060b280;
        iVar4 = u_offset;
      }
      else {
        fVar11 = (float10)*piVar7;
        atan2();
        fVar11 = fVar11 * (float10)_DAT_005e7537;
        uVar12 = round();
        piVar7 = (int *)((ulonglong)uVar12 >> 0x20);
        iVar4 = (int)uVar12 + (int)ROUND(fVar11);
        iVar6 = *DAT_0060b280;
        iVar5 = extraout_ECX;
      }
      *(int *)(iVar5 + 0x18 + iVar6) = iVar4;
      iVar6 = iVar5 + 0x30;
      *(int *)(iVar5 + 0x1c + *DAT_0060b280) =
           v_offset +
           (int)((longlong)
                 ((((longlong)(piVar7[1] - iVar9) & 0xffffffffffU) >> 8) << 0x20 |
                 (longlong)(piVar7[1] - iVar9) * 0x1000000 & 0xffffffffU) / (longlong)iVar8);
      iVar10 = iVar10 + 0xc;
      iVar5 = iVar6;
    } while (iVar6 < iVar1 * 0x30);
  }
  return;
}
