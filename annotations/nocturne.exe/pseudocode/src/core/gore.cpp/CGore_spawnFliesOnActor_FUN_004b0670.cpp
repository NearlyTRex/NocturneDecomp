// Name: core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670
// Address: 004b0670
// Address Range: [[004b0670, 004b06a3]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670(CGore *this_ptr,CDemonActor *actor,int gather_count,float spawn_rate,CVector3f *box_size)

{
  CFlies *pCVar1;
  
  pCVar1 = core_gore_cpp_CGore_spawnFlies_FUN_004b0580
                     (this_ptr,&(actor->location).position,gather_count,spawn_rate,box_size);
  (pCVar1->base).location.area_id = (actor->location).area_id;
  pCVar1->follow_actor = actor;
  return;
}
