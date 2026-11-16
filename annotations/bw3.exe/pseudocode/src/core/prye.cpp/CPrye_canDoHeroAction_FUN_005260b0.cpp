// Name: core_prye.cpp_CPrye_canDoHeroAction_FUN_005260b0
// Address: 005260b0
// Address Range: [[005260b0, 005262e3]]
// Convention: __cdecl
// Signature: int __cdecl core_prye_cpp_CPrye_canDoHeroAction_FUN_005260b0(CPrye *this_ptr,int action_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_prye_cpp_CPrye_canDoHeroAction_FUN_005260b0(CPrye *this_ptr,int action_type)

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
  
  if ((this_ptr->base).action_pending != 0) {
    return 0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&this_ptr_00->base,0);
  fVar2 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&this_ptr_00->base,1);
  fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&this_ptr_00->base,4);
  fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&this_ptr_00->base,7);
  fVar5 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&this_ptr_00->base,8);
  fVar6 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&this_ptr_00->base,9);
  fVar7 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&this_ptr_00->base,10);
  fVar8 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&this_ptr_00->base,0xb)
  ;
  fVar9 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&this_ptr_00->base,0xc)
  ;
  fVar10 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                     (&this_ptr_00->base,0xd);
  fVar11 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                     (&this_ptr_00->base,0xe);
  fVar12 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                     (&this_ptr_00->base,0xf);
  fVar13 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350
                     (&this_ptr_00->base,0x10);
  fVar14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&this_ptr_00->base,5);
  fVar15 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004fc350(&this_ptr_00->base,6);
  fVar17 = (float)_DAT_005cd95f;
  switch(action_type) {
  case 4:
    fVar18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
                       ((CCharacter *)this_ptr,0);
    if (fVar18 < (float)_DAT_005cd967) {
      return 0;
    }
  case 3:
    if (fVar15 + fVar14 + fVar13 + fVar12 + fVar11 + fVar10 + fVar9 + fVar8 + fVar7 + fVar6 + fVar5 
                                                  + fVar4 + fVar3 + fVar2 + fVar1 <= fVar17) {
      return 0;
    }
    break;
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    fVar17 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
                       ((CCharacter *)this_ptr,0);
    if (fVar17 < (float)_DAT_005cd967) {
      return 0;
    }
  }
  iVar16 = core_hero_cpp_CHero_canDoHeroAction_FUN_004d4840(&this_ptr->base,action_type);
  return iVar16;
}
