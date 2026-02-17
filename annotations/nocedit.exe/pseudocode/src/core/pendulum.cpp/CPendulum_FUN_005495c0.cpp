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
  SCollisionInfo SStack_110;
  CBoundingBox3D CStack_e8;
  byte auStack_d0 [24];
  byte auStack_b8 [24];
  CVector3f CStack_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CMatrix3x3f *pCStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float *pfStack_18;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_110);
  if ((((in_stack_0000000c == 0) ||
       (iVar1 = (**(code **)(*(int *)(in_stack_0000000c + 0x154) + 0x120))(in_stack_0000000c),
       iVar1 == 0)) &&
      ((in_stack_00000010 == 0 ||
       (iVar1 = (**(code **)(*(int *)(in_stack_00000010 + 0x154) + 0x120))(in_stack_00000010),
       iVar1 == 0)))) &&
     (iVar1 = (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x34))
                        (in_stack_00000008,&SStack_110), iVar1 == 2)) {
    pfVar2 = (float *)(**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x14))
                                (in_stack_00000008,auStack_b8);
    fStack_58 = *pfVar2 + pfVar2[3];
    fStack_54 = pfVar2[1] + pfVar2[4];
    fStack_34 = fStack_58 * 0.5f;
    fStack_50 = pfVar2[2] + pfVar2[5];
    fStack_30 = fStack_54 * 0.5f;
    fStack_2c = fStack_50 * 0.5f;
    CStack_7c.x = *(float *)(in_stack_00000008 + 0x20) + fStack_34;
    CStack_7c.y = *(float *)(in_stack_00000008 + 0x24) + fStack_30;
    CStack_7c.z = *(float *)(in_stack_00000008 + 0x28) + fStack_2c;
    CStack_70.x = CStack_7c.x - (this_ptr->base).location.position.x;
    CStack_70.y = CStack_7c.y - (this_ptr->base).location.position.y;
    CStack_70.z = CStack_7c.z - (this_ptr->base).location.position.z;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       (&(this_ptr->base).orient_matrix,&CStack_40,&CStack_70);
    if (&CStack_7c != pCVar3) {
      CStack_7c.x = pCVar3->x;
      CStack_7c.y = pCVar3->y;
      CStack_7c.z = pCVar3->z;
    }
    pCVar4 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_e8);
    if ((((((pCVar4->min).x <= CStack_7c.x) && ((pCVar4->min).y <= CStack_7c.y)) &&
         ((pCVar4->min).z <= CStack_7c.z)) &&
        ((CStack_7c.x <= (pCVar4->max).x && (CStack_7c.y <= (pCVar4->max).y)))) &&
       (CStack_7c.z <= (pCVar4->max).z)) {
      pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
      fStack_24 = SStack_110.cylinder_radius * SStack_110.cylinder_radius;
      iStack_20 = pCVar5->vertex_count;
      ppCVar6 = pCVar5->vertex_list;
      iStack_1c = 0;
      if (0 < iStack_20) {
        pfStack_18 = (float *)(in_stack_00000008 + 0x20);
        pCStack_28 = &(this_ptr->base).orient_matrix;
        while( true ) {
          CStack_a0.x = (float)(int)*ppCVar6 * 0.00390625f;
          CStack_a0.y = (float)(int)ppCVar6[1] * 0.00390625f;
          CStack_a0.z = (float)(int)ppCVar6[2] * 0.00390625f;
          pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (pCStack_28,&CStack_64,&CStack_a0);
          if (&CStack_a0 != pCVar3) {
            CStack_a0.x = pCVar3->x;
            CStack_a0.y = pCVar3->y;
            CStack_a0.z = pCVar3->z;
          }
          CStack_a0.x = (CStack_a0.x + (this_ptr->base).location.position.x) - *pfStack_18;
          CStack_a0.y = (CStack_a0.y + (this_ptr->base).location.position.y) - pfStack_18[1];
          CStack_a0.z = (CStack_a0.z + (this_ptr->base).location.position.z) - pfStack_18[2];
          if (((SStack_110.cylinder_bottom_y <= CStack_a0.y) &&
              (CStack_a0.y <= SStack_110.cylinder_top_y + 1.0)) &&
             (CStack_a0.x * CStack_a0.x + CStack_a0.z * CStack_a0.z <= fStack_24)) break;
          iStack_1c = iStack_1c + 1;
          ppCVar6 = ppCVar6 + 3;
          if (iStack_20 <= iStack_1c) {
            return;
          }
        }
        if (in_stack_0000000c != 0) {
          (**(code **)(*(int *)(in_stack_0000000c + 0x154) + 0xf0))
                    (in_stack_0000000c,7,0,0xbf800000);
        }
        if (in_stack_00000010 != 0) {
          (**(code **)(*(int *)(in_stack_00000010 + 0x154) + 0xf0))
                    (in_stack_00000010,7,0,0xbf800000);
        }
        pfVar2 = (float *)(**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x14))
                                    (in_stack_00000008,auStack_d0);
        fStack_94 = *pfVar2 + pfVar2[3];
        fStack_90 = pfVar2[1] + pfVar2[4];
        fStack_88 = fStack_94 * 0.5f;
        fStack_8c = pfVar2[2] + pfVar2[5];
        fStack_84 = fStack_90 * 0.5f;
        fStack_80 = fStack_8c * 0.5f;
        CStack_4c.x = *(float *)(in_stack_00000008 + 0x20) + fStack_88;
        CStack_4c.y = *(float *)(in_stack_00000008 + 0x24) + fStack_84;
        CStack_4c.z = *(float *)(in_stack_00000008 + 0x28) + fStack_80;
        if (&CStack_a0 != &CStack_4c) {
          CStack_a0.x = CStack_4c.x;
          CStack_a0.y = CStack_4c.y;
          CStack_a0.z = CStack_4c.z;
        }
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                  (g_CGorePtr,&CStack_a0,(CVector3f *)0x0,200,0);
        return;
      }
    }
  }
  return;
}
