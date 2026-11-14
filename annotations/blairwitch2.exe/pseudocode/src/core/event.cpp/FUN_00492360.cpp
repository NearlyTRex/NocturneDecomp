// Name: core_event.cpp_FUN_00492360
// Address: 00492360
// Address Range: [[00492360, 0049249a]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_00492360(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_event_cpp_FUN_00492360(void)

{
  char cVar1;
  int *src;
  int *src_00;
  int *in_stack_00000004;
  int in_stack_00000008;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  
  if ((in_stack_00000008 < 0) || (*in_stack_00000004 < in_stack_00000008)) {
    _DAT_01d046a0 = "..\\core\\event.cpp";
    _DAT_01d046a4 = 0xfeb;
    core_main_c_FUN_004e4500("CRuleList::insert - invalid index");
  }
  if (4 < *in_stack_00000004) {
    _DAT_01d046a0 = "..\\core\\event.cpp";
    _DAT_01d046a4 = 0xfec;
    core_main_c_FUN_004e4500("CRuleList::insert - list full");
  }
  src = in_stack_00000004 + in_stack_00000008 * 0x19 + 1;
  memmove
            (in_stack_00000004 + (in_stack_00000008 + 1) * 0x19 + 1,src,
             (*in_stack_00000004 - in_stack_00000008) * 100);
  src_00 = in_stack_00000004 + in_stack_00000008 * 0x19 + 0x7e;
  memmove
            (in_stack_00000004 + (in_stack_00000008 + 1) * 0x19 + 0x7e,src_00,
             (*in_stack_00000004 - in_stack_00000008) * 100);
  *in_stack_00000004 = *in_stack_00000004 + 1;
  do {
    cVar1 = *in_stack_0000000c;
    *(char *)src = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_0000000c[1];
    in_stack_0000000c = in_stack_0000000c + 2;
    *(char *)((int)src + 1) = cVar1;
    src = (int *)((int)src + 2);
  } while (cVar1 != '\0');
  do {
    cVar1 = *in_stack_00000010;
    *(char *)src_00 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = in_stack_00000010[1];
    in_stack_00000010 = in_stack_00000010 + 2;
    *(char *)((int)src_00 + 1) = cVar1;
    src_00 = (int *)((int)src_00 + 2);
  } while (cVar1 != '\0');
  return;
}
