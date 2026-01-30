// Name: core_scat.cpp_FUN_00558fd0
// Address: 00558fd0
// Address Range: [[00558fd0, 005590f1]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_00558fd0(void)

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_00558fd0(uint param_1) */

void __cdecl core_scat_cpp_FUN_00558fd0(void)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  int in_stack_00000004;
  CMatrix3x4f local_160;
  CMatrix3x4f local_130;
  CMatrix3x4f local_100;
  CMatrix3x4f local_d0;
  CMatrix3x4f local_a0;
  CMatrix3x4f local_70;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar4 = 0;
  if ((*(int *)(in_stack_00000004 + 0x1fbe8) != 0) &&
     (*(int *)(*(int *)(in_stack_00000004 + 0x1fbe8) + 0x2e0) != 8)) {
    local_40.x = 0.0;
    local_40.z = 1.5707964;
    local_40.y = 1.5707964;
    local_28.x = 0.390807;
    local_28.y = -0.103151;
    local_28.z = 0.109206;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_130,&local_28,&local_40);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              (&local_130,(CMatrix3x4f *)(in_stack_00000004 + 0xfd8 + INT_03106194 * 0x30),&local_d0
              );
    pCVar2 = &local_d0;
    pCVar3 = &local_70;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar3->m[0].w = pCVar2->m[0].w;
      pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_160,(CVector3f *)(in_stack_00000004 + 0x20),
               (CVector3f *)(in_stack_00000004 + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_70,&local_160,&local_100);
    pCVar2 = &local_100;
    pCVar3 = &local_a0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar3->m[0].w = pCVar2->m[0].w;
      pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
    }
    iVar1 = *(int *)(*(int *)(in_stack_00000004 + 0x1fbe8) + 0x154);
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&local_a0,&local_34);
    core_xform_cpp_getTranslation_FUN_005f6110(&local_a0,&local_1c);
    (**(code **)(iVar1 + 0x60))();
    return;
  }
  return;
}
