// Name: core_manpuz.cpp_FUN_0050b1d0
// Address: 0050b1d0
// Address Range: [[0050b1d0, 0050b254]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b1d0()
// Globals:
//   double DOUBLE_00635925 = 6.28318530700000
//   double DOUBLE_0063592d = 30
//   double DOUBLE_00635935 = 0.200000000000000
//   CKeys* g_CKeysPtr = 02dcd7d4
//   void* g_CKeysPtr
// Function calls:
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050b1d0(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_0050b1d0(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  float in_stack_00000018;
  float in_stack_0000002c;
  
  (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x33);
  if (iVar1 != 0) {
    (in_stack_00000004->orient).bank = (in_stack_00000004->orient).bank - in_stack_00000018;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x34);
  if (iVar1 != 0) {
    (in_stack_00000004->orient).bank = (in_stack_00000004->orient).bank + in_stack_0000002c;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  return;
}


// Assembly code:
// 0050b1d0: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050b1d0
// 0050b1d1: PUSH EBP
// 0050b1d2: MOV EBP,ESP
// 0050b1d4: SUB ESP,0x4
// 0050b1d7: AND ESP,0xfffffff8
// 0050b1da: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050b1dd: FLD float ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0050b1e0: FMUL double ptr [0x00635925]
//   XREF to: 00635925 (READ)
// 0050b1e6: FDIV double ptr [0x0063592d]
//   XREF to: 0063592d (READ)
// 0050b1ec: PUSH 0x38
// 0050b1ee: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0050b1f3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0050b1f4: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0050b1f6: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 0050b1fa: CALL dword ptr [EDX]
// 0050b1fc: ADD ESP,0x8
// 0050b1ff: TEST EAX,EAX
// 0050b201: JZ 0x0050b20f
//   XREF to: 0050b20f (CONDITIONAL_JUMP)
// 0050b203: FLD float ptr [ESP]
// 0050b206: FMUL double ptr [0x00635935]
//   XREF to: 00635935 (READ)
// 0050b20c: FSTP float ptr [ESP]
// 0050b20f: PUSH 0x33
//   Label: LAB_0050b20f
// 0050b211: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0050b216: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0050b217: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0050b219: CALL dword ptr [EDX]
// 0050b21b: ADD ESP,0x8
// 0050b21e: TEST EAX,EAX
// 0050b220: JZ 0x0050b22b
//   XREF to: 0050b22b (CONDITIONAL_JUMP)
// 0050b222: FLD float ptr [EBX + 0x34]
// 0050b225: FSUB float ptr [ESP]
// 0050b228: FSTP float ptr [EBX + 0x34]
// 0050b22b: PUSH 0x34
//   Label: LAB_0050b22b
// 0050b22d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0050b232: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0050b233: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0050b235: CALL dword ptr [EDX]
// 0050b237: ADD ESP,0x8
// 0050b23a: TEST EAX,EAX
// 0050b23c: JZ 0x0050b247
//   XREF to: 0050b247 (CONDITIONAL_JUMP)
// 0050b23e: FLD float ptr [EBX + 0x34]
// 0050b241: FADD float ptr [ESP]
// 0050b244: FSTP float ptr [EBX + 0x34]
// 0050b247: PUSH EBX
//   Label: LAB_0050b247
// 0050b248: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0050b24d: ADD ESP,0x4
// 0050b250: MOV ESP,EBP
// 0050b252: POP EBP
// 0050b253: POP EBX
// 0050b254: RET
