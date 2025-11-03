// Name: core_pendulum.cpp_FUN_005494a0
// Address: 005494a0
// Address Range: [[005494a0, 005494bc]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_005494a0()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60

#include "nocturne.h"

/* Signature: undefined1 actors_other_pendulum.cpp_FUN_005494a0(undefined4 param_1) */

void core_pendulum_cpp_FUN_005494a0(void)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined1 auStack_30 [8];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  pCVar3 = (*in_stack_00000004->vtable->getBoundingBox)
                     (in_stack_00000004,(CBoundingBox3D *)(auStack_30 + 4));
  if ((CBoundingBox3D *)auStack_30 != pCVar3) {
    auStack_30._0_4_ = (pCVar3->min).x;
    auStack_30._4_4_ = (pCVar3->min).y;
    fStack_28 = (pCVar3->min).z;
  }
  if ((CVector3f *)&fStack_24 != &pCVar3->max) {
    fStack_24 = (pCVar3->max).x;
    fStack_20 = (pCVar3->max).y;
    fStack_1c = (pCVar3->max).z;
  }
  in_stack_00000004[2].field13_0xec.z =
       SQRT((fStack_20 - (float)auStack_30._4_4_) * (float)DOUBLE_0063ec89) * (float)DOUBLE_0063ec91
  ;
  fVar1 = ((float)auStack_30._4_4_ + fStack_20) * FLOAT_0063ec99;
  fVar2 = (fStack_28 + fStack_1c) * FLOAT_0063ec99;
  if ((float *)(in_stack_00000004[3].actor_name + 8) == &stack0x0000000c) {
    *(undefined4 *)(in_stack_00000004[3].actor_name + 0xc) = auStack_30._4_4_;
    return;
  }
  *(float *)(in_stack_00000004[3].actor_name + 8) =
       ((float)auStack_30._0_4_ + fStack_24) * FLOAT_0063ec99;
  *(float *)(in_stack_00000004[3].actor_name + 0xc) = fVar1;
  *(float *)(in_stack_00000004[3].actor_name + 0x10) = fVar2;
  *(undefined4 *)(in_stack_00000004[3].actor_name + 0xc) = auStack_30._4_4_;
  return;
}


// Assembly code:
// 005494a0: PUSH EBX
//   Label: core_pendulum.cpp_FUN_005494a0
// 005494a1: SUB ESP,0x48
// 005494a4: MOV EBX,dword ptr [ESP + 0x50]
// 005494a8: LEA EAX,[EBX + 0x158]
// 005494ae: PUSH EAX
// 005494af: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 005494b4: ADD ESP,0x4
// 005494b7: PUSH EBX
// 005494b8: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
