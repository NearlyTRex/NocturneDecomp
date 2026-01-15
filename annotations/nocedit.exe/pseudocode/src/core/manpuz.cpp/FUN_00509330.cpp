// Name: core_manpuz.cpp_FUN_00509330
// Address: 00509330
// Address Range: [[00509330, 0050971c]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00509330()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_00509330(uint param_1, uint
   param_2, uint param_3, uint param_4) */

float core_manpuz_cpp_FUN_00509330(void)

{
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CMatrix3x3f *pCVar4;
  CDemonTriangle *triangle;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  CBoundingBox3D local_c8;
  CVector3f local_b0;
  CVector3f CStack_a4;
  CVector3f local_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f local_44;
  CVector3f CStack_38;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float fStack_14;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  local_c8.min.x = (pCVar1->bounds_min).x;
  local_c8.min.y = (pCVar1->bounds_min).y;
  local_c8.min.z = (pCVar1->bounds_min).z;
  local_c8.max.x = (pCVar1->bounds_max).x;
  local_c8.max.y = (pCVar1->bounds_max).y;
  local_c8.max.z = (pCVar1->bounds_max).z;
  local_24 = in_stack_00000004 + 0xaa0;
  local_18 = 1.01;
  local_28 = (int *)(in_stack_00000004 + 0x5f0);
  local_1c = 0;
  do {
    if (*local_28 != 0) {
      local_b0.x = in_stack_00000008->x - (float)local_28[3];
      local_b0.y = in_stack_00000008->y - (float)local_28[4];
      local_b0.z = in_stack_00000008->z - (float)local_28[5];
      pCVar4 = (CMatrix3x3f *)(local_28 + 9);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(pCVar4,&CStack_68,&local_b0)
      ;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (pCVar4,&CStack_38,in_stack_0000000c);
      fStack_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                            (&local_c8,&CStack_68,&CStack_38,&CStack_a4);
      if ((0.0 <= fStack_14) && (fStack_14 < local_18)) {
        local_18 = fStack_14;
        pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (pCVar4,&CStack_8c,&CStack_a4);
        if (in_stack_00000010 != pCVar2) {
          in_stack_00000010->x = pCVar2->x;
          in_stack_00000010->y = pCVar2->y;
          in_stack_00000010->z = pCVar2->z;
        }
      }
    }
    local_2c = local_24 + local_1c;
    iVar3 = 0;
    do {
      triangle = (CDemonTriangle *)(local_2c + 0x3c + iVar3);
      fStack_14 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                            (triangle,in_stack_00000008,in_stack_0000000c);
      if ((0.0 <= fStack_14) && (fStack_14 < local_18)) {
        local_44.x = -(triangle->normal).x;
        local_44.y = -(triangle->normal).y;
        local_44.z = -(triangle->normal).z;
        local_18 = fStack_14;
        if (in_stack_00000010 != &local_44) {
          in_stack_00000010->x = local_44.x;
          in_stack_00000010->y = local_44.y;
          in_stack_00000010->z = local_44.z;
        }
      }
      iVar3 = iVar3 + 0x38;
    } while (iVar3 != 0x70);
    local_1c = local_1c + 0xb8;
    local_28 = local_28 + 0x19;
  } while (local_1c != 0x8a0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x450));
  if (&local_c8 != (CBoundingBox3D *)&pCVar1->bounds_min) {
    local_c8.min.x = (pCVar1->bounds_min).x;
    local_c8.min.y = (pCVar1->bounds_min).y;
    local_c8.min.z = (pCVar1->bounds_min).z;
  }
  if (&local_c8.max != &pCVar1->bounds_max) {
    local_c8.max.x = (pCVar1->bounds_max).x;
    local_c8.max.y = (pCVar1->bounds_max).y;
    local_c8.max.z = (pCVar1->bounds_max).z;
  }
  iVar3 = in_stack_00000004 + 0x1340;
  local_20 = in_stack_00000004 + 0x1400;
  do {
    if (0.0 < *(float *)(iVar3 + 0x18)) {
      local_98.x = in_stack_00000008->x - *(float *)(iVar3 + 0x1c);
      local_98.y = in_stack_00000008->y - *(float *)(iVar3 + 0x20);
      local_98.z = in_stack_00000008->z - *(float *)(iVar3 + 0x24);
      pCVar4 = (CMatrix3x3f *)(iVar3 + 0x34);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(pCVar4,&CStack_5c,&local_98)
      ;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (pCVar4,&CStack_74,in_stack_0000000c);
      fStack_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                            (&local_c8,&CStack_5c,&CStack_74,&CStack_50);
      if ((0.0 <= fStack_14) && (fStack_14 < local_18)) {
        local_18 = fStack_14;
        pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (pCVar4,&CStack_80,&CStack_50);
        if (in_stack_00000010 != pCVar2) {
          in_stack_00000010->x = pCVar2->x;
          in_stack_00000010->y = pCVar2->y;
          in_stack_00000010->z = pCVar2->z;
        }
      }
    }
    iVar3 = iVar3 + 0x60;
  } while (iVar3 != local_20);
  return local_18;
}
