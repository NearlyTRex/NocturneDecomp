// Name: core_frankgen.cpp_CFrankenstienMachine_processInEditor_FUN_004d25f0
// Address: 004d25f0
// MANUAL RECONSTRUCTION
// Address Range: [[004d25f0, 004d2732]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_processInEditor_FUN_004d25f0(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_processInEditor_FUN_004d25f0(CFrankenstienMachine *this_ptr)

{
  int iVar1;
  int iVar2;
  CDemonActor *pCVar2;
  float local_18;
  
  switch(this_ptr->which_part) {
  case 1:
  case 2:
  case 3:
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
    memset(&(this_ptr->base).orient.vec, 0, sizeof((this_ptr->base).orient.vec));
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
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
  if (iVar2 != 0) {
    local_18 = local_18 * (float)0.25;
  }
  pCVar2 = core_frankgen_cpp_findLeader_FUN_004d2330();
  iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_PERIOD);
  if (iVar2 != 0) {
    ((CFrankenstienMachine *)pCVar2)->master_frame = ((CFrankenstienMachine *)pCVar2)->master_frame + local_18;
  }
  iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_COMMA);
  if (iVar2 != 0) {
    ((CFrankenstienMachine *)pCVar2)->master_frame = ((CFrankenstienMachine *)pCVar2)->master_frame - local_18;
  }
  if (((CFrankenstienMachine *)pCVar2)->master_frame < 0.0) {
    ((CFrankenstienMachine *)pCVar2)->master_frame = 2300.0f + ((CFrankenstienMachine *)pCVar2)->master_frame;
  }
  if (2300.0f <= ((CFrankenstienMachine *)pCVar2)->master_frame) {
    ((CFrankenstienMachine *)pCVar2)->master_frame = ((CFrankenstienMachine *)pCVar2)->master_frame - 2300.0f;
  }
  this_ptr->master_frame = ((CFrankenstienMachine *)pCVar2)->master_frame;
  core_frankgen_cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190(this_ptr);
  return;
}
