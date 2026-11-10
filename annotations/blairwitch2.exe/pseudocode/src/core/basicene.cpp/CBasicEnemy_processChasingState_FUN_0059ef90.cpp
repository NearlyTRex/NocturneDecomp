// Name: core_basicene.cpp_CBasicEnemy_processChasingState_FUN_0059ef90
// Address: 0059ef90
// Address Range: [[0059ef90, 0059f0d3]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_processChasingState_FUN_0059ef90(CBasicEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_processChasingState_FUN_0059ef90(CBasicEnemy *this_ptr,float delta_time)

{
  int iVar1;
  CPathMap *path_map;
  uint uVar2;
  CVector3f *direction;
  float fVar3;
  float fVar4;
  
  if (*(int *)(this_ptr + 0x10a6c) != 0) {
    (**(code **)(*(int *)(this_ptr + 0x2b0) + 0x150))(this_ptr,delta_time);
  }
  iVar1 = (**(code **)(*(int *)(this_ptr + 0x2b0) + 0x17c))(this_ptr);
  if (iVar1 != 0) {
    if ((*(int *)(this_ptr + 0x10a6c) == 0) &&
       (fVar3 = *(float *)(*(int *)(this_ptr + 0x10a78) + 0x20) - *(float *)(this_ptr + 0x20),
       fVar4 = *(float *)(*(int *)(this_ptr + 0x10a78) + 0x28) - *(float *)(this_ptr + 0x28),
       *(float *)(this_ptr + 0x11374) <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) {
      *(uint *)(this_ptr + 0x10a78) = 0;
      uVar2 = unkaddr_0059d350_cpp_FUN_0059db90(this_ptr + 0x10af8);
      unkaddr_0059d350_cpp_FUN_0059d8e0(this_ptr + 0x10af8,uVar2);
      return;
    }
    fVar4 = 0.17453292;
    direction = (CVector3f *)(this_ptr + 0x11424);
    fVar3 = *(float *)(this_ptr + 0x11394);
    path_map = (CPathMap *)
               (**(code **)(*(int *)(*(int *)(this_ptr + 0x10a78) + 0x2b0) + 0xcc))
                         (*(int *)(this_ptr + 0x10a78));
    iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                      ((CCharacter *)this_ptr,(CVector3f *)(*(int *)(this_ptr + 0x10a78) + 0x20),
                       path_map,direction,fVar3,fVar4);
    if (iVar1 != 0) {
      unkaddr_0059d350_cpp_FUN_0059d880(this_ptr + 0x10af8,"ChaseComplete");
      return;
    }
    fVar3 = *(float *)(this_ptr + 0x20) - *(float *)(*(int *)(this_ptr + 0x10a78) + 0x20);
    fVar4 = *(float *)(this_ptr + 0x28) - *(float *)(*(int *)(this_ptr + 0x10a78) + 0x28);
    iVar1 = *(int *)(this_ptr + 0x11388);
    if (*(float *)(this_ptr + 0x11398) < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
      iVar1 = *(int *)(this_ptr + 0x1138c);
    }
    if (-1 < iVar1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)(this_ptr + 0x2b4),iVar1,1);
      return;
    }
  }
  return;
}
