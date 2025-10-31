// Name: core_event.cpp_CEventList_process_FUN_004aaac0
// Address: 004aaac0
// Address Range: [[004aaac0, 004aabd4]]
// Convention: unknown
// Signature: undefined core_event.cpp_CEventList_process_FUN_004aaac0()
// Cross-references:
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e34dc [UNCONDITIONAL_CALL]
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.delta_time_float
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_CEventList_process(undefined4 param_1) */

void core_event_cpp_CEventList_process_FUN_004aaac0(void)

{
  float fVar1;
  int iVar2;
  CGame *pCVar3;
  float n;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *in_stack_00000004;
  undefined4 *local_14;
  
  in_stack_00000004[0x321] = *in_stack_00000004;
  puVar6 = in_stack_00000004 + 0x322;
  puVar5 = in_stack_00000004;
  for (iVar4 = 800; puVar5 = puVar5 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar6 = puVar6 + 1;
  }
  for (iVar4 = 0; pCVar3 = g_CGamePtr, iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *in_stack_00000004 = 0;
  n = pCVar3->delta_time_float;
  iVar4 = 0;
  if (0 < (int)in_stack_00000004[0xc84]) {
    puVar6 = in_stack_00000004 + 0xc85;
    local_14 = in_stack_00000004 + 0xc8d;
    puVar5 = in_stack_00000004;
    do {
      fVar1 = (float)puVar5[0xcd5];
      puVar5[0xcd5] = fVar1 - n;
      if (fVar1 - n <= 0.0) {
        iVar2 = in_stack_00000004[0xc84];
        in_stack_00000004[0xc84] = iVar2 + -1;
        crt_string_c_memmove_FUN_005fe5e0(puVar6,local_14,((iVar2 + -1) - iVar4) * 0x20);
        n = (float)((in_stack_00000004[0xc84] - iVar4) * 4);
        crt_string_c_memmove_FUN_005fe5e0(local_14 + iVar4,local_14 + iVar4 + 1,(SIZE_T)n);
      }
      else {
        puVar6 = puVar6 + 8;
        iVar4 = iVar4 + 1;
        local_14 = local_14 + 8;
        puVar5 = puVar5 + 1;
      }
    } while (iVar4 < (int)in_stack_00000004[0xc84]);
  }
  return;
}


// Assembly code:
// 004aaac0: PUSH EBX
//   Label: core_event.cpp_CEventList_process_FUN_004aaac0
// 004aaac1: PUSH ESI
// 004aaac2: PUSH EDI
// 004aaac3: PUSH EBP
// 004aaac4: MOV EBP,ESP
// 004aaac6: SUB ESP,0x10
// 004aaac9: AND ESP,0xfffffff8
// 004aaacc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004aaacf: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004aaad2: MOV ECX,0xc80
// 004aaad7: LEA ESI,[EBX + 0x4]
// 004aaada: MOV EAX,dword ptr [EAX]
// 004aaadc: LEA EDI,[EBX + 0xc88]
// 004aaae2: MOV dword ptr [EBX + 0xc84],EAX
// 004aaae8: PUSH EDI
// 004aaae9: MOV EAX,ECX
// 004aaaeb: SHR ECX,0x2
// 004aaaee: MOVSD.REP ES:EDI,ESI
// 004aaaf0: MOV CL,AL
// 004aaaf2: AND CL,0x3
// 004aaaf5: MOVSB.REP ES:EDI,ESI
// 004aaaf7: POP EDI
// 004aaaf8: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004aaafd: MOV dword ptr [EBX],0x0
// 004aab03: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004aab09: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004aab0c: FSTP float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004aab0f: MOV EDX,dword ptr [EAX + 0x3210]
// 004aab15: XOR EBX,EBX
// 004aab17: TEST EDX,EDX
// 004aab19: JLE 0x004aab79
//   XREF to: 004aab79 (CONDITIONAL_JUMP)
// 004aab1b: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004aab1e: ADD EAX,0x3214
// 004aab23: ADD ESI,0x3354
// 004aab29: MOV EDI,EAX
// 004aab2b: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 004aab2f: ADD EAX,0x20
// 004aab32: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004aab35: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004aab39: FLD float ptr [ESI + 0x3354]
//   Label: LAB_004aab39
// 004aab3f: LEA EAX,[EBX*0x4 + 0x0]
// 004aab46: FSUB float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004aab49: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004aab4d: FST float ptr [ESI + 0x3354]
// 004aab53: FLDZ
// 004aab55: FCOMPP
// 004aab57: FNSTSW AX
// 004aab59: SAHF
// 004aab5a: JNC 0x004aab80
//   XREF to: 004aab80 (CONDITIONAL_JUMP)
// 004aab5c: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 004aab60: ADD EDI,0x20
// 004aab63: INC EBX
// 004aab64: ADD EAX,0x20
// 004aab67: ADD ESI,0x4
// 004aab6a: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004aab6e: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004aab6e
//   XREF to: Stack[0x4] (READ)
// 004aab71: CMP EBX,dword ptr [EAX + 0x3210]
// 004aab77: JL 0x004aab39
//   XREF to: 004aab39 (CONDITIONAL_JUMP)
// 004aab79: MOV ESP,EBP
//   Label: LAB_004aab79
// 004aab7b: POP EBP
// 004aab7c: POP EDI
// 004aab7d: POP ESI
// 004aab7e: POP EBX
// 004aab7f: RET
// 004aab80: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004aab80
//   XREF to: Stack[0x4] (READ)
// 004aab83: MOV EDX,dword ptr [EAX + 0x3210]
// 004aab89: DEC EDX
// 004aab8a: MOV dword ptr [EAX + 0x3210],EDX
// 004aab90: MOV EAX,EDX
// 004aab92: SUB EAX,EBX
// 004aab94: SHL EAX,0x5
// 004aab97: PUSH EAX
// 004aab98: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 004aab9c: PUSH ECX
// 004aab9d: PUSH EDI
// 004aab9e: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004aaba3: ADD ESP,0xc
// 004aaba6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004aaba9: MOV EAX,dword ptr [EAX + 0x3210]
// 004aabaf: SUB EAX,EBX
// 004aabb1: SHL EAX,0x2
// 004aabb4: PUSH EAX
// 004aabb5: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004aabb9: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004aabbd: ADD EAX,0x4
// 004aabc0: ADD EAX,EDX
// 004aabc2: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004aabc6: PUSH EAX
// 004aabc7: LEA EAX,[EDX + ECX*0x1]
// 004aabca: PUSH EAX
// 004aabcb: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004aabd0: ADD ESP,0xc
// 004aabd3: JMP 0x004aab6e
//   XREF to: 004aab6e (UNCONDITIONAL_JUMP)
