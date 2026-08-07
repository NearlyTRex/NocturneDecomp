// Name: core_actor.cpp_matchClassExpression_FUN_0040d720
// Address: 0040d720
// Address Range: [[0040d720, 0040d7d1]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_matchClassExpression_FUN_0040d720(CDemonActorType *type_ptr,char **parse_pos)

#include "nocturne.h"

int __cdecl core_actor_cpp_matchClassExpression_FUN_0040d720(CDemonActorType *type_ptr,char **parse_pos)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    while( true ) {
      while ((g_CharacterClassificationTable[(byte)(**parse_pos + 1)] & 2) != 0) {
        *parse_pos = *parse_pos + 1;
      }
      pcVar2 = *parse_pos;
      cVar1 = *pcVar2;
      if ((cVar1 == '\0') || (cVar1 == ')')) {
        return iVar4;
      }
      if (cVar1 == '|') break;
      if (cVar1 == '&') {
        *parse_pos = pcVar2 + 1;
        if (pcVar2[1] == '&') {
          *parse_pos = pcVar2 + 2;
        }
        iVar3 = core_actor_cpp_matchClassTerm_FUN_0040d600(type_ptr,parse_pos);
        if (iVar3 < 0) {
          return -1;
        }
        if (iVar3 == 0) {
          iVar4 = 0;
        }
      }
      else {
        iVar3 = core_actor_cpp_matchClassTerm_FUN_0040d600(type_ptr,parse_pos);
        if (iVar3 < 0) {
          return -1;
        }
        if (0 < iVar3) {
          iVar4 = 1;
        }
      }
    }
    *parse_pos = pcVar2 + 1;
    if (pcVar2[1] == '|') {
      *parse_pos = pcVar2 + 2;
    }
    iVar3 = core_actor_cpp_matchClassTerm_FUN_0040d600(type_ptr,parse_pos);
    if (iVar3 < 0) break;
    if (0 < iVar3) {
      iVar4 = 1;
    }
  }
  return -1;
}
