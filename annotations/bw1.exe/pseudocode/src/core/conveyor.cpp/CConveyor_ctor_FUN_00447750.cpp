// Name: core_conveyor.cpp_CConveyor_ctor_FUN_00447750
// Address: 00447750
// Address Range: [[00447750, 00447806]]
// Convention: __cdecl
// Signature: CConveyor * __cdecl core_conveyor_cpp_CConveyor_ctor_FUN_00447750(CConveyor *this_ptr)

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_CConveyor_ctor_FUN_00447750(CConveyor *this_ptr)

{
  char cVar1;
  CConveyor *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CConveyor *)core_platfrm_cpp_CPlatform_ctor_FUN_00539400((CPlatform *)this_ptr);
  *(byte **)&pCVar2->field_0x154 = &g_CConveyorVTable;
  pcVar3 = (char *)0x5d70f8;
  *(uint *)&pCVar2->field_0x728 = 0x3f800000;
  *(uint *)&pCVar2->field_0x730 = 0x3f800000;
  *(uint *)&pCVar2->field_0x72c = 0x3dcccccd;
  pcVar4 = &pCVar2->field_0x740;
  *(uint *)&pCVar2->field_0x808 = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d70fd;
  pcVar4 = &pCVar2->field_0x7a4;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar2->field_0x734 = 0;
  *(uint *)&pCVar2->field_0x738 = 0;
  *(uint *)&pCVar2->field_0x73c = 0x3f800000;
  pCVar2->field_0x80c = 0;
  return pCVar2;
}
