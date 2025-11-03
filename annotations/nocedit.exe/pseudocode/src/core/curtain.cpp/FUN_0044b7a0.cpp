// Name: core_curtain.cpp_FUN_0044b7a0
// Address: 0044b7a0
// Address Range: [[0044b7a0, 0044b8c3]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_0044b7a0()
// Globals:
//   double DOUBLE_00619de2 = 4
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040

#include "nocturne.h"

/* Signature: undefined1 actors_other_curtain.cpp_FUN_0044b7a0(undefined4 param_1) */

void core_curtain_cpp_FUN_0044b7a0(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  float in_stack_00000020;
  float in_stack_00000034;
  float in_stack_00000048;
  float in_stack_0000005c;
  
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar1 != 0) {
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name - in_stack_00000020;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name + in_stack_00000034;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) - in_stack_00000048;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) + in_stack_0000005c;
    }
    if (*(int *)in_stack_00000004[1].actor_name < 0x3f000000) {
      in_stack_00000004[1].actor_name[0] = '\0';
      in_stack_00000004[1].actor_name[1] = '\0';
      in_stack_00000004[1].actor_name[2] = '\0';
      in_stack_00000004[1].actor_name[3] = '?';
    }
    if (*(float *)(in_stack_00000004[1].actor_name + 4) < 0.5) {
      in_stack_00000004[1].actor_name[4] = '\0';
      in_stack_00000004[1].actor_name[5] = '\0';
      in_stack_00000004[1].actor_name[6] = '\0';
      in_stack_00000004[1].actor_name[7] = '?';
    }
    in_stack_00000004[1].actor_name[8] = -0x33;
    in_stack_00000004[1].actor_name[9] = -0x34;
    in_stack_00000004[1].actor_name[10] = -0x34;
    in_stack_00000004[1].actor_name[0xb] = '=';
    (*in_stack_00000004->vtable->setup)(in_stack_00000004);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  (*in_stack_00000004->vtable->setup)(in_stack_00000004);
  return;
}


// Assembly code:
// 0044b7a0: PUSH EBX
//   Label: core_curtain.cpp_FUN_0044b7a0
// 0044b7a1: SUB ESP,0x8
// 0044b7a4: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0044b7a8: PUSH 0x1d
// 0044b7aa: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0044b7af: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0044b7b0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0044b7b2: CALL dword ptr [EDX]
// 0044b7b4: ADD ESP,0x8
// 0044b7b7: TEST EAX,EAX
// 0044b7b9: JZ 0x0044b8aa
//   XREF to: 0044b8aa (CONDITIONAL_JUMP)
// 0044b7bf: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0044b7c4: PUSH 0x4b
// 0044b7c6: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0044b7cc: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0044b7d1: FMUL double ptr [0x00619de2]
//   XREF to: 00619de2 (READ)
// 0044b7d7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0044b7d8: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0044b7da: FSTP float ptr [ESP + 0xc]
// 0044b7de: CALL dword ptr [EDX]
// 0044b7e0: ADD ESP,0x8
// 0044b7e3: TEST EAX,EAX
// 0044b7e5: JZ 0x0044b7f7
//   XREF to: 0044b7f7 (CONDITIONAL_JUMP)
// 0044b7e7: FLD float ptr [EBX + 0x158]
// 0044b7ed: FSUB float ptr [ESP + 0x4]
// 0044b7f1: FSTP float ptr [EBX + 0x158]
// 0044b7f7: PUSH 0x4d
//   Label: LAB_0044b7f7
// 0044b7f9: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0044b7fe: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0044b7ff: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0044b801: CALL dword ptr [EDX]
// 0044b803: ADD ESP,0x8
// 0044b806: TEST EAX,EAX
// 0044b808: JZ 0x0044b81a
//   XREF to: 0044b81a (CONDITIONAL_JUMP)
// 0044b80a: FLD float ptr [EBX + 0x158]
// 0044b810: FADD float ptr [ESP + 0x4]
// 0044b814: FSTP float ptr [EBX + 0x158]
// 0044b81a: PUSH 0x50
//   Label: LAB_0044b81a
// 0044b81c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0044b821: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0044b822: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0044b824: CALL dword ptr [EDX]
// 0044b826: ADD ESP,0x8
// 0044b829: TEST EAX,EAX
// 0044b82b: JZ 0x0044b83d
//   XREF to: 0044b83d (CONDITIONAL_JUMP)
// 0044b82d: FLD float ptr [EBX + 0x15c]
// 0044b833: FSUB float ptr [ESP + 0x4]
// 0044b837: FSTP float ptr [EBX + 0x15c]
// 0044b83d: PUSH 0x48
//   Label: LAB_0044b83d
// 0044b83f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0044b844: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0044b845: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0044b847: CALL dword ptr [EDX]
// 0044b849: ADD ESP,0x8
// 0044b84c: TEST EAX,EAX
// 0044b84e: JZ 0x0044b860
//   XREF to: 0044b860 (CONDITIONAL_JUMP)
// 0044b850: FLD float ptr [EBX + 0x15c]
// 0044b856: FADD float ptr [ESP + 0x4]
// 0044b85a: FSTP float ptr [EBX + 0x15c]
// 0044b860: MOV EDX,0x3f000000
//   Label: LAB_0044b860
// 0044b865: MOV ECX,dword ptr [EBX + 0x158]
// 0044b86b: MOV dword ptr [ESP],EDX
// 0044b86e: CMP ECX,EDX
// 0044b870: JGE 0x0044b878
//   XREF to: 0044b878 (CONDITIONAL_JUMP)
// 0044b872: MOV dword ptr [EBX + 0x158],EDX
// 0044b878: FLD float ptr [EBX + 0x15c]
//   Label: LAB_0044b878
// 0044b87e: FCOMP float ptr [ESP]
// 0044b881: FNSTSW AX
// 0044b883: SAHF
// 0044b884: JNC 0x0044b88f
//   XREF to: 0044b88f (CONDITIONAL_JUMP)
// 0044b886: MOV EAX,dword ptr [ESP]
// 0044b889: MOV dword ptr [EBX + 0x15c],EAX
// 0044b88f: MOV dword ptr [EBX + 0x160],0x3dcccccd
//   Label: LAB_0044b88f
// 0044b899: PUSH EBX
// 0044b89a: MOV EAX,dword ptr [EBX + 0x154]
// 0044b8a0: CALL dword ptr [EAX]
// 0044b8a2: ADD ESP,0x4
// 0044b8a5: ADD ESP,0x8
// 0044b8a8: POP EBX
// 0044b8a9: RET
// 0044b8aa: PUSH EBX
//   Label: LAB_0044b8aa
// 0044b8ab: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 0044b8b0: ADD ESP,0x4
// 0044b8b3: PUSH EBX
// 0044b8b4: MOV EAX,dword ptr [EBX + 0x154]
// 0044b8ba: CALL dword ptr [EAX]
// 0044b8bc: ADD ESP,0x4
// 0044b8bf: ADD ESP,0x8
// 0044b8c2: POP EBX
// 0044b8c3: RET
