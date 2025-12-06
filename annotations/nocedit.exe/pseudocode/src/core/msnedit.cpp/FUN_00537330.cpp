// Name: core_msnedit.cpp_FUN_00537330
// Address: 00537330
// Address Range: [[00537330, 0053740f]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00537330()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_00537330(uint param_1, uint param_2,
   uint param_3) */

void core_msnedit_cpp_FUN_00537330(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar7;
  int in_stack_00000008;
  CStrList *in_stack_0000000c;
  char acStack_78 [92];
  char *local_1c;
  char *local_18;
  int local_14;
  char *pcVar6;
  
  bVar7 = 0;
  local_14 = 0;
  if (0 < g_NumActorClassTypes) {
    local_18 = (char *)((int)&in_stack_0000000c->item_count + 1);
    local_1c = acStack_78 + (int)in_stack_0000000c * 2 + -8;
    iVar3 = 0;
    do {
      iVar2 = *(int *)((int)g_ActorClassRegistrations + iVar3);
      if (in_stack_00000008 == *(int *)(iVar2 + 0x28)) {
        crt_memory_c_memset_FUN_005fde40(&stack0xffffff80,0x20,100);
        crt_stdio_c_sprintf_FUN_005fdbd0(local_18,"%s\t%d",iVar2);
        if (*(int *)(iVar2 + 0x2c) == 0) {
          pcVar4 = "\t(abstract)";
          iVar2 = -1;
          pcVar6 = acStack_78;
          do {
            pcVar5 = pcVar6;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar5;
          } while (cVar1 != '\0');
          pcVar5 = pcVar5 + -1;
          do {
            cVar1 = *pcVar4;
            *pcVar5 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar5[1] = cVar1;
            pcVar5 = pcVar5 + 2;
          } while (cVar1 != '\0');
        }
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(in_stack_0000000c,acStack_78);
        core_msnedit_cpp_FUN_00537330();
      }
      local_14 = local_14 + 1;
      iVar3 = iVar3 + 4;
    } while (local_14 < g_NumActorClassTypes);
  }
  return;
}
