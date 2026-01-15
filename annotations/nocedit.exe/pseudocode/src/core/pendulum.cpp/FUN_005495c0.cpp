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
  SCollisionInfo aSStack_10c [2];
  CVector3f CStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CMatrix3x3f *pCStack_24;
  float fStack_20;
  int iStack_1c;
  int iStack_18;
  float *pfStack_14;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(aSStack_10c);
  if ((((in_stack_0000000c == 0) ||
       (iVar1 = (**(code **)(*(int *)(in_stack_0000000c + 0x154) + 0x120))(), iVar1 == 0)) &&
      ((in_stack_00000010 == 0 ||
       (iVar1 = (**(code **)(*(int *)(in_stack_00000010 + 0x154) + 0x120))(), iVar1 == 0)))) &&
     (iVar1 = (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x34))(), iVar1 == 2)) {
    pfVar2 = (float *)(**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x14))();
    fStack_54 = *pfVar2 + pfVar2[3];
    fStack_50 = pfVar2[1] + pfVar2[4];
    fStack_30 = fStack_54 * 0.5f;
    fStack_4c = pfVar2[2] + pfVar2[5];
    fStack_2c = fStack_50 * 0.5f;
    fStack_28 = fStack_4c * 0.5f;
    CStack_78.x = *(float *)(in_stack_00000008 + 0x20) + fStack_30;
    CStack_78.y = *(float *)(in_stack_00000008 + 0x24) + fStack_2c;
    CStack_78.z = *(float *)(in_stack_00000008 + 0x28) + fStack_28;
    CStack_6c.x = CStack_78.x - *(float *)(in_stack_00000004 + 0x20);
    CStack_6c.y = CStack_78.y - *(float *)(in_stack_00000004 + 0x24);
    CStack_6c.z = CStack_78.z - *(float *)(in_stack_00000004 + 0x28);
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)(in_stack_00000004 + 0x3c),&CStack_3c,&CStack_6c);
    if (&CStack_78 != pCVar3) {
      CStack_78.x = pCVar3->x;
      CStack_78.y = pCVar3->y;
      CStack_78.z = pCVar3->z;
    }
    pfVar2 = (float *)(**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
    if (((((*pfVar2 <= CStack_78.x) && (pfVar2[1] <= CStack_78.y)) && (pfVar2[2] <= CStack_78.z)) &&
        ((CStack_78.x <= pfVar2[3] && (CStack_78.y <= pfVar2[4])))) && (CStack_78.z <= pfVar2[5])) {
      pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                         ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
      fStack_20 = aSStack_10c[0].cylinder_radius * aSStack_10c[0].cylinder_radius;
      iStack_1c = pCVar4->vertex_count;
      ppCVar5 = pCVar4->vertex_list;
      iStack_18 = 0;
      if (0 < iStack_1c) {
        pfStack_14 = (float *)(in_stack_00000008 + 0x20);
        pCStack_24 = (CMatrix3x3f *)(in_stack_00000004 + 0x3c);
        while( true ) {
          CStack_9c.x = (float)(int)*ppCVar5 * _DAT_00662138;
          CStack_9c.y = (float)(int)ppCVar5[1] * _DAT_00662138;
          CStack_9c.z = (float)(int)ppCVar5[2] * _DAT_00662138;
          pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (pCStack_24,&CStack_60,&CStack_9c);
          if (&CStack_9c != pCVar3) {
            CStack_9c.x = pCVar3->x;
            CStack_9c.y = pCVar3->y;
            CStack_9c.z = pCVar3->z;
          }
          CStack_9c.x = (CStack_9c.x + *(float *)(in_stack_00000004 + 0x20)) - *pfStack_14;
          CStack_9c.y = (CStack_9c.y + *(float *)(in_stack_00000004 + 0x24)) - pfStack_14[1];
          CStack_9c.z = (CStack_9c.z + *(float *)(in_stack_00000004 + 0x28)) - pfStack_14[2];
          if (((aSStack_10c[0].cylinder_bottom_y <= CStack_9c.y) &&
              (CStack_9c.y <= aSStack_10c[0].cylinder_top_y + 1.0)) &&
             (CStack_9c.x * CStack_9c.x + CStack_9c.z * CStack_9c.z <= fStack_20)) break;
          iStack_18 = iStack_18 + 1;
          ppCVar5 = ppCVar5 + 3;
          if (iStack_1c <= iStack_18) {
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
        fStack_90 = *pfVar2 + pfVar2[3];
        fStack_8c = pfVar2[1] + pfVar2[4];
        fStack_84 = fStack_90 * 0.5f;
        fStack_88 = pfVar2[2] + pfVar2[5];
        fStack_80 = fStack_8c * 0.5f;
        fStack_7c = fStack_88 * 0.5f;
        CStack_48.x = *(float *)(in_stack_00000008 + 0x20) + fStack_84;
        CStack_48.y = *(float *)(in_stack_00000008 + 0x24) + fStack_80;
        CStack_48.z = *(float *)(in_stack_00000008 + 0x28) + fStack_7c;
        if (&CStack_9c != &CStack_48) {
          CStack_9c.x = CStack_48.x;
          CStack_9c.y = CStack_48.y;
          CStack_9c.z = CStack_48.z;
        }
        core_gore_cpp_FUN_004edbb0();
        return;
      }
    }
  }
  return;
}
