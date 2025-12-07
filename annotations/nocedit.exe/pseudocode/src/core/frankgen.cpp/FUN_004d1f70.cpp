// Name: core_frankgen.cpp_FUN_004d1f70
// Address: 004d1f70
// Address Range: [[004d1f70, 004d20e4]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d1f70()

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_FUN_004d1f70(uint param_1) */

int core_frankgen_cpp_FUN_004d1f70(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CBoundingBox3D *this_ptr;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  float10 fVar4;
  CDemonActor *in_stack_00000004;
  float fStack_24;
  ulonglong in_stack_ffffffe8;
  float fVar5;
  
  fVar5 = SUB84 /* extract 2-byte value */(in_stack_ffffffe8,4);
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) {
    iVar3 = core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330();
    *(uint *)(in_stack_00000004[1].actor_name + 4) = *(uint *)(iVar3 + 0x15c);
    in_ST0 = (float10)core_frankgen_cpp_LoadModel_FUN_004d2190();
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffd8);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar3 != 0) {
    fStack_24 = 7.082796e-39;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)&in_stack_00000004[1].location.area_id,
               in_stack_00000004[1].location.position.z,-1);
    cVar1 = in_stack_00000004[2].create_event[0x5c];
    if (cVar1 != '\0') {
      iVar2 = *(int *)(in_stack_00000004[1].actor_name + 4);
      if ((((0x4400bfff < iVar2) && (0x44e0ffff < iVar2)) && (0x44ed7fff < iVar2)) &&
         (0x44f9ffff < iVar2)) {
        fVar5 = (float)((ulonglong)
                        (double)((*(float *)(in_stack_00000004[1].actor_name + 4) + -2000f)
                                 * (float)3 * 0.005f) >> 0x20);
        crt_math_c_floor_FUN_005feb90((double)in_ST0);
        fVar4 = (float10)fVar5 -
                (float10)(double)CONCAT44 /* combine 2-byte values */(CONCAT31 /* combine 2-byte values */((int3)((uint)extraout_EDX >> 8),cVar1),
                                          in_stack_00000004[2].create_event + 0x5c) *
                (float10)200;
        fVar5 = (float)fVar4;
        if ((float10)100f < fVar4) {
          fVar5 = 200f - fVar5;
        }
        fVar5 = fVar5 + 99f;
      }
      fStack_24 = 7.08288e-39;
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)&in_stack_00000004[2].orient_matrix.m[2].z,fVar5,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
      return iVar3;
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar3;
}
