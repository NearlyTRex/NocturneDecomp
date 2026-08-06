// Name: core_event.cpp_CEventList_setActorVariable_FUN_00480950
// Address: 00480950
// Address Range: [[00480950, 00480b2a]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_00480950(CEventList *this_ptr,char *var_name,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_00480950(CEventList *this_ptr,char *var_name,CDemonActor *actor)

{
  char cVar1;
  int iVar2;
  char (*dest) [30];
  char (*pacVar3) [30];
  int iVar4;
  
  if ((actor != (CDemonActor *)0x0) && (actor->actor_name[0] == '\0')) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 2859;
    core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(actor);
    core_main_c_displayErrorAndQuit_FUN_004c8440("Tried to assign actor var %s an actor of type %s with no name");
  }
  iVar2 = core_event_cpp_CEventList_findActorVariable_FUN_00480ba0(this_ptr,var_name);
  if (iVar2 < 0) {
    if (actor != (CDemonActor *)0x0) {
      if (0x18 < (this_ptr->actor_vars).count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 2872;
        core_main_c_displayErrorAndQuit_FUN_004c8440("CEventList::setActorVariable - already too many actor variables.  Max is %d.");
      }
      pacVar3 = (this_ptr->actor_vars).var_names + (this_ptr->actor_vars).count;
      do {
        cVar1 = *var_name;
        (*pacVar3)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = var_name[1];
        var_name = var_name + 2;
        (*pacVar3)[1] = cVar1;
        pacVar3 = (char (*) [30])(*pacVar3 + 2);
      } while (cVar1 != '\0');
      pacVar3 = (this_ptr->actor_vars).actor_names + (this_ptr->actor_vars).count;
      do {
        cVar1 = actor->actor_name[0];
        (*pacVar3)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = actor->actor_name[1];
        actor = (CDemonActor *)(actor->actor_name + 2);
        (*pacVar3)[1] = cVar1;
        pacVar3 = (char (*) [30])(*pacVar3 + 2);
      } while (cVar1 != '\0');
      (this_ptr->actor_vars).count = (this_ptr->actor_vars).count + 1;
      return;
    }
  }
  else {
    dest = (this_ptr->actor_vars).actor_names + iVar2;
    pacVar3 = (this_ptr->actor_vars).var_names + iVar2;
    if (actor == (CDemonActor *)0x0) {
      iVar4 = (this_ptr->actor_vars).count + -1;
      (this_ptr->actor_vars).count = iVar4;
      memmove
                (pacVar3,((SActorVarBlock *)(&this_ptr->counters + 1))->var_names + iVar2 + 1,
                 (iVar4 - iVar2) * 0x1e);
      memmove
                (dest,(this_ptr->actor_vars).actor_names + iVar2 + 1,
                 ((this_ptr->actor_vars).count - iVar2) * 0x1e);
      return;
    }
    do {
      cVar1 = *var_name;
      (*pacVar3)[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = var_name[1];
      var_name = var_name + 2;
      (*pacVar3)[1] = cVar1;
      pacVar3 = (char (*) [30])(*pacVar3 + 2);
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
