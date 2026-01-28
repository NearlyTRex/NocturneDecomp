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
  pCVar2->unk[0] = '\0';
  pCVar2->unk[1] = '\0';
  pCVar2->unk[2] = -0x80;
  pCVar2->unk[3] = '?';
  pCVar2->unk[8] = '\0';
  pCVar2->unk[9] = '\0';
  pCVar2->unk[10] = -0x80;
  pCVar2->unk[0xb] = '?';
  pCVar2->unk[4] = -0x33;
  pCVar2->unk[5] = -0x34;
  pCVar2->unk[6] = -0x34;
  pCVar2->unk[7] = '=';
  pcVar4 = pCVar2->unk + 0x18;
  pCVar2->unk[0xe0] = '\0';
  pCVar2->unk[0xe1] = '\0';
  pCVar2->unk[0xe2] = '\0';
  pCVar2->unk[0xe3] = '\0';
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
  pcVar4 = pCVar2->unk + 0x7c;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar2->unk[0xc] = '\0';
  pCVar2->unk[0xd] = '\0';
  pCVar2->unk[0xe] = '\0';
  pCVar2->unk[0xf] = '\0';
  pCVar2->unk[0x10] = '\0';
  pCVar2->unk[0x11] = '\0';
  pCVar2->unk[0x12] = '\0';
  pCVar2->unk[0x13] = '\0';
  pCVar2->unk[0x14] = '\0';
  pCVar2->unk[0x15] = '\0';
  pCVar2->unk[0x16] = -0x80;
  pCVar2->unk[0x17] = '?';
  pCVar2->unk[0xe4] = '\0';
  return pCVar2;
}
