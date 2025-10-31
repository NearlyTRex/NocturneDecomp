// Name: core_backgnd.cpp_FUN_00412810
// Address: 00412810
// Address Range: [[00412810, 00412824]]
// Convention: unknown
// Signature: undefined core_backgnd.cpp_FUN_00412810()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60

#include "nocturne.h"

undefined8 core_backgnd_cpp_FUN_00412810(void)

{
  float fVar1;
  uint uVar2;
  CDemonActor *in_stack_00000004;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  fVar1 = in_stack_00000004[2].location.position.y;
  uVar2 = (uint)(fVar1 == 0.0);
  in_stack_00000004->field16_0x100 = uVar2;
  return CONCAT44(fVar1,uVar2);
}


// Assembly code:
// 00412810: PUSH EBX
//   Label: core_backgnd.cpp_FUN_00412810
// 00412811: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00412815: LEA EAX,[EBX + 0x158]
// 0041281b: PUSH EAX
// 0041281c: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 00412821: ADD ESP,0x4
// 00412824: PUSH EBX
