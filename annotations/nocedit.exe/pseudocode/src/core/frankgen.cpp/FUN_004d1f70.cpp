// Name: core_frankgen.cpp_FUN_004d1f70
// Address: 004d1f70
// Address Range: [[004d1f70, 004d20e4]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d1f70()

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_FUN_004d1f70(uint param_1) */

int core_frankgen_cpp_FUN_004d1f70(void)

{
  int iVar1;
  int iVar2;
  CBoundingBox3D *this_ptr;
  CDemonActor *extraout_EBX;
  BADSPACEBASE *in_ESP;
  uint unaff_EBP;
  float10 fVar3;
  CDemonActor *in_stack_00000004;
  CBoundingBox3D *out_box;
  double input_value;
  float fVar4;
  CBoundingBox3D CStack_28;
  
  stack0xffffffec = (double)CONCAT44 /* combine 2-byte values */(unaff_EBP,CStack_28.max.z);
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) {
    iVar2 = core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330();
    *(uint *)(in_stack_00000004[1].actor_name + 4) = *(uint *)(iVar2 + 0x15c);
    core_frankgen_cpp_LoadModel_FUN_004d2190();
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  out_box = &CStack_28;
  this_ptr = (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,out_box);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if ((iVar2 != 0) &&
     (core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
                 in_stack_00000004[1].location.position.z,-1),
     in_stack_00000004[2].create_event[0x5c] != '\0')) {
    iVar1 = *(int *)(in_stack_00000004[1].actor_name + 4);
    if ((0x4400bfff < iVar1) &&
       (((0x44e0ffff < iVar1 && (0x44ed7fff < iVar1)) && (0x44f9ffff < iVar1)))) {
      input_value = (double)((*(float *)(in_stack_00000004[1].actor_name + 4) + -2000f) *
                             (float)3 * 0.005f);
      join_0x00000008_0x00000000_ = crt_math_c_floor_FUN_005feb90(input_value);
      fVar3 = (float10)(float)((ulonglong)input_value >> 0x20) -
              (float10)join_0x00000008_0x00000000_ * (float10)200;
      fVar4 = (float)fVar3;
      if ((float10)100f < fVar3) {
        fVar4 = 200f - fVar4;
      }
      out_box = (CBoundingBox3D *)(fVar4 + 99f);
      in_stack_00000004 = extraout_EBX;
    }
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)&in_stack_00000004[2].orient_matrix.m[2].z,(float)out_box,
               -1);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return iVar2;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar2;
}
