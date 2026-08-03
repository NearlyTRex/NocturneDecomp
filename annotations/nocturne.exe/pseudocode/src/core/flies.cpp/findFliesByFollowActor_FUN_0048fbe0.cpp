// Name: core_flies.cpp_findFliesByFollowActor_FUN_0048fbe0
// Address: 0048fbe0
// Address Range: [[0048fbe0, 0048fc2d]]
// Convention: __cdecl
// Signature: CFlies * __cdecl core_flies_cpp_findFliesByFollowActor_FUN_0048fbe0(CDemonActor *actor)

#include "nocturne.h"

CFlies * __cdecl core_flies_cpp_findFliesByFollowActor_FUN_0048fbe0(CDemonActor *actor)

{
  CFlies *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (g_CDemonSet_PTR_005be368->actor_count <= iVar2) {
      return (CFlies *)0x0;
    }
    pCVar1 = (CFlies *)
             core_actor_cpp_castToClassHash_FUN_0040d890
                       (*(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + iVar3),
                        g_CFliesActorType_01c70718.name_hash);
    if ((pCVar1 != (CFlies *)0x0) && (actor == pCVar1->follow_actor)) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return pCVar1;
}
