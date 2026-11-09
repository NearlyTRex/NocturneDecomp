// Name: core_manpuz.cpp_FUN_004e5e70
// Address: 004e5e70
// Address Range: [[004e5e70, 004e5eeb]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_004e5e70(int param_1,SIntersectXZCylinder *param_2)

#include "nocturne.h"

void core_manpuz_cpp_FUN_004e5e70(int param_1,SIntersectXZCylinder *param_2)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  CBoundingBox3D *pCVar5;
  byte bVar6;
  CBoundingBox3D CStack_24;
  
  bVar6 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)(param_1 + 0x2b4));
  puVar4 = (uint *)&pCVar1->field_0x338;
  pCVar5 = &CStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pCVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  piVar3 = (int *)(param_1 + 0x74c);
  do {
    while (*piVar3 != 0) {
      core_setcolid_cpp_FUN_00536cb0
                (g_CDemonSetPtr,param_2,&CStack_24,(CVector3f *)(piVar3 + 3),
                 (CMatrix3x3f *)(piVar3 + 9));
      piVar3 = piVar3 + 0x19;
      if (piVar3 == (int *)(param_1 + 0xbfc)) {
        return;
      }
    }
    piVar3 = piVar3 + 0x19;
  } while (piVar3 != (int *)(param_1 + 0xbfc));
  return;
}
