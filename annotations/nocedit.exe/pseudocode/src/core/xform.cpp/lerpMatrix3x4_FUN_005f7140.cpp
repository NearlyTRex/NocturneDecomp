// Name: core_xform.cpp_lerpMatrix3x4_FUN_005f7140
// Address: 005f7140
// Address Range: [[005f7140, 005f727d]]
// Convention: __cdecl
// Signature: void core_xform.cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, float t)

#include "nocturne.h"

void __cdecl
core_xform_cpp_lerpMatrix3x4_FUN_005f7140(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,float t)

{
  float fVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  float *unaff_ESI;
  CMatrix3x4f *pCVar3;
  CQuaternion4f *pCVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_184c [1500];
  double dVar7;
  CMatrix3x3f *matrix_ptr;
  float in_stack_ffffff30;
  byte auStack_c8 [8];
  CMatrix3x4f CStack_c0;
  CQuaternion4f aCStack_90 [2];
  float local_70;
  uint uStack_6c;
  CQuaternion4f CStack_68;
  uint uStack_58;
  uint auStack_54 [4];
  uint uStack_44;
  uint local_40 [2];
  CQuaternion4f CStack_38;
  uint uStack_28;
  CQuaternion4f CStack_24;
  uint auStack_14 [2];
  
  bVar6 = 0;
  dVar7 = (double)t;
  if (dVar7 <= 0.0) {
    iVar2 = 0xc;
    pCVar4 = CStack_c0.m + 2;
    pCVar3 = matrix_a;
  }
  else if (dVar7 < 1.0) {
    core_xform_cpp_matrixToQuaternion_FUN_005f7420(matrix_a->m,SUB84 /* extract 2-byte value */(dVar7,0));
    matrix_ptr = (CMatrix3x3f *)((ulonglong)dVar7 >> 0x20);
    local_70 = CStack_24.y;
    puVar5 = (uint *)((int)&CStack_68 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    (&uStack_6c)[(uint)bVar6 * -2] = auStack_14[(uint)bVar6 * -2 + -1];
    *puVar5 = auStack_14[(uint)bVar6 * -2 + (uint)bVar6 * -2];
    puVar5[(uint)bVar6 * -2 + 1] =
         (auStack_14 + (uint)bVar6 * -2 + (uint)bVar6 * -2)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_matrixToQuaternion_FUN_005f7420(matrix_b->m,matrix_ptr);
    local_40[1] = uStack_58;
    puVar5 = (uint *)((int)&CStack_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&CStack_38 + (uint)bVar6 * -8) = auStack_54[(uint)bVar6 * -2];
    *puVar5 = auStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    puVar5[(uint)bVar6 * -2 + 1] =
         (auStack_54 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              (&CStack_68,&CStack_38,(CQuaternion4f *)t,in_stack_ffffff30);
    uStack_28 = uStack_44;
    *(uint *)((int)&CStack_24 + (uint)bVar6 * -8) = local_40[(uint)bVar6 * -2];
    auStack_14[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -3] =
         local_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (auStack_14 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + -3)[(uint)bVar6 * -2 + 1] =
         (local_40 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)(auStack_c8 + 4),&CStack_24);
    fVar1 = 1.0 - (float)(double)auStack_c8;
    CStack_c0.m[0].z = matrix_b->m[0].z * t + matrix_a->m[0].z * fVar1;
    CStack_c0.m[1].z = matrix_b->m[1].z * t + matrix_a->m[1].z * fVar1;
    pCVar4 = aCStack_90;
    iVar2 = 0xc;
    pCVar3 = &CStack_c0;
    CStack_c0.m[2].z = matrix_b->m[2].z * t + fVar1 * matrix_a->m[2].z;
  }
  else {
    iVar2 = 0xc;
    pCVar3 = matrix_b;
    pCVar4 = CStack_c0.m + 2;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar4 = (CQuaternion4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
  }
  pCVar4 = aCStack_90;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = pCVar4->w;
    pCVar4 = (CQuaternion4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}
