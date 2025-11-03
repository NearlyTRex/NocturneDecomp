// Name: core_scat.cpp_FUN_005582c0
// Address: 005582c0
// Address Range: [[005582c0, 00558494]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_005582c0()
// Cross-references:
//   core_scat.cpp_FUN_005571f0 (005571f0) at 00557532 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00641444 = 0.000100000000000000
//   undefined4 DAT_0310619c
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052dd20
//   core_motion.cpp_CMotionController_FUN_0052e3a0
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   core_scat.cpp_FUN_005584a0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059eb50
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_005582c0(undefined4 param_1) */

void core_scat_cpp_FUN_005582c0(void)

{
  CMotionController *this_ptr;
  float fVar1;
  float fVar2;
  CMotionList *this_ptr_00;
  int in_stack_00000004;
  float local_14;
  
  this_ptr = (CMotionController *)(in_stack_00000004 + 0x158);
  local_14 = core_motion_cpp_CMotionController_FUN_0052dd20(this_ptr);
  core_motion_cpp_CMotionController_FUN_0052dd20(this_ptr);
  core_motion_cpp_CMotionController_FUN_0052dd20(this_ptr);
  fVar1 = core_motion_cpp_CMotionController_FUN_0052dd20(this_ptr);
  fVar2 = core_motion_cpp_CMotionController_FUN_0052dd20(this_ptr);
  local_14 = (1.0 - (fVar2 + fVar1)) * local_14;
  if (local_14 < 0.0) {
    local_14 = 0.0;
  }
  if ((float)DOUBLE_00641444 < local_14) {
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820
              ((CDeformableModelInstance *)(in_stack_00000004 + 0x158));
    core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_00);
    core_motion_cpp_CMotionController_FUN_0052e3a0();
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059eb50
              ((CDeformableModelInstance *)(in_stack_00000004 + 0x158));
    if (*(int *)(in_stack_00000004 + 0x2a8c) == 1) {
      core_scat_cpp_FUN_005584a0();
      return;
    }
  }
  return;
}


