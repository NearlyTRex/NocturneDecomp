// Name: core_flies.cpp_FUN_004ccaf0
// Address: 004ccaf0
// Address Range: [[004ccaf0, 004ccc6a]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004ccaf0()
// Globals:
//   double DOUBLE_0062a47e = 4
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040

#include "nocturne.h"

/* Signature: undefined1 actors_other_flies.cpp_FUN_004ccaf0(undefined4 param_1) */

void core_flies_cpp_FUN_004ccaf0(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  float in_stack_00000010;
  float fStack_54;
  float fStack_40;
  float fStack_2c;
  
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  }
  else {
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name - fStack_54;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name + fStack_40;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) - fStack_2c;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) + 7.052326e-39;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 8) =
           *(float *)(in_stack_00000004[1].actor_name + 8) - 7.052388e-39;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 8) =
           *(float *)(in_stack_00000004[1].actor_name + 8) + in_stack_00000010;
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
    if (*(float *)(in_stack_00000004[1].actor_name + 8) < 0.5) {
      in_stack_00000004[1].actor_name[8] = '\0';
      in_stack_00000004[1].actor_name[9] = '\0';
      in_stack_00000004[1].actor_name[10] = '\0';
      in_stack_00000004[1].actor_name[0xb] = '?';
    }
  }
  (*((in_stack_00000004->metadata).vtable)->process)(in_stack_00000004);
  return;
}


