// Name: core_dest.cpp_FUN_0046f9b0
// Address: 0046f9b0
// Address Range: [[0046f9b0, 0046fb69]]
// Convention: unknown
// Signature: undefined core_dest.cpp_FUN_0046f9b0()
// Cross-references:
//   core_filmreel.cpp_CFilmProjector_load_FUN_004beb40 (004beb40) at 004beb73 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0061e3a2
//   double DOUBLE_0061e3aa = 0.100000000000000
//   CEventList* g_CEventListPtr = 02d05310
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CEventList g_CEventListInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
// Function calls:
//   core_dest.cpp_FUN_0046fd50
//   core_event.cpp_CEventList_FUN_004aabe0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_dest.cpp_FUN_0046f9b0(undefined4 param_1) */

void core_dest_cpp_FUN_0046f9b0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int in_stack_00000004;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((*(int *)(in_stack_00000004 + 0x1f0) != 0) && (*(int *)(in_stack_00000004 + 0x158) == 0)) {
    iVar2 = 0;
    for (iVar3 = 0; iVar3 < (int)g_CDemonSetPtr->actor_list_ptr; iVar3 = iVar3 + 1) {
      iVar1 = *(int *)(g_CDemonSetPtr->actor_list_data + iVar2);
      local_2c = *(float *)(in_stack_00000004 + 0x20) - *(float *)(iVar1 + 0x20);
      local_28 = *(float *)(in_stack_00000004 + 0x24) - *(float *)(iVar1 + 0x24);
      local_24 = *(float *)(in_stack_00000004 + 0x28) - *(float *)(iVar1 + 0x28);
      if ((SQRT(local_24 * local_24 + local_2c * local_2c + local_28 * local_28) <
           (float)DOUBLE_0061e3aa) && (iVar1 = core_dest_cpp_FUN_0046fd50(), iVar1 != 0)) break;
      iVar2 = iVar2 + 4;
    }
  }
  iVar2 = *(int *)(in_stack_00000004 + 0x158);
  if (iVar2 != 0) {
    local_38 = *(float *)(iVar2 + 0x20) - *(float *)(in_stack_00000004 + 0x20);
    local_34 = *(float *)(iVar2 + 0x24) - *(float *)(in_stack_00000004 + 0x24);
    local_30 = *(float *)(iVar2 + 0x28) - *(float *)(in_stack_00000004 + 0x28);
    if (&local_20 != &local_38) {
      local_20 = local_38;
      local_1c = local_34;
      local_18 = local_30;
    }
    if ((((float)_DAT_0061e3a2 <= ABS(local_20)) || ((float)_DAT_0061e3a2 <= ABS(local_1c))) ||
       ((float)_DAT_0061e3a2 <= ABS(local_18))) {
      *(undefined4 *)(in_stack_00000004 + 0x184) = 0;
      *(undefined4 *)(in_stack_00000004 + 0x1f0) = 0;
      return;
    }
    if ((*(int *)(in_stack_00000004 + 0x1ec) != 0) ||
       ((*(int *)(in_stack_00000004 + 0x184) == 0 && (*(int *)(in_stack_00000004 + 0x1f0) == 0)))) {
      core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
    }
    *(undefined4 *)(in_stack_00000004 + 0x184) = 1;
  }
  *(undefined4 *)(in_stack_00000004 + 0x1f0) = 0;
  return;
}


