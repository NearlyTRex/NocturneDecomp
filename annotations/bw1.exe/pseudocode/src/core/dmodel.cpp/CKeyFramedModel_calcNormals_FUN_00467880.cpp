// Name: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00467880
// Address: 00467880
// Address Range: [[00467880, 00467a26]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00467880(CKeyFramedModel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00467880(CKeyFramedModel *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int *piVar4;
  int extraout_ECX;
  int iVar5;
  int *extraout_EDX;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  int local_18;
  int local_14;
  
  if (*(int *)&this_ptr->field_0x100 == 1) {
    if (*(int *)&this_ptr->field_0x108 == 0) {
      _DAT_01d1d400 = "..\\core\\dmodel.cpp";
      _DAT_01d1d404 = 0x2f1;
      core_main_c_FUN_005030e0("CKeyFramedModel::calcNormals() - vertexNormalList not allocated!");
    }
    memset
              (*(void **)&this_ptr->field_0x108,0,*(int *)&this_ptr->field_0x104 * 0xc);
    local_14 = 0;
    if (0 < *(int *)&this_ptr->field_0x110) {
      local_18 = 0;
      do {
        iVar6 = *(int *)&this_ptr->field_0x114 + local_18;
        engine_keyframe_c_calculateSurfaceNormal_FUN_004fc9c0
                  (*(uint *)&this_ptr->field_0x10c,iVar6);
        iVar5 = 0;
        iVar7 = iVar6;
        if (0 < *(int *)(iVar6 + 4)) {
          do {
            piVar4 = (int *)(*(int *)&this_ptr->field_0x108 + *(int *)(iVar7 + 0x18) * 0xc);
            *piVar4 = *piVar4 + *(int *)(iVar6 + 8);
            piVar4[1] = piVar4[1] + *(int *)(iVar6 + 0xc);
            piVar4[2] = piVar4[2] + *(int *)(iVar6 + 0x10);
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + 0xc;
          } while (iVar5 < *(int *)(iVar6 + 4));
        }
        local_18 = local_18 + 0x48;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)&this_ptr->field_0x110);
    }
    iVar7 = 0;
    if (0 < *(int *)&this_ptr->field_0x104) {
      iVar5 = 0;
      do {
        piVar4 = (int *)(*(int *)&this_ptr->field_0x108 + iVar5);
        dVar1 = (double)*piVar4;
        dVar3 = (double)piVar4[1];
        dVar2 = (double)piVar4[2];
        dVar1 = SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1);
        if (0.0 < dVar1) {
          fVar8 = (float10)_DAT_005d963c / (float10)dVar1;
          fVar9 = (float10)*piVar4 * fVar8;
          fVar10 = (float10)piVar4[1] * fVar8;
          fVar8 = (float10)piVar4[2] * fVar8;
          round();
          round();
          round();
          *extraout_EDX = (int)ROUND(fVar9);
          extraout_EDX[1] = (int)ROUND(fVar10);
          extraout_EDX[2] = (int)ROUND(fVar8);
          iVar5 = extraout_ECX;
        }
        else {
          piVar4[2] = 0;
          piVar4[1] = piVar4[2];
          *piVar4 = piVar4[2];
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0xc;
      } while (iVar7 < *(int *)&this_ptr->field_0x104);
    }
  }
  return;
}
