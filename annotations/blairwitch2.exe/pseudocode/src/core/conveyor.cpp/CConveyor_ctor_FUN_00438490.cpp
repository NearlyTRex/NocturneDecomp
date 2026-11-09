// Name: core_conveyor.cpp_CConveyor_ctor_FUN_00438490
// Address: 00438490
// Address Range: [[00438490, 00438546]]
// Convention: __cdecl
// Signature: CConveyor * __cdecl core_conveyor_cpp_CConveyor_ctor_FUN_00438490(CConveyor *this_ptr)

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_CConveyor_ctor_FUN_00438490(CConveyor *this_ptr)

{
  char cVar1;
  CConveyor *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CConveyor *)core_platfrm_cpp_CPlatform_ctor_FUN_005180b0((CPlatform *)this_ptr);
  *(byte ***)&pCVar2->field_0x2b0 = &g_CConveyorVTable;
  pcVar3 = (char *)0x5cdf8c;
  *(uint *)&pCVar2->field_0x884 = 0x3f800000;
  *(uint *)&pCVar2->field_0x88c = 0x3f800000;
  *(uint *)&pCVar2->field_0x888 = 0x3dcccccd;
  pcVar4 = &pCVar2->field_0x89c;
  *(uint *)&pCVar2->field_0x964 = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5cdf91;
  pcVar4 = &pCVar2->field_0x900;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar2->field_0x890 = 0;
  *(uint *)&pCVar2->field_0x894 = 0;
  *(uint *)&pCVar2->field_0x898 = 0x3f800000;
  pCVar2->field_0x968 = 0;
  return pCVar2;
}
