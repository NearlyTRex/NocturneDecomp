// Name: core_conveyor.cpp_CConveyor_ctor_FUN_0043b050
// Address: 0043b050
// Address Range: [[0043b050, 0043b106]]
// Convention: __cdecl
// Signature: CConveyor * __cdecl core_conveyor_cpp_CConveyor_ctor_FUN_0043b050(CConveyor *this_ptr)

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_CConveyor_ctor_FUN_0043b050(CConveyor *this_ptr)

{
  char cVar1;
  CConveyor *pCVar2;
  char *pcVar3;
  char *pcVar4;
  float *pfVar5;
  
  pCVar2 = (CConveyor *)core_platfrm_cpp_FUN_004f5d90(this_ptr);
  (pCVar2->base).base.vtable._ub =
       (CDemonActor_vtable *)&PTR_core_conveyor_cpp_FUN_0043b110_0059b734;
  pcVar3 = "none";
  (pCVar2->base).rendered_in_background = 0x3f800000;
  (pCVar2->size).y = 1.0;
  (pCVar2->size).x = 0.1;
  pfVar5 = &(pCVar2->direction).z;
  pCVar2->stop_event[0x60] = '\0';
  pCVar2->stop_event[0x61] = '\0';
  pCVar2->stop_event[0x62] = '\0';
  pCVar2->stop_event[99] = '\0';
  do {
    cVar1 = *pcVar3;
    *(char *)pfVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)pfVar5 + 1) = cVar1;
    pfVar5 = (float *)((int)pfVar5 + 2);
  } while (cVar1 != '\0');
  pcVar4 = "none";
  pcVar3 = pCVar2->start_event + 0x60;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  (pCVar2->size).z = 0.0;
  (pCVar2->direction).x = 0.0;
  (pCVar2->direction).y = 1.0;
  *(byte *)&pCVar2->state = 0;
  return pCVar2;
}
