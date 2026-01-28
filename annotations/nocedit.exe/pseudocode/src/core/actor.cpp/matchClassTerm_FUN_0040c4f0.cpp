// Name: core_actor.cpp_matchClassTerm_FUN_0040c4f0
// Address: 0040c4f0
// Address Range: [[0040c4f0, 0040c605]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_matchClassTerm_FUN_0040c4f0(CDemonActorType *type_ptr,char **parse_pos)

#include "nocturne.h"

int __cdecl core_actor_cpp_matchClassTerm_FUN_0040c4f0(CDemonActorType *type_ptr,char **parse_pos)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  while ((g_CharacterClassificationTable[(byte)(**parse_pos + 1)] & 2U) != 0) {
    *parse_pos = *parse_pos + 1;
  }
  pcVar2 = *parse_pos;
  cVar1 = *pcVar2;
  if (cVar1 == '(') {
    *parse_pos = pcVar2 + 1;
    iVar4 = core_actor_cpp_matchClassExpression_FUN_0040c610(type_ptr,parse_pos);
    if (-1 < iVar4) {
      while ((g_CharacterClassificationTable[(byte)(**parse_pos + 1)] & 2U) != 0) {
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
    uVar3 = core_actor_cpp_matchClassTerm_FUN_0040c4f0(type_ptr,parse_pos);
    if (-1 < (int)uVar3) {
      uVar3 = (uint)(uVar3 == 0);
    }
    return uVar3;
  }
  if ((g_CharacterClassificationTable[(byte)(cVar1 + 1)] & 0xe0U) == 0) {
    return -1;
  }
  uVar3 = 0;
  do {
    iVar4 = crt_ctype_c_tolower_FUN_005feb30((uint)(byte)**parse_pos);
    uVar3 = iVar4 * 0x20001 + (uVar3 >> 0x19) + uVar3 * 0x80;
    pcVar2 = *parse_pos;
    *parse_pos = pcVar2 + 1;
  } while ((g_CharacterClassificationTable[(byte)(pcVar2[1] + 1)] & 0xe0U) != 0);
  iVar4 = core_actor_cpp_checkNameHash_FUN_0040c700(type_ptr,uVar3);
  return iVar4;
}