// Assembly code:
// 005582c0: PUSH EBX
//   Label: core_scat.cpp_FUN_005582c0
// 005582c1: PUSH ESI
// 005582c2: PUSH EDI
// 005582c3: PUSH EBP
// 005582c4: MOV EBP,ESP
// 005582c6: SUB ESP,0x20
// 005582c9: AND ESP,0xfffffff8
// 005582cc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005582cf: MOV EAX,dword ptr [EBX + 0x2a8c]
// 005582d5: SHL EAX,0x3
// 005582d8: MOV ESI,EAX
// 005582da: SHL EAX,0x3
// 005582dd: SUB EAX,ESI
// 005582df: MOV EDX,0x3f800000
// 005582e4: MOV ECX,dword ptr [EBX + EAX*0x1 + 0x262c]
// 005582eb: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005582ef: TEST ECX,ECX
// 005582f1: JZ 0x00558475
//   XREF to: 00558475 (CONDITIONAL_JUMP)
// 005582f7: MOV EAX,dword ptr [EBX + 0x2a8c]
//   Label: LAB_005582f7
// 005582fd: SHL EAX,0x3
// 00558300: MOV ESI,EAX
// 00558302: SHL EAX,0x3
// 00558305: SUB EAX,ESI
// 00558307: CMP dword ptr [EBX + EAX*0x1 + 0x2630],0x0
// 0055830f: JNZ 0x00558323
//   XREF to: 00558323 (CONDITIONAL_JUMP)
// 00558311: FLD float ptr [EBX + 0x2a90]
// 00558317: FLD1
// 00558319: FSUBRP
// 0055831b: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0055831f: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 00558323: PUSH 0x4
//   Label: LAB_00558323
// 00558325: LEA ESI,[EBX + 0x158]
// 0055832b: PUSH ESI
// 0055832c: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 00558331: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00558335: ADD ESP,0x8
// 00558338: PUSH 0x5
// 0055833a: PUSH ESI
// 0055833b: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 00558340: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00558344: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 00558348: ADD ESP,0x8
// 0055834b: PUSH 0xc
// 0055834d: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 00558351: PUSH ESI
// 00558352: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (WRITE)
// 00558356: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 0055835b: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0055835f: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 00558363: ADD ESP,0x8
// 00558366: PUSH 0xd
// 00558368: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0055836c: PUSH ESI
// 0055836d: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (WRITE)
// 00558371: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 00558376: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0055837a: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 0055837e: ADD ESP,0x8
// 00558381: PUSH 0xe
// 00558383: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 00558387: PUSH ESI
// 00558388: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (WRITE)
// 0055838c: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 00558391: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00558395: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 00558399: ADD ESP,0x8
// 0055839c: FADD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005583a0: FLD1
// 005583a2: FSUBRP
// 005583a4: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005583a8: FXCH
// 005583aa: FMUL ST1
// 005583ac: FLDZ
// 005583ae: FXCH
// 005583b0: FSTP ST2
// 005583b2: FXCH
// 005583b4: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 005583b8: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005583bc: FNSTSW AX
// 005583be: SAHF
// 005583bf: JBE 0x005583c7
//   XREF to: 005583c7 (CONDITIONAL_JUMP)
// 005583c1: XOR EDI,EDI
// 005583c3: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 005583c7: FLD float ptr [ESP + 0x8]
//   Label: LAB_005583c7
//   XREF to: Stack[-0x28] (READ)
// 005583cb: FST double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005583ce: FCOMP double ptr [0x00641444]
//   XREF to: 00641444 (READ)
// 005583d4: FNSTSW AX
// 005583d6: SAHF
// 005583d7: JBE 0x0055846e
//   XREF to: 0055846e (CONDITIONAL_JUMP)
// 005583dd: FLD1
// 005583df: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005583e2: FNSTSW AX
// 005583e4: SAHF
// 005583e5: JNC 0x005583ef
//   XREF to: 005583ef (CONDITIONAL_JUMP)
// 005583e7: MOV dword ptr [ESP + 0x8],0x3f800000
//   XREF to: Stack[-0x28] (WRITE)
// 005583ef: MOV EAX,dword ptr [EBX + 0x2a8c]
//   Label: LAB_005583ef
// 005583f5: SHL EAX,0x3
// 005583f8: MOV ESI,EAX
// 005583fa: SHL EAX,0x3
// 005583fd: SUB EAX,ESI
// 005583ff: MOV ESI,EAX
// 00558401: LEA EAX,[EBX + 0x262c]
// 00558407: ADD EAX,ESI
// 00558409: PUSH 0x1
// 0055840b: ADD EAX,0x8
// 0055840e: PUSH EAX
// 0055840f: LEA ESI,[EBX + 0x158]
// 00558415: PUSH ESI
// 00558416: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0055841b: ADD ESP,0x4
// 0055841e: PUSH EAX
// 0055841f: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 00558424: ADD ESP,0xc
// 00558427: PUSH dword ptr [EBX + 0x2a90]
// 0055842d: PUSH EAX
// 0055842e: PUSH ESI
// 0055842f: MOV EDI,EAX
// 00558431: CALL core_motion.cpp_CMotionController_FUN_0052e3a0
//   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)
// 00558436: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0055843a: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0055843e: ADD ESP,0xc
// 00558441: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 00558446: MOV EDX,dword ptr [0x0310619c]
//   XREF to: 0310619c (READ)
// 0055844c: PUSH EDX
// 0055844d: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 00558451: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (WRITE)
// 00558455: PUSH dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 00558459: PUSH EDI
// 0055845a: PUSH ESI
// 0055845b: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 00558460: MOV ECX,dword ptr [EBX + 0x2a8c]
// 00558466: ADD ESP,0x18
// 00558469: CMP ECX,0x1
// 0055846c: JZ 0x00558484
//   XREF to: 00558484 (CONDITIONAL_JUMP)
// 0055846e: MOV ESP,EBP
//   Label: LAB_0055846e
// 00558470: POP EBP
// 00558471: POP EDI
// 00558472: POP ESI
// 00558473: POP EBX
// 00558474: RET
// 00558475: MOV EAX,dword ptr [EBX + 0x2a90]
//   Label: LAB_00558475
// 0055847b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0055847f: JMP 0x005582f7
//   XREF to: 005582f7 (UNCONDITIONAL_JUMP)
// 00558484: PUSH ECX
//   Label: LAB_00558484
// 00558485: PUSH EBX
// 00558486: CALL core_scat.cpp_FUN_005584a0
//   XREF to: 005584a0 (UNCONDITIONAL_CALL)
// 0055848b: ADD ESP,0x8
// 0055848e: MOV ESP,EBP
// 00558490: POP EBP
// 00558491: POP EDI
// 00558492: POP ESI
// 00558493: POP EBX
// 00558494: RET
