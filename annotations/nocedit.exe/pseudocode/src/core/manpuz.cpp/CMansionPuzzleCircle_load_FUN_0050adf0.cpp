// Name: core_manpuz.cpp_CMansionPuzzleCircle_load_FUN_0050adf0
// Address: 0050adf0
// Address Range: [[0050adf0, 0050aed2]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_CMansionPuzzleCircle_load_FUN_0050adf0()
// Globals:
//   TerminatedCString s_pGemPos_0063588e
//   TerminatedCString s_pGemOrient_00635896
//   TerminatedCString s_pEmitterPos_006358a1
//   TerminatedCString s_exists_006358ad
//   TerminatedCString s_r_006358b4
//   TerminatedCString s_g_006358b6
//   TerminatedCString s_b_006358b8
//   int g_CMansionPuzzleCircleClassVersion = 0x3
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeOrientation_FUN_0040b3e0
//   core_actor.cpp_serializeVector_FUN_0040b340

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_CMansionPuzzleCircle_load(CMansionPuzzleCircle*
   pMansionPuzzleCircle) */

void core_manpuz_cpp_CMansionPuzzleCircle_load_FUN_0050adf0(void)

{
  int iVar1;
  float *int_ptr;
  int *int_ptr_00;
  CVector3f *int_ptr_01;
  char *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0((CDemonActor *)in_stack_00000004);
  if (1 < g_CMansionPuzzleCircleClassVersion) {
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)&((CDemonActor *)((int)in_stack_00000004 + 0x560))->field7_0x6c,
               "pGemPos");
    core_actor_cpp_serializeOrientation_FUN_0040b3e0
              ((COrientation *)((CDemonActor *)((int)in_stack_00000004 + 0x560))->create_event,
               "pGemOrient");
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)(((CDemonActor *)((int)in_stack_00000004 + 0x560))->create_event + 0xc),
               "pEmitterPos");
  }
  if (2 < g_CMansionPuzzleCircleClassVersion) {
    int_ptr = &(((CDemonActor *)((int)in_stack_00000004 + 0x560))->field12_0xe0).y;
    iVar1 = 0;
    int_ptr_01 = &((CDemonActor *)((int)in_stack_00000004 + 0x560))->field12_0xe0;
    int_ptr_00 = &((CDemonActor *)((int)in_stack_00000004 + 0x560))->field11_0xdc;
    in_stack_00000004 = ((CDemonActor *)((int)in_stack_00000004 + 0x560))->create_event + 0x18;
    do {
      core_actor_cpp_serializeInteger_FUN_0040b7f0
                ((int *)(in_stack_00000004 + iVar1 * 100),"exists");
      core_actor_cpp_serializeInteger_FUN_0040b7f0(int_ptr_00,"r");
      core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)int_ptr_01,"g");
      in_stack_00000004 = "b";
      iVar1 = iVar1 + 1;
      int_ptr_00 = int_ptr_00 + 0x19;
      int_ptr_01 = (CVector3f *)((int)(int_ptr_01 + 8) + 4);
      core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)int_ptr,"b");
      int_ptr = int_ptr + 0x19;
    } while (iVar1 < 0xc);
  }
  return;
}


// Assembly code:
// 0050adf0: PUSH ESI
//   Label: core_manpuz.cpp_CMansionPuzzleCircle_load_FUN_0050adf0
// 0050adf1: PUSH EBP
// 0050adf2: SUB ESP,0x4
// 0050adf5: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0050adf9: PUSH ESI
// 0050adfa: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 0050adff: MOV EDX,dword ptr [0x0067d0d4]
//   XREF to: 0067d0d4 (READ)
// 0050ae05: ADD ESP,0x4
// 0050ae08: CMP EDX,0x2
// 0050ae0b: JGE 0x0050ae92
//   XREF to: 0050ae92 (CONDITIONAL_JUMP)
// 0050ae11: CMP dword ptr [0x0067d0d4],0x3
//   Label: LAB_0050ae11
//   XREF to: 0067d0d4 (READ)
// 0050ae18: JL 0x0050ae8c
//   XREF to: 0050ae8c (CONDITIONAL_JUMP)
// 0050ae1a: PUSH EDI
// 0050ae1b: PUSH EBX
// 0050ae1c: LEA EAX,[ESI + 0x5f0]
// 0050ae22: LEA EBP,[ESI + 0x644]
// 0050ae28: XOR EBX,EBX
// 0050ae2a: LEA EDI,[ESI + 0x640]
// 0050ae30: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0050ae34: ADD ESI,0x63c
// 0050ae3a: IMUL EAX,EBX,0x64
//   Label: LAB_0050ae3a
// 0050ae3d: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 0050ae41: PUSH 0x6358ad
//   XREF to: 006358ad (DATA)
// 0050ae46: ADD EAX,EDX
// 0050ae48: PUSH EAX
// 0050ae49: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0050ae4e: ADD ESP,0x8
// 0050ae51: PUSH 0x6358b4
//   XREF to: 006358b4 (DATA)
// 0050ae56: PUSH ESI
// 0050ae57: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0050ae5c: ADD ESP,0x8
// 0050ae5f: PUSH 0x6358b6
//   XREF to: 006358b6 (DATA)
// 0050ae64: PUSH EDI
// 0050ae65: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0050ae6a: ADD ESP,0x8
// 0050ae6d: PUSH 0x6358b8
//   XREF to: 006358b8 (DATA)
// 0050ae72: INC EBX
// 0050ae73: PUSH EBP
// 0050ae74: ADD ESI,0x64
// 0050ae77: ADD EDI,0x64
// 0050ae7a: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0050ae7f: ADD ESP,0x8
// 0050ae82: ADD EBP,0x64
// 0050ae85: CMP EBX,0xc
// 0050ae88: JL 0x0050ae3a
//   XREF to: 0050ae3a (CONDITIONAL_JUMP)
// 0050ae8a: POP EBX
// 0050ae8b: POP EDI
// 0050ae8c: ADD ESP,0x4
//   Label: LAB_0050ae8c
// 0050ae8f: POP EBP
// 0050ae90: POP ESI
// 0050ae91: RET
// 0050ae92: PUSH 0x63588e
//   Label: LAB_0050ae92
//   XREF to: 0063588e (DATA)
// 0050ae97: LEA EAX,[ESI + 0x5cc]
// 0050ae9d: PUSH EAX
// 0050ae9e: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 0050aea3: ADD ESP,0x8
// 0050aea6: PUSH 0x635896
//   XREF to: 00635896 (DATA)
// 0050aeab: LEA EAX,[ESI + 0x5d8]
// 0050aeb1: PUSH EAX
// 0050aeb2: CALL core_actor.cpp_serializeOrientation_FUN_0040b3e0
//   XREF to: 0040b3e0 (UNCONDITIONAL_CALL)
// 0050aeb7: ADD ESP,0x8
// 0050aeba: PUSH 0x6358a1
//   XREF to: 006358a1 (DATA)
// 0050aebf: LEA EAX,[ESI + 0x5e4]
// 0050aec5: PUSH EAX
// 0050aec6: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 0050aecb: ADD ESP,0x8
// 0050aece: JMP 0x0050ae11
//   XREF to: 0050ae11 (UNCONDITIONAL_JUMP)
