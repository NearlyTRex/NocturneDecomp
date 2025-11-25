// Name: core_conveyor.cpp_FUN_004421c0
// Address: 004421c0
// Address Range: [[004421c0, 004422e7]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_004421c0()
// Globals:
//   double DOUBLE_00618ed3 = 4
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
// Function calls:
//   core_platfrm.cpp_FUN_0054ea00

#include "nocturne.h"

/* Signature: undefined1 actors_other_conveyor.cpp_FUN_004421c0(undefined4 param_1) */

void core_conveyor_cpp_FUN_004421c0(void)

{
  CKeys *this_ptr;
  int iVar1;
  int in_stack_00000004;
  float in_stack_00000020;
  float in_stack_00000034;
  float in_stack_00000048;
  float in_stack_0000005c;
  
  this_ptr = g_CKeysPtr;
  *(undefined4 *)(in_stack_00000004 + 0x724) = 4;
  iVar1 = (*this_ptr->vtable->isKeyDown)(this_ptr,0x1d);
  if (iVar1 == 0) {
    core_platfrm_cpp_FUN_0054ea00();
    return;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
  if (iVar1 != 0) {
    *(float *)(in_stack_00000004 + 0x72c) =
         *(float *)(in_stack_00000004 + 0x72c) - in_stack_00000020;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
  if (iVar1 != 0) {
    *(float *)(in_stack_00000004 + 0x72c) =
         *(float *)(in_stack_00000004 + 0x72c) + in_stack_00000034;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
  if (iVar1 != 0) {
    *(float *)(in_stack_00000004 + 0x734) =
         *(float *)(in_stack_00000004 + 0x734) - in_stack_00000048;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
  if (iVar1 != 0) {
    *(float *)(in_stack_00000004 + 0x734) =
         *(float *)(in_stack_00000004 + 0x734) + in_stack_0000005c;
  }
  if (*(int *)(in_stack_00000004 + 0x72c) < 0x3f000000) {
    *(undefined4 *)(in_stack_00000004 + 0x72c) = 0x3f000000;
  }
  if (*(float *)(in_stack_00000004 + 0x730) < 0.5) {
    *(undefined4 *)(in_stack_00000004 + 0x730) = 0x3f000000;
  }
  if (0.5 <= *(float *)(in_stack_00000004 + 0x734)) {
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 0x734) = 0x3f000000;
  return;
}


// Assembly code:
// 004421c0: PUSH EBX
//   Label: core_conveyor.cpp_FUN_004421c0
// 004421c1: SUB ESP,0x8
// 004421c4: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004421c8: PUSH 0x1d
// 004421ca: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004421cf: MOV dword ptr [EBX + 0x724],0x4
// 004421d9: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004421da: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004421dc: CALL dword ptr [EDX]
// 004421de: ADD ESP,0x8
// 004421e1: TEST EAX,EAX
// 004421e3: JZ 0x004422da
//   XREF to: 004422da (CONDITIONAL_JUMP)
// 004421e9: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004421ee: PUSH 0x4b
// 004421f0: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004421f6: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004421fb: FMUL double ptr [0x00618ed3]
//   XREF to: 00618ed3 (READ)
// 00442201: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00442202: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00442204: FSTP float ptr [ESP + 0xc]
// 00442208: CALL dword ptr [EDX]
// 0044220a: ADD ESP,0x8
// 0044220d: TEST EAX,EAX
// 0044220f: JZ 0x00442221
//   XREF to: 00442221 (CONDITIONAL_JUMP)
// 00442211: FLD float ptr [EBX + 0x72c]
// 00442217: FSUB float ptr [ESP + 0x4]
// 0044221b: FSTP float ptr [EBX + 0x72c]
// 00442221: PUSH 0x4d
//   Label: LAB_00442221
// 00442223: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00442228: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00442229: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0044222b: CALL dword ptr [EDX]
// 0044222d: ADD ESP,0x8
// 00442230: TEST EAX,EAX
// 00442232: JZ 0x00442244
//   XREF to: 00442244 (CONDITIONAL_JUMP)
// 00442234: FLD float ptr [EBX + 0x72c]
// 0044223a: FADD float ptr [ESP + 0x4]
// 0044223e: FSTP float ptr [EBX + 0x72c]
// 00442244: PUSH 0x50
//   Label: LAB_00442244
// 00442246: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0044224b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0044224c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0044224e: CALL dword ptr [EDX]
// 00442250: ADD ESP,0x8
// 00442253: TEST EAX,EAX
// 00442255: JZ 0x00442267
//   XREF to: 00442267 (CONDITIONAL_JUMP)
// 00442257: FLD float ptr [EBX + 0x734]
// 0044225d: FSUB float ptr [ESP + 0x4]
// 00442261: FSTP float ptr [EBX + 0x734]
// 00442267: PUSH 0x48
//   Label: LAB_00442267
// 00442269: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0044226e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0044226f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00442271: CALL dword ptr [EDX]
// 00442273: ADD ESP,0x8
// 00442276: TEST EAX,EAX
// 00442278: JZ 0x0044228a
//   XREF to: 0044228a (CONDITIONAL_JUMP)
// 0044227a: FLD float ptr [EBX + 0x734]
// 00442280: FADD float ptr [ESP + 0x4]
// 00442284: FSTP float ptr [EBX + 0x734]
// 0044228a: MOV EDX,0x3f000000
//   Label: LAB_0044228a
// 0044228f: MOV ECX,dword ptr [EBX + 0x72c]
// 00442295: MOV dword ptr [ESP],EDX
// 00442298: CMP ECX,EDX
// 0044229a: JGE 0x004422a2
//   XREF to: 004422a2 (CONDITIONAL_JUMP)
// 0044229c: MOV dword ptr [EBX + 0x72c],EDX
// 004422a2: FLD float ptr [EBX + 0x730]
//   Label: LAB_004422a2
// 004422a8: FCOMP float ptr [ESP]
// 004422ab: FNSTSW AX
// 004422ad: SAHF
// 004422ae: JNC 0x004422b9
//   XREF to: 004422b9 (CONDITIONAL_JUMP)
// 004422b0: MOV EAX,dword ptr [ESP]
// 004422b3: MOV dword ptr [EBX + 0x730],EAX
// 004422b9: FLD float ptr [EBX + 0x734]
//   Label: LAB_004422b9
// 004422bf: FCOMP float ptr [ESP]
// 004422c2: FNSTSW AX
// 004422c4: SAHF
// 004422c5: JC 0x004422cc
//   XREF to: 004422cc (CONDITIONAL_JUMP)
// 004422c7: ADD ESP,0x8
// 004422ca: POP EBX
// 004422cb: RET
// 004422cc: MOV EAX,dword ptr [ESP]
//   Label: LAB_004422cc
// 004422cf: MOV dword ptr [EBX + 0x734],EAX
// 004422d5: ADD ESP,0x8
// 004422d8: POP EBX
// 004422d9: RET
// 004422da: PUSH EBX
//   Label: LAB_004422da
// 004422db: CALL core_platfrm.cpp_FUN_0054ea00
//   XREF to: 0054ea00 (UNCONDITIONAL_CALL)
// 004422e0: ADD ESP,0x4
// 004422e3: ADD ESP,0x8
// 004422e6: POP EBX
// 004422e7: RET
