// Name: core_doc.cpp_CDoc_updateClothSimulation_FUN_00476080
// Address: 00476080
// Address Range: [[00476080, 00476141]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_updateClothSimulation_FUN_00476080(CDoc *this_ptr)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_updateClothSimulation_FUN_00476080(CDoc *this_ptr)

{
  CVector3f *pCVar1;
  CCloth *pCVar2;
  SMotion *pSVar3;
  uint auStack_24 [3];
  uint auStack_18 [3];
  
  if (0 < (this_ptr->base).base.cloth_list.count) {
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    pCVar2 = (this_ptr->base).base.cloth_list.cloths[0];
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       (&(this_ptr->base).base.model.base);
    pCVar1 = &pCVar2->wind_velocity;
    if (pSVar3->state_index == 0x2f) {
      if (pCVar1 != (CVector3f *)auStack_18) {
        (pCVar2->wind_velocity).y = 0.0;
        pCVar1->x = 0.0;
        (pCVar2->wind_velocity).z = -20.0;
        return;
      }
    }
    else if ((pSVar3->state_index == 0x30) && (pCVar1 != (CVector3f *)auStack_24)) {
      (pCVar2->wind_velocity).y = 0.0;
      pCVar1->x = 0.0;
      (pCVar2->wind_velocity).z = 20.0;
      return;
    }
  }
  return;
}
