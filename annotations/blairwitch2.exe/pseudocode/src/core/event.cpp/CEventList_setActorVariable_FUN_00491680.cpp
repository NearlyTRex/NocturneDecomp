// Name: core_event.cpp_CEventList_setActorVariable_FUN_00491680
// Address: 00491680
// Address Range: [[00491680, 0049185a]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_00491680(CEventList *this_ptr,char *var_name,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_00491680(CEventList *this_ptr,char *var_name,CDemonActor *actor)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char (*dest) [30];
  char (*pacVar4) [30];
  int iVar5;
  
  if ((actor != (CDemonActor *)0x0) && (actor->actor_name[0] == '\0')) {
    _DAT_01d046a0 = "..\\core\\event.cpp";
    _DAT_01d046a4 = 0xe3d;
    uVar2 = core_actor_cpp_FUN_00408a50(actor);
    core_main_c_FUN_004e4500("Tried to assign actor var %s an actor of type %s with no name",var_name,uVar2);
  }
  iVar3 = core_event_cpp_CEventList_findActorVariable_FUN_004918d0(this_ptr,var_name);
  if (iVar3 < 0) {
    if (actor != (CDemonActor *)0x0) {
      if (0x18 < (this_ptr->actor_vars).count) {
        _DAT_01d046a0 = "..\\core\\event.cpp";
        _DAT_01d046a4 = 0xe4a;
        core_main_c_FUN_004e4500("CEventList::setActorVariable - already too many actor variables.  Max is %d.",0x19);
      }
      pacVar4 = (this_ptr->actor_vars).var_names + (this_ptr->actor_vars).count;
      do {
        cVar1 = *var_name;
        (*pacVar4)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = var_name[1];
        var_name = var_name + 2;
        (*pacVar4)[1] = cVar1;
        pacVar4 = (char (*) [30])(*pacVar4 + 2);
      } while (cVar1 != '\0');
      pacVar4 = (this_ptr->actor_vars).actor_names + (this_ptr->actor_vars).count;
      do {
        cVar1 = actor->actor_name[0];
        (*pacVar4)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = actor->actor_name[1];
        actor = (CDemonActor *)(actor->actor_name + 2);
        (*pacVar4)[1] = cVar1;
        pacVar4 = (char (*) [30])(*pacVar4 + 2);
      } while (cVar1 != '\0');
      (this_ptr->actor_vars).count = (this_ptr->actor_vars).count + 1;
      return;
    }
  }
  else {
    dest = (this_ptr->actor_vars).actor_names + iVar3;
    pacVar4 = (this_ptr->actor_vars).var_names + iVar3;
    if (actor == (CDemonActor *)0x0) {
      iVar5 = (this_ptr->actor_vars).count + -1;
      (this_ptr->actor_vars).count = iVar5;
      memmove
                (pacVar4,((SActorVarBlock *)(&this_ptr->counters + 1))->var_names + iVar3 + 1,
                 (iVar5 - iVar3) * 0x1e);
      memmove
                (dest,(this_ptr->actor_vars).actor_names + iVar3 + 1,
                 ((this_ptr->actor_vars).count - iVar3) * 0x1e);
      return;
    }
    do {
      cVar1 = *var_name;
      (*pacVar4)[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = var_name[1];
      var_name = var_name + 2;
      (*pacVar4)[1] = cVar1;
      pacVar4 = (char (*) [30])(*pacVar4 + 2);
    } while (cVar1 != '\0');
    do {
      cVar1 = actor->actor_name[0];
      (*dest)[0] = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = actor->actor_name[1];
      actor = (CDemonActor *)(actor->actor_name + 2);
      (*dest)[1] = cVar1;
      dest = (char (*) [30])(*dest + 2);
    } while (cVar1 != '\0');
  }
  return;
}
