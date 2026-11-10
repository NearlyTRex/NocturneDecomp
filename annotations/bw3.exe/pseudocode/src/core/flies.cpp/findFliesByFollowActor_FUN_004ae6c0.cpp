// Name: core_flies.cpp_findFliesByFollowActor_FUN_004ae6c0
// Address: 004ae6c0
// Address Range: [[004ae6c0, 004ae70d]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_findFliesByFollowActor_FUN_004ae6c0(CDemonActor *actor)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_findFliesByFollowActor_FUN_004ae6c0(CDemonActor *actor)

{
  CFlies *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (g_CDemonSetPtr->actor_count <= iVar2) {
      return (CFlies *)0x0;
    }
    pCVar1 = (CFlies *)
             core_actor_cpp_castToClassHash_FUN_0040c840
                       (*(uint *)((int)g_CDemonSetPtr->actors + iVar3),
                        g_CFliesClassInfo.name_hash);
    if ((pCVar1 != (CFlies *)0x0) && (actor == pCVar1->follow_actor)) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return pCVar1;
}
