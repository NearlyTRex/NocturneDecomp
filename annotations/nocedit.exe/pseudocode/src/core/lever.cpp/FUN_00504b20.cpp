// Name: core_lever.cpp_FUN_00504b20
// Address: 00504b20
// Address Range: [[00504b20, 00504c88]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00504b20()
// Cross-references:
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004acde5 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00504920 (00504920) at 00504a71 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_005051a0 (005051a0) at 00505200 [UNCONDITIONAL_CALL]
// Globals:
//   CEventList* g_CEventListInstance = 02d05310
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_02d05310
//   undefined4 g_CLeverClassInfo.name_hash
//   undefined4 DAT_02f33744
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_event.cpp_FUN_004aabe0

#include "nocturne.h"

/* Signature: undefined1 actors_other_lever.cpp_FUN_00504b20(undefined4 param_1, undefined4 param_2)
    */

void core_lever_cpp_FUN_00504b20(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  float in_stack_00000008;
  
  if (*(float *)(in_stack_00000004 + 0x2dc) != in_stack_00000008) {
    if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) {
      if ((in_stack_00000008 <= 0.0) && (0.0 < *(float *)(in_stack_00000004 + 0x2dc))) {
        core_event_cpp_FUN_004aabe0();
      }
      if ((1.0 <= in_stack_00000008) && (*(float *)(in_stack_00000004 + 0x2dc) < 1.0)) {
        core_event_cpp_FUN_004aabe0();
      }
    }
    if (((0.0 < in_stack_00000008) && (*(float *)(in_stack_00000004 + 0x2dc) <= 0.0)) ||
       (((int)in_stack_00000008 < 0x3f800000 && (1.0 <= *(float *)(in_stack_00000004 + 0x2dc))))) {
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    }
    *(float *)(in_stack_00000004 + 0x2dc) = in_stack_00000008;
    if (*(int *)(in_stack_00000004 + 0x410) != 0) {
      core_lever_cpp_FUN_00504b20();
    }
    iVar2 = 0;
    for (iVar3 = 0; iVar3 < (int)g_CDemonSetPtr->actor_list_ptr; iVar3 = iVar3 + 1) {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar2),
                          g_CLeverClassInfo.name_hash);
      if ((pCVar1 != (CDemonActor *)0x0) &&
         (in_stack_00000004 == *(int *)(pCVar1[3].actor_name + 8))) {
        core_lever_cpp_FUN_00504b20();
      }
      iVar2 = iVar2 + 4;
    }
  }
  return;
}


