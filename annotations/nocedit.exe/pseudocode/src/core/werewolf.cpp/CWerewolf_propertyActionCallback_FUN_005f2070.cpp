// Name: core_werewolf.cpp_CWerewolf_propertyActionCallback_FUN_005f2070
// Address: 005f2070
// Address Range: [[005f2070, 005f20c1]]
// Convention: __cdecl
// Signature: int __cdecl core_werewolf_cpp_CWerewolf_propertyActionCallback_FUN_005f2070(CWerewolf *this_ptr,CActorProperty *property)

#include "nocturne.h"

int __cdecl core_werewolf_cpp_CWerewolf_propertyActionCallback_FUN_005f2070(CWerewolf *this_ptr,CActorProperty *property)

{
  CWerewolf *pCVar1;
  
  pCVar1 = (CWerewolf *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     ((CDemonActor *)this_ptr,g_CWerewolfClassInfo.name_hash);
  if (pCVar1->type == WEREWOLF_TYPE_TRAIN) {
    pCVar1->type = WEREWOLF_TYPE_TRAIN_ALPHA;
  }
  else {
    if (pCVar1->type != WEREWOLF_TYPE_TRAIN_ALPHA) {
      pCVar1->type = WEREWOLF_TYPE_TRAIN;
      return 1;
    }
    pCVar1->type = WEREWOLF_TYPE_FOREST;
  }
  return 1;
}
