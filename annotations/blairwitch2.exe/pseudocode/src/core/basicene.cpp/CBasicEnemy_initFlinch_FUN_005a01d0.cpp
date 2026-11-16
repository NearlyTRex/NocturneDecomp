// Name: core_basicene.cpp_CBasicEnemy_initFlinch_FUN_005a01d0
// Address: 005a01d0
// Address Range: [[005a01d0, 005a023f]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_initFlinch_FUN_005a01d0(CBasicEnemy *this_ptr,int *flinch_info)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_initFlinch_FUN_005a01d0(CBasicEnemy *this_ptr,int *flinch_info)

{
  float fVar1;
  CMotionList *this_ptr_00;
  int iVar2;
  
  this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                          (&(this_ptr->base).base.model.base);
  iVar2 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                    (this_ptr_00,(char *)(flinch_info + 1),1);
  flinch_info[9] = iVar2;
  flinch_info[10] = this_ptr_00->motions[iVar2].frame_count;
  fVar1 = this_ptr_00->motions[flinch_info[9]].fps;
  *flinch_info = 0;
  flinch_info[0xd] = 0;
  flinch_info[0xc] = (int)((float)flinch_info[10] / fVar1);
  return;
}
