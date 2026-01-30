// Name: core_frankgen.cpp_FUN_004d1f70
// Address: 004d1f70
// Address Range: [[004d1f70, 004d20e4]]
// Convention: __cdecl
// Signature: int __cdecl core_frankgen_cpp_FUN_004d1f70(void)

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_FUN_004d1f70(uint param_1) */

int __cdecl core_frankgen_cpp_FUN_004d1f70(void)

{
  int iVar1;
  CDemonActor *pCVar2;
  CBoundingBox3D *this_ptr;
  int iVar3;
  CDemonActor *extraout_EBX;
  float10 fVar4;
  double dVar5;
  CDemonActor *in_stack_00000004;
  float fVar6;
  double input_value;
  
  if (*(int *)(g_CDemonMissionPtr->unk1 + 4) != 0) {
    pCVar2 = core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330();
    *(uint *)(in_stack_00000004[1].actor_name + 4) = *(uint *)(pCVar2[1].actor_name + 4)
    ;
    core_frankgen_cpp_LoadModel_FUN_004d2190();
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffcc);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar3 != 0) {
    fVar6 = -NAN;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               in_stack_00000004[1].location.position.z,-1);
    if (in_stack_00000004[2].create_event[0x5c] != '\0') {
      iVar1 = *(int *)(in_stack_00000004[1].actor_name + 4);
      if ((((0x4400bfff < iVar1) && (0x44e0ffff < iVar1)) && (0x44ed7fff < iVar1)) &&
         (0x44f9ffff < iVar1)) {
        input_value = (double)((*(float *)(in_stack_00000004[1].actor_name + 4) + -2000.0f) *
                               (float)3 * 0.005f);
        dVar5 = floor(input_value);
        fVar4 = (float10)(float)((ulonglong)input_value >> 0x20) -
                (float10)dVar5 * (float10)200;
        fVar6 = (float)fVar4;
        if ((float10)100.0f < fVar4) {
          fVar6 = 200.0f - fVar6;
        }
        fVar6 = fVar6 + 99.0f;
        in_stack_00000004 = extraout_EBX;
      }
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)&in_stack_00000004[2].orient_matrix.m[2].z,fVar6,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
      return iVar3;
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar3;
}
