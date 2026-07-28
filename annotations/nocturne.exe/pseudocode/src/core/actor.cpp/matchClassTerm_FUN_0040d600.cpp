// Name: core_actor.cpp_matchClassTerm_FUN_0040d600
// Address: 0040d600
// Address Range: [[0040d600, 0040d715]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_matchClassTerm_FUN_0040d600(CDemonActorType *type_ptr,char **parse_pos)

#include "nocturne.h"

int __cdecl core_actor_cpp_matchClassTerm_FUN_0040d600(CDemonActorType *type_ptr,char **parse_pos)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  while (((&DAT_005c168c)[(byte)(**parse_pos + 1)] & 2) != 0) {
    *parse_pos = *parse_pos + 1;
  }
  pcVar2 = *parse_pos;
  cVar1 = *pcVar2;
  if (cVar1 == '(') {
    *parse_pos = pcVar2 + 1;
    iVar4 = core_actor_cpp_matchClassExpression_FUN_0040d720(type_ptr,parse_pos);
    if (-1 < iVar4) {
      while (((&DAT_005c168c)[(byte)(**parse_pos + 1)] & 2) != 0) {
        *parse_pos = *parse_pos + 1;
      }
      if (**parse_pos == ')') {
        *parse_pos = *parse_pos + 1;
        return iVar4;
      }
    }
    return -1;
  }
  if (cVar1 == '!') {
    *parse_pos = pcVar2 + 1;
    uVar3 = core_actor_cpp_matchClassTerm_FUN_0040d600(type_ptr,parse_pos);
    if (-1 < (int)uVar3) {
      uVar3 = (uint)(uVar3 == 0);
    }
    return uVar3;
  }
  if (((&DAT_005c168c)[(byte)(cVar1 + 1)] & 0xe0) == 0) {
    return -1;
  }
  uVar3 = 0;
  do {
    iVar4 = tolower((uint)(byte)**parse_pos);
    uVar3 = iVar4 * 0x20001 + (uVar3 >> 0x19) + uVar3 * 0x80;
    pcVar2 = *parse_pos;
    *parse_pos = pcVar2 + 1;
  } while (((&DAT_005c168c)[(byte)(pcVar2[1] + 1)] & 0xe0) != 0);
  iVar4 = core_actor_cpp_checkNameHash_FUN_0040d810(type_ptr,uVar3);
  return iVar4;
}
