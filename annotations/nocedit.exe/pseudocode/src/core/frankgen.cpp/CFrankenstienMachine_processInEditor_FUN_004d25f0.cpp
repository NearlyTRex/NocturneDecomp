// Name: core_frankgen.cpp_CFrankenstienMachine_processInEditor_FUN_004d25f0
// Address: 004d25f0
// Address Range: [[004d25f0, 004d2732]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_processInEditor_FUN_004d25f0(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_processInEditor_FUN_004d25f0(CFrankenstienMachine *this_ptr)

{
  int iVar1;
  CDemonActor *pCVar2;
  float local_18;
  
  switch(this_ptr->which_part) {
  case 1:
  case 2:
  case 3:
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
    (this_ptr->base).orient.vec.z = 0.0;
    (this_ptr->base).orient.vec.y = (this_ptr->base).orient.vec.z;
    (this_ptr->base).orient.vec.x = (this_ptr->base).orient.vec.y;
    break;
  case 4:
  case 5:
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  }
  local_18 = 1.0;
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
  if (iVar1 != 0) {
    local_18 = 4.0;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
  if (iVar1 != 0) {
    local_18 = local_18 * (float)0.25;
  }
  pCVar2 = core_frankgen_cpp_findLeader_FUN_004d2330();
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_PERIOD);
  if (iVar1 != 0) {
    *(float *)(pCVar2[1].actor_name + 4) = *(float *)(pCVar2[1].actor_name + 4) + local_18;
  }
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_COMMA);
  if (iVar1 != 0) {
    *(float *)(pCVar2[1].actor_name + 4) = *(float *)(pCVar2[1].actor_name + 4) - local_18;
  }
  if (*(float *)(pCVar2[1].actor_name + 4) < 0.0) {
    *(float *)(pCVar2[1].actor_name + 4) = 2300.0f + *(float *)(pCVar2[1].actor_name + 4);
  }
  if (2300.0f <= *(float *)(pCVar2[1].actor_name + 4)) {
    *(float *)(pCVar2[1].actor_name + 4) = *(float *)(pCVar2[1].actor_name + 4) - 2300.0f;
  }
  this_ptr->master_frame = *(float *)(pCVar2[1].actor_name + 4);
  core_frankgen_cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190(this_ptr);
  return;
}
