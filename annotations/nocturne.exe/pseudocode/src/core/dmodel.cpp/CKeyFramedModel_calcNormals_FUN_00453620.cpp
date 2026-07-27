// Name: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00453620
// Address: 00453620
// Address Range: [[00453620, 004537c6]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00453620(int param_1)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00453620(int param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  int local_18;
  int local_14;
  
  if (*(int *)(param_1 + 0x100) == 1) {
    if (*(int *)(param_1 + 0x108) == 0) {
      PTR_01cc4800 = "..\\core\\dmodel.cpp";
      INT_01cc4804 = 0x2f1;
      core_main_c_FUN_004c8440("CKeyFramedModel::calcNormals() - vertexNormalList not allocated!");
    }
    memset
              (*(uint *)(param_1 + 0x108),0,*(int *)(param_1 + 0x104) * 0xc);
    local_14 = 0;
    if (0 < *(int *)(param_1 + 0x110)) {
      local_18 = 0;
      do {
        iVar7 = *(int *)(param_1 + 0x114) + local_18;
        engine_keyframe_c_calculateSurfaceNormal_FUN_004c3920
                  (*(uint *)(param_1 + 0x10c),iVar7);
        iVar6 = 0;
        iVar8 = iVar7;
        if (0 < *(int *)(iVar7 + 4)) {
          do {
            piVar5 = (int *)(*(int *)(param_1 + 0x108) + *(int *)(iVar8 + 0x18) * 0xc);
            *piVar5 = *piVar5 + *(int *)(iVar7 + 8);
            piVar5[1] = piVar5[1] + *(int *)(iVar7 + 0xc);
            piVar5[2] = piVar5[2] + *(int *)(iVar7 + 0x10);
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 + 0xc;
          } while (iVar6 < *(int *)(iVar7 + 4));
        }
        local_18 = local_18 + 0x48;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(param_1 + 0x110));
    }
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x104)) {
      iVar6 = 0;
      do {
        piVar5 = (int *)(*(int *)(param_1 + 0x108) + iVar6);
        dVar2 = (double)*piVar5;
        iVar7 = piVar5[1];
        dVar4 = (double)iVar7;
        iVar1 = piVar5[2];
        dVar3 = (double)iVar1;
        dVar2 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2);
        if (0.0 < dVar2) {
          fVar9 = (float10)65535 / (float10)dVar2;
          fVar10 = (float10)round((float10)*piVar5 * fVar9);
          fVar11 = (float10)round((float10)iVar7 * fVar9);
          fVar9 = (float10)round((float10)iVar1 * fVar9);
          *piVar5 = (int)ROUND(fVar10);
          piVar5[1] = (int)ROUND(fVar11);
          piVar5[2] = (int)ROUND(fVar9);
        }
        else {
          piVar5[2] = 0;
          piVar5[1] = piVar5[2];
          *piVar5 = piVar5[2];
        }
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 0xc;
      } while (iVar8 < *(int *)(param_1 + 0x104));
    }
  }
  return;
}
