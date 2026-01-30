// Name: core_chain.cpp_FUN_00430eb0
// Address: 00430eb0
// Address Range: [[00430eb0, 00430fd6]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_chain_cpp_FUN_00430eb0(void)

#include "nocturne.h"

/* Signature: byte actors_other_chain.cpp_FUN_00430eb0(uint param_1, uint param_2)
    */

CVector3f * __cdecl core_chain_cpp_FUN_00430eb0(void)

{
  CVector3f *pCVar1;
  int iVar2;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  local_1c.y = 9999.0;
  local_1c.z = 9999.0;
  local_40.x = -9999.0;
  local_40.y = -9999.0;
  local_40.z = -9999.0;
  local_1c.x = 9999.0;
  iVar2 = 0;
  if (0 < *(int *)in_stack_00000004[1].actor_name) {
    pCVar1 = &in_stack_00000004[1].previous_transform_state.orientation;
    do {
      if (pCVar1->x < local_1c.x) {
        local_1c.x = pCVar1->x;
      }
      if (pCVar1->y < local_1c.y) {
        local_1c.y = pCVar1->y;
      }
      if (pCVar1->z < local_1c.z) {
        local_1c.z = pCVar1->z;
      }
      if (local_40.x < pCVar1->x) {
        local_40.x = pCVar1->x;
      }
      if (local_40.y < pCVar1->y) {
        local_40.y = pCVar1->y;
      }
      if (local_40.z < pCVar1->z) {
        local_40.z = pCVar1->z;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 3;
    } while (iVar2 < *(int *)in_stack_00000004[1].actor_name);
  }
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (in_stack_00000004,&local_34,&local_1c);
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (in_stack_00000004,&local_28,&local_40);
  if (in_stack_00000008 + 1 == pCVar1) {
    return in_stack_00000008;
  }
  in_stack_00000008[1].x = pCVar1->x;
  in_stack_00000008[1].y = pCVar1->y;
  in_stack_00000008[1].z = pCVar1->z;
  return in_stack_00000008;
}
