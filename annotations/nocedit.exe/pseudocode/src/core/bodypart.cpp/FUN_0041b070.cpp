// Name: core_bodypart.cpp_FUN_0041b070
// Address: 0041b070
// Address Range: [[0041b070, 0041b1a9]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041b070()
// Cross-references:
//   core_bodypart.cpp_FUN_00419fd0 (00419fd0) at 00419fe3 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041a050 (0041a050) at 0041a53f [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041b260 (0041b260) at 0041b272 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00615e9c
//   CVector3f g_ZeroVector
//   undefined4 g_ZeroVector.y
//   undefined4 g_ZeroVector.z
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
//   core_box.cpp_CBox_setupCorners_FUN_0041dd20

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_bodypart.cpp_FUN_0041b070(undefined4 param_1) */

void core_bodypart_cpp_FUN_0041b070(void)

{
  CVector3f *pCVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  float fStack_4c;
  float in_stack_ffffffc8;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if ((2 < *(int *)(in_stack_00000004[1].actor_name + 0x1c)) &&
     (0 < (int)in_stack_00000004[1].location.position.z)) {
    (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
              (in_stack_00000004,(CBoundingBox3D *)&fStack_4c);
    fVar2 = (in_stack_ffffffc8 + fStack_2c) * _DAT_00615e9c;
    core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000004);
    in_stack_00000008 = fStack_28 - fStack_34;
    in_stack_0000000c = fStack_24 - fStack_30;
    in_stack_00000010 = fVar2 - fStack_2c;
    fStack_4c = 6.03303e-39;
    core_box_cpp_CBox_setupCorners_FUN_0041dd20
              ((CBox *)(in_stack_00000004[9].create_event + 0x3c),(CVector3f *)&stack0xfffffffc,
               (CVector3f *)&in_stack_00000004->orient,(CVector3f *)&stack0x00000008,5.0);
    return;
  }
  in_stack_00000004->was_created = 2;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0();
  pCVar1 = (CVector3f *)(in_stack_00000004[1].actor_name + 0x10);
  if (pCVar1 != &g_ZeroVector) {
    pCVar1->x = g_ZeroVector.x;
    *(float *)(in_stack_00000004[1].actor_name + 0x14) = g_ZeroVector.y;
    *(float *)(in_stack_00000004[1].actor_name + 0x18) = g_ZeroVector.z;
  }
  if ((CVector3f *)(in_stack_00000004[1].actor_name + 4) == pCVar1) {
    return;
  }
  ((CVector3f *)(in_stack_00000004[1].actor_name + 4))->x = pCVar1->x;
  *(undefined4 *)(in_stack_00000004[1].actor_name + 8) =
       *(undefined4 *)(in_stack_00000004[1].actor_name + 0x14);
  *(undefined4 *)(in_stack_00000004[1].actor_name + 0xc) =
       *(undefined4 *)(in_stack_00000004[1].actor_name + 0x18);
  return;
}


