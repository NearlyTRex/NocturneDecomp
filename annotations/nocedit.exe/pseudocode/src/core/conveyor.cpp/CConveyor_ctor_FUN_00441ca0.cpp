// Name: core_conveyor.cpp_CConveyor_ctor_FUN_00441ca0
// Address: 00441ca0
// Address Range: [[00441ca0, 00441d56]]
// Convention: __cdecl
// Signature: CConveyor * __cdecl core_conveyor_cpp_CConveyor_ctor_FUN_00441ca0(CConveyor *this_ptr)

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_CConveyor_ctor_FUN_00441ca0(CConveyor *this_ptr)

{
  char cVar1;
  CConveyor *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CConveyor *)core_platfrm_cpp_CPlatform_ctor_FUN_0054c850(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CConveyorVTable;
  pcVar3 = "none";
  (pCVar2->size).x = 1.0;
  (pCVar2->size).z = 1.0;
  (pCVar2->size).y = 0.1;
  pcVar4 = pCVar2->start_event;
  pCVar2->state = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "none";
  pcVar4 = pCVar2->stop_event;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  (pCVar2->direction).x = 0.0;
  (pCVar2->direction).y = 0.0;
  (pCVar2->direction).z = 1.0;
  pCVar2->actor_class[0] = '\0';
  return pCVar2;
}
