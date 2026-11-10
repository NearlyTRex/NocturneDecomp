// Name: core_demnfolk.cpp_CDemnfolk_playDeathSound_FUN_0045cf70
// Address: 0045cf70
// Address Range: [[0045cf70, 0045d018]]
// Convention: __cdecl
// Signature: void __cdecl core_demnfolk_cpp_CDemnfolk_playDeathSound_FUN_0045cf70(CDemnfolk *this_ptr)

#include "nocturne.h"

void __cdecl core_demnfolk_cpp_CDemnfolk_playDeathSound_FUN_0045cf70(CDemnfolk *this_ptr)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar4 = &DAT_005d8308;
  pcVar5 = &DAT_0152c320;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = &this_ptr->field_0xc36c;
  iVar3 = -1;
  pcVar5 = &DAT_0152c320;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar5 = &DAT_005d830e;
  iVar3 = -1;
  pcVar4 = &DAT_0152c320;
  do {
    pcVar6 = pcVar4;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc358);
  if (iVar3 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,&DAT_0152c320);
  *(uint *)&this_ptr->field_0xc358 = uVar2;
  return;
}
