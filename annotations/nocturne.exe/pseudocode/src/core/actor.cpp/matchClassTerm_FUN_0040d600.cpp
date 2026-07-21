// Name: core_actor.cpp_matchClassTerm_FUN_0040d600
// Address: 0040d600
// Address Range: [[0040d600, 0040d715]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_matchClassTerm_FUN_0040d600(undefined4 param_1,int *param_2)

#include "nocturne.h"

uint __cdecl core_actor_cpp_matchClassTerm_FUN_0040d600(uint param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  while (((&DAT_005c168c)[(byte)(*(char *)*param_2 + 1)] & 2) != 0) {
    *param_2 = (int)((char *)*param_2 + 1);
  }
  pcVar2 = (char *)*param_2;
  cVar1 = *pcVar2;
  if (cVar1 == '(') {
    *param_2 = (int)(pcVar2 + 1);
    uVar3 = core_actor_cpp_matchClassExpression_FUN_0040d720(param_1,param_2);
    if (-1 < (int)uVar3) {
      while (((&DAT_005c168c)[(byte)(*(char *)*param_2 + 1)] & 2) != 0) {
        *param_2 = (int)((char *)*param_2 + 1);
      }
      if (*(char *)*param_2 == ')') {
        *param_2 = (int)((char *)*param_2 + 1);
        return uVar3;
      }
    }
    return 0xffffffff;
  }
  if (cVar1 == '!') {
    *param_2 = (int)(pcVar2 + 1);
    uVar3 = core_actor_cpp_matchClassTerm_FUN_0040d600(param_1,param_2);
    if (-1 < (int)uVar3) {
      uVar3 = (uint)(uVar3 == 0);
    }
    return uVar3;
  }
  if (((&DAT_005c168c)[(byte)(cVar1 + 1)] & 0xe0) == 0) {
    return 0xffffffff;
  }
  uVar3 = 0;
  do {
    iVar4 = tolower(*(byte *)*param_2);
    uVar3 = iVar4 * 0x20001 + (uVar3 >> 0x19) + uVar3 * 0x80;
    iVar4 = *param_2;
    *param_2 = iVar4 + 1;
  } while (((&DAT_005c168c)[(byte)(*(char *)(iVar4 + 1) + 1)] & 0xe0) != 0);
  uVar3 = core_actor_cpp_checkNameHash_FUN_0040d810(param_1,uVar3);
  return uVar3;
}
