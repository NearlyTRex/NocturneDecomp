// Name: core_conveyor.cpp_FUN_004421c0
// Address: 004421c0
// Address Range: [[004421c0, 004422e7]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_FUN_004421c0(void)

#include "nocturne.h"

/* Signature: byte actors_other_conveyor.cpp_FUN_004421c0(uint param_1) */

void __cdecl core_conveyor_cpp_FUN_004421c0(void)

{
  CPlatform *pCVar1;
  CKeys *this_ptr;
  int iVar2;
  CPlatform *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  
  this_ptr = g_CKeysPtr;
  in_stack_00000004->platform_type = 4;
  iVar2 = (*this_ptr->vtable->getKeyState)(this_ptr,0x1d);
  if (iVar2 == 0) {
    core_platfrm_cpp_CPlatform_processInEditor_FUN_0054ea00(in_stack_00000004);
    return;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
  if (iVar2 != 0) {
    *(float *)in_stack_00000004[1].base.actor_name =
         *(float *)in_stack_00000004[1].base.actor_name - in_stack_00000008;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
  if (iVar2 != 0) {
    *(float *)in_stack_00000004[1].base.actor_name =
         *(float *)in_stack_00000004[1].base.actor_name + in_stack_00000010;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
  if (iVar2 != 0) {
    *(float *)(in_stack_00000004[1].base.actor_name + 8) =
         *(float *)(in_stack_00000004[1].base.actor_name + 8) - in_stack_00000018;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
  if (iVar2 != 0) {
    *(float *)(in_stack_00000004[1].base.actor_name + 8) =
         *(float *)(in_stack_00000004[1].base.actor_name + 8) + in_stack_00000020;
  }
  if (*(int *)in_stack_00000004[1].base.actor_name < 0x3f000000) {
    in_stack_00000004[1].base.actor_name[0] = '\0';
    in_stack_00000004[1].base.actor_name[1] = '\0';
    in_stack_00000004[1].base.actor_name[2] = '\0';
    in_stack_00000004[1].base.actor_name[3] = '?';
  }
  if (*(float *)(in_stack_00000004[1].base.actor_name + 4) < 0.5) {
    pCVar1 = in_stack_00000004 + 1;
    (pCVar1->base).actor_name[4] = '\0';
    (pCVar1->base).actor_name[5] = '\0';
    (pCVar1->base).actor_name[6] = '\0';
    (pCVar1->base).actor_name[7] = '?';
  }
  if (0.5 <= *(float *)(in_stack_00000004[1].base.actor_name + 8)) {
    return;
  }
  pCVar1 = in_stack_00000004 + 1;
  (pCVar1->base).actor_name[8] = '\0';
  (pCVar1->base).actor_name[9] = '\0';
  (pCVar1->base).actor_name[10] = '\0';
  (pCVar1->base).actor_name[0xb] = '?';
  return;
}
