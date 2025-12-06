// Name: core_event.cpp_FUN_004aa270
// Address: 004aa270
// Address Range: [[004aa270, 004aa29c]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa270()

#include "nocturne.h"

uint core_event_cpp_FUN_004aa270(void)

{
  char cVar1;
  char *pcVar2;
  char *in_stack_0000000c;
  
  pcVar2 = &DAT_02d0a460;
  do {
    cVar1 = *in_stack_0000000c;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    cVar1 = in_stack_0000000c[1];
    in_stack_0000000c = in_stack_0000000c + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return 0xffffffff;
}
