// Name: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0054fb70
// Address: 0054fb70
// Address Range: [[0054fb70, 0054fcbd]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0054fb70(CDeformableModelInstance *this_ptr,int u_offset,int v_offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0054fb70(CDeformableModelInstance *this_ptr,int u_offset,int v_offset)

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
  
  if (*(int *)&this_ptr->field_0x2320 < 0) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0xfbd;
    core_main_c_FUN_004e4330("CDeformableModelInstance::computeCylindricalUVs - points not generated");
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  iVar1 = *(int *)(&pCVar2->field_0x2c + *(int *)&this_ptr->field_0x2320 * 4);
  iVar4 = *(int *)&this_ptr->field_0x2324;
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
      piVar5 = (int *)(*(int *)&this_ptr->field_0x2324 + iVar9);
      if ((*piVar5 == 0) && (piVar5[2] == 0)) {
        iVar8 = *DAT_005f2afc;
        iVar3 = u_offset;
      }
      else {
        fVar10 = (float10)*piVar5;
        atan2();
        fVar10 = fVar10 * (float10)_DAT_005d2234;
        uVar11 = round();
        piVar5 = (int *)((ulonglong)uVar11 >> 0x20);
        iVar3 = (int)uVar11 + (int)ROUND(fVar10);
        iVar8 = *DAT_005f2afc;
        iVar4 = extraout_ECX;
      }
      *(int *)(iVar4 + 0x18 + iVar8) = iVar3;
      iVar8 = iVar4 + 0x30;
      *(int *)(iVar4 + 0x1c + *DAT_005f2afc) =
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
