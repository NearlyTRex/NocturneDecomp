// Name: core_bodypart.cpp_CBodyPart_addTexture_FUN_00417c90
// Address: 00417c90
// Address Range: [[00417c90, 00417d6d]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_addTexture_FUN_00417c90(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_bodypart_cpp_CBodyPart_addTexture_FUN_00417c90(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x184)) {
    iVar4 = param_1 + 400;
    do {
      iVar2 = _stricmp(iVar4,param_2);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < *(int *)(param_1 + 0x184));
  }
  if (9 < *(int *)(param_1 + 0x184)) {
    _DAT_01cc4800 = "..\\core\\bodypart.cpp";
    _DAT_01cc4804 = 0x47a;
    FUN_004c8440("Too many body part textures!");
  }
  memset(*(int *)(param_1 + 0x184) * 0x18 + param_1 + 0x188,0,0x18);
  pcVar5 = (char *)(param_1 + 0x188 + *(int *)(param_1 + 0x184) * 0x18 + 8);
  do {
    cVar1 = *param_2;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar3 = *(int *)(param_1 + 0x184);
  *(int *)(param_1 + 0x184) = iVar3 + 1;
  return iVar3;
}
