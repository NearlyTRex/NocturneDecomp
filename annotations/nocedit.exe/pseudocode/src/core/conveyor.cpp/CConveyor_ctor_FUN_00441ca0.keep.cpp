// Name: core_conveyor.cpp_CConveyor_ctor_FUN_00441ca0
// Address: 00441ca0
// MANUAL RECONSTRUCTION
// Address Range: [[00441ca0, 00441d56]]
// Convention: __cdecl
// Signature: CConveyor * __cdecl core_conveyor_cpp_CConveyor_ctor_FUN_00441ca0(CConveyor *this_ptr)

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_CConveyor_ctor_FUN_00441ca0(CConveyor *this_ptr)

{
  CConveyor *pCVar2;

  pCVar2 = (CConveyor *)core_platfrm_cpp_CPlatform_ctor_FUN_0054c850(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CConveyorVTable;
  (pCVar2->size).x = 1.0;
  (pCVar2->size).z = 1.0;
  (pCVar2->size).y = 0.1;
  pCVar2->state = 0;
  strcpy(pCVar2->start_event, "none");
  strcpy(pCVar2->stop_event, "none");
  (pCVar2->direction).x = 0.0;
  (pCVar2->direction).y = 0.0;
  (pCVar2->direction).z = 1.0;
  pCVar2->actor_class[0] = '\0';
  return pCVar2;
}
