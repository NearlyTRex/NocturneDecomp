// Name: core_hpriest.cpp_FUN_004f7c00
// Address: 004f7c00
// Address Range: [[004f7c00, 004f7c41]]
// Convention: unknown
// Signature: undefined core_hpriest.cpp_FUN_004f7c00()

#include "nocturne.h"

/* Signature: byte actors_npc_highpriestg.cpp_FUN_004f7c00(uint param_1, uint
   param_2) */

void core_hpriest_cpp_FUN_004f7c00(void)

{
  int iVar1;
  CNPC *in_stack_00000004;
  float in_stack_00000008;
  
  core_npc_cpp_CNPC_process_FUN_005448b0(in_stack_00000004,in_stack_00000008);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,(char *)(in_stack_00000004 + 1));
  if (iVar1 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042b9e0(&in_stack_00000004->base);
  return;
}
