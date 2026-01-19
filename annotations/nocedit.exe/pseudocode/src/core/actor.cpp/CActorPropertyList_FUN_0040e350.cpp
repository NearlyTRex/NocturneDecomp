// Name: core_actor.cpp_CActorPropertyList_FUN_0040e350
// Address: 0040e350
// Address Range: [[0040e350, 0040e3ac]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CActorPropertyList_FUN_0040e350(CActorPropertyList * this_ptr)

#include "nocturne.h"

int __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e350(CActorPropertyList *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *in_stack_00000008;
  void *in_stack_0000000c;
  uint in_stack_00000010;
  char *in_stack_00000014;
  void *in_stack_00000018;
  
  iVar2 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,5,in_stack_00000008,in_stack_0000000c,in_stack_00000018);
  if (in_stack_00000014 == (char *)0x0) {
    in_stack_00000014 = &DAT_00614464;
  }
  pcVar3 = (char *)(iVar2 + 0x84);
  do {
    cVar1 = *in_stack_00000014;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000014[1];
    in_stack_00000014 = in_stack_00000014 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x5c) = in_stack_00000010;
  return iVar2;
}
