// Name: core_chain.cpp_FUN_00430eb0
// Address: 00430eb0
// Address Range: [[00430eb0, 00430fd6]]
// Convention: unknown
// Signature: undefined core_chain.cpp_FUN_00430eb0()

#include "nocturne.h"

/* Signature: byte actors_other_chain.cpp_FUN_00430eb0(uint param_1, uint param_2)
    */

CVector3f * core_chain_cpp_FUN_00430eb0(void)

{
  CVector3f *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  float fVar3;
  byte local_3c [24];
  byte auStack_24 [12];
  float local_18;
  float local_14;
  
  local_18 = 9999.0;
  local_14 = 9999.0;
  fVar3 = -9999.0;
  local_3c._0_4_ = -9999.0;
  local_3c._4_4_ = -9999.0;
  auStack_24._8_4_ = 9999.0;
  iVar2 = 0;
  if (0 < *(int *)in_stack_00000004[1].actor_name) {
    pCVar1 = &in_stack_00000004[1].previous_transform_state.orientation;
    do {
      if (pCVar1->x < (float)auStack_24._8_4_) {
        auStack_24._8_4_ = pCVar1->x;
      }
      if (pCVar1->y < local_18) {
        local_18 = pCVar1->y;
      }
      if (pCVar1->z < local_14) {
        local_14 = pCVar1->z;
      }
      if (fVar3 < pCVar1->x) {
        fVar3 = pCVar1->x;
      }
      if ((float)local_3c._0_4_ < pCVar1->y) {
        local_3c._0_4_ = pCVar1->y;
      }
      if ((float)local_3c._4_4_ < pCVar1->z) {
        local_3c._4_4_ = pCVar1->z;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 3;
    } while (iVar2 < *(int *)in_stack_00000004[1].actor_name);
  }
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (in_stack_00000004,(CVector3f *)(local_3c + 8),(CVector3f *)(auStack_24 + 8));
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (in_stack_00000004,(CVector3f *)auStack_24,(CVector3f *)local_3c);
  if (in_stack_00000008 + 1 == pCVar1) {
    return in_stack_00000008;
  }
  in_stack_00000008[1].x = pCVar1->x;
  in_stack_00000008[1].y = pCVar1->y;
  in_stack_00000008[1].z = pCVar1->z;
  return in_stack_00000008;
}
