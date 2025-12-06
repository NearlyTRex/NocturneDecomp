// Name: core_chain.cpp_FUN_0042fcc0
// Address: 0042fcc0
// Address Range: [[0042fcc0, 0042fd18]]
// Convention: unknown
// Signature: undefined core_chain.cpp_FUN_0042fcc0()

#include "nocturne.h"

/* Signature: byte actors_other_chain.cpp_FUN_0042fcc0(uint param_1, uint param_2)
    */

CVector3f * core_chain_cpp_FUN_0042fcc0(void)

{
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  
  input_local_point =
       core_xform_cpp_transformVector3x4_FUN_005f4dc0
                 ((CVector3f *)&stack0xffffffec,&g_ZeroVector,
                  (CMatrix3x4f *)
                  (*(int *)(in_stack_00000004 + 0x168) * 0x30 +
                  *(int *)(in_stack_00000004 + 0x164) + 0xfd8));
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (*(CDemonActor **)(in_stack_00000004 + 0x164),in_stack_00000008,input_local_point);
  return in_stack_00000008;
}
