// Name: core_event.cpp_CEventList_setActorVariable_FUN_004b09a0
// Address: 004b09a0
// Address Range: [[004b09a0, 004b0b7a]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_setActorVariable_FUN_004b09a0(CEventList * this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_004b09a0(CEventList *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *dest;
  int iVar4;
  char *in_stack_00000008;
  CDemonActor *in_stack_0000000c;
  
  if ((in_stack_0000000c != (CDemonActor *)0x0) && (in_stack_0000000c->actor_name[0] == '\0')) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xb2b;
    core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(in_stack_0000000c);
    core_main_c_displayErrorAndQuit_FUN_00506f10("Tried to assign actor var %s an actor of type %s with no name");
  }
  iVar2 = core_event_cpp_CEventList_FUN_004b0bf0(this_ptr);
  if (iVar2 < 0) {
    if (in_stack_0000000c != (CDemonActor *)0x0) {
      if (0x18 < this_ptr->actor_var_count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0xb38;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setActorVariable - already too many actor variables.  Max is %d.",0x19);
      }
      pcVar3 = this_ptr->variablesVarName1 + this_ptr->actor_var_count * 0x1e;
      do {
        cVar1 = *in_stack_00000008;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = in_stack_00000008[1];
        in_stack_00000008 = in_stack_00000008 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      pcVar3 = this_ptr->variablesActorName1 + this_ptr->actor_var_count * 0x1e;
      do {
        cVar1 = in_stack_0000000c->actor_name[0];
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = in_stack_0000000c->actor_name[1];
        in_stack_0000000c = (CDemonActor *)(in_stack_0000000c->actor_name + 2);
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      this_ptr->actor_var_count = this_ptr->actor_var_count + 1;
      return;
    }
  }
  else {
    dest = this_ptr->variablesActorName1 + iVar2 * 0x1e;
    pcVar3 = this_ptr->variablesVarName1 + iVar2 * 0x1e;
    if (in_stack_0000000c == (CDemonActor *)0x0) {
      iVar4 = this_ptr->actor_var_count + -1;
      this_ptr->actor_var_count = iVar4;
      crt_string_c_memmove_FUN_005fe5e0
                (pcVar3,this_ptr->variablesVarName2 + iVar2 * 0x1e,(iVar4 - iVar2) * 0x1e);
      crt_string_c_memmove_FUN_005fe5e0
                (dest,this_ptr->variablesActorName2 + iVar2 * 0x1e,
                 (this_ptr->actor_var_count - iVar2) * 0x1e);
      return;
    }
    do {
      cVar1 = *in_stack_00000008;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = in_stack_00000008[1];
      in_stack_00000008 = in_stack_00000008 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    do {
      cVar1 = in_stack_0000000c->actor_name[0];
      *dest = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = in_stack_0000000c->actor_name[1];
      in_stack_0000000c = (CDemonActor *)(in_stack_0000000c->actor_name + 2);
      dest[1] = cVar1;
      dest = dest + 2;
    } while (cVar1 != '\0');
  }
  return;
}
