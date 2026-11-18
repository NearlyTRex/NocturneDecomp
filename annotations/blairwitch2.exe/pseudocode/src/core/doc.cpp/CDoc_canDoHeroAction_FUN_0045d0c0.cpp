// Name: core_doc.cpp_CDoc_canDoHeroAction_FUN_0045d0c0
// Address: 0045d0c0
// Address Range: [[0045d0c0, 0045d1ee]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_canDoHeroAction_FUN_0045d0c0(CDoc *this_ptr,int action_type)

#include "nocturne.h"

int __cdecl core_doc_cpp_CDoc_canDoHeroAction_FUN_0045d0c0(CDoc *this_ptr,int action_type)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  if ((this_ptr->action_pending == 0) && (this_ptr->guns_drawn == 0)) {
    this_ptr_00 = &(this_ptr->base).base.model;
    fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(&this_ptr_00->base,0)
    ;
    fVar2 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(&this_ptr_00->base,1)
    ;
    fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(&this_ptr_00->base,3)
    ;
    fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(&this_ptr_00->base,4)
    ;
    fVar5 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_005038a0(&this_ptr_00->base,5)
    ;
    fVar7 = (float)0.999;
    switch(action_type) {
    case 4:
      fVar8 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                        ((CCharacter *)this_ptr,0);
      if (fVar8 < (float)0.98999999999999999) {
        return 0;
      }
    case 3:
      if (fVar5 + fVar4 + fVar3 + fVar2 + fVar1 <= fVar7) {
        return 0;
      }
      break;
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
      fVar7 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                        ((CCharacter *)this_ptr,0);
      if (fVar7 < (float)0.98999999999999999) {
        return 0;
      }
    }
    iVar6 = core_hero_cpp_CHero_canDoHeroAction_FUN_004d06c0(&this_ptr->base,action_type);
    return iVar6;
  }
  return 0;
}
