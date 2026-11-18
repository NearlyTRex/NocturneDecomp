// Name: core_doc.cpp_CDoc_canDoHeroAction_FUN_00475650
// Address: 00475650
// Address Range: [[00475650, 0047588c]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_canDoHeroAction_FUN_00475650(CDoc *this_ptr,int action_type)

#include "nocturne.h"

int __cdecl core_doc_cpp_CDoc_canDoHeroAction_FUN_00475650(CDoc *this_ptr,int action_type)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  
  if (((this_ptr->base).action_pending == 0) && (this_ptr->guns_drawn == 0)) {
    this_ptr_00 = &(this_ptr->base).base.model;
    fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&this_ptr_00->base,0)
    ;
    fVar2 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&this_ptr_00->base,1)
    ;
    fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&this_ptr_00->base,4)
    ;
    fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&this_ptr_00->base,7)
    ;
    fVar5 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&this_ptr_00->base,8)
    ;
    fVar6 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40(&this_ptr_00->base,9)
    ;
    fVar7 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                      (&this_ptr_00->base,10);
    fVar8 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                      (&this_ptr_00->base,0xb);
    fVar9 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                      (&this_ptr_00->base,0xc);
    fVar10 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                       (&this_ptr_00->base,0xd);
    fVar11 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                       (&this_ptr_00->base,0xe);
    fVar12 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                       (&this_ptr_00->base,0xf);
    fVar13 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                       (&this_ptr_00->base,0x10);
    fVar14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                       (&this_ptr_00->base,5);
    fVar15 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                       (&this_ptr_00->base,6);
    fVar17 = (float)0.999;
    switch(action_type) {
    case 4:
      fVar18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                         ((CCharacter *)this_ptr,0);
      if (fVar18 < (float)0.98999999999999999) {
        return 0;
      }
    case 3:
      if (fVar15 + fVar14 + fVar13 + fVar12 + fVar11 + fVar10 + fVar9 + fVar8 + fVar7 + fVar6 + 
                                                  fVar5 + fVar4 + fVar3 + fVar2 + fVar1 <= fVar17) {
        return 0;
      }
      break;
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
      fVar17 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                         ((CCharacter *)this_ptr,0);
      if (fVar17 < (float)0.98999999999999999) {
        return 0;
      }
    }
    iVar16 = core_hero_cpp_CHero_canDoHeroAction_FUN_004ec950(&this_ptr->base,action_type);
    return iVar16;
  }
  return 0;
}
