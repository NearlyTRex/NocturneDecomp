// Name: core_lever.cpp_FUN_00504920
// Address: 00504920
// Address Range: [[00504920, 00504b1c]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00504920()
// Globals:
//   double DOUBLE_006310a0 = 6
//   double DOUBLE_006310a8 = 0.100000000000000
//   double DOUBLE_006310b0 = 0.900000000000000
//   CEventList* g_CEventListInstance = 02d05310
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_02d05310
//   undefined4 g_CLeverClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_event.cpp_FUN_004aabe0
//   core_lever.cpp_FUN_00504b20

#include "nocturne.h"

/* Signature: undefined1 actors_other_lever.cpp_FUN_00504920(undefined4 param_1, undefined4 param_2)
    */

void core_lever_cpp_FUN_00504920(void)

{
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  float in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x418) == 0) goto LAB_00504aa4;
  if (*(float *)(in_stack_00000004 + 0x41c) <= *(float *)(in_stack_00000004 + 0x2dc)) {
    fVar1 = *(float *)(in_stack_00000004 + 0x2dc) - in_stack_00000008 * (float)DOUBLE_006310a0;
    *(float *)(in_stack_00000004 + 0x2dc) = fVar1;
    if (fVar1 < *(float *)(in_stack_00000004 + 0x41c)) {
      *(undefined4 *)(in_stack_00000004 + 0x418) = 0;
      *(undefined4 *)(in_stack_00000004 + 0x2dc) = *(undefined4 *)(in_stack_00000004 + 0x41c);
      if ((*(int *)(in_stack_00000004 + 0x40c) != 0) &&
         (*(float *)(in_stack_00000004 + 0x2dc) < (float)DOUBLE_006310a8)) goto LAB_005049ad;
    }
  }
  else {
    fVar1 = in_stack_00000008 * (float)DOUBLE_006310a0 + *(float *)(in_stack_00000004 + 0x2dc);
    *(float *)(in_stack_00000004 + 0x2dc) = fVar1;
    if (*(float *)(in_stack_00000004 + 0x41c) < fVar1) {
      *(undefined4 *)(in_stack_00000004 + 0x418) = 0;
      *(undefined4 *)(in_stack_00000004 + 0x2dc) = *(undefined4 *)(in_stack_00000004 + 0x41c);
      if ((*(int *)(in_stack_00000004 + 0x40c) != 0) &&
         ((float)DOUBLE_006310b0 < *(float *)(in_stack_00000004 + 0x2dc))) {
LAB_005049ad:
        core_event_cpp_FUN_004aabe0();
      }
    }
  }
  if (*(int *)(in_stack_00000004 + 0x410) != 0) {
    core_lever_cpp_FUN_00504b20();
  }
  iVar3 = 0;
  iVar4 = 0;
  while (iVar4 < (int)g_CDemonSetPtr->actor_list_ptr) {
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar3),
                        g_CLeverClassInfo.name_hash);
    if ((pCVar2 == (CDemonActor *)0x0) || (in_stack_00000004 != *(int *)(pCVar2[3].actor_name + 8)))
    {
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    }
    else {
      core_lever_cpp_FUN_00504b20();
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    }
  }
LAB_00504aa4:
  if (*(int *)(in_stack_00000004 + 0x40c) == 0) {
    if ((*(float *)(in_stack_00000004 + 0x2dc) < (float)DOUBLE_006310a8) &&
       (*(char *)(in_stack_00000004 + 0x344) != '\0')) {
      core_event_cpp_FUN_004aabe0();
    }
    if (((float)DOUBLE_006310b0 < *(float *)(in_stack_00000004 + 0x2dc)) &&
       (*(char *)(in_stack_00000004 + 0x2e0) != '\0')) {
      core_event_cpp_FUN_004aabe0();
      return;
    }
  }
  return;
}


