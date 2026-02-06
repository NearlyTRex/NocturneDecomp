// Name: core_flies.cpp_CFlies_FUN_004cca50
// Address: 004cca50
// Address Range: [[004cca50, 004cca9d]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_flies_cpp_CFlies_FUN_004cca50(CFlies *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_flies_cpp_CFlies_FUN_004cca50(CFlies *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar2) {
      return (CDemonActor *)0x0;
    }
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar3),
                        g_CFliesClassInfo.name_hash);
    if ((pCVar1 != (CDemonActor *)0x0) && (this_ptr == (CFlies *)pCVar1[0x1f].runtime_state)) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return pCVar1;
}
