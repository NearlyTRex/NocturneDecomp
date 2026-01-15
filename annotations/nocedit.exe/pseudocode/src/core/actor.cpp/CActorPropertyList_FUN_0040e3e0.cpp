// Name: core_actor.cpp_CActorPropertyList_FUN_0040e3e0
// Address: 0040e3e0
// Address Range: [[0040e3e0, 0040e458]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CActorPropertyList_FUN_0040e3e0(CActorPropertyList * this_ptr)

#include "nocturne.h"

int __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e3e0(CActorPropertyList *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *in_stack_00000008;
  void *in_stack_0000000c;
  char *in_stack_00000010;
  char *in_stack_00000014;
  uint in_stack_00000018;
  
  iVar2 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,10,in_stack_00000008,in_stack_0000000c,(void *)0x0);
  pcVar3 = (char *)(iVar2 + 0x70);
  do {
    cVar1 = *in_stack_00000010;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000010[1];
    in_stack_00000010 = in_stack_00000010 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
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
  *(uint *)(iVar2 + 0x58) = 1;
  *(uint *)(iVar2 + 0x5c) = in_stack_00000018;
  return iVar2;
}
