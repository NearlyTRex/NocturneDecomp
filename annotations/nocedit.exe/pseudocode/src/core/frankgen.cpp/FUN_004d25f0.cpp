// Name: core_frankgen.cpp_FUN_004d25f0
// Address: 004d25f0
// Address Range: [[004d25f0, 004d2732]]
// Convention: unknown
// Signature: void core_frankgen_cpp_FUN_004d25f0(void)

#include "nocturne.h"

void core_frankgen_cpp_FUN_004d25f0(void)

{
  int iVar1;
  int iVar2;
  float unaff_retaddr;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  
  switch(*(uint *)in_stack_00000004[1].actor_name) {
  case 1:
  case 2:
  case 3:
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
    (in_stack_00000004->orient).heading = 0.0;
    (in_stack_00000004->orient).bank = (in_stack_00000004->orient).heading;
    (in_stack_00000004->orient).pitch = (in_stack_00000004->orient).bank;
    break;
  case 4:
  case 5:
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  }
  (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
  (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
  iVar1 = core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330();
  iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x34);
  if (iVar2 != 0) {
    *(float *)(iVar1 + 0x15c) = *(float *)(iVar1 + 0x15c) + unaff_retaddr;
  }
  iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x33);
  if (iVar2 != 0) {
    *(float *)(iVar1 + 0x15c) = *(float *)(iVar1 + 0x15c) - in_stack_00000008;
  }
  if (*(float *)(iVar1 + 0x15c) < 0.0) {
    *(float *)(iVar1 + 0x15c) = 2300.0f + *(float *)(iVar1 + 0x15c);
  }
  if (2300.0f <= *(float *)(iVar1 + 0x15c)) {
    *(float *)(iVar1 + 0x15c) = *(float *)(iVar1 + 0x15c) - 2300.0f;
  }
  *(uint *)(in_stack_00000004[1].actor_name + 4) = *(uint *)(iVar1 + 0x15c);
  core_frankgen_cpp_LoadModel_FUN_004d2190();
  return;
}
