// Name: core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_004357a0
// Address: 004357a0
// Address Range: [[004357a0, 00435812]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_004357a0(CChain *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __stack_esi core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_004357a0(CChain *this_ptr,CVector3f *out_point)

{
  uint *puVar1;
  byte bVar2;
  float afStackY_1018 [1016];
  CVector3f CStack_30;
  CVector3f CStack_24;
  CVector3f CStack_18;
  
  bVar2 = 0;
  core_xform_cpp_transformVector3x4_FUN_005b5080
            (&g_ZeroVector,
             (this_ptr->target->model).bone_transform.bone_model_matrices + this_ptr->target_bone,
             &CStack_18);
  CStack_24.x = CStack_18.x;
  *(uint *)((int)&CStack_24 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_18 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&CStack_24 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_18 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            (&this_ptr->target->base,&CStack_24,&CStack_30);
  puVar1 = (uint *)((int)out_point + (uint)bVar2 * -8 + 4);
  out_point->x = CStack_30.x;
  *puVar1 = *(uint *)((int)&CStack_30 + (uint)bVar2 * -8 + 4);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)((int)&CStack_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  return out_point;
}
