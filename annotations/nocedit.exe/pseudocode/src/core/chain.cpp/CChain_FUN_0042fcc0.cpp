// Name: core_chain.cpp_CChain_FUN_0042fcc0
// Address: 0042fcc0
// Address Range: [[0042fcc0, 0042fd18]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_chain_cpp_CChain_FUN_0042fcc0(CChain *this_ptr)

#include "nocturne.h"

CVector3f * __cdecl core_chain_cpp_CChain_FUN_0042fcc0(CChain *this_ptr)

{
  CVector3f *input_local_point;
  CVector3f *in_stack_00000008;
  CVector3f local_14;
  
  input_local_point =
       core_xform_cpp_transformVector3x4_FUN_005f4dc0
                 (&local_14,&g_ZeroVector,
                  (CMatrix3x4f *)
                  (this_ptr->target[0xb].footstep_sound_code + this_ptr->target_bone * 0x30 + -0xc))
  ;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (this_ptr->target,in_stack_00000008,input_local_point);
  return in_stack_00000008;
}
