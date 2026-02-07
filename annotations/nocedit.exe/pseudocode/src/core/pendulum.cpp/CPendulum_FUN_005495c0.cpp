// Name: core_pendulum.cpp_CPendulum_FUN_005495c0
// Address: 005495c0
// Address Range: [[005495c0, 00549a92]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_FUN_005495c0(CPendulum *this_ptr)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_CPendulum_FUN_005495c0(CPendulum *this_ptr)

{
  int iVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  CBoundingBox3D *pCVar4;
  CKeyFramedModel *pCVar5;
  CVector3i **ppCVar6;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  float fStack_f4;
  void *pvStack_f0;
  CKeyFramedModelInstance *pCStack_ec;
  CBoundingBox3D aCStack_e8 [3];
  CVector3f CStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_5c;
  float fStack_50;
  byte auStack_44 [8];
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CMatrix3x3f *pCStack_20;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)&stack0xfffffef0);
  if ((((in_stack_0000000c == 0) ||
       (iVar1 = (**(code **)(*(int *)(in_stack_0000000c + 0x154) + 0x120))(), iVar1 == 0)) &&
      ((in_stack_00000010 == 0 ||
       (iVar1 = (**(code **)(*(int *)(in_stack_00000010 + 0x154) + 0x120))(), iVar1 == 0)))) &&
     (iVar1 = (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x34))(), iVar1 == 2)) {
    pfVar2 = (float *)(**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x14))();
    CStack_5c.y = *pfVar2 + pfVar2[3];
    CStack_5c.z = pfVar2[1] + pfVar2[4];
    fStack_34 = CStack_5c.y * 0.5f;
    fStack_50 = pfVar2[2] + pfVar2[5];
    fStack_30 = CStack_5c.z * 0.5f;
    fStack_2c = fStack_50 * 0.5f;
    CStack_7c.x = *(float *)(in_stack_00000008 + 0x20) + fStack_34;
    CStack_7c.y = *(float *)(in_stack_00000008 + 0x24) + fStack_30;
    CStack_7c.z = *(float *)(in_stack_00000008 + 0x28) + fStack_2c;
    CStack_70.x = CStack_7c.x - (this_ptr->base).location.position.x;
    CStack_70.y = CStack_7c.y - (this_ptr->base).location.position.y;
    CStack_70.z = CStack_7c.z - (this_ptr->base).location.position.z;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       (&(this_ptr->base).orient_matrix,(CVector3f *)(auStack_44 + 4),&CStack_70);
    if (&CStack_7c != pCVar3) {
      CStack_7c.x = pCVar3->x;
      CStack_7c.y = pCVar3->y;
      CStack_7c.z = pCVar3->z;
    }
    pCVar4 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,aCStack_e8);
    if ((((((pCVar4->min).x <= CStack_7c.z) && ((pCVar4->min).y <= CStack_70.x)) &&
         ((pCVar4->min).z <= CStack_70.y)) &&
        ((CStack_7c.z <= (pCVar4->max).x && (CStack_70.x <= (pCVar4->max).y)))) &&
       (CStack_70.y <= (pCVar4->max).z)) {
      pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
      fStack_1c = (float)pCStack_ec * (float)pCStack_ec;
      iStack_18 = pCVar5->vertex_count;
      ppCVar6 = pCVar5->vertex_list;
      iStack_14 = 0;
      if (0 < iStack_18) {
        pCStack_20 = &(this_ptr->base).orient_matrix;
        while( true ) {
          CStack_98.x = (float)(int)*ppCVar6 * 0.00390625f;
          CStack_98.y = (float)(int)ppCVar6[1] * 0.00390625f;
          CStack_98.z = (float)(int)ppCVar6[2] * 0.00390625f;
          pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (pCStack_20,&CStack_5c,&CStack_98);
          if (&CStack_98 != pCVar3) {
            CStack_98.x = pCVar3->x;
            CStack_98.y = pCVar3->y;
            CStack_98.z = pCVar3->z;
          }
          CStack_98.x = (CStack_98.x + (this_ptr->base).location.position.x) -
                        *(float *)(in_stack_00000008 + 0x20);
          CStack_98.y = (CStack_98.y + (this_ptr->base).location.position.y) -
                        *(float *)(in_stack_00000008 + 0x24);
          CStack_98.z = (CStack_98.z + (this_ptr->base).location.position.z) -
                        *(float *)(in_stack_00000008 + 0x28);
          if (((fStack_f4 <= CStack_98.y) && (CStack_98.y <= (float)pvStack_f0 + 1.0)) &&
             (CStack_98.x * CStack_98.x + CStack_98.z * CStack_98.z <= fStack_1c)) break;
          iStack_14 = iStack_14 + 1;
          ppCVar6 = ppCVar6 + 3;
          if (iStack_18 <= iStack_14) {
            return;
          }
        }
        if (in_stack_0000000c != 0) {
          (**(code **)(*(int *)(in_stack_0000000c + 0x154) + 0xf0))();
        }
        if (in_stack_00000010 != 0) {
          (**(code **)(*(int *)(in_stack_00000010 + 0x154) + 0xf0))();
        }
        pfVar2 = (float *)(**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x14))();
        fStack_8c = *pfVar2 + pfVar2[3];
        fStack_88 = pfVar2[1] + pfVar2[4];
        fStack_80 = fStack_8c * 0.5f;
        fStack_84 = pfVar2[2] + pfVar2[5];
        CStack_7c.x = fStack_88 * 0.5f;
        CStack_7c.y = fStack_84 * 0.5f;
        auStack_44._0_4_ = *(float *)(in_stack_00000008 + 0x20) + fStack_80;
        auStack_44._4_4_ = *(float *)(in_stack_00000008 + 0x24) + CStack_7c.x;
        fStack_3c = *(float *)(in_stack_00000008 + 0x28) + CStack_7c.y;
        if (&CStack_98 != (CVector3f *)auStack_44) {
          CStack_98.x = (float)auStack_44._0_4_;
          CStack_98.y = (float)auStack_44._4_4_;
          CStack_98.z = fStack_3c;
        }
        core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
        return;
      }
    }
  }
  return;
}
