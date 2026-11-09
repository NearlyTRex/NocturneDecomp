// Name: unkafter_basicene.cpp_FUN_0059ef90
// Address: 0059ef90
// Address Range: [[0059ef90, 0059f0d3]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_0059ef90(CCharacter *param_1,undefined4 param_2)

#include "nocturne.h"

void unkafter_basicene_cpp_FUN_0059ef90(CCharacter *param_1,uint param_2)

{
  int iVar1;
  CPathMap *path_map;
  uint uVar2;
  CVector3f *direction;
  float fVar3;
  float fVar4;
  
  if (*(int *)&param_1[1].field_0xc != 0) {
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
  }
  iVar1 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x17c))(param_1);
  if (iVar1 != 0) {
    if ((*(int *)&param_1[1].field_0xc == 0) &&
       (fVar3 = *(float *)(*(int *)&param_1[1].field_0x18 + 0x20) - *(float *)&param_1->field_0x20,
       fVar4 = *(float *)(*(int *)&param_1[1].field_0x18 + 0x28) - *(float *)&param_1->field_0x28,
       *(float *)&param_1[1].field_0x914 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) {
      *(uint *)&param_1[1].field_0x18 = 0;
      uVar2 = unkaddr_0059d350_cpp_FUN_0059db90(&param_1[1].field_0x98);
      unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[1].field_0x98,uVar2);
      return;
    }
    fVar4 = 0.17453292;
    direction = (CVector3f *)&param_1[1].field_0x9c4;
    fVar3 = *(float *)&param_1[1].field_0x934;
    path_map = (CPathMap *)
               (**(code **)(*(int *)(*(int *)&param_1[1].field_0x18 + 0x2b0) + 0xcc))
                         (*(int *)&param_1[1].field_0x18);
    iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                      (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20),path_map,
                       direction,fVar3,fVar4);
    if (iVar1 != 0) {
      unkaddr_0059d350_cpp_FUN_0059d880(&param_1[1].field_0x98,"ChaseComplete");
      return;
    }
    fVar3 = *(float *)&param_1->field_0x20 - *(float *)(*(int *)&param_1[1].field_0x18 + 0x20);
    fVar4 = *(float *)&param_1->field_0x28 - *(float *)(*(int *)&param_1[1].field_0x18 + 0x28);
    iVar1 = *(int *)&param_1[1].field_0x928;
    if (*(float *)&param_1[1].field_0x938 < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
      iVar1 = *(int *)&param_1[1].field_0x92c;
    }
    if (-1 < iVar1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,iVar1,1);
      return;
    }
  }
  return;
}
