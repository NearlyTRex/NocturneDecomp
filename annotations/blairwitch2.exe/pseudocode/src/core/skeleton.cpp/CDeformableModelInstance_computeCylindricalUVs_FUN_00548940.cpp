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
  CDeformableModel *pCVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  ulonglong uVar11;
  
  if (*(int *)&this_ptr->field_0x2230 < 0) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0xfb6;
    core_main_c_FUN_004e4500("CDeformableModelInstance::computeCylindricalUVs - points not generated");
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  iVar1 = pCVar2->vertex_count[*(int *)&this_ptr->field_0x2230];
  iVar4 = *(int *)&this_ptr->field_0x2234;
  iVar8 = 1;
  iVar6 = *(int *)(iVar4 + 4);
  iVar7 = iVar6;
  iVar9 = iVar6;
  if (1 < iVar1) {
    do {
      iVar3 = *(int *)(iVar4 + 0x10);
      iVar7 = iVar3;
      if ((iVar9 <= iVar3) && (iVar7 = iVar9, iVar6 < iVar3)) {
        iVar6 = iVar3;
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar7;
      iVar4 = iVar4 + 0xc;
    } while (iVar8 < iVar1);
  }
  iVar6 = iVar6 - iVar7;
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  if (0 < iVar1) {
    iVar9 = 0;
    iVar4 = 0;
    do {
      piVar5 = (int *)(*(int *)&this_ptr->field_0x2234 + iVar9);
      if ((*piVar5 == 0) && (piVar5[2] == 0)) {
        iVar8 = *DAT_0060b280;
        iVar3 = u_offset;
      }
      else {
        fVar10 = (float10)*piVar5;
        atan2();
        fVar10 = fVar10 * (float10)_DAT_005e7537;
        uVar11 = round();
        piVar5 = (int *)((ulonglong)uVar11 >> 0x20);
        iVar3 = (int)uVar11 + (int)ROUND(fVar10);
        iVar8 = *DAT_0060b280;
        iVar4 = extraout_ECX;
      }
      *(int *)(iVar4 + 0x18 + iVar8) = iVar3;
      iVar8 = iVar4 + 0x30;
      *(int *)(iVar4 + 0x1c + *DAT_0060b280) =
           v_offset +
           (int)((longlong)
                 ((((longlong)(piVar5[1] - iVar7) & 0xffffffffffU) >> 8) << 0x20 |
                 (longlong)(piVar5[1] - iVar7) * 0x1000000 & 0xffffffffU) / (longlong)iVar6);
      iVar9 = iVar9 + 0xc;
      iVar4 = iVar8;
    } while (iVar8 < iVar1 * 0x30);
  }
  return;
}
