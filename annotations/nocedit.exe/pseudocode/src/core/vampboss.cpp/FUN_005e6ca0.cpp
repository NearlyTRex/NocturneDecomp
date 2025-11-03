// Name: core_vampboss.cpp_FUN_005e6ca0
// Address: 005e6ca0
// Address Range: [[005e6ca0, 005e6d9b]]
// Convention: unknown
// Signature: undefined core_vampboss.cpp_FUN_005e6ca0()
// Cross-references:
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e59c2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wing_wav_f_00656bcb
//   TerminatedCString s_wing_wav_1_5_1_2_00656bd9
//   double DOUBLE_00656bf3 = 2.5
// Function calls:
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_vampboss.cpp_FUN_005e6ca0(undefined4 param_1, undefined4
   param_2) */

void core_vampboss_cpp_FUN_005e6ca0(void)

{
  uint uVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_78;
  char local_74 [104];
  
  if (0.0 < in_stack_00000008) {
LAB_005e6cc2:
    do {
      uVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                        ((CMotionController *)(in_stack_00000004 + 0xbebc));
      if (uVar1 < 0x66) {
        if (uVar1 == 0x65) {
          local_78 = 0.0;
          if (*(int *)(in_stack_00000004 + 0xcdcc0) == 1) {
            local_78 = *(float *)(in_stack_00000004 + 0xce8f0);
          }
          if (*(int *)(in_stack_00000004 + 0xcdcc0) == 2) {
            local_78 = 1.0;
          }
          if (*(int *)(in_stack_00000004 + 0xcdcc0) == 3) {
            local_78 = *(float *)(in_stack_00000004 + 0xce8f0);
          }
          if (0.0 < (double)local_78) {
            crt_stdio_c_sprintf_FUN_005fdbd0
                      (local_74,"wing?.wav @%f",(double)local_78 * DOUBLE_00656bf3);
            goto LAB_005e6d59;
          }
        }
      }
      else {
        if ((0x66 < uVar1) && (uVar1 != 0x67)) {
          if (in_stack_00000008 <= 0.0) {
            return;
          }
          goto LAB_005e6cc2;
        }
LAB_005e6d59:
        (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
      }
    } while (0.0 < in_stack_00000008);
  }
  return;
}


// Assembly code:
// 005e6ca0: PUSH EBX
//   Label: core_vampboss.cpp_FUN_005e6ca0
// 005e6ca1: PUSH ESI
// 005e6ca2: PUSH EBP
// 005e6ca3: MOV EBP,ESP
// 005e6ca5: SUB ESP,0x70
// 005e6ca8: AND ESP,0xfffffff8
// 005e6cab: FLDZ
// 005e6cad: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005e6cb0: FCOMP float ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005e6cb3: FNSTSW AX
// 005e6cb5: SAHF
// 005e6cb6: JNC 0x005e6d74
//   XREF to: 005e6d74 (CONDITIONAL_JUMP)
// 005e6cbc: LEA ESI,[EBX + 0xbebc]
// 005e6cc2: LEA EAX,[EBP + 0x14]
//   Label: LAB_005e6cc2
//   XREF to: Stack[0x8] (DATA)
// 005e6cc5: PUSH EAX
// 005e6cc6: PUSH ESI
// 005e6cc7: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 005e6ccc: ADD ESP,0x8
// 005e6ccf: CMP EAX,0x66
// 005e6cd2: JNC 0x005e6d81
//   XREF to: 005e6d81 (CONDITIONAL_JUMP)
// 005e6cd8: CMP EAX,0x65
// 005e6cdb: JNZ 0x005e6d66
//   XREF to: 005e6d66 (CONDITIONAL_JUMP)
// 005e6ce1: XOR EDX,EDX
// 005e6ce3: MOV ECX,dword ptr [EBX + 0xcdcc0]
// 005e6ce9: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 005e6ced: CMP ECX,0x1
// 005e6cf0: JNZ 0x005e6cfc
//   XREF to: 005e6cfc (CONDITIONAL_JUMP)
// 005e6cf2: MOV EAX,dword ptr [EBX + 0xce8f0]
// 005e6cf8: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005e6cfc: CMP dword ptr [EBX + 0xcdcc0],0x2
//   Label: LAB_005e6cfc
// 005e6d03: JNZ 0x005e6d0d
//   XREF to: 005e6d0d (CONDITIONAL_JUMP)
// 005e6d05: MOV dword ptr [ESP + 0x8],0x3f800000
//   XREF to: Stack[-0x78] (WRITE)
// 005e6d0d: CMP dword ptr [EBX + 0xcdcc0],0x3
//   Label: LAB_005e6d0d
// 005e6d14: JNZ 0x005e6d20
//   XREF to: 005e6d20 (CONDITIONAL_JUMP)
// 005e6d16: MOV EAX,dword ptr [EBX + 0xce8f0]
// 005e6d1c: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005e6d20: FLD float ptr [ESP + 0x8]
//   Label: LAB_005e6d20
//   XREF to: Stack[-0x78] (READ)
// 005e6d24: FLDZ
// 005e6d26: FXCH
// 005e6d28: FSTP double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 005e6d2b: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 005e6d2e: FNSTSW AX
// 005e6d30: SAHF
// 005e6d31: JNC 0x005e6d66
//   XREF to: 005e6d66 (CONDITIONAL_JUMP)
// 005e6d33: FLD double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 005e6d36: FMUL double ptr [0x00656bf3]
//   XREF to: 00656bf3 (READ)
// 005e6d3c: SUB ESP,0x8
// 005e6d3f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 005e6d42: PUSH 0x656bcb
//   XREF to: 00656bcb (DATA)
// 005e6d47: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x74] (DATA)
// 005e6d4b: PUSH EAX
// 005e6d4c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005e6d51: ADD ESP,0x10
// 005e6d54: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x74] (DATA)
// 005e6d58: PUSH EDX
// 005e6d59: MOV EAX,dword ptr [EBX + 0x154]
//   Label: LAB_005e6d59
// 005e6d5f: PUSH EBX
// 005e6d60: CALL dword ptr [EAX + 0x24]
// 005e6d63: ADD ESP,0x8
// 005e6d66: FLDZ
//   Label: LAB_005e6d66
// 005e6d68: FCOMP float ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005e6d6b: FNSTSW AX
// 005e6d6d: SAHF
// 005e6d6e: JC 0x005e6cc2
//   XREF to: 005e6cc2 (CONDITIONAL_JUMP)
// 005e6d74: MOV ESP,EBP
//   Label: LAB_005e6d74
// 005e6d76: POP EBP
// 005e6d77: POP ESI
// 005e6d78: POP EBX
// 005e6d79: RET
// 005e6d7a: PUSH 0x656bd9
//   Label: LAB_005e6d7a
//   XREF to: 00656bd9 (DATA)
// 005e6d7f: JMP 0x005e6d59
//   XREF to: 005e6d59 (UNCONDITIONAL_JUMP)
// 005e6d81: JBE 0x005e6d7a
//   Label: LAB_005e6d81
//   XREF to: 005e6d7a (CONDITIONAL_JUMP)
// 005e6d83: CMP EAX,0x67
// 005e6d86: JZ 0x005e6d7a
//   XREF to: 005e6d7a (CONDITIONAL_JUMP)
// 005e6d88: FLDZ
// 005e6d8a: FCOMP float ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005e6d8d: FNSTSW AX
// 005e6d8f: SAHF
// 005e6d90: JC 0x005e6cc2
//   XREF to: 005e6cc2 (CONDITIONAL_JUMP)
// 005e6d96: MOV ESP,EBP
// 005e6d98: POP EBP
// 005e6d99: POP ESI
// 005e6d9a: POP EBX
// 005e6d9b: RET