// Assembly code:
// 00504b20: PUSH EBX
//   Label: core_lever.cpp_FUN_00504b20
// 00504b21: PUSH ESI
// 00504b22: PUSH EDI
// 00504b23: PUSH EBP
// 00504b24: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00504b28: FLD float ptr [EDI + 0x2dc]
// 00504b2e: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00504b32: FNSTSW AX
// 00504b34: SAHF
// 00504b35: JZ 0x00504ba5
//   XREF to: 00504ba5 (CONDITIONAL_JUMP)
// 00504b37: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
// 00504b3c: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 00504b40: JZ 0x00504baa
//   XREF to: 00504baa (CONDITIONAL_JUMP)
// 00504b42: FLDZ
//   Label: LAB_00504b42
// 00504b44: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00504b48: FNSTSW AX
// 00504b4a: SAHF
// 00504b4b: JNC 0x00504c1b
//   XREF to: 00504c1b (CONDITIONAL_JUMP)
// 00504b51: FLD float ptr [EDI + 0x2dc]
// 00504b57: FLDZ
// 00504b59: FCOMPP
// 00504b5b: FNSTSW AX
// 00504b5d: SAHF
// 00504b5e: JC 0x00504c1b
//   XREF to: 00504c1b (CONDITIONAL_JUMP)
// 00504b64: LEA EBX,[EDI + 0x3a8]
//   Label: LAB_00504b64
// 00504b6a: PUSH EBX
// 00504b6b: MOV EAX,dword ptr [EDI + 0x154]
// 00504b71: PUSH EDI
// 00504b72: CALL dword ptr [EAX + 0x24]
// 00504b75: ADD ESP,0x8
// 00504b78: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00504b78
//   XREF to: Stack[0x8] (READ)
// 00504b7c: MOV EBP,dword ptr [EDI + 0x410]
// 00504b82: MOV dword ptr [EDI + 0x2dc],EAX
// 00504b88: TEST EBP,EBP
// 00504b8a: JNZ 0x00504c41
//   XREF to: 00504c41 (CONDITIONAL_JUMP)
// 00504b90: XOR EBX,EBX
//   Label: LAB_00504b90
// 00504b92: XOR ESI,ESI
// 00504b94: MOV EAX,[0x006810c8]
//   Label: LAB_00504b94
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 00504b99: CMP ESI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 00504b9f: JL 0x00504c50
//   XREF to: 00504c50 (CONDITIONAL_JUMP)
// 00504ba5: POP EBP
//   Label: LAB_00504ba5
// 00504ba6: POP EDI
// 00504ba7: POP ESI
// 00504ba8: POP EBX
// 00504ba9: RET
// 00504baa: FLD float ptr [ESP + 0x18]
//   Label: LAB_00504baa
//   XREF to: Stack[0x8] (READ)
// 00504bae: FLDZ
// 00504bb0: FCOMPP
// 00504bb2: FNSTSW AX
// 00504bb4: SAHF
// 00504bb5: JC 0x00504bdc
//   XREF to: 00504bdc (CONDITIONAL_JUMP)
// 00504bb7: FLD float ptr [EDI + 0x2dc]
// 00504bbd: FLDZ
// 00504bbf: FCOMPP
// 00504bc1: FNSTSW AX
// 00504bc3: SAHF
// 00504bc4: JNC 0x00504bdc
//   XREF to: 00504bdc (CONDITIONAL_JUMP)
// 00504bc6: LEA EAX,[EDI + 0x344]
// 00504bcc: PUSH EAX
// 00504bcd: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 00504bd3: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 00504bd4: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 00504bd9: ADD ESP,0x8
// 00504bdc: FLD float ptr [ESP + 0x18]
//   Label: LAB_00504bdc
//   XREF to: Stack[0x8] (READ)
// 00504be0: FLD1
// 00504be2: FCOMPP
// 00504be4: FNSTSW AX
// 00504be6: SAHF
// 00504be7: JA 0x00504b42
//   XREF to: 00504b42 (CONDITIONAL_JUMP)
// 00504bed: FLD float ptr [EDI + 0x2dc]
// 00504bf3: FLD1
// 00504bf5: FCOMPP
// 00504bf7: FNSTSW AX
// 00504bf9: SAHF
// 00504bfa: JBE 0x00504b42
//   XREF to: 00504b42 (CONDITIONAL_JUMP)
// 00504c00: LEA EAX,[EDI + 0x2e0]
// 00504c06: PUSH EAX
// 00504c07: MOV EBX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 00504c0d: PUSH EBX
//   XREF to: 02d05310 (DATA)
// 00504c0e: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 00504c13: ADD ESP,0x8
// 00504c16: JMP 0x00504b42
//   XREF to: 00504b42 (UNCONDITIONAL_JUMP)
// 00504c1b: CMP dword ptr [ESP + 0x18],0x3f800000
//   Label: LAB_00504c1b
//   XREF to: Stack[0x8] (READ)
// 00504c23: JGE 0x00504b78
//   XREF to: 00504b78 (CONDITIONAL_JUMP)
// 00504c29: FLD float ptr [EDI + 0x2dc]
// 00504c2f: FLD1
// 00504c31: FCOMPP
// 00504c33: FNSTSW AX
// 00504c35: SAHF
// 00504c36: JBE 0x00504b64
//   XREF to: 00504b64 (CONDITIONAL_JUMP)
// 00504c3c: JMP 0x00504b78
//   XREF to: 00504b78 (UNCONDITIONAL_JUMP)
// 00504c41: PUSH EAX
//   Label: LAB_00504c41
// 00504c42: PUSH EBP
// 00504c43: CALL core_lever.cpp_FUN_00504b20
//   XREF to: 00504b20 (UNCONDITIONAL_CALL)
// 00504c48: ADD ESP,0x8
// 00504c4b: JMP 0x00504b90
//   XREF to: 00504b90 (UNCONDITIONAL_JUMP)
// 00504c50: MOV ECX,dword ptr [0x02dd3090]
//   Label: LAB_00504c50
//   XREF to: 02dd3090 (READ)
// 00504c56: PUSH ECX
// 00504c57: MOV EBP,dword ptr [EBX + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 00504c5e: PUSH EBP
// 00504c5f: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00504c64: ADD ESP,0x8
// 00504c67: TEST EAX,EAX
// 00504c69: JZ 0x00504c80
//   XREF to: 00504c80 (CONDITIONAL_JUMP)
// 00504c6b: CMP EDI,dword ptr [EAX + 0x410]
// 00504c71: JNZ 0x00504c80
//   XREF to: 00504c80 (CONDITIONAL_JUMP)
// 00504c73: PUSH dword ptr [ESP + 0x18]
// 00504c77: PUSH EAX
// 00504c78: CALL core_lever.cpp_FUN_00504b20
//   XREF to: 00504b20 (UNCONDITIONAL_CALL)
// 00504c7d: ADD ESP,0x8
// 00504c80: INC ESI
//   Label: LAB_00504c80
// 00504c81: ADD EBX,0x4
// 00504c84: JMP 0x00504b94
//   XREF to: 00504b94 (UNCONDITIONAL_JUMP)
