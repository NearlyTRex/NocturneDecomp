// Name: core_pendulum.cpp_FUN_005495c0
// Address: 005495c0
// Address Range: [[005495c0, 00549a92]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_005495c0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_pendulum.cpp_FUN_005495c0(uint param_1, uint
   param_2, uint param_3, uint param_4) */

void core_pendulum_cpp_FUN_005495c0(void)

{
  int iVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  CKeyFramedModel *pCVar4;
  CVector3i **ppCVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  SCollisionInfo aSStack_110 [2];
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
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(aSStack_110);
  if ((((in_stack_0000000c == 0) ||
       (iVar1 = (**(code **)(*(int *)(in_stack_0000000c + 0x154) + 0x120))(), iVar1 == 0)) &&
      ((in_stack_00000010 == 0 ||
       (iVar1 = (**(code **)(*(int *)(in_stack_00000010 + 0x154) + 0x120))(), iVar1 == 0)))) &&
     (iVar1 = (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x34))(), iVar1 == 2)) {
    pfVar2 = (float *)(**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x14))();
    fStack_58 = *pfVar2 + pfVar2[3];
    fStack_54 = pfVar2[1] + pfVar2[4];
    fStack_34 = fStack_58 * 0.5f;
    fStack_50 = pfVar2[2] + pfVar2[5];
    fStack_30 = fStack_54 * 0.5f;
    fStack_2c = fStack_50 * 0.5f;
    CStack_7c.x = *(float *)(in_stack_00000008 + 0x20) + fStack_34;
    CStack_7c.y = *(float *)(in_stack_00000008 + 0x24) + fStack_30;
    CStack_7c.z = *(float *)(in_stack_00000008 + 0x28) + fStack_2c;
    CStack_70.x = CStack_7c.x - *(float *)(in_stack_00000004 + 0x20);
    CStack_70.y = CStack_7c.y - *(float *)(in_stack_00000004 + 0x24);
    CStack_70.z = CStack_7c.z - *(float *)(in_stack_00000004 + 0x28);
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)(in_stack_00000004 + 0x3c),&CStack_40,&CStack_70);
    if (&CStack_7c != pCVar3) {
      CStack_7c.x = pCVar3->x;
      CStack_7c.y = pCVar3->y;
      CStack_7c.z = pCVar3->z;
    }
    pfVar2 = (float *)(**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
    if (((((*pfVar2 <= CStack_7c.x) && (pfVar2[1] <= CStack_7c.y)) && (pfVar2[2] <= CStack_7c.z)) &&
        ((CStack_7c.x <= pfVar2[3] && (CStack_7c.y <= pfVar2[4])))) && (CStack_7c.z <= pfVar2[5])) {
      pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                         ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
      fStack_24 = aSStack_110[0].cylinder_radius * aSStack_110[0].cylinder_radius;
      iStack_20 = pCVar4->vertex_count;
      ppCVar5 = pCVar4->vertex_list;
      iStack_1c = 0;
      if (0 < iStack_20) {
        pfStack_18 = (float *)(in_stack_00000008 + 0x20);
        pCStack_28 = (CMatrix3x3f *)(in_stack_00000004 + 0x3c);
        while( true ) {
          CStack_a0.x = (float)(int)*ppCVar5 * _DAT_00662138;
          CStack_a0.y = (float)(int)ppCVar5[1] * _DAT_00662138;
          CStack_a0.z = (float)(int)ppCVar5[2] * _DAT_00662138;
          pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (pCStack_28,&CStack_64,&CStack_a0);
          if (&CStack_a0 != pCVar3) {
            CStack_a0.x = pCVar3->x;
            CStack_a0.y = pCVar3->y;
            CStack_a0.z = pCVar3->z;
          }
          CStack_a0.x = (CStack_a0.x + *(float *)(in_stack_00000004 + 0x20)) - *pfStack_18;
          CStack_a0.y = (CStack_a0.y + *(float *)(in_stack_00000004 + 0x24)) - pfStack_18[1];
          CStack_a0.z = (CStack_a0.z + *(float *)(in_stack_00000004 + 0x28)) - pfStack_18[2];
          if (((aSStack_110[0].cylinder_bottom_y <= CStack_a0.y) &&
              (CStack_a0.y <= aSStack_110[0].cylinder_top_y + 1.0)) &&
             (CStack_a0.x * CStack_a0.x + CStack_a0.z * CStack_a0.z <= fStack_24)) break;
          iStack_1c = iStack_1c + 1;
          ppCVar5 = ppCVar5 + 3;
          if (iStack_20 <= iStack_1c) {
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
        core_gore_cpp_FUN_004edbb0();
        return;
      }
    }
  }
  return;
}
