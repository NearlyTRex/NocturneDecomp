// Name: core_manpuz.cpp_FUN_00504b10
// Address: 00504b10
// Address Range: [[00504b10, 00504b8b]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_00504b10(int param_1,SIntersectXZCylinder *param_2)

#include "nocturne.h"

void core_manpuz_cpp_FUN_00504b10(int param_1,SIntersectXZCylinder *param_2)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  CBoundingBox3D *pCVar5;
  byte bVar6;
  CBoundingBox3D CStack_24;
  
  bVar6 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)(param_1 + 0x158));
  puVar4 = (uint *)&pCVar1->field_0x338;
  pCVar5 = &CStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pCVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  piVar3 = (int *)(param_1 + 0x5f0);
  do {
    while (*piVar3 != 0) {
      core_setcolid_cpp_FUN_005580d0
                (g_CDemonSetPtr,param_2,&CStack_24,(CVector3f *)(piVar3 + 3),
                 (CMatrix3x3f *)(piVar3 + 9));
      piVar3 = piVar3 + 0x19;
      if (piVar3 == (int *)(param_1 + 0xaa0)) {
        return;
      }
    }
    piVar3 = piVar3 + 0x19;
  } while (piVar3 != (int *)(param_1 + 0xaa0));
  return;
}