// Assembly code:
// 0041b070: PUSH EBX
//   Label: core_bodypart.cpp_FUN_0041b070
// 0041b071: SUB ESP,0x48
// 0041b074: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 0041b078: CMP dword ptr [EBX + 0x174],0x3
// 0041b07f: JL 0x0041b08a
//   XREF to: 0041b08a (CONDITIONAL_JUMP)
// 0041b081: CMP dword ptr [EBX + 0x180],0x1
// 0041b088: JGE 0x0041b0eb
//   XREF to: 0041b0eb (CONDITIONAL_JUMP)
// 0041b08a: PUSH 0x0
//   Label: LAB_0041b08a
// 0041b08c: PUSH 0x0
// 0041b08e: PUSH EBX
// 0041b08f: MOV dword ptr [EBX + 0x70],0x2
// 0041b096: CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
//   XREF to: 004191d0 (UNCONDITIONAL_CALL)
// 0041b09b: LEA EAX,[EBX + 0x168]
// 0041b0a1: ADD ESP,0xc
// 0041b0a4: MOV EDX,EAX
// 0041b0a6: CMP EAX,0x3f87558
//   XREF to: 03f87558 (DATA)
// 0041b0ab: JZ 0x0041b0c7
//   XREF to: 0041b0c7 (CONDITIONAL_JUMP)
// 0041b0ad: MOV ECX,dword ptr [0x03f87558]
//   XREF to: 03f87558 (READ)
// 0041b0b3: MOV dword ptr [EAX],ECX
// 0041b0b5: MOV ECX,dword ptr [0x03f8755c]
//   XREF to: 03f8755c (READ)
// 0041b0bb: MOV dword ptr [EAX + 0x4],ECX
// 0041b0be: MOV ECX,dword ptr [0x03f87560]
//   XREF to: 03f87560 (READ)
// 0041b0c4: MOV dword ptr [EAX + 0x8],ECX
// 0041b0c7: ADD EBX,0x15c
//   Label: LAB_0041b0c7
// 0041b0cd: CMP EBX,EDX
// 0041b0cf: JNZ 0x0041b0d6
//   XREF to: 0041b0d6 (CONDITIONAL_JUMP)
// 0041b0d1: ADD ESP,0x48
// 0041b0d4: POP EBX
// 0041b0d5: RET
// 0041b0d6: MOV EAX,dword ptr [EDX]
//   Label: LAB_0041b0d6
// 0041b0d8: MOV dword ptr [EBX],EAX
// 0041b0da: MOV EAX,dword ptr [EDX + 0x4]
// 0041b0dd: MOV dword ptr [EBX + 0x4],EAX
// 0041b0e0: MOV EAX,dword ptr [EDX + 0x8]
// 0041b0e3: MOV dword ptr [EBX + 0x8],EAX
// 0041b0e6: ADD ESP,0x48
// 0041b0e9: POP EBX
// 0041b0ea: RET
// 0041b0eb: MOV EAX,ESP
//   Label: LAB_0041b0eb
// 0041b0ed: PUSH EAX
// 0041b0ee: MOV EDX,dword ptr [EBX + 0x154]
// 0041b0f4: PUSH EBX
// 0041b0f5: CALL dword ptr [EDX + 0x14]
// 0041b0f8: ADD ESP,0x8
// 0041b0fb: FLD float ptr [ESP + 0x4]
// 0041b0ff: FLD float ptr [ESP]
// 0041b102: FADD float ptr [ESP + 0xc]
// 0041b106: FXCH
// 0041b108: FADD float ptr [ESP + 0x10]
// 0041b10c: FXCH
// 0041b10e: FST float ptr [ESP + 0x24]
// 0041b112: FLD float ptr [0x00615e9c]
//   XREF to: 00615e9c (READ)
// 0041b118: FXCH
// 0041b11a: FMUL ST1
// 0041b11c: FXCH ST2
// 0041b11e: FST float ptr [ESP + 0x28]
// 0041b122: FMUL ST1
// 0041b124: LEA EAX,[ESP + 0x18]
// 0041b128: FLD float ptr [ESP + 0x8]
// 0041b12c: PUSH EAX
// 0041b12d: FADD float ptr [ESP + 0x18]
// 0041b131: LEA EAX,[ESP + 0x34]
// 0041b135: FST float ptr [ESP + 0x30]
// 0041b139: PUSH EAX
// 0041b13a: FMULP ST2
// 0041b13c: PUSH EBX
// 0041b13d: FXCH ST2
// 0041b13f: FSTP float ptr [ESP + 0x24]
// 0041b143: FXCH
// 0041b145: FSTP float ptr [ESP + 0x28]
// 0041b149: FSTP float ptr [ESP + 0x2c]
// 0041b14d: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0041b152: ADD ESP,0xc
// 0041b155: LEA EAX,[ESP + 0x3c]
// 0041b159: FLD float ptr [ESP + 0xc]
// 0041b15d: FLD float ptr [ESP + 0x10]
// 0041b161: PUSH 0x40a00000
// 0041b166: FLD float ptr [ESP + 0x18]
// 0041b16a: PUSH EAX
// 0041b16b: FXCH ST2
// 0041b16d: FSUB float ptr [ESP + 0x8]
// 0041b171: FXCH
// 0041b173: FSUB float ptr [ESP + 0xc]
// 0041b177: FXCH ST2
// 0041b179: FSUB float ptr [ESP + 0x10]
// 0041b17d: LEA EAX,[EBX + 0x30]
// 0041b180: FXCH
// 0041b182: FSTP float ptr [ESP + 0x44]
// 0041b186: PUSH EAX
// 0041b187: LEA EAX,[ESP + 0x3c]
// 0041b18b: ADD EBX,0xccc
// 0041b191: PUSH EAX
// 0041b192: FXCH
// 0041b194: FSTP float ptr [ESP + 0x50]
// 0041b198: PUSH EBX
// 0041b199: FSTP float ptr [ESP + 0x58]
// 0041b19d: CALL core_box.cpp_CBox_setupCorners_FUN_0041dd20
//   XREF to: 0041dd20 (UNCONDITIONAL_CALL)
// 0041b1a2: ADD ESP,0x14
// 0041b1a5: ADD ESP,0x48
// 0041b1a8: POP EBX
// 0041b1a9: RET
