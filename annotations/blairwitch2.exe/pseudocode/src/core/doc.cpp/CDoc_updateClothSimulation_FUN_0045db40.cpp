// Name: core_doc.cpp_CDoc_updateClothSimulation_FUN_0045db40
// Address: 0045db40
// Address Range: [[0045db40, 0045dbee]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_updateClothSimulation_FUN_0045db40(CDoc *this_ptr)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_updateClothSimulation_FUN_0045db40(CDoc *this_ptr)

{
  CVector3f *pCVar1;
  CCloth *pCVar2;
  SMotion *pSVar3;
  uint auStack_24 [3];
  uint auStack_18 [3];
  
  if (0 < (this_ptr->base).base.cloth_list.count) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    pCVar2 = (this_ptr->base).base.cloth_list.cloths[0];
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                       (&(this_ptr->base).base.model.base);
    pCVar1 = &pCVar2->wind_velocity;
    if (pSVar3->state_index == 0x2c) {
      if (pCVar1 != (CVector3f *)auStack_18) {
        (pCVar2->wind_velocity).y = 0.0;
        pCVar1->x = 0.0;
        (pCVar2->wind_velocity).z = -20.0;
        return;
      }
    }
    else if (pSVar3->state_index == 0x2d) {
      if (pCVar1 != (CVector3f *)auStack_24) {
        (pCVar2->wind_velocity).y = 0.0;
        pCVar1->x = 0.0;
        (pCVar2->wind_velocity).z = 20.0;
        return;
      }
    }
  }
  return;
}
