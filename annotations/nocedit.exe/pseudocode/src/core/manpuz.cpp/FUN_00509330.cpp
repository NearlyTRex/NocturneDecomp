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
  CBoundingBox3D local_cc;
  CVector3f local_b4;
  CVector3f local_a8;
  CVector3f local_9c;
  CVector3f local_90;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  local_cc.min.x = (pCVar1->bounds_min).x;
  local_cc.min.y = (pCVar1->bounds_min).y;
  local_cc.min.z = (pCVar1->bounds_min).z;
  local_cc.max.x = (pCVar1->bounds_max).x;
  local_cc.max.y = (pCVar1->bounds_max).y;
  local_cc.max.z = (pCVar1->bounds_max).z;
  local_28 = in_stack_00000004 + 0xaa0;
  local_1c = 1.01;
  local_2c = (int *)(in_stack_00000004 + 0x5f0);
  local_20 = 0;
  do {
    if (*local_2c != 0) {
      local_b4.x = in_stack_00000008->x - (float)local_2c[3];
      local_b4.y = in_stack_00000008->y - (float)local_2c[4];
      local_b4.z = in_stack_00000008->z - (float)local_2c[5];
      pCVar4 = (CMatrix3x3f *)(local_2c + 9);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(pCVar4,&local_6c,&local_b4);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (pCVar4,&local_3c,in_stack_0000000c);
      local_18 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                           (&local_cc,&local_6c,&local_3c,&local_a8);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_1c = local_18;
        pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (pCVar4,&local_90,&local_a8);
        if (in_stack_00000010 != pCVar2) {
          in_stack_00000010->x = pCVar2->x;
          in_stack_00000010->y = pCVar2->y;
          in_stack_00000010->z = pCVar2->z;
        }
      }
    }
    local_30 = local_28 + local_20;
    iVar3 = 0;
    do {
      triangle = (CDemonTriangle *)(local_30 + 0x3c + iVar3);
      local_18 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                           (triangle,in_stack_00000008,in_stack_0000000c);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_48.x = -(triangle->normal).x;
        local_48.y = -(triangle->normal).y;
        local_48.z = -(triangle->normal).z;
        local_1c = local_18;
        if (in_stack_00000010 != &local_48) {
          in_stack_00000010->x = local_48.x;
          in_stack_00000010->y = local_48.y;
          in_stack_00000010->z = local_48.z;
        }
      }
      iVar3 = iVar3 + 0x38;
    } while (iVar3 != 0x70);
    local_20 = local_20 + 0xb8;
    local_2c = local_2c + 0x19;
  } while (local_20 != 0x8a0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x450));
  if (&local_cc != (CBoundingBox3D *)&pCVar1->bounds_min) {
    local_cc.min.x = (pCVar1->bounds_min).x;
    local_cc.min.y = (pCVar1->bounds_min).y;
    local_cc.min.z = (pCVar1->bounds_min).z;
  }
  if (&local_cc.max != &pCVar1->bounds_max) {
    local_cc.max.x = (pCVar1->bounds_max).x;
    local_cc.max.y = (pCVar1->bounds_max).y;
    local_cc.max.z = (pCVar1->bounds_max).z;
  }
  iVar3 = in_stack_00000004 + 0x1340;
  local_24 = in_stack_00000004 + 0x1400;
  do {
    if (0.0 < *(float *)(iVar3 + 0x18)) {
      local_9c.x = in_stack_00000008->x - *(float *)(iVar3 + 0x1c);
      local_9c.y = in_stack_00000008->y - *(float *)(iVar3 + 0x20);
      local_9c.z = in_stack_00000008->z - *(float *)(iVar3 + 0x24);
      pCVar4 = (CMatrix3x3f *)(iVar3 + 0x34);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(pCVar4,&local_60,&local_9c);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (pCVar4,&local_78,in_stack_0000000c);
      local_18 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                           (&local_cc,&local_60,&local_78,&local_54);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_1c = local_18;
        pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (pCVar4,&local_84,&local_54);
        if (in_stack_00000010 != pCVar2) {
          in_stack_00000010->x = pCVar2->x;
          in_stack_00000010->y = pCVar2->y;
          in_stack_00000010->z = pCVar2->z;
        }
      }
    }
    iVar3 = iVar3 + 0x60;
  } while (iVar3 != local_24);
  return local_1c;
}
