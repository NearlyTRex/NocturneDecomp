// Name: core_gabriela.cpp_FUN_004d6d40
// Address: 004d6d40
// Address Range: [[004d6d40, 004d6f74]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d6d40()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d34e9 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065e7cc
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_02d7b84c
//   undefined4 DAT_02d7b850
//   undefined4 DAT_02d7b888
//   undefined4 DAT_02d7b88c
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_gabriela.cpp_FUN_004d6f80
//   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d6d40(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_gabriela_cpp_FUN_004d6d40(void)

{
  float fVar1;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_0000000c;
  
  fVar1 = *(float *)(in_stack_00000004[0x17a].actor_name + 4);
  in_stack_00000008 = in_stack_00000008 / _DAT_0065e7cc;
  *(float *)in_stack_00000004[0x17a].actor_name =
       *(float *)in_stack_00000004[0x17a].actor_name - in_stack_00000008;
  *(float *)(in_stack_00000004[0x17a].actor_name + 4) = fVar1 - in_stack_00000008;
  if (*(float *)in_stack_00000004[0x17a].actor_name < 0.0) {
    in_stack_00000004[0x17a].actor_name[0] = '\0';
    in_stack_00000004[0x17a].actor_name[1] = '\0';
    in_stack_00000004[0x17a].actor_name[2] = '\0';
    in_stack_00000004[0x17a].actor_name[3] = '\0';
  }
  if (*(float *)(in_stack_00000004[0x17a].actor_name + 4) < 0.0) {
    in_stack_00000004[0x17a].actor_name[4] = '\0';
    in_stack_00000004[0x17a].actor_name[5] = '\0';
    in_stack_00000004[0x17a].actor_name[6] = '\0';
    in_stack_00000004[0x17a].actor_name[7] = '\0';
  }
  if (in_stack_0000000c == 0) {
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),0,0.0,
               *(float *)in_stack_00000004[0x17a].actor_name,DAT_02d7b84c,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),0,0.0,
               *(float *)(in_stack_00000004[0x17a].actor_name + 4),DAT_02d7b850,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    return;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  if ((CDemonActor *)in_stack_00000004[0x1b].field7_0x6c != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
              (g_CDemonSetPtr,(CDemonActor *)in_stack_00000004[0x1b].field7_0x6c);
  }
  if (*(CDemonActor **)(in_stack_00000004[0x1b].create_event + 0x38) != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
              (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004[0x1b].create_event + 0x38));
  }
  core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
  if (in_stack_00000004[0x1b].field7_0x6c != 0) {
    (**(code **)(*(int *)(in_stack_00000004[0x1b].field7_0x6c + 0x154) + 0x14))();
  }
  core_gabriela_cpp_FUN_004d6f80();
  if (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) != 0) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004[0x1b].create_event + 0x38) + 0x154) + 0x14))();
  }
  core_gabriela_cpp_FUN_004d6f80();
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  return;
}


