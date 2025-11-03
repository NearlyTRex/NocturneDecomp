// Name: core_zombie.cpp_CZombie_FUN_005fc120
// Address: 005fc120
// Address Range: [[005fc120, 005fc1fc]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005fc120()
// Globals:
//   undefined4 DAT_006589b5
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_motion.cpp_CMotionController_FUN_0052dd20
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_zombie.cpp_CZombie_FUN_005fc120(CZombie* param_1, undefined4
   param_2) */

undefined4 core_zombie_cpp_CZombie_FUN_005fc120(void)

{
  float fVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  float local_40;
  float fStack_3c;
  float fStack_38;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  CVector3f local_1c;
  float local_10;
  
  fVar1 = core_motion_cpp_CMotionController_FUN_0052dd20
                    ((CMotionController *)(in_stack_00000004 + 1));
  if (fVar1 <= 0.0) {
    return 0;
  }
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  local_10 = local_28 + local_40;
  local_1c.x = local_10 * _DAT_006589b5;
  local_1c.y = (local_24 + fStack_3c) * _DAT_006589b5;
  local_1c.z = (local_20 + fStack_38) * _DAT_006589b5;
  pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,&local_34,&local_1c);
  if (in_stack_00000008 != pCVar2) {
    in_stack_00000008->x = pCVar2->x;
    in_stack_00000008->y = pCVar2->y;
    in_stack_00000008->z = pCVar2->z;
  }
  return 1;
}


// Assembly code:
// 005fc120: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005fc120
// 005fc121: PUSH ESI
// 005fc122: PUSH EDI
// 005fc123: SUB ESP,0x40
// 005fc126: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 005fc12a: MOV EDI,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 005fc12e: PUSH 0x3
// 005fc130: LEA EBX,[ESI + 0x158]
// 005fc136: PUSH EBX
// 005fc137: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005fc13c: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005fc140: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x10] (READ)
// 005fc144: FLDZ
// 005fc146: ADD ESP,0x8
// 005fc149: FCOMPP
// 005fc14b: FNSTSW AX
// 005fc14d: SAHF
// 005fc14e: JC 0x005fc159
//   XREF to: 005fc159 (CONDITIONAL_JUMP)
// 005fc150: XOR EAX,EAX
// 005fc152: ADD ESP,0x40
// 005fc155: POP EDI
// 005fc156: POP ESI
// 005fc157: POP EBX
// 005fc158: RET
// 005fc159: MOV EDX,dword ptr [ESI + 0xbf50]
//   Label: LAB_005fc159
// 005fc15f: PUSH EDX
// 005fc160: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x34] (DATA)
// 005fc164: PUSH EAX
// 005fc165: PUSH EBX
// 005fc166: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005fc16b: ADD ESP,0xc
// 005fc16e: MOV ECX,dword ptr [ESI + 0xbf54]
// 005fc174: PUSH ECX
// 005fc175: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4c] (DATA)
// 005fc179: PUSH EAX
// 005fc17a: PUSH EBX
// 005fc17b: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005fc180: ADD ESP,0xc
// 005fc183: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (READ)
// 005fc187: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x34] (READ)
// 005fc18b: FADD float ptr [ESP]
//   XREF to: Stack[-0x4c] (DATA)
// 005fc18e: FXCH
// 005fc190: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x48] (READ)
// 005fc194: FXCH
// 005fc196: FST float ptr [ESP + 0x30]
//   XREF to: Stack[-0x1c] (WRITE)
// 005fc19a: FLD float ptr [0x006589b5]
//   XREF to: 006589b5 (READ)
// 005fc1a0: FXCH
// 005fc1a2: FMUL ST1
// 005fc1a4: FXCH ST2
// 005fc1a6: FST float ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (WRITE)
// 005fc1aa: FMUL ST1
// 005fc1ac: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x28] (DATA)
// 005fc1b0: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x2c] (READ)
// 005fc1b4: PUSH EAX
// 005fc1b5: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x44] (READ)
// 005fc1b9: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x40] (DATA)
// 005fc1bd: FST float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (WRITE)
// 005fc1c1: PUSH EAX
// 005fc1c2: FMULP ST2
// 005fc1c4: PUSH ESI
// 005fc1c5: FXCH ST2
// 005fc1c7: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (WRITE)
// 005fc1cb: FXCH
// 005fc1cd: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (WRITE)
// 005fc1d1: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (WRITE)
// 005fc1d5: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005fc1da: ADD ESP,0xc
// 005fc1dd: CMP EDI,EAX
// 005fc1df: JZ 0x005fc1f1
//   XREF to: 005fc1f1 (CONDITIONAL_JUMP)
// 005fc1e1: MOV EDX,dword ptr [EAX]
// 005fc1e3: MOV dword ptr [EDI],EDX
// 005fc1e5: MOV EDX,dword ptr [EAX + 0x4]
// 005fc1e8: MOV dword ptr [EDI + 0x4],EDX
// 005fc1eb: MOV EDX,dword ptr [EAX + 0x8]
// 005fc1ee: MOV dword ptr [EDI + 0x8],EDX
// 005fc1f1: MOV EAX,0x1
//   Label: LAB_005fc1f1
// 005fc1f6: ADD ESP,0x40
// 005fc1f9: POP EDI
// 005fc1fa: POP ESI
// 005fc1fb: POP EBX
// 005fc1fc: RET
