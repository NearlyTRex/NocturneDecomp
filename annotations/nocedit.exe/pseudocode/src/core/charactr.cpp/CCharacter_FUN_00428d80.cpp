// Name: core_charactr.cpp_CCharacter_FUN_00428d80
// Address: 00428d80
// Address Range: [[00428d80, 00428e29]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_00428d80(CCharacter * this_ptr)
// Cross-references:
//   core_scat.cpp_FUN_005578e0 (005578e0) at 00557ceb [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_00428d80(CCharacter *this_ptr)

{
  float angle_radians;
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000008;
  CVector3f local_24 [2];
  undefined4 local_8;
  
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (&this_ptr->base_actor,local_24,in_stack_00000008);
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     ((CVector3f *)&stack0xffffffd4,pCVar1);
  angle_radians = pCVar1->y;
  local_8 = *(undefined4 *)(this_ptr->field2_0x240c + 0x2c);
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(angle_radians);
  fVar3 = -angle_radians;
  if ((-angle_radians <= fVar2) && (fVar3 = angle_radians, fVar2 <= angle_radians)) {
    *(float *)(this_ptr->field2_0x240c + 0xc) = fVar2;
    return;
  }
  *(float *)(this_ptr->field2_0x240c + 0xc) = fVar3;
  return;
}


// Assembly code:
// 00428d80: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_00428d80
// 00428d81: SUB ESP,0x2c
// 00428d84: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00428d88: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 00428d8c: PUSH EDX
// 00428d8d: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x24] (DATA)
// 00428d91: PUSH EAX
// 00428d92: PUSH EBX
// 00428d93: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00428d98: ADD ESP,0xc
// 00428d9b: PUSH EAX
// 00428d9c: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 00428da0: PUSH EAX
// 00428da1: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00428da6: ADD ESP,0x8
// 00428da9: MOV EAX,dword ptr [EAX + 0x4]
// 00428dac: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00428db0: MOV EAX,dword ptr [EBX + 0x2438]
// 00428db6: PUSH dword ptr [ESP + 0x24]
//   XREF to: Stack[-0xc] (READ)
// 00428dba: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00428dbe: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00428dc3: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 00428dc7: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x8] (READ)
// 00428dcb: ADD ESP,0x4
// 00428dce: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (READ)
// 00428dd2: FXCH
// 00428dd4: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0xc] (WRITE)
// 00428dd8: FXCH
// 00428dda: FCHS
// 00428ddc: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (WRITE)
// 00428de0: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00428de4: FNSTSW AX
// 00428de6: SAHF
// 00428de7: JC 0x00428e0d
//   XREF to: 00428e0d (CONDITIONAL_JUMP)
// 00428de9: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0xc] (READ)
// 00428ded: FCOMP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (READ)
// 00428df1: FNSTSW AX
// 00428df3: SAHF
// 00428df4: JBE 0x00428e13
//   XREF to: 00428e13 (CONDITIONAL_JUMP)
// 00428df6: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (READ)
// 00428dfa: MOV dword ptr [ESP + 0x1c],EAX
//   Label: LAB_00428dfa
//   XREF to: Stack[-0x14] (WRITE)
// 00428dfe: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00428e02: MOV dword ptr [EBX + 0x2418],EAX
// 00428e08: ADD ESP,0x2c
// 00428e0b: POP EBX
// 00428e0c: RET
// 00428e0d: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00428e0d
//   XREF to: Stack[-0x18] (READ)
// 00428e11: JMP 0x00428dfa
//   XREF to: 00428dfa (UNCONDITIONAL_JUMP)
// 00428e13: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00428e13
//   XREF to: Stack[-0xc] (READ)
// 00428e17: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00428e1b: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00428e1f: MOV dword ptr [EBX + 0x2418],EAX
// 00428e25: ADD ESP,0x2c
// 00428e28: POP EBX
// 00428e29: RET