// Assembly code:
// 004ccaf0: PUSH EBX
//   Label: core_flies.cpp_FUN_004ccaf0
// 004ccaf1: SUB ESP,0x8
// 004ccaf4: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004ccaf8: PUSH 0x1d
// 004ccafa: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004ccaff: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004ccb00: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004ccb02: CALL dword ptr [EDX]
// 004ccb04: ADD ESP,0x8
// 004ccb07: TEST EAX,EAX
// 004ccb09: JZ 0x004ccc60
//   XREF to: 004ccc60 (CONDITIONAL_JUMP)
// 004ccb0f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004ccb14: PUSH 0x4b
// 004ccb16: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004ccb1c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004ccb21: FMUL double ptr [0x0062a47e]
//   XREF to: 0062a47e (READ)
// 004ccb27: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004ccb28: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004ccb2a: FSTP float ptr [ESP + 0xc]
// 004ccb2e: CALL dword ptr [EDX]
// 004ccb30: ADD ESP,0x8
// 004ccb33: TEST EAX,EAX
// 004ccb35: JZ 0x004ccb47
//   XREF to: 004ccb47 (CONDITIONAL_JUMP)
// 004ccb37: FLD float ptr [EBX + 0x158]
// 004ccb3d: FSUB float ptr [ESP + 0x4]
// 004ccb41: FSTP float ptr [EBX + 0x158]
// 004ccb47: PUSH 0x4d
//   Label: LAB_004ccb47
// 004ccb49: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004ccb4e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004ccb4f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004ccb51: CALL dword ptr [EDX]
// 004ccb53: ADD ESP,0x8
// 004ccb56: TEST EAX,EAX
// 004ccb58: JZ 0x004ccb6a
//   XREF to: 004ccb6a (CONDITIONAL_JUMP)
// 004ccb5a: FLD float ptr [EBX + 0x158]
// 004ccb60: FADD float ptr [ESP + 0x4]
// 004ccb64: FSTP float ptr [EBX + 0x158]
// 004ccb6a: PUSH 0x1e
//   Label: LAB_004ccb6a
// 004ccb6c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004ccb71: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004ccb72: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004ccb74: CALL dword ptr [EDX]
// 004ccb76: ADD ESP,0x8
// 004ccb79: TEST EAX,EAX
// 004ccb7b: JZ 0x004ccb8d
//   XREF to: 004ccb8d (CONDITIONAL_JUMP)
// 004ccb7d: FLD float ptr [EBX + 0x15c]
// 004ccb83: FSUB float ptr [ESP + 0x4]
// 004ccb87: FSTP float ptr [EBX + 0x15c]
// 004ccb8d: PUSH 0x10
//   Label: LAB_004ccb8d
// 004ccb8f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004ccb94: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004ccb95: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004ccb97: CALL dword ptr [EDX]
// 004ccb99: ADD ESP,0x8
// 004ccb9c: TEST EAX,EAX
// 004ccb9e: JZ 0x004ccbb0
//   XREF to: 004ccbb0 (CONDITIONAL_JUMP)
// 004ccba0: FLD float ptr [EBX + 0x15c]
// 004ccba6: FADD float ptr [ESP + 0x4]
// 004ccbaa: FSTP float ptr [EBX + 0x15c]
// 004ccbb0: PUSH 0x50
//   Label: LAB_004ccbb0
// 004ccbb2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004ccbb7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004ccbb8: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004ccbba: CALL dword ptr [EDX]
// 004ccbbc: ADD ESP,0x8
// 004ccbbf: TEST EAX,EAX
// 004ccbc1: JZ 0x004ccbd3
//   XREF to: 004ccbd3 (CONDITIONAL_JUMP)
// 004ccbc3: FLD float ptr [EBX + 0x160]
// 004ccbc9: FSUB float ptr [ESP + 0x4]
// 004ccbcd: FSTP float ptr [EBX + 0x160]
// 004ccbd3: PUSH 0x48
//   Label: LAB_004ccbd3
// 004ccbd5: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004ccbda: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004ccbdb: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004ccbdd: CALL dword ptr [EDX]
// 004ccbdf: ADD ESP,0x8
// 004ccbe2: TEST EAX,EAX
// 004ccbe4: JZ 0x004ccbf6
//   XREF to: 004ccbf6 (CONDITIONAL_JUMP)
// 004ccbe6: FLD float ptr [EBX + 0x160]
// 004ccbec: FADD float ptr [ESP + 0x4]
// 004ccbf0: FSTP float ptr [EBX + 0x160]
// 004ccbf6: MOV EDX,0x3f000000
//   Label: LAB_004ccbf6
// 004ccbfb: MOV ECX,dword ptr [EBX + 0x158]
// 004ccc01: MOV dword ptr [ESP],EDX
// 004ccc04: CMP ECX,EDX
// 004ccc06: JGE 0x004ccc0e
//   XREF to: 004ccc0e (CONDITIONAL_JUMP)
// 004ccc08: MOV dword ptr [EBX + 0x158],EDX
// 004ccc0e: FLD float ptr [EBX + 0x15c]
//   Label: LAB_004ccc0e
// 004ccc14: FCOMP float ptr [ESP]
// 004ccc17: FNSTSW AX
// 004ccc19: SAHF
// 004ccc1a: JNC 0x004ccc25
//   XREF to: 004ccc25 (CONDITIONAL_JUMP)
// 004ccc1c: MOV EAX,dword ptr [ESP]
// 004ccc1f: MOV dword ptr [EBX + 0x15c],EAX
// 004ccc25: FLD float ptr [EBX + 0x160]
//   Label: LAB_004ccc25
// 004ccc2b: FCOMP float ptr [ESP]
// 004ccc2e: FNSTSW AX
// 004ccc30: SAHF
// 004ccc31: JNC 0x004ccc3c
//   XREF to: 004ccc3c (CONDITIONAL_JUMP)
// 004ccc33: MOV EAX,dword ptr [ESP]
// 004ccc36: MOV dword ptr [EBX + 0x160],EAX
// 004ccc3c: MOV EDX,dword ptr [0x0067b654]
//   Label: LAB_004ccc3c
//   XREF to: 0067b654 (READ)
// 004ccc42: SUB ESP,0x4
// 004ccc45: MOV EAX,dword ptr [EBX + 0x154]
// 004ccc4b: MOV ECX,dword ptr [EDX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004ccc51: MOV dword ptr [ESP],ECX
// 004ccc54: PUSH EBX
// 004ccc55: CALL dword ptr [EAX + 0x4]
// 004ccc58: ADD ESP,0x8
// 004ccc5b: ADD ESP,0x8
// 004ccc5e: POP EBX
// 004ccc5f: RET
// 004ccc60: PUSH EBX
//   Label: LAB_004ccc60
// 004ccc61: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 004ccc66: ADD ESP,0x4
// 004ccc69: JMP 0x004ccc3c
//   XREF to: 004ccc3c (UNCONDITIONAL_JUMP)