// Assembly code:
// 004d6d40: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d6d40
// 004d6d41: PUSH ESI
// 004d6d42: PUSH EDI
// 004d6d43: PUSH EBP
// 004d6d44: SUB ESP,0x58
// 004d6d47: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 004d6d4b: FLD float ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 004d6d4f: FLD float ptr [EBX + 0x1fbf0]
// 004d6d55: FLD float ptr [EBX + 0x1fbf4]
// 004d6d5b: FXCH ST2
// 004d6d5d: FDIV float ptr [0x0065e7cc]
//   XREF to: 0065e7cc (READ)
// 004d6d63: FXCH
// 004d6d65: FSUB ST0,ST1
// 004d6d67: FXCH ST2
// 004d6d69: FSUBRP
// 004d6d6b: FXCH
// 004d6d6d: FSTP float ptr [EBX + 0x1fbf0]
// 004d6d73: FSTP float ptr [EBX + 0x1fbf4]
// 004d6d79: FLD float ptr [EBX + 0x1fbf0]
// 004d6d7f: FLDZ
// 004d6d81: FCOMPP
// 004d6d83: FNSTSW AX
// 004d6d85: SAHF
// 004d6d86: JA 0x004d6f04
//   XREF to: 004d6f04 (CONDITIONAL_JUMP)
// 004d6d8c: FLD float ptr [EBX + 0x1fbf4]
//   Label: LAB_004d6d8c
// 004d6d92: FLDZ
// 004d6d94: FCOMPP
// 004d6d96: FNSTSW AX
// 004d6d98: SAHF
// 004d6d99: JBE 0x004d6da5
//   XREF to: 004d6da5 (CONDITIONAL_JUMP)
// 004d6d9b: MOV dword ptr [EBX + 0x1fbf4],0x0
// 004d6da5: MOV EDX,dword ptr [ESP + 0x74]
//   Label: LAB_004d6da5
//   XREF to: Stack[0xc] (READ)
// 004d6da9: TEST EDX,EDX
// 004d6dab: JZ 0x004d6f2a
//   XREF to: 004d6f2a (CONDITIONAL_JUMP)
// 004d6db1: PUSH EBX
// 004d6db2: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004d6db8: PUSH EBP
//   XREF to: 03114278 (DATA)
// 004d6db9: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004d6dbe: MOV EAX,dword ptr [EBX + 0x24b4]
// 004d6dc4: ADD ESP,0x8
// 004d6dc7: TEST EAX,EAX
// 004d6dc9: JZ 0x004d6ddb
//   XREF to: 004d6ddb (CONDITIONAL_JUMP)
// 004d6dcb: PUSH EAX
// 004d6dcc: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004d6dd2: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004d6dd3: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004d6dd8: ADD ESP,0x8
// 004d6ddb: MOV ESI,dword ptr [EBX + 0x24f8]
//   Label: LAB_004d6ddb
// 004d6de1: TEST ESI,ESI
// 004d6de3: JZ 0x004d6df5
//   XREF to: 004d6df5 (CONDITIONAL_JUMP)
// 004d6de5: PUSH ESI
// 004d6de6: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004d6dec: PUSH EBP
//   XREF to: 03114278 (DATA)
// 004d6ded: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004d6df2: ADD ESP,0x8
// 004d6df5: MOV EAX,[0x006810c8]
//   Label: LAB_004d6df5
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004d6dfa: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004d6dfb: CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210
//   XREF to: 00574210 (UNCONDITIONAL_CALL)
// 004d6e00: ADD ESP,0x4
// 004d6e03: XOR EDX,EDX
// 004d6e05: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 004d6e09: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 004d6e0d: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 004d6e11: MOV EDI,dword ptr [EBX + 0x24b4]
// 004d6e17: TEST EDI,EDI
// 004d6e19: JZ 0x004d6f13
//   XREF to: 004d6f13 (CONDITIONAL_JUMP)
// 004d6e1f: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0x50] (DATA)
// 004d6e23: PUSH ESI
// 004d6e24: MOV EDX,dword ptr [EDI + 0x154]
// 004d6e2a: PUSH EDI
// 004d6e2b: CALL dword ptr [EDX + 0x14]
// 004d6e2e: LEA EDX,[EAX + 0xc]
// 004d6e31: FLD float ptr [EDX]
// 004d6e33: FSUB float ptr [EAX]
// 004d6e35: ADD ESP,0x8
// 004d6e38: FSTP float ptr [ESP + 0x30]
// 004d6e3c: FLD float ptr [EDX + 0x4]
// 004d6e3f: FSUB float ptr [EAX + 0x4]
// 004d6e42: FSTP float ptr [ESP + 0x34]
// 004d6e46: FLD float ptr [EDX + 0x8]
// 004d6e49: FSUB float ptr [EAX + 0x8]
// 004d6e4c: FST float ptr [ESP + 0x38]
// 004d6e50: FCHS
// 004d6e52: FSTP float ptr [ESP + 0x3c]
// 004d6e56: LEA EAX,[ESP + 0x3c]
//   Label: LAB_004d6e56
//   XREF to: Stack[-0x2c] (DATA)
// 004d6e5a: PUSH EAX
// 004d6e5b: MOV EAX,[0x02d7b84c]
//   XREF to: 02d7b84c (READ)
// 004d6e60: PUSH EAX
// 004d6e61: MOV EDX,dword ptr [0x02d7b888]
//   XREF to: 02d7b888 (READ)
// 004d6e67: PUSH EDX
// 004d6e68: LEA EAX,[EBX + 0x1fbf0]
// 004d6e6e: PUSH EAX
// 004d6e6f: PUSH dword ptr [ESP + 0x80]
//   XREF to: Stack[0x8] (READ)
// 004d6e76: PUSH EBX
// 004d6e77: CALL core_gabriela.cpp_FUN_004d6f80
//   XREF to: 004d6f80 (UNCONDITIONAL_CALL)
// 004d6e7c: MOV ECX,dword ptr [EBX + 0x24f8]
// 004d6e82: ADD ESP,0x18
// 004d6e85: TEST ECX,ECX
// 004d6e87: JZ 0x004d6f20
//   XREF to: 004d6f20 (CONDITIONAL_JUMP)
// 004d6e8d: MOV ESI,ESP
// 004d6e8f: PUSH ESI
// 004d6e90: MOV EDX,dword ptr [ECX + 0x154]
// 004d6e96: PUSH ECX
// 004d6e97: CALL dword ptr [EDX + 0x14]
// 004d6e9a: LEA EDX,[EAX + 0xc]
// 004d6e9d: FLD float ptr [EDX]
// 004d6e9f: FSUB float ptr [EAX]
// 004d6ea1: ADD ESP,0x8
// 004d6ea4: FSTP float ptr [ESP + 0x48]
// 004d6ea8: FLD float ptr [EDX + 0x4]
// 004d6eab: FSUB float ptr [EAX + 0x4]
// 004d6eae: FSTP float ptr [ESP + 0x4c]
// 004d6eb2: FLD float ptr [EDX + 0x8]
// 004d6eb5: FSUB float ptr [EAX + 0x8]
// 004d6eb8: FSTP float ptr [ESP + 0x50]
// 004d6ebc: MOV EAX,dword ptr [ESP + 0x50]
// 004d6ec0: MOV dword ptr [ESP + 0x3c],EAX
// 004d6ec4: LEA EAX,[ESP + 0x3c]
//   Label: LAB_004d6ec4
// 004d6ec8: PUSH EAX
// 004d6ec9: MOV EDI,dword ptr [0x02d7b850]
//   XREF to: 02d7b850 (READ)
// 004d6ecf: PUSH EDI
// 004d6ed0: MOV EBP,dword ptr [0x02d7b88c]
//   XREF to: 02d7b88c (READ)
// 004d6ed6: PUSH EBP
// 004d6ed7: LEA EAX,[EBX + 0x1fbf4]
// 004d6edd: PUSH EAX
// 004d6ede: PUSH dword ptr [ESP + 0x80]
// 004d6ee5: PUSH EBX
// 004d6ee6: CALL core_gabriela.cpp_FUN_004d6f80
//   XREF to: 004d6f80 (UNCONDITIONAL_CALL)
// 004d6eeb: ADD ESP,0x18
// 004d6eee: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004d6ef3: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004d6ef4: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 004d6ef9: ADD ESP,0x4
// 004d6efc: ADD ESP,0x58
// 004d6eff: POP EBP
// 004d6f00: POP EDI
// 004d6f01: POP ESI
// 004d6f02: POP EBX
// 004d6f03: RET
// 004d6f04: MOV dword ptr [EBX + 0x1fbf0],0x0
//   Label: LAB_004d6f04
// 004d6f0e: JMP 0x004d6d8c
//   XREF to: 004d6d8c (UNCONDITIONAL_JUMP)
// 004d6f13: MOV dword ptr [ESP + 0x3c],0xbf000000
//   Label: LAB_004d6f13
//   XREF to: Stack[-0x2c] (WRITE)
// 004d6f1b: JMP 0x004d6e56
//   XREF to: 004d6e56 (UNCONDITIONAL_JUMP)
// 004d6f20: MOV dword ptr [ESP + 0x3c],0x3f000000
//   Label: LAB_004d6f20
// 004d6f28: JMP 0x004d6ec4
//   XREF to: 004d6ec4 (UNCONDITIONAL_JUMP)
// 004d6f2a: PUSH 0x59ddb0
//   Label: LAB_004d6f2a
//   XREF to: 0059ddb0 (DATA)
// 004d6f2f: MOV ECX,dword ptr [0x02d7b84c]
//   XREF to: 02d7b84c (READ)
// 004d6f35: PUSH ECX
// 004d6f36: PUSH dword ptr [EBX + 0x1fbf0]
// 004d6f3c: PUSH 0x0
// 004d6f3e: PUSH EDX
// 004d6f3f: LEA ESI,[EBX + 0x158]
// 004d6f45: PUSH ESI
// 004d6f46: CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 004d6f4b: ADD ESP,0x18
// 004d6f4e: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 004d6f53: MOV EDI,dword ptr [0x02d7b850]
//   XREF to: 02d7b850 (READ)
// 004d6f59: PUSH EDI
// 004d6f5a: PUSH dword ptr [EBX + 0x1fbf4]
// 004d6f60: PUSH 0x0
// 004d6f62: PUSH 0x0
// 004d6f64: PUSH ESI
// 004d6f65: CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 004d6f6a: ADD ESP,0x18
// 004d6f6d: ADD ESP,0x58
// 004d6f70: POP EBP
// 004d6f71: POP EDI
// 004d6f72: POP ESI
// 004d6f73: POP EBX
// 004d6f74: RET
