// Name: core_event.cpp_CRuleList_insert_FUN_00481630
// Address: 00481630
// Address Range: [[00481630, 0048176a]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CRuleList_insert_FUN_00481630(CRuleList *this_ptr,int index,char *condition,char *event)

#include "nocturne.h"

void __cdecl core_event_cpp_CRuleList_insert_FUN_00481630(CRuleList *this_ptr,int index,char *condition,char *event)

{
  char cVar1;
  char (*src) [100];
  char (*src_00) [100];
  
  if ((index < 0) || (this_ptr->list_size < index)) {
    g_CHAR_PTR_01cc4800 = "..\\core\\event.cpp";
    g_INT_01cc4804 = 0xcd9;
    core_main_c_FUN_004c8440("CRuleList::insert - invalid index");
  }
  if (4 < this_ptr->list_size) {
    g_CHAR_PTR_01cc4800 = "..\\core\\event.cpp";
    g_INT_01cc4804 = 0xcda;
    core_main_c_FUN_004c8440("CRuleList::insert - list full");
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
    cVar1 = condition[1];
    condition = condition + 2;
    (*src)[1] = cVar1;
    src = (char (*) [100])(*src + 2);
  } while (cVar1 != '\0');
  do {
    cVar1 = *event;
    (*src_00)[0] = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = event[1];
    event = event + 2;
    (*src_00)[1] = cVar1;
    src_00 = (char (*) [100])(*src_00 + 2);
  } while (cVar1 != '\0');
  return;
}