// Assembly code:
// 0046f9b0: PUSH EBX
//   Label: core_dest.cpp_FUN_0046f9b0
// 0046f9b1: PUSH ESI
// 0046f9b2: PUSH EDI
// 0046f9b3: PUSH EBP
// 0046f9b4: MOV EBP,ESP
// 0046f9b6: SUB ESP,0x24
// 0046f9b9: AND ESP,0xfffffff8
// 0046f9bc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046f9bf: CMP dword ptr [EAX + 0x1f0],0x0
// 0046f9c6: JZ 0x0046fa51
//   XREF to: 0046fa51 (CONDITIONAL_JUMP)
// 0046f9cc: CMP dword ptr [EAX + 0x158],0x0
// 0046f9d3: JNZ 0x0046fa51
//   XREF to: 0046fa51 (CONDITIONAL_JUMP)
// 0046f9d9: LEA ESI,[EAX + 0x20]
// 0046f9dc: XOR EDI,EDI
// 0046f9de: XOR EBX,EBX
// 0046f9e0: MOV EDX,dword ptr [0x006810c8]
//   Label: LAB_0046f9e0
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0046f9e6: CMP EDI,dword ptr [EDX + 0x14d154]
//   XREF to: 032613cc (READ)
// 0046f9ec: JGE 0x0046fa51
//   XREF to: 0046fa51 (CONDITIONAL_JUMP)
// 0046f9ee: ADD EDX,EBX
//   XREF to: 03114278 (PARAM)
// 0046f9f0: MOV EAX,dword ptr [EDX + 0x14d158]
//   XREF to: 032613d0 (READ)
//   XREF to: 032613d4 (READ)
// 0046f9f6: FLD float ptr [ESI]
// 0046f9f8: FSUB float ptr [EAX + 0x20]
// 0046f9fb: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 0046f9ff: FLD float ptr [ESI + 0x4]
// 0046fa02: FSUB float ptr [EAX + 0x24]
// 0046fa05: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 0046fa09: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 0046fa0d: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 0046fa11: FMUL ST0
// 0046fa13: FLD float ptr [ESI + 0x8]
// 0046fa16: FSUB float ptr [EAX + 0x28]
// 0046fa19: FXCH
// 0046fa1b: FADDP ST2,ST0
// 0046fa1d: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0046fa21: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046fa25: FADDP
// 0046fa27: FSQRT
// 0046fa29: FCOMP double ptr [0x0061e3aa]
//   XREF to: 0061e3aa (READ)
// 0046fa2f: FNSTSW AX
// 0046fa31: SAHF
// 0046fa32: JC 0x0046fa3a
//   XREF to: 0046fa3a (CONDITIONAL_JUMP)
// 0046fa34: INC EDI
//   Label: LAB_0046fa34
// 0046fa35: ADD EBX,0x4
// 0046fa38: JMP 0x0046f9e0
//   XREF to: 0046f9e0 (UNCONDITIONAL_JUMP)
// 0046fa3a: MOV ECX,dword ptr [EDX + 0x14d158]
//   Label: LAB_0046fa3a
//   XREF to: 032613d0 (READ)
// 0046fa40: PUSH ECX
// 0046fa41: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046fa44: PUSH EAX
// 0046fa45: CALL core_dest.cpp_FUN_0046fd50
//   XREF to: 0046fd50 (UNCONDITIONAL_CALL)
// 0046fa4a: ADD ESP,0x8
// 0046fa4d: TEST EAX,EAX
// 0046fa4f: JZ 0x0046fa34
//   XREF to: 0046fa34 (CONDITIONAL_JUMP)
// 0046fa51: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046fa51
//   XREF to: Stack[0x4] (READ)
// 0046fa54: MOV EDX,dword ptr [EAX + 0x158]
// 0046fa5a: TEST EDX,EDX
// 0046fa5c: JZ 0x0046fb10
//   XREF to: 0046fb10 (CONDITIONAL_JUMP)
// 0046fa62: FLD float ptr [EDX + 0x20]
// 0046fa65: FSUB float ptr [EAX + 0x20]
// 0046fa68: FSTP float ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0046fa6b: FLD float ptr [EDX + 0x24]
// 0046fa6e: FSUB float ptr [EAX + 0x24]
// 0046fa71: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (WRITE)
// 0046fa75: FLD float ptr [EDX + 0x28]
// 0046fa78: LEA EDX,[ESP + 0x18]
//   XREF to: Stack[-0x20] (DATA)
// 0046fa7c: FSUB float ptr [EAX + 0x28]
// 0046fa7f: MOV EAX,ESP
// 0046fa81: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 0046fa85: CMP EDX,EAX
// 0046fa87: JNZ 0x0046fb24
//   XREF to: 0046fb24 (CONDITIONAL_JUMP)
// 0046fa8d: FLD float ptr [ESP + 0x18]
//   Label: LAB_0046fa8d
//   XREF to: Stack[-0x20] (READ)
// 0046fa91: FABS
// 0046fa93: FCOMP double ptr [0x0061e3a2]
//   XREF to: 0061e3a2 (READ)
// 0046fa99: FNSTSW AX
// 0046fa9b: SAHF
// 0046fa9c: JNC 0x0046fb49
//   XREF to: 0046fb49 (CONDITIONAL_JUMP)
// 0046faa2: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 0046faa6: FABS
// 0046faa8: FCOMP double ptr [0x0061e3a2]
//   XREF to: 0061e3a2 (READ)
// 0046faae: FNSTSW AX
// 0046fab0: SAHF
// 0046fab1: JNC 0x0046fb49
//   XREF to: 0046fb49 (CONDITIONAL_JUMP)
// 0046fab7: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 0046fabb: FABS
// 0046fabd: FCOMP double ptr [0x0061e3a2]
//   XREF to: 0061e3a2 (READ)
// 0046fac3: FNSTSW AX
// 0046fac5: SAHF
// 0046fac6: JNC 0x0046fb49
//   XREF to: 0046fb49 (CONDITIONAL_JUMP)
// 0046facc: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046facf: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046fad2: MOV ECX,dword ptr [EDX + 0x1ec]
// 0046fad8: ADD EAX,0x188
// 0046fadd: TEST ECX,ECX
// 0046fadf: JNZ 0x0046fb40
//   XREF to: 0046fb40 (CONDITIONAL_JUMP)
// 0046fae1: CMP dword ptr [EDX + 0x184],0x0
// 0046fae8: JNZ 0x0046fb03
//   XREF to: 0046fb03 (CONDITIONAL_JUMP)
// 0046faea: CMP dword ptr [EDX + 0x1f0],0x0
// 0046faf1: JNZ 0x0046fb03
//   XREF to: 0046fb03 (CONDITIONAL_JUMP)
// 0046faf3: PUSH EAX
// 0046faf4: MOV EDI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 0046fafa: PUSH EDI
//   XREF to: 02d05310 (DATA)
// 0046fafb: CALL core_event.cpp_CEventList_FUN_004aabe0
//   Label: LAB_0046fafb
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 0046fb00: ADD ESP,0x8
// 0046fb03: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046fb03
//   XREF to: Stack[0x4] (READ)
// 0046fb06: MOV dword ptr [EAX + 0x184],0x1
// 0046fb10: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046fb10
//   XREF to: Stack[0x4] (READ)
// 0046fb13: MOV dword ptr [EAX + 0x1f0],0x0
// 0046fb1d: MOV ESP,EBP
// 0046fb1f: POP EBP
// 0046fb20: POP EDI
// 0046fb21: POP ESI
// 0046fb22: POP EBX
// 0046fb23: RET
// 0046fb24: MOV EAX,dword ptr [ESP]
//   Label: LAB_0046fb24
//   XREF to: Stack[-0x38] (DATA)
// 0046fb27: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0046fb2b: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 0046fb2f: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0046fb33: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 0046fb37: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0046fb3b: JMP 0x0046fa8d
//   XREF to: 0046fa8d (UNCONDITIONAL_JUMP)
// 0046fb40: PUSH EAX
//   Label: LAB_0046fb40
// 0046fb41: MOV EAX,[0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0046fb46: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 0046fb47: JMP 0x0046fafb
//   XREF to: 0046fafb (UNCONDITIONAL_JUMP)
// 0046fb49: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046fb49
//   XREF to: Stack[0x4] (READ)
// 0046fb4c: MOV dword ptr [EAX + 0x184],0x0
// 0046fb56: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046fb59: MOV dword ptr [EAX + 0x1f0],0x0
// 0046fb63: MOV ESP,EBP
// 0046fb65: POP EBP
// 0046fb66: POP EDI
// 0046fb67: POP ESI
// 0046fb68: POP EBX
// 0046fb69: RET
