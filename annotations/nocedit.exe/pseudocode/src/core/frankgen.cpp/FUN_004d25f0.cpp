// Name: core_frankgen.cpp_FUN_004d25f0
// Address: 004d25f0
// Address Range: [[004d25f0, 004d2732]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d25f0()
// Globals:
//   void* switchdataD_004d25c8 = 004d2611
//   double DOUBLE_0062ac05 = 0.25
//   undefined4 DAT_0065e670
//   CKeys* g_CKeysPtr = 02dcd7d4
//   void* g_CKeysPtr
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330
//   core_frankgen.cpp_LoadModel_FUN_004d2190

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_frankgen.cpp_FUN_004d25f0(undefined4 param_1) */

void core_frankgen_cpp_FUN_004d25f0(void)

{
  int iVar1;
  int iVar2;
  CDemonActor *in_stack_00000004;
  float in_stack_0000002c;
  float in_stack_00000040;
  
  switch(*(undefined4 *)in_stack_00000004[1].actor_name) {
  case 1:
  case 2:
  case 3:
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
    (in_stack_00000004->orient).heading = 0.0;
    (in_stack_00000004->orient).bank = (in_stack_00000004->orient).heading;
    (in_stack_00000004->orient).pitch = (in_stack_00000004->orient).bank;
    break;
  case 4:
  case 5:
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  }
  (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
  (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
  iVar1 = core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330();
  iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x34);
  if (iVar2 != 0) {
    *(float *)(iVar1 + 0x15c) = *(float *)(iVar1 + 0x15c) + in_stack_0000002c;
  }
  iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x33);
  if (iVar2 != 0) {
    *(float *)(iVar1 + 0x15c) = *(float *)(iVar1 + 0x15c) - in_stack_00000040;
  }
  if (*(float *)(iVar1 + 0x15c) < 0.0) {
    *(float *)(iVar1 + 0x15c) = _DAT_0065e670 + *(float *)(iVar1 + 0x15c);
  }
  if (_DAT_0065e670 <= *(float *)(iVar1 + 0x15c)) {
    *(float *)(iVar1 + 0x15c) = *(float *)(iVar1 + 0x15c) - _DAT_0065e670;
  }
  *(undefined4 *)(in_stack_00000004[1].actor_name + 4) = *(undefined4 *)(iVar1 + 0x15c);
  core_frankgen_cpp_LoadModel_FUN_004d2190();
  return;
}


