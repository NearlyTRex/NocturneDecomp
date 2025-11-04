// Name: core_hostage.cpp_FUN_004f5ff0
// Address: 004f5ff0
// Address Range: [[004f5ff0, 004f6111]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_FUN_004f5ff0()
// Cross-references:
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f54e7 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062f0ea = 1.5
// Function calls:
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830

#include "nocturne.h"

/* Signature: undefined1 actors_npc_hostage.cpp_FUN_004f5ff0(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_hostage_cpp_FUN_004f5ff0(void)

{
  CVector3f *pCVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_14;
  
  if (*(int *)(in_stack_00000004 + 0x1fae8) == 0) {
    return 0;
  }
  in_stack_00000008 = *(float *)(in_stack_00000004 + 0x1faec) - in_stack_00000008;
  *(float *)(in_stack_00000004 + 0x1faec) = in_stack_00000008;
  if ((0.0 < in_stack_00000008) &&
     (*(float *)(in_stack_00000004 + 0x2dd4) <= (float)DOUBLE_0062f0ea)) {
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&local_14,(CVector3f *)&stack0xffffffe0);
    fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (pCVar1->y - *(float *)(in_stack_00000004 + 0x34));
    *(float *)(in_stack_00000004 + 0x2418) = fVar2;
    if (*(float *)(in_stack_00000004 + 0x2418) < -*(float *)(in_stack_00000004 + 0x2438)) {
      *(undefined4 *)(in_stack_00000004 + 0x2418) = *(undefined4 *)(in_stack_00000004 + 0x2438);
    }
    if (*(float *)(in_stack_00000004 + 0x2438) < *(float *)(in_stack_00000004 + 0x2418)) {
      *(undefined4 *)(in_stack_00000004 + 0x2418) = *(undefined4 *)(in_stack_00000004 + 0x2438);
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 0x158),2,1);
    return 1;
  }
  *(undefined4 *)(in_stack_00000004 + 0x1fae8) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),0,1);
  return 0;
}


// Assembly code:
// 004f5ff0: PUSH EBX
//   Label: core_hostage.cpp_FUN_004f5ff0
// 004f5ff1: SUB ESP,0x1c
// 004f5ff4: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004f5ff8: CMP dword ptr [EBX + 0x1fae8],0x0
// 004f5fff: JZ 0x004f60e7
//   XREF to: 004f60e7 (CONDITIONAL_JUMP)
// 004f6005: FLD float ptr [EBX + 0x1faec]
// 004f600b: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 004f600f: FST float ptr [EBX + 0x1faec]
// 004f6015: FLDZ
// 004f6017: FCOMPP
// 004f6019: FNSTSW AX
// 004f601b: SAHF
// 004f601c: JNC 0x004f60ee
//   XREF to: 004f60ee (CONDITIONAL_JUMP)
// 004f6022: FLD float ptr [EBX + 0x2dd4]
// 004f6028: FCOMP double ptr [0x0062f0ea]
//   XREF to: 0062f0ea (READ)
// 004f602e: FNSTSW AX
// 004f6030: SAHF
// 004f6031: JA 0x004f60ee
//   XREF to: 004f60ee (CONDITIONAL_JUMP)
// 004f6037: LEA EDX,[EBX + 0x20]
// 004f603a: MOV EAX,dword ptr [EBX + 0x1fae8]
// 004f6040: FLD float ptr [EDX]
// 004f6042: FSUB float ptr [EAX + 0x20]
// 004f6045: FSTP float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004f6048: FLD float ptr [EDX + 0x4]
// 004f604b: FSUB float ptr [EAX + 0x24]
// 004f604e: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (WRITE)
// 004f6052: FLD float ptr [EDX + 0x8]
// 004f6055: FSUB float ptr [EAX + 0x28]
// 004f6058: MOV EAX,ESP
// 004f605a: PUSH EAX
// 004f605b: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x14] (DATA)
// 004f605f: PUSH EAX
// 004f6060: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (WRITE)
// 004f6064: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f6069: FLD float ptr [EAX + 0x4]
// 004f606c: ADD ESP,0x8
// 004f606f: FSUB float ptr [EBX + 0x34]
// 004f6072: SUB ESP,0x4
// 004f6075: FSTP float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004f6078: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f607d: FLD float ptr [EBX + 0x2438]
// 004f6083: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 004f6087: FCHS
// 004f6089: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x8] (READ)
// 004f608d: MOV dword ptr [EBX + 0x2418],EAX
// 004f6093: ADD ESP,0x4
// 004f6096: FCOMP float ptr [EBX + 0x2418]
// 004f609c: FNSTSW AX
// 004f609e: SAHF
// 004f609f: JBE 0x004f60ad
//   XREF to: 004f60ad (CONDITIONAL_JUMP)
// 004f60a1: MOV EAX,dword ptr [EBX + 0x2438]
// 004f60a7: MOV dword ptr [EBX + 0x2418],EAX
// 004f60ad: FLD float ptr [EBX + 0x2418]
//   Label: LAB_004f60ad
// 004f60b3: FCOMP float ptr [EBX + 0x2438]
// 004f60b9: FNSTSW AX
// 004f60bb: SAHF
// 004f60bc: JBE 0x004f60ca
//   XREF to: 004f60ca (CONDITIONAL_JUMP)
// 004f60be: MOV EAX,dword ptr [EBX + 0x2438]
// 004f60c4: MOV dword ptr [EBX + 0x2418],EAX
// 004f60ca: PUSH 0x1
//   Label: LAB_004f60ca
// 004f60cc: PUSH 0x2
// 004f60ce: ADD EBX,0x158
// 004f60d4: PUSH EBX
// 004f60d5: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f60da: MOV EAX,0x1
// 004f60df: ADD ESP,0xc
// 004f60e2: ADD ESP,0x1c
// 004f60e5: POP EBX
// 004f60e6: RET
// 004f60e7: XOR EAX,EAX
//   Label: LAB_004f60e7
// 004f60e9: ADD ESP,0x1c
// 004f60ec: POP EBX
// 004f60ed: RET
// 004f60ee: PUSH 0x1
//   Label: LAB_004f60ee
// 004f60f0: PUSH 0x0
// 004f60f2: ADD EBX,0x158
// 004f60f8: PUSH EBX
// 004f60f9: MOV dword ptr [EBX + 0x1f990],0x0
// 004f6103: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f6108: ADD ESP,0xc
// 004f610b: XOR EAX,EAX
// 004f610d: ADD ESP,0x1c
// 004f6110: POP EBX
// 004f6111: RET
