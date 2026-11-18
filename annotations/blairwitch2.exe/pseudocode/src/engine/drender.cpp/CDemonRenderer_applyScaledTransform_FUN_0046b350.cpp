// Name: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
// Address: 0046b350
// Address Range: [[0046b350, 0046b481]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer *this_ptr,CVector3f *euler_angles,CVector3f *translation)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer *this_ptr,CVector3f *euler_angles,CVector3f *translation)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (translation == (CVector3f *)0x0) {
    fVar1 = euler_angles->z * 0.3183099f;
    fVar2 = euler_angles->x * 0.3183099f;
    fVar3 = (float)32768;
    iVar10 = 0x46b393;
    dVar5 = round((double)(euler_angles->y * 0.3183099f * fVar3));
    iVar9 = 0x46b39a;
    dVar6 = round((double)(fVar1 * fVar3));
    iVar7 = (int)ROUND(dVar5);
    iVar8 = 0x46b3b4;
    dVar5 = round((double)(fVar2 * fVar3));
    engine_matrix_c_matrixPushAndTransform_FUN_004e8fd0
              ((int)ROUND(dVar5),(int)ROUND(dVar6),iVar8,iVar7,iVar9,iVar10);
    return;
  }
  dVar5 = (double)translation->y * 256;
  dVar6 = (double)translation->x * 256;
  fVar1 = euler_angles->y * 0.3183099f;
  fVar2 = euler_angles->z * 0.3183099f;
  fVar3 = euler_angles->x * 0.3183099f;
  fVar4 = (float)32768;
  round((double)translation->z * 256);
  dVar5 = round(dVar5);
  dVar6 = round(dVar6);
  iVar7 = (int)ROUND(dVar5);
  iVar8 = (int)ROUND(dVar6);
  dVar5 = round((double)(fVar1 * fVar4));
  dVar6 = round((double)(fVar2 * fVar4));
  iVar9 = (int)ROUND(dVar5);
  iVar10 = 0x46b468;
  dVar5 = round((double)(fVar3 * fVar4));
  engine_matrix_c_matrixPushAndTransform_FUN_004e8fd0
            ((int)ROUND(dVar5),(int)ROUND(dVar6),iVar10,iVar9,iVar8,iVar7);
  return;
}
