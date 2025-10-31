// Name: core_glass.cpp_FUN_004eb490
// Address: 004eb490
// Address Range: [[004eb490, 004eb5f9]]
// Convention: unknown
// Signature: undefined core_glass.cpp_FUN_004eb490()
// Globals:
//   double DOUBLE_0062e191 = 4
//   double DOUBLE_0062e199 = 0.100000000000000
//   double DOUBLE_0062e1a1 = 5
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040

#include "nocturne.h"

void core_glass_cpp_FUN_004eb490(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  float in_stack_00000038;
  float in_stack_0000004c;
  float in_stack_00000060;
  float in_stack_00000074;
  
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar1 != 0) {
    (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
    (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name - in_stack_00000038;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name + in_stack_0000004c;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) - in_stack_00000060;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) + in_stack_00000074;
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
    (*((in_stack_00000004->metadata).vtable)->setup)(in_stack_00000004);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  (*((in_stack_00000004->metadata).vtable)->setup)(in_stack_00000004);
  return;
}


// Assembly code:
// 004eb490: PUSH EBX
//   Label: core_glass.cpp_FUN_004eb490
// 004eb491: PUSH EBP
// 004eb492: MOV EBP,ESP
// 004eb494: SUB ESP,0x10
// 004eb497: AND ESP,0xfffffff8
// 004eb49a: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004eb49d: PUSH 0x1d
// 004eb49f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004eb4a4: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004eb4a5: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004eb4a7: CALL dword ptr [EDX]
// 004eb4a9: ADD ESP,0x8
// 004eb4ac: TEST EAX,EAX
// 004eb4ae: JZ 0x004eb5e0
//   XREF to: 004eb5e0 (CONDITIONAL_JUMP)
// 004eb4b4: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004eb4b9: PUSH 0x38
// 004eb4bb: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004eb4c1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004eb4c6: FMUL double ptr [0x0062e191]
//   XREF to: 0062e191 (READ)
// 004eb4cc: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004eb4cd: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004eb4cf: FSTP float ptr [ESP + 0x8]
// 004eb4d3: CALL dword ptr [EDX]
// 004eb4d5: ADD ESP,0x8
// 004eb4d8: TEST EAX,EAX
// 004eb4da: JZ 0x004eb4e8
//   XREF to: 004eb4e8 (CONDITIONAL_JUMP)
// 004eb4dc: FLD float ptr [ESP]
// 004eb4df: FMUL double ptr [0x0062e199]
//   XREF to: 0062e199 (READ)
// 004eb4e5: FSTP float ptr [ESP]
// 004eb4e8: PUSH 0x2a
//   Label: LAB_004eb4e8
// 004eb4ea: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004eb4ef: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004eb4f0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004eb4f2: CALL dword ptr [EDX]
// 004eb4f4: ADD ESP,0x8
// 004eb4f7: TEST EAX,EAX
// 004eb4f9: JZ 0x004eb50b
//   XREF to: 004eb50b (CONDITIONAL_JUMP)
// 004eb4fb: FLD float ptr [ESP]
// 004eb4fe: FLD ST0
// 004eb500: FMUL double ptr [0x0062e1a1]
//   XREF to: 0062e1a1 (READ)
// 004eb506: FSTP ST1
// 004eb508: FSTP float ptr [ESP]
// 004eb50b: PUSH 0x4b
//   Label: LAB_004eb50b
// 004eb50d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004eb512: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004eb513: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004eb515: CALL dword ptr [EDX]
// 004eb517: ADD ESP,0x8
// 004eb51a: TEST EAX,EAX
// 004eb51c: JZ 0x004eb52d
//   XREF to: 004eb52d (CONDITIONAL_JUMP)
// 004eb51e: FLD float ptr [EBX + 0x158]
// 004eb524: FSUB float ptr [ESP]
// 004eb527: FSTP float ptr [EBX + 0x158]
// 004eb52d: PUSH 0x4d
//   Label: LAB_004eb52d
// 004eb52f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004eb534: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004eb535: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004eb537: CALL dword ptr [EDX]
// 004eb539: ADD ESP,0x8
// 004eb53c: TEST EAX,EAX
// 004eb53e: JZ 0x004eb54f
//   XREF to: 004eb54f (CONDITIONAL_JUMP)
// 004eb540: FLD float ptr [EBX + 0x158]
// 004eb546: FADD float ptr [ESP]
// 004eb549: FSTP float ptr [EBX + 0x158]
// 004eb54f: PUSH 0x50
//   Label: LAB_004eb54f
// 004eb551: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004eb556: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004eb557: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004eb559: CALL dword ptr [EDX]
// 004eb55b: ADD ESP,0x8
// 004eb55e: TEST EAX,EAX
// 004eb560: JZ 0x004eb571
//   XREF to: 004eb571 (CONDITIONAL_JUMP)
// 004eb562: FLD float ptr [EBX + 0x15c]
// 004eb568: FSUB float ptr [ESP]
// 004eb56b: FSTP float ptr [EBX + 0x15c]
// 004eb571: PUSH 0x48
//   Label: LAB_004eb571
// 004eb573: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004eb578: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004eb579: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004eb57b: CALL dword ptr [EDX]
// 004eb57d: ADD ESP,0x8
// 004eb580: TEST EAX,EAX
// 004eb582: JZ 0x004eb593
//   XREF to: 004eb593 (CONDITIONAL_JUMP)
// 004eb584: FLD float ptr [EBX + 0x15c]
// 004eb58a: FADD float ptr [ESP]
// 004eb58d: FSTP float ptr [EBX + 0x15c]
// 004eb593: MOV EDX,0x3f000000
//   Label: LAB_004eb593
// 004eb598: MOV ECX,dword ptr [EBX + 0x158]
// 004eb59e: MOV dword ptr [ESP + 0xc],EDX
// 004eb5a2: CMP ECX,EDX
// 004eb5a4: JGE 0x004eb5ac
//   XREF to: 004eb5ac (CONDITIONAL_JUMP)
// 004eb5a6: MOV dword ptr [EBX + 0x158],EDX
// 004eb5ac: FLD float ptr [EBX + 0x15c]
//   Label: LAB_004eb5ac
// 004eb5b2: FCOMP float ptr [ESP + 0xc]
// 004eb5b6: FNSTSW AX
// 004eb5b8: SAHF
// 004eb5b9: JNC 0x004eb5c5
//   XREF to: 004eb5c5 (CONDITIONAL_JUMP)
// 004eb5bb: MOV EAX,dword ptr [ESP + 0xc]
// 004eb5bf: MOV dword ptr [EBX + 0x15c],EAX
// 004eb5c5: MOV dword ptr [EBX + 0x160],0x3dcccccd
//   Label: LAB_004eb5c5
// 004eb5cf: PUSH EBX
// 004eb5d0: MOV EAX,dword ptr [EBX + 0x154]
// 004eb5d6: CALL dword ptr [EAX]
// 004eb5d8: ADD ESP,0x4
// 004eb5db: MOV ESP,EBP
// 004eb5dd: POP EBP
// 004eb5de: POP EBX
// 004eb5df: RET
// 004eb5e0: PUSH EBX
//   Label: LAB_004eb5e0
// 004eb5e1: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 004eb5e6: ADD ESP,0x4
// 004eb5e9: PUSH EBX
// 004eb5ea: MOV EAX,dword ptr [EBX + 0x154]
// 004eb5f0: CALL dword ptr [EAX]
// 004eb5f2: ADD ESP,0x4
// 004eb5f5: MOV ESP,EBP
// 004eb5f7: POP EBP
// 004eb5f8: POP EBX
// 004eb5f9: RET