// Assembly code:
// 004d25f0: PUSH EBX
//   Label: core_frankgen.cpp_FUN_004d25f0
// 004d25f1: PUSH ESI
// 004d25f2: PUSH EDI
// 004d25f3: PUSH EBP
// 004d25f4: MOV EBP,ESP
// 004d25f6: SUB ESP,0x4
// 004d25f9: AND ESP,0xfffffff8
// 004d25fc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d25ff: MOV ESI,dword ptr [EBX + 0x158]
// 004d2605: CMP ESI,0x7
// 004d2608: JA 0x004d2611
//   XREF to: 004d2611 (CONDITIONAL_JUMP)
// 004d260a: JMP dword ptr [ESI*0x4 + 0x4d25c8]
//   Label: switchD
//   XREF to: 004d2611 (COMPUTED_JUMP)
//   XREF to: 004d2702 (COMPUTED_JUMP)
//   XREF to: 004d2725 (COMPUTED_JUMP)
//   XREF to: 004d25c8 (DATA)
// 004d2611: PUSH 0x2a
//   Label: caseD_7
// 004d2613: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004d2618: MOV EDX,0x3f800000
// 004d261d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004d261e: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004d2622: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004d2624: CALL dword ptr [EDX]
// 004d2626: ADD ESP,0x8
// 004d2629: TEST EAX,EAX
// 004d262b: JZ 0x004d2634
//   XREF to: 004d2634 (CONDITIONAL_JUMP)
// 004d262d: MOV dword ptr [ESP],0x40800000
// 004d2634: PUSH 0x38
//   Label: LAB_004d2634
// 004d2636: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004d263b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004d263c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004d263e: CALL dword ptr [EDX]
// 004d2640: ADD ESP,0x8
// 004d2643: TEST EAX,EAX
// 004d2645: JZ 0x004d2653
//   XREF to: 004d2653 (CONDITIONAL_JUMP)
// 004d2647: FLD float ptr [ESP]
// 004d264a: FMUL double ptr [0x0062ac05]
//   XREF to: 0062ac05 (READ)
// 004d2650: FSTP float ptr [ESP]
// 004d2653: CALL core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330
//   Label: LAB_004d2653
//   XREF to: 004d2330 (UNCONDITIONAL_CALL)
// 004d2658: PUSH 0x34
// 004d265a: MOV EDI,EAX
// 004d265c: MOV ESI,EAX
// 004d265e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004d2663: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004d2664: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004d2666: CALL dword ptr [EDX + 0x4]
// 004d2669: ADD ESP,0x8
// 004d266c: TEST EAX,EAX
// 004d266e: JZ 0x004d267f
//   XREF to: 004d267f (CONDITIONAL_JUMP)
// 004d2670: FLD float ptr [EDI + 0x15c]
// 004d2676: FADD float ptr [ESP]
// 004d2679: FSTP float ptr [EDI + 0x15c]
// 004d267f: PUSH 0x33
//   Label: LAB_004d267f
// 004d2681: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004d2686: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004d2687: MOV EDI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004d2689: CALL dword ptr [EDI + 0x4]
// 004d268c: ADD ESP,0x8
// 004d268f: TEST EAX,EAX
// 004d2691: JZ 0x004d26a2
//   XREF to: 004d26a2 (CONDITIONAL_JUMP)
// 004d2693: FLD float ptr [ESI + 0x15c]
// 004d2699: FSUB float ptr [ESP]
// 004d269c: FSTP float ptr [ESI + 0x15c]
// 004d26a2: FLD float ptr [ESI + 0x15c]
//   Label: LAB_004d26a2
// 004d26a8: FLDZ
// 004d26aa: FCOMPP
// 004d26ac: FNSTSW AX
// 004d26ae: SAHF
// 004d26af: JBE 0x004d26c3
//   XREF to: 004d26c3 (CONDITIONAL_JUMP)
// 004d26b1: FLD float ptr [0x0065e670]
//   XREF to: 0065e670 (READ)
// 004d26b7: FADD float ptr [ESI + 0x15c]
// 004d26bd: FSTP float ptr [ESI + 0x15c]
// 004d26c3: FLD float ptr [ESI + 0x15c]
//   Label: LAB_004d26c3
// 004d26c9: FCOMP float ptr [0x0065e670]
//   XREF to: 0065e670 (READ)
// 004d26cf: FNSTSW AX
// 004d26d1: SAHF
// 004d26d2: JC 0x004d26e6
//   XREF to: 004d26e6 (CONDITIONAL_JUMP)
// 004d26d4: FLD float ptr [0x0065e670]
//   XREF to: 0065e670 (READ)
// 004d26da: FSUBR float ptr [ESI + 0x15c]
// 004d26e0: FSTP float ptr [ESI + 0x15c]
// 004d26e6: FLD float ptr [ESI + 0x15c]
//   Label: LAB_004d26e6
// 004d26ec: PUSH EBX
// 004d26ed: FSTP float ptr [EBX + 0x15c]
// 004d26f3: CALL core_frankgen.cpp_LoadModel_FUN_004d2190
//   XREF to: 004d2190 (UNCONDITIONAL_CALL)
// 004d26f8: ADD ESP,0x4
// 004d26fb: MOV ESP,EBP
// 004d26fd: POP EBP
// 004d26fe: POP EDI
// 004d26ff: POP ESI
// 004d2700: POP EBX
// 004d2701: RET
// 004d2702: PUSH EBX
//   Label: caseD_3
// 004d2703: LEA ESI,[EBX + 0x30]
// 004d2706: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 004d270b: MOV dword ptr [ESI + 0x8],0x0
// 004d2712: ADD ESP,0x4
// 004d2715: MOV EAX,dword ptr [ESI + 0x8]
// 004d2718: MOV dword ptr [ESI + 0x4],EAX
// 004d271b: MOV EAX,dword ptr [ESI + 0x4]
// 004d271e: MOV dword ptr [ESI],EAX
// 004d2720: JMP 0x004d2611
//   XREF to: 004d2611 (UNCONDITIONAL_JUMP)
// 004d2725: PUSH EBX
//   Label: caseD_5
// 004d2726: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 004d272b: ADD ESP,0x4
// 004d272e: JMP 0x004d2611
//   XREF to: 004d2611 (UNCONDITIONAL_JUMP)
