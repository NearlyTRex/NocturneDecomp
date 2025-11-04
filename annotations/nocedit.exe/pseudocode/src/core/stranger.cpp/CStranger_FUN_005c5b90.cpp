// Name: core_stranger.cpp_CStranger_FUN_005c5b90
// Address: 005c5b90
// Address Range: [[005c5b90, 005c5e78]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c5b90()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc346 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005c5b6c = 005c5c17
//   TerminatedCString s_eDoorMoveNone_returned_b_00653ddc
//   TerminatedCString s_eDoorMoveNone_returned_b_00653e19
//   TerminatedCString s_CBodyPart_00653e56
//   TerminatedCString s_CBodyPart_00653e61
//   double DOUBLE_00653e6c = 0.999900000000000
//   double DOUBLE_00653e74 = 0.990000000000000
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042e840
//   core_hero.cpp_FUN_004f2af0
//   core_hero.cpp_FUN_004f2c40
//   core_hero.cpp_FUN_004f2d70
//   core_hero.cpp_FUN_004f2ed0
//   core_hero.cpp_FUN_004f2f50
//   core_hero.cpp_FUN_004f3120
//   core_hero.cpp_FUN_004f33b0
//   core_motion.cpp_CMotionController_FUN_0052dd20
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_stranger.cpp_CStranger_FUN_005c1680
//   core_stranger.cpp_CStranger_FUN_005c1fe0
//   core_stranger.cpp_CStranger_FUN_005c2400
//   core_stranger.cpp_CStranger_FUN_005c2850
//   core_stranger.cpp_CStranger_FUN_005c5e80
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740

#include "nocturne.h"

void core_stranger_cpp_CStranger_FUN_005c5b90(void)

{
  CMotionController *this_ptr;
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float unaff_ESI;
  int in_stack_00000004;
  
  if ((((*(int *)(in_stack_00000004 + 0xbe38) != 0) && (*(int *)(in_stack_00000004 + 0x1fc38) == 0))
      && (iVar1 = core_stranger_cpp_CStranger_FUN_005c5e80(), iVar1 == 0)) &&
     (*(int *)(in_stack_00000004 + 0x1fbd4) == 0)) {
    this_ptr = (CMotionController *)(in_stack_00000004 + 0x158);
    core_motion_cpp_CMotionController_FUN_0052dd20(this_ptr);
    fVar2 = core_motion_cpp_CMotionController_FUN_0052dd20(this_ptr);
    if ((float)DOUBLE_00653e6c < fVar2 + unaff_ESI) {
      uVar3 = core_hero_cpp_FUN_004f2d70();
      switch(uVar3) {
      case 0:
        if (*(int *)(in_stack_00000004 + 0x1fb9c) != 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",
                     *(int *)(in_stack_00000004 + 0x1fb9c));
        }
        break;
      case 1:
        if (*(int *)(in_stack_00000004 + 0x1fb9c) != 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"eDoorMoveNone returned by checkDoorOpen, but doorToOpen = %s",
                     *(int *)(in_stack_00000004 + 0x1fb9c));
          *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0;
          return;
        }
        *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0;
        return;
      case 2:
      case 3:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 0x158),0x1c,1);
        *(undefined4 *)(in_stack_00000004 + 0x1fc38) = 5;
        *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0;
        return;
      case 4:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr,0x1d,1);
        *(undefined4 *)(in_stack_00000004 + 0x1fc38) = 5;
        *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0;
        return;
      case 5:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr,0x1e,1);
        *(undefined4 *)(in_stack_00000004 + 0x1fc38) = 5;
        *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0;
        return;
      default:
        core_hero_cpp_FUN_004f2ed0();
        *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0;
        return;
      }
    }
    iVar1 = core_stranger_cpp_CStranger_FUN_005c2850();
    if (iVar1 != 0) {
      *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0;
      return;
    }
    iVar1 = core_stranger_cpp_CStranger_FUN_005c1680();
    if (iVar1 != 0) {
      *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0;
      return;
    }
    iVar1 = core_hero_cpp_FUN_004f2af0();
    if (iVar1 == 0) {
      iVar1 = core_hero_cpp_FUN_004f2c40();
      if (iVar1 != 0) {
        *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0;
        return;
      }
      iVar1 = core_hero_cpp_FUN_004f3120();
      if (iVar1 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)(in_stack_00000004 + 0x158),6,1);
        return;
      }
      if ((*(int *)(in_stack_00000004 + 0x24f8) == 0) &&
         (fVar2 = (float)core_charactr_cpp_CCharacter_FUN_0042e840(), (float)DOUBLE_00653e74 < fVar2
         )) {
        iVar1 = core_hero_cpp_FUN_004f2f50();
        if (iVar1 != 0) {
          *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    ((CMotionController *)(in_stack_00000004 + 0x158),0x1f,1);
          return;
        }
        iVar1 = core_stranger_cpp_CStranger_FUN_005c1fe0();
        if (iVar1 != 0) {
          *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0;
          return;
        }
        iVar1 = core_stranger_cpp_CStranger_FUN_005c2400();
        if (iVar1 != 0) {
          *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0;
          return;
        }
        iVar1 = core_hero_cpp_FUN_004f33b0();
        if (iVar1 != 0) {
          *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0;
          return;
        }
        iVar1 = core_stranger_cpp_CStranger_FUN_005c1680();
        if (iVar1 != 0) {
          *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0;
          return;
        }
      }
      *(undefined4 *)(in_stack_00000004 + 0xbe38) = 0;
      return;
    }
  }
  return;
}


