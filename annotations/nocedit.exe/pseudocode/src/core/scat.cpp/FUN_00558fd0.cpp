// Name: core_scat.cpp_FUN_00558fd0
// Address: 00558fd0
// Address Range: [[00558fd0, 005590f1]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00558fd0()

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_00558fd0(uint param_1) */

void core_scat_cpp_FUN_00558fd0(void)

{
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  CVector3f *pCVar4;
  byte bVar5;
  int in_stack_00000004;
  CMatrix3x4f *in_stack_fffffe22;
  CMatrix3x4f *in_stack_fffffea0;
  CMatrix3x4f local_130;
  float local_100 [12];
  float local_d0 [12];
  CVector3f local_a0 [4];
  CMatrix3x4f local_70;
  CVector3f local_40;
  CMatrix3x3f local_34;
  
  bVar5 = 0;
  if ((*(int *)(in_stack_00000004 + 0x1fbe8) != 0) &&
     (*(int *)(*(int *)(in_stack_00000004 + 0x1fbe8) + 0x2e0) != 8)) {
    local_40.x = 0.0;
    local_40.z = 1.5707964;
    local_40.y = 1.5707964;
    local_34.m[1].x = 0.390807;
    local_34.m[1].y = -0.103151;
    local_34.m[1].z = 0.109206;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_130,local_34.m + 1,&local_40);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_130,(CMatrix3x4f *)(in_stack_00000004 + 0xfd8 + DAT_03106194 * 0x30),
               in_stack_fffffea0);
    pfVar2 = local_d0;
    pCVar3 = &local_70;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar3->m[0].w = *pfVar2;
      pfVar2 = pfVar2 + (uint)bVar5 * -2 + 1;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)&stack0xfffffea0,(CVector3f *)(in_stack_00000004 + 0x20),
               (CVector3f *)(in_stack_00000004 + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_70,(CMatrix3x4f *)&stack0xfffffea0,in_stack_fffffe22);
    pfVar2 = local_100;
    pCVar4 = local_a0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar4->x = *pfVar2;
      pfVar2 = pfVar2 + (uint)bVar5 * -2 + 1;
      pCVar4 = (CVector3f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    iVar1 = *(int *)(*(int *)(in_stack_00000004 + 0x1fbe8) + 0x154);
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690(local_a0,&local_34);
    core_xform_cpp_getTranslation_FUN_005f6110(local_a0,(CMatrix3x4f *)(local_34.m + 2));
    (**(code **)(iVar1 + 0x60))();
    return;
  }
  return;
}
