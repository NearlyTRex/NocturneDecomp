// Name: core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080
// Address: 0051f080
// Address Range: [[0051f080, 0051f1cd]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080(int param_1,int param_2,int param_3)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_0051f080(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int *piVar4;
  int *extraout_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  
  if (*(int *)(param_1 + 0x2230) < 0) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0xfa7;
    core_main_c_FUN_004c8440("CDeformableModelInstance::computeCylindricalUVs - points not generated");
  }
  iVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(param_1);
  iVar1 = *(int *)(iVar1 + 0x2c + *(int *)(param_1 + 0x2230) * 4);
  iVar3 = *(int *)(param_1 + 0x2234);
  iVar7 = 1;
  iVar5 = *(int *)(iVar3 + 4);
  iVar6 = iVar5;
  iVar8 = iVar5;
  if (1 < iVar1) {
    do {
      iVar2 = *(int *)(iVar3 + 0x10);
      iVar6 = iVar2;
      if ((iVar8 <= iVar2) && (iVar6 = iVar8, iVar5 < iVar2)) {
        iVar5 = iVar2;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar6;
      iVar3 = iVar3 + 0xc;
    } while (iVar7 < iVar1);
  }
  iVar5 = iVar5 - iVar6;
  if (iVar5 < 1) {
    iVar5 = 1;
  }
  if (0 < iVar1) {
    iVar8 = 0;
    iVar3 = 0;
    do {
      piVar4 = (int *)(*(int *)(param_1 + 0x2234) + iVar8);
      if ((*piVar4 == 0) && (piVar4[2] == 0)) {
        iVar7 = *DAT_005ae704;
        iVar2 = param_2;
      }
      else {
        fVar9 = (float10)atan2((float10)*piVar4,(float10)piVar4[2]);
        fVar9 = (float10)round(fVar9 * (float10)2670176.8577967598);
        iVar2 = param_1 + (int)ROUND(fVar9);
        iVar7 = *DAT_005ae704;
        iVar3 = extraout_ECX;
        piVar4 = extraout_EDX;
      }
      *(int *)(iVar3 + 0x18 + iVar7) = iVar2;
      iVar7 = iVar3 + 0x30;
      *(int *)(iVar3 + 0x1c + *DAT_005ae704) =
           param_3 + (int)((longlong)
                           ((((longlong)(piVar4[1] - iVar6) & 0xffffffffffU) >> 8) << 0x20 |
                           (longlong)(piVar4[1] - iVar6) * 0x1000000 & 0xffffffffU) /
                          (longlong)iVar5);
      iVar8 = iVar8 + 0xc;
      iVar3 = iVar7;
    } while (iVar7 < iVar1 * 0x30);
  }
  return;
}