// Assembly code:
// 005c5b90: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c5b90
// 005c5b91: PUSH ESI
// 005c5b92: PUSH EDI
// 005c5b93: SUB ESP,0x8
// 005c5b96: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005c5b9a: CMP dword ptr [EBX + 0xbe38],0x0
// 005c5ba1: JZ 0x005c5bac
//   XREF to: 005c5bac (CONDITIONAL_JUMP)
// 005c5ba3: CMP dword ptr [EBX + 0x1fc38],0x0
// 005c5baa: JZ 0x005c5bb3
//   XREF to: 005c5bb3 (CONDITIONAL_JUMP)
// 005c5bac: ADD ESP,0x8
//   Label: LAB_005c5bac
// 005c5baf: POP EDI
// 005c5bb0: POP ESI
// 005c5bb1: POP EBX
// 005c5bb2: RET
// 005c5bb3: PUSH EBX
//   Label: LAB_005c5bb3
// 005c5bb4: CALL core_stranger.cpp_CStranger_FUN_005c5e80
//   XREF to: 005c5e80 (UNCONDITIONAL_CALL)
// 005c5bb9: ADD ESP,0x4
// 005c5bbc: TEST EAX,EAX
// 005c5bbe: JNZ 0x005c5bac
//   XREF to: 005c5bac (CONDITIONAL_JUMP)
// 005c5bc0: CMP dword ptr [EBX + 0x1fbd4],0x0
// 005c5bc7: JNZ 0x005c5bac
//   XREF to: 005c5bac (CONDITIONAL_JUMP)
// 005c5bc9: PUSH EAX
// 005c5bca: LEA ESI,[EBX + 0x158]
// 005c5bd0: PUSH ESI
// 005c5bd1: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005c5bd6: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005c5bda: ADD ESP,0x8
// 005c5bdd: PUSH 0x1
// 005c5bdf: PUSH ESI
// 005c5be0: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005c5be5: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005c5be9: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 005c5bed: ADD ESP,0x8
// 005c5bf0: FADD float ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005c5bf3: FCOMP double ptr [0x00653e6c]
//   XREF to: 00653e6c (READ)
// 005c5bf9: FNSTSW AX
// 005c5bfb: SAHF
// 005c5bfc: JBE 0x005c5c36
//   XREF to: 005c5c36 (CONDITIONAL_JUMP)
// 005c5bfe: PUSH EBX
// 005c5bff: CALL core_hero.cpp_FUN_004f2d70
//   XREF to: 004f2d70 (UNCONDITIONAL_CALL)
// 005c5c04: ADD ESP,0x4
// 005c5c07: CMP EAX,0x5
// 005c5c0a: JA 0x005c5d16
//   XREF to: 005c5d16 (CONDITIONAL_JUMP)
// 005c5c10: JMP dword ptr [EAX*0x4 + 0x5c5b6c]
//   Label: switchD
//   XREF to: 005c5c17 (COMPUTED_JUMP)
//   XREF to: 005c5c58 (COMPUTED_JUMP)
//   XREF to: 005c5c98 (COMPUTED_JUMP)
//   XREF to: 005c5cc6 (COMPUTED_JUMP)
//   XREF to: 005c5cee (COMPUTED_JUMP)
//   XREF to: 005c5b6c (DATA)
// 005c5c17: MOV EDX,dword ptr [EBX + 0x1fb9c]
//   Label: caseD_0
// 005c5c1d: TEST EDX,EDX
// 005c5c1f: JZ 0x005c5c36
//   XREF to: 005c5c36 (CONDITIONAL_JUMP)
// 005c5c21: PUSH EDX
// 005c5c22: PUSH 0x653e19
//   XREF to: 00653e19 (DATA)
// 005c5c27: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005c5c2d: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 005c5c2e: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 005c5c33: ADD ESP,0xc
// 005c5c36: PUSH EBX
//   Label: LAB_005c5c36
// 005c5c37: CALL core_stranger.cpp_CStranger_FUN_005c2850
//   XREF to: 005c2850 (UNCONDITIONAL_CALL)
// 005c5c3c: ADD ESP,0x4
// 005c5c3f: TEST EAX,EAX
// 005c5c41: JZ 0x005c5d30
//   XREF to: 005c5d30 (CONDITIONAL_JUMP)
// 005c5c47: MOV dword ptr [EBX + 0xbe38],0x0
// 005c5c51: ADD ESP,0x8
// 005c5c54: POP EDI
// 005c5c55: POP ESI
// 005c5c56: POP EBX
// 005c5c57: RET
// 005c5c58: MOV EDI,dword ptr [EBX + 0x1fb9c]
//   Label: caseD_1
// 005c5c5e: TEST EDI,EDI
// 005c5c60: JNZ 0x005c5c73
//   XREF to: 005c5c73 (CONDITIONAL_JUMP)
// 005c5c62: MOV dword ptr [EBX + 0xbe38],0x0
// 005c5c6c: ADD ESP,0x8
// 005c5c6f: POP EDI
// 005c5c70: POP ESI
// 005c5c71: POP EBX
// 005c5c72: RET
// 005c5c73: PUSH EDI
//   Label: LAB_005c5c73
// 005c5c74: PUSH 0x653ddc
//   XREF to: 00653ddc (DATA)
// 005c5c79: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (DATA)
//   XREF to: 00678a60 (READ)
// 005c5c7e: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005c5c7f: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 005c5c84: ADD ESP,0xc
// 005c5c87: MOV dword ptr [EBX + 0xbe38],0x0
// 005c5c91: ADD ESP,0x8
// 005c5c94: POP EDI
// 005c5c95: POP ESI
// 005c5c96: POP EBX
// 005c5c97: RET
// 005c5c98: PUSH 0x1
//   Label: caseD_3
// 005c5c9a: PUSH 0x1c
// 005c5c9c: LEA EAX,[EBX + 0x158]
// 005c5ca2: PUSH EAX
// 005c5ca3: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c5ca8: MOV dword ptr [EBX + 0x1fc38],0x5
// 005c5cb2: ADD ESP,0xc
// 005c5cb5: MOV dword ptr [EBX + 0xbe38],0x0
// 005c5cbf: ADD ESP,0x8
// 005c5cc2: POP EDI
// 005c5cc3: POP ESI
// 005c5cc4: POP EBX
// 005c5cc5: RET
// 005c5cc6: PUSH 0x1
//   Label: caseD_4
// 005c5cc8: PUSH 0x1d
// 005c5cca: PUSH ESI
// 005c5ccb: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c5cd0: MOV dword ptr [EBX + 0x1fc38],0x5
// 005c5cda: ADD ESP,0xc
// 005c5cdd: MOV dword ptr [EBX + 0xbe38],0x0
// 005c5ce7: ADD ESP,0x8
// 005c5cea: POP EDI
// 005c5ceb: POP ESI
// 005c5cec: POP EBX
// 005c5ced: RET
// 005c5cee: PUSH 0x1
//   Label: caseD_5
// 005c5cf0: PUSH 0x1e
// 005c5cf2: PUSH ESI
// 005c5cf3: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c5cf8: MOV dword ptr [EBX + 0x1fc38],0x5
// 005c5d02: ADD ESP,0xc
// 005c5d05: MOV dword ptr [EBX + 0xbe38],0x0
// 005c5d0f: ADD ESP,0x8
// 005c5d12: POP EDI
// 005c5d13: POP ESI
// 005c5d14: POP EBX
// 005c5d15: RET
// 005c5d16: PUSH EBX
//   Label: default
// 005c5d17: CALL core_hero.cpp_FUN_004f2ed0
//   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)
// 005c5d1c: ADD ESP,0x4
// 005c5d1f: MOV dword ptr [EBX + 0xbe38],0x0
// 005c5d29: ADD ESP,0x8
// 005c5d2c: POP EDI
// 005c5d2d: POP ESI
// 005c5d2e: POP EBX
// 005c5d2f: RET
// 005c5d30: PUSH 0x653e56
//   Label: LAB_005c5d30
//   XREF to: 00653e56 (DATA)
// 005c5d35: PUSH EBX
// 005c5d36: CALL core_stranger.cpp_CStranger_FUN_005c1680
//   XREF to: 005c1680 (UNCONDITIONAL_CALL)
// 005c5d3b: ADD ESP,0x8
// 005c5d3e: TEST EAX,EAX
// 005c5d40: JZ 0x005c5d53
//   XREF to: 005c5d53 (CONDITIONAL_JUMP)
// 005c5d42: MOV dword ptr [EBX + 0xbe38],0x0
// 005c5d4c: ADD ESP,0x8
// 005c5d4f: POP EDI
// 005c5d50: POP ESI
// 005c5d51: POP EBX
// 005c5d52: RET
// 005c5d53: PUSH EBX
//   Label: LAB_005c5d53
// 005c5d54: CALL core_hero.cpp_FUN_004f2af0
//   XREF to: 004f2af0 (UNCONDITIONAL_CALL)
// 005c5d59: ADD ESP,0x4
// 005c5d5c: TEST EAX,EAX
// 005c5d5e: JNZ 0x005c5bac
//   XREF to: 005c5bac (CONDITIONAL_JUMP)
// 005c5d64: PUSH EBX
// 005c5d65: CALL core_hero.cpp_FUN_004f2c40
//   XREF to: 004f2c40 (UNCONDITIONAL_CALL)
// 005c5d6a: ADD ESP,0x4
// 005c5d6d: TEST EAX,EAX
// 005c5d6f: JZ 0x005c5d82
//   XREF to: 005c5d82 (CONDITIONAL_JUMP)
// 005c5d71: MOV dword ptr [EBX + 0xbe38],0x0
// 005c5d7b: ADD ESP,0x8
// 005c5d7e: POP EDI
// 005c5d7f: POP ESI
// 005c5d80: POP EBX
// 005c5d81: RET
// 005c5d82: PUSH EBX
//   Label: LAB_005c5d82
// 005c5d83: CALL core_hero.cpp_FUN_004f3120
//   XREF to: 004f3120 (UNCONDITIONAL_CALL)
// 005c5d88: ADD ESP,0x4
// 005c5d8b: LEA ESI,[EBX + 0x158]
// 005c5d91: TEST EAX,EAX
// 005c5d93: JNZ 0x005c5db0
//   XREF to: 005c5db0 (CONDITIONAL_JUMP)
// 005c5d95: MOV EDI,dword ptr [EBX + 0x24f8]
// 005c5d9b: TEST EDI,EDI
// 005c5d9d: JZ 0x005c5dc4
//   XREF to: 005c5dc4 (CONDITIONAL_JUMP)
// 005c5d9f: MOV dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_005c5d9f
// 005c5da9: ADD ESP,0x8
// 005c5dac: POP EDI
// 005c5dad: POP ESI
// 005c5dae: POP EBX
// 005c5daf: RET
// 005c5db0: PUSH 0x1
//   Label: LAB_005c5db0
// 005c5db2: PUSH 0x6
// 005c5db4: PUSH ESI
// 005c5db5: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c5dba: ADD ESP,0xc
// 005c5dbd: ADD ESP,0x8
// 005c5dc0: POP EDI
// 005c5dc1: POP ESI
// 005c5dc2: POP EBX
// 005c5dc3: RET
// 005c5dc4: PUSH EAX
//   Label: LAB_005c5dc4
// 005c5dc5: PUSH EBX
// 005c5dc6: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005c5dcb: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005c5dcf: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 005c5dd3: ADD ESP,0x8
// 005c5dd6: FCOMP double ptr [0x00653e74]
//   XREF to: 00653e74 (READ)
// 005c5ddc: FNSTSW AX
// 005c5dde: SAHF
// 005c5ddf: JBE 0x005c5d9f
//   XREF to: 005c5d9f (CONDITIONAL_JUMP)
// 005c5de1: PUSH EBX
// 005c5de2: CALL core_hero.cpp_FUN_004f2f50
//   XREF to: 004f2f50 (UNCONDITIONAL_CALL)
// 005c5de7: ADD ESP,0x4
// 005c5dea: TEST EAX,EAX
// 005c5dec: JNZ 0x005c5e08
//   XREF to: 005c5e08 (CONDITIONAL_JUMP)
// 005c5dee: PUSH EBX
// 005c5def: CALL core_stranger.cpp_CStranger_FUN_005c1fe0
//   XREF to: 005c1fe0 (UNCONDITIONAL_CALL)
// 005c5df4: ADD ESP,0x4
// 005c5df7: TEST EAX,EAX
// 005c5df9: JZ 0x005c5e22
//   XREF to: 005c5e22 (CONDITIONAL_JUMP)
// 005c5dfb: MOV dword ptr [EBX + 0xbe38],EDI
// 005c5e01: ADD ESP,0x8
// 005c5e04: POP EDI
// 005c5e05: POP ESI
// 005c5e06: POP EBX
// 005c5e07: RET
// 005c5e08: PUSH 0x1
//   Label: LAB_005c5e08
// 005c5e0a: PUSH 0x1f
// 005c5e0c: PUSH ESI
// 005c5e0d: MOV dword ptr [EBX + 0xbe38],EDI
// 005c5e13: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c5e18: ADD ESP,0xc
// 005c5e1b: ADD ESP,0x8
// 005c5e1e: POP EDI
// 005c5e1f: POP ESI
// 005c5e20: POP EBX
// 005c5e21: RET
// 005c5e22: PUSH EBX
//   Label: LAB_005c5e22
// 005c5e23: CALL core_stranger.cpp_CStranger_FUN_005c2400
//   XREF to: 005c2400 (UNCONDITIONAL_CALL)
// 005c5e28: ADD ESP,0x4
// 005c5e2b: TEST EAX,EAX
// 005c5e2d: JZ 0x005c5e3c
//   XREF to: 005c5e3c (CONDITIONAL_JUMP)
// 005c5e2f: MOV dword ptr [EBX + 0xbe38],EDI
// 005c5e35: ADD ESP,0x8
// 005c5e38: POP EDI
// 005c5e39: POP ESI
// 005c5e3a: POP EBX
// 005c5e3b: RET
// 005c5e3c: PUSH EBX
//   Label: LAB_005c5e3c
// 005c5e3d: CALL core_hero.cpp_FUN_004f33b0
//   XREF to: 004f33b0 (UNCONDITIONAL_CALL)
// 005c5e42: ADD ESP,0x4
// 005c5e45: TEST EAX,EAX
// 005c5e47: JZ 0x005c5e56
//   XREF to: 005c5e56 (CONDITIONAL_JUMP)
// 005c5e49: MOV dword ptr [EBX + 0xbe38],EDI
// 005c5e4f: ADD ESP,0x8
// 005c5e52: POP EDI
// 005c5e53: POP ESI
// 005c5e54: POP EBX
// 005c5e55: RET
// 005c5e56: PUSH 0x653e61
//   Label: LAB_005c5e56
//   XREF to: 00653e61 (DATA)
// 005c5e5b: PUSH EBX
// 005c5e5c: CALL core_stranger.cpp_CStranger_FUN_005c1680
//   XREF to: 005c1680 (UNCONDITIONAL_CALL)
// 005c5e61: ADD ESP,0x8
// 005c5e64: TEST EAX,EAX
// 005c5e66: JZ 0x005c5d9f
//   XREF to: 005c5d9f (CONDITIONAL_JUMP)
// 005c5e6c: MOV dword ptr [EBX + 0xbe38],EDI
// 005c5e72: ADD ESP,0x8
// 005c5e75: POP EDI
// 005c5e76: POP ESI
// 005c5e77: POP EBX
// 005c5e78: RET