// Assembly code:
// 00504920: PUSH EBX
//   Label: core_lever.cpp_FUN_00504920
// 00504921: PUSH ESI
// 00504922: PUSH EDI
// 00504923: PUSH EBP
// 00504924: SUB ESP,0x8
// 00504927: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0050492b: CMP dword ptr [EBX + 0x418],0x0
// 00504932: JZ 0x00504aa4
//   XREF to: 00504aa4 (CONDITIONAL_JUMP)
// 00504938: FLD float ptr [EBX + 0x2dc]
// 0050493e: FCOMP float ptr [EBX + 0x41c]
// 00504944: FNSTSW AX
// 00504946: SAHF
// 00504947: JNC 0x005049fd
//   XREF to: 005049fd (CONDITIONAL_JUMP)
// 0050494d: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00504951: FMUL double ptr [0x006310a0]
//   XREF to: 006310a0 (READ)
// 00504957: FADD float ptr [EBX + 0x2dc]
// 0050495d: FST float ptr [EBX + 0x2dc]
// 00504963: FCOMP float ptr [EBX + 0x41c]
// 00504969: FNSTSW AX
// 0050496b: SAHF
// 0050496c: JBE 0x005049b5
//   XREF to: 005049b5 (CONDITIONAL_JUMP)
// 0050496e: MOV dword ptr [EBX + 0x418],0x0
// 00504978: FLD float ptr [EBX + 0x41c]
// 0050497e: MOV EDI,dword ptr [EBX + 0x40c]
// 00504984: FSTP float ptr [EBX + 0x2dc]
// 0050498a: TEST EDI,EDI
// 0050498c: JZ 0x005049b5
//   XREF to: 005049b5 (CONDITIONAL_JUMP)
// 0050498e: FLD float ptr [EBX + 0x2dc]
// 00504994: FCOMP double ptr [0x006310b0]
//   XREF to: 006310b0 (READ)
// 0050499a: FNSTSW AX
// 0050499c: SAHF
// 0050499d: JBE 0x005049b5
//   XREF to: 005049b5 (CONDITIONAL_JUMP)
// 0050499f: LEA EAX,[EBX + 0x2e0]
// 005049a5: PUSH EAX
// 005049a6: MOV EBP,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005049ac: PUSH EBP
//   XREF to: 02d05310 (DATA)
// 005049ad: CALL core_event.cpp_FUN_004aabe0
//   Label: LAB_005049ad
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 005049b2: ADD ESP,0x8
// 005049b5: MOV EAX,dword ptr [EBX + 0x410]
//   Label: LAB_005049b5
// 005049bb: TEST EAX,EAX
// 005049bd: JNZ 0x00504a6a
//   XREF to: 00504a6a (CONDITIONAL_JUMP)
// 005049c3: XOR ESI,ESI
//   Label: LAB_005049c3
// 005049c5: XOR EDI,EDI
// 005049c7: MOV EAX,[0x006810c8]
//   Label: LAB_005049c7
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005049cc: CMP EDI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005049d2: JGE 0x00504aa4
//   XREF to: 00504aa4 (CONDITIONAL_JUMP)
// 005049d8: MOV EBP,dword ptr [0x02dd3090]
//   XREF to: 02dd3090 (READ)
// 005049de: PUSH EBP
// 005049df: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
//   XREF to: 032613d4 (READ)
// 005049e6: PUSH EDX
// 005049e7: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005049ec: ADD ESP,0x8
// 005049ef: TEST EAX,EAX
// 005049f1: JNZ 0x00504a7e
//   XREF to: 00504a7e (CONDITIONAL_JUMP)
// 005049f7: INC EDI
//   Label: LAB_005049f7
// 005049f8: ADD ESI,0x4
// 005049fb: JMP 0x005049c7
//   XREF to: 005049c7 (UNCONDITIONAL_JUMP)
// 005049fd: FLD float ptr [ESP + 0x20]
//   Label: LAB_005049fd
//   XREF to: Stack[0x8] (READ)
// 00504a01: FMUL double ptr [0x006310a0]
//   XREF to: 006310a0 (READ)
// 00504a07: FSUBR float ptr [EBX + 0x2dc]
// 00504a0d: FST float ptr [EBX + 0x2dc]
// 00504a13: FCOMP float ptr [EBX + 0x41c]
// 00504a19: FNSTSW AX
// 00504a1b: SAHF
// 00504a1c: JNC 0x005049b5
//   XREF to: 005049b5 (CONDITIONAL_JUMP)
// 00504a1e: MOV dword ptr [EBX + 0x418],0x0
// 00504a28: FLD float ptr [EBX + 0x41c]
// 00504a2e: MOV ECX,dword ptr [EBX + 0x40c]
// 00504a34: FSTP float ptr [EBX + 0x2dc]
// 00504a3a: TEST ECX,ECX
// 00504a3c: JZ 0x005049b5
//   XREF to: 005049b5 (CONDITIONAL_JUMP)
// 00504a42: FLD float ptr [EBX + 0x2dc]
// 00504a48: FCOMP double ptr [0x006310a8]
//   XREF to: 006310a8 (READ)
// 00504a4e: FNSTSW AX
// 00504a50: SAHF
// 00504a51: JNC 0x005049b5
//   XREF to: 005049b5 (CONDITIONAL_JUMP)
// 00504a57: LEA EAX,[EBX + 0x344]
// 00504a5d: PUSH EAX
// 00504a5e: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 00504a64: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 00504a65: JMP 0x005049ad
//   XREF to: 005049ad (UNCONDITIONAL_JUMP)
// 00504a6a: PUSH dword ptr [EBX + 0x2dc]
//   Label: LAB_00504a6a
// 00504a70: PUSH EAX
// 00504a71: CALL core_lever.cpp_FUN_00504b20
//   XREF to: 00504b20 (UNCONDITIONAL_CALL)
// 00504a76: ADD ESP,0x8
// 00504a79: JMP 0x005049c3
//   XREF to: 005049c3 (UNCONDITIONAL_JUMP)
// 00504a7e: MOV ECX,dword ptr [EAX + 0x410]
//   Label: LAB_00504a7e
// 00504a84: CMP EBX,ECX
// 00504a86: JNZ 0x005049f7
//   XREF to: 005049f7 (CONDITIONAL_JUMP)
// 00504a8c: PUSH dword ptr [ECX + 0x2dc]
// 00504a92: PUSH EAX
// 00504a93: CALL core_lever.cpp_FUN_00504b20
//   XREF to: 00504b20 (UNCONDITIONAL_CALL)
// 00504a98: ADD ESP,0x8
// 00504a9b: INC EDI
// 00504a9c: ADD ESI,0x4
// 00504a9f: JMP 0x005049c7
//   XREF to: 005049c7 (UNCONDITIONAL_JUMP)
// 00504aa4: CMP dword ptr [EBX + 0x40c],0x0
//   Label: LAB_00504aa4
// 00504aab: JNZ 0x00504af7
//   XREF to: 00504af7 (CONDITIONAL_JUMP)
// 00504aad: FLD float ptr [EBX + 0x2dc]
// 00504ab3: FCOMP double ptr [0x006310a8]
//   XREF to: 006310a8 (READ)
// 00504ab9: FNSTSW AX
// 00504abb: SAHF
// 00504abc: JNC 0x00504add
//   XREF to: 00504add (CONDITIONAL_JUMP)
// 00504abe: CMP byte ptr [EBX + 0x344],0x0
// 00504ac5: JZ 0x00504add
//   XREF to: 00504add (CONDITIONAL_JUMP)
// 00504ac7: LEA EAX,[EBX + 0x344]
// 00504acd: PUSH EAX
// 00504ace: MOV EDI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 00504ad4: PUSH EDI
//   XREF to: 02d05310 (DATA)
// 00504ad5: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 00504ada: ADD ESP,0x8
// 00504add: FLD float ptr [EBX + 0x2dc]
//   Label: LAB_00504add
// 00504ae3: FCOMP double ptr [0x006310b0]
//   XREF to: 006310b0 (READ)
// 00504ae9: FNSTSW AX
// 00504aeb: SAHF
// 00504aec: JBE 0x00504af7
//   XREF to: 00504af7 (CONDITIONAL_JUMP)
// 00504aee: CMP byte ptr [EBX + 0x2e0],0x0
// 00504af5: JNZ 0x00504aff
//   XREF to: 00504aff (CONDITIONAL_JUMP)
// 00504af7: ADD ESP,0x8
//   Label: LAB_00504af7
// 00504afa: POP EBP
// 00504afb: POP EDI
// 00504afc: POP ESI
// 00504afd: POP EBX
// 00504afe: RET
// 00504aff: ADD EBX,0x2e0
//   Label: LAB_00504aff
// 00504b05: PUSH EBX
// 00504b06: MOV EBP,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 00504b0c: PUSH EBP
//   XREF to: 02d05310 (DATA)
// 00504b0d: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 00504b12: ADD ESP,0x8
// 00504b15: ADD ESP,0x8
// 00504b18: POP EBP
// 00504b19: POP EDI
// 00504b1a: POP ESI
// 00504b1b: POP EBX
// 00504b1c: RET
