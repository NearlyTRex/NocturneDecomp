// Name: core_event.cpp_CRuleList_insert_FUN_004b1680
// Address: 004b1680
// Address Range: [[004b1680, 004b17ba]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CRuleList_insert_FUN_004b1680(CRuleList *this_ptr,int index,char *condition,char *event)

#include "nocturne.h"

void __cdecl core_event_cpp_CRuleList_insert_FUN_004b1680(CRuleList *this_ptr,int index,char *condition,char *event)

{
  char cVar2;
  char (*src) [100];
  char (*src_00) [100];
  char cVar1;
  
  if ((index < 0) || (this_ptr->list_size < index)) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 3289;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CRuleList::insert - invalid index");
  }
  if (4 < this_ptr->list_size) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 3290;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CRuleList::insert - list full");
  }
  src = this_ptr->conditions + index;
  memmove
            (this_ptr->conditions + index + 1,src,(this_ptr->list_size - index) * 100);
  src_00 = this_ptr->events + index;
  memmove
            (this_ptr->events + index + 1,src_00,(this_ptr->list_size - index) * 100);
  this_ptr->list_size = this_ptr->list_size + 1;
  do {
    cVar1 = *condition;
    (*src)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = condition[1];
    condition = condition + 2;
    (*src)[1] = cVar2;
    src = (char (*) [100])(*src + 2);
  } while (cVar2 != '\0');
  do {
    cVar2 = *event;
    (*src_00)[0] = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    cVar2 = event[1];
    event = event + 2;
    (*src_00)[1] = cVar2;
    src_00 = (char (*) [100])(*src_00 + 2);
  } while (cVar2 != '\0');
  return;
}
