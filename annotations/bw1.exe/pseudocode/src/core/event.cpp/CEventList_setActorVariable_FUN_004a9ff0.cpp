// Name: core_event.cpp_CEventList_setActorVariable_FUN_004a9ff0
// Address: 004a9ff0
// Address Range: [[004a9ff0, 004aa1ca]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_004a9ff0(CEventList *this_ptr,char *var_name,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_004a9ff0(CEventList *this_ptr,char *var_name,CDemonActor *actor)

{
  CEventList CVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  CEventList *dest;
  CEventList *pCVar6;
  
  if ((actor != (CDemonActor *)0x0) && (actor->actor_name[0] == '\0')) {
    _DAT_01d1d400 = "..\\core\\event.cpp";
    _DAT_01d1d404 = 0xe82;
    pcVar4 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(actor);
    core_main_c_FUN_005030e0("Tried to assign actor var %s an actor of type %s with no name",var_name,pcVar4);
  }
  iVar5 = core_event_cpp_CEventList_findActorVariable_FUN_004aa240(this_ptr,var_name);
  if (iVar5 < 0) {
    if (actor != (CDemonActor *)0x0) {
      if (0x18 < *(int *)(this_ptr + 0x34e8)) {
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xe8f;
        core_main_c_FUN_005030e0("CEventList::setActorVariable - already too many actor variables.  Max is %d.",0x19);
      }
      pCVar6 = this_ptr + *(int *)(this_ptr + 0x34e8) * 0x1e + 0x34ec;
      do {
        CVar1 = (CEventList)*var_name;
        *pCVar6 = CVar1;
        if (CVar1 == (CEventList)0x0) break;
        CVar1 = *(CEventList *)(var_name + 1);
        var_name = var_name + 2;
        pCVar6[1] = CVar1;
        pCVar6 = pCVar6 + 2;
      } while (CVar1 != (CEventList)0x0);
      pCVar6 = this_ptr + *(int *)(this_ptr + 0x34e8) * 0x1e + 0x37da;
      do {
        CVar1 = (CEventList)actor->actor_name[0];
        *pCVar6 = CVar1;
        if (CVar1 == (CEventList)0x0) break;
        CVar1 = *(CEventList *)(actor->actor_name + 1);
        actor = (CDemonActor *)(actor->actor_name + 2);
        pCVar6[1] = CVar1;
        pCVar6 = pCVar6 + 2;
      } while (CVar1 != (CEventList)0x0);
      *(int *)(this_ptr + 0x34e8) = *(int *)(this_ptr + 0x34e8) + 1;
      return;
    }
  }
  else {
    dest = this_ptr + iVar5 * 0x1e + 0x37da;
    pCVar6 = this_ptr + iVar5 * 0x1e + 0x34ec;
    if (actor == (CDemonActor *)0x0) {
      iVar2 = *(int *)(this_ptr + 0x34e8);
      *(int *)(this_ptr + 0x34e8) = iVar2 + -1;
      iVar3 = (iVar5 + 1) * 0x1e;
      memmove
                (pCVar6,this_ptr + iVar3 + 0x34ec,((iVar2 + -1) - iVar5) * 0x1e);
      memmove
                (dest,this_ptr + iVar3 + 0x37da,(*(int *)(this_ptr + 0x34e8) - iVar5) * 0x1e);
      return;
    }
    do {
      CVar1 = (CEventList)*var_name;
      *pCVar6 = CVar1;
      if (CVar1 == (CEventList)0x0) break;
      CVar1 = *(CEventList *)(var_name + 1);
      var_name = var_name + 2;
      pCVar6[1] = CVar1;
      pCVar6 = pCVar6 + 2;
    } while (CVar1 != (CEventList)0x0);
    do {
      CVar1 = (CEventList)actor->actor_name[0];
      *dest = CVar1;
      if (CVar1 == (CEventList)0x0) {
        return;
      }
      CVar1 = *(CEventList *)(actor->actor_name + 1);
      actor = (CDemonActor *)(actor->actor_name + 2);
      dest[1] = CVar1;
      dest = dest + 2;
    } while (CVar1 != (CEventList)0x0);
  }
  return;
}
