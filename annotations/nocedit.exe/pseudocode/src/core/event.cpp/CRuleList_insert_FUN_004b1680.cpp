// Name: core_event.cpp_CRuleList_insert_FUN_004b1680
// Address: 004b1680
// Address Range: [[004b1680, 004b17ba]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CRuleList_insert_FUN_004b1680(CRuleList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CRuleList_insert_FUN_004b1680(CRuleList *this_ptr)

{
  char cVar1;
  char (*src) [100];
  char (*src_00) [100];
  int in_stack_00000008;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  
  if ((in_stack_00000008 < 0) || (this_ptr->list_size < in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xcd9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CRuleList::insert - invalid index");
  }
  if (4 < this_ptr->list_size) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xcda;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CRuleList::insert - list full");
  }
  src = this_ptr->conditions + in_stack_00000008;
  memmove
            (this_ptr->conditions + in_stack_00000008 + 1,src,
             (this_ptr->list_size - in_stack_00000008) * 100);
  src_00 = this_ptr->events + in_stack_00000008;
  memmove
            (this_ptr->events + in_stack_00000008 + 1,src_00,
             (this_ptr->list_size - in_stack_00000008) * 100);
  this_ptr->list_size = this_ptr->list_size + 1;
  do {
    cVar1 = *in_stack_0000000c;
    (*src)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_0000000c[1];
    in_stack_0000000c = in_stack_0000000c + 2;
    (*src)[1] = cVar1;
    src = (char (*) [100])(*src + 2);
  } while (cVar1 != '\0');
  do {
    cVar1 = *in_stack_00000010;
    (*src_00)[0] = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = in_stack_00000010[1];
    in_stack_00000010 = in_stack_00000010 + 2;
    (*src_00)[1] = cVar1;
    src_00 = (char (*) [100])(*src_00 + 2);
  } while (cVar1 != '\0');
  return;
}
