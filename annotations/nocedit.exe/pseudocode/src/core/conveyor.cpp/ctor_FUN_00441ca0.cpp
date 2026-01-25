// Name: core_conveyor.cpp_ctor_FUN_00441ca0
// Address: 00441ca0
// Address Range: [[00441ca0, 00441d56]]
// Convention: __cdecl
// Signature: CConveyor * core_conveyor.cpp_ctor_FUN_00441ca0(CConveyor * this_ptr)

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_ctor_FUN_00441ca0(CConveyor *this_ptr)

{
  char cVar1;
  CConveyor *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CConveyor *)core_platfrm_cpp_FUN_0054c850(&this_ptr->base_platform);
  (pCVar2->base_platform).base_actor.vtable._ub = &PTR_core_conveyor_cpp_FUN_0065bf34;
  pcVar3 = "none";
  pCVar2->field1_0x72c[0] = '\0';
  pCVar2->field1_0x72c[1] = '\0';
  pCVar2->field1_0x72c[2] = -0x80;
  pCVar2->field1_0x72c[3] = '?';
  pCVar2->field1_0x72c[8] = '\0';
  pCVar2->field1_0x72c[9] = '\0';
  pCVar2->field1_0x72c[10] = -0x80;
  pCVar2->field1_0x72c[0xb] = '?';
  pCVar2->field1_0x72c[4] = -0x33;
  pCVar2->field1_0x72c[5] = -0x34;
  pCVar2->field1_0x72c[6] = -0x34;
  pCVar2->field1_0x72c[7] = '=';
  pcVar4 = pCVar2->field1_0x72c + 0x18;
  pCVar2->field1_0x72c[0xe0] = '\0';
  pCVar2->field1_0x72c[0xe1] = '\0';
  pCVar2->field1_0x72c[0xe2] = '\0';
  pCVar2->field1_0x72c[0xe3] = '\0';
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
  pcVar4 = pCVar2->field1_0x72c + 0x7c;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar2->field1_0x72c[0xc] = '\0';
  pCVar2->field1_0x72c[0xd] = '\0';
  pCVar2->field1_0x72c[0xe] = '\0';
  pCVar2->field1_0x72c[0xf] = '\0';
  pCVar2->field1_0x72c[0x10] = '\0';
  pCVar2->field1_0x72c[0x11] = '\0';
  pCVar2->field1_0x72c[0x12] = '\0';
  pCVar2->field1_0x72c[0x13] = '\0';
  pCVar2->field1_0x72c[0x14] = '\0';
  pCVar2->field1_0x72c[0x15] = '\0';
  pCVar2->field1_0x72c[0x16] = -0x80;
  pCVar2->field1_0x72c[0x17] = '?';
  pCVar2->field1_0x72c[0xe4] = '\0';
  return pCVar2;
}
