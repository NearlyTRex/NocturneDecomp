// Name: core_msnedit.cpp_FUN_00537330
// Address: 00537330
// Address Range: [[00537330, 0053740f]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00537330()
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 005388c2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_d_0063b7a4
//   TerminatedCString s_abstract_0063b7aa
//   undefined4 s_(abstract)_0063b7ab
//   undefined4 s_abstract)_0063b7ac
//   undefined4 s_bstract)_0063b7ad
//   int g_NumActorClassTypes
//   CDemonActorType*[200] g_ActorClassRegistrations
//   undefined4 g_ActorClassRegistrations[1]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_00537330(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_msnedit_cpp_FUN_00537330(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar7;
  int in_stack_00000008;
  CStrList *in_stack_0000000c;
  char acStack_78 [92];
  char *local_1c;
  char *local_18;
  int local_14;
  char *pcVar6;
  
  bVar7 = 0;
  local_14 = 0;
  if (0 < g_NumActorClassTypes) {
    local_18 = (char *)((int)&in_stack_0000000c->item_count + 1);
    local_1c = acStack_78 + (int)in_stack_0000000c * 2 + -8;
    iVar3 = 0;
    do {
      iVar2 = *(int *)((int)g_ActorClassRegistrations + iVar3);
      if (in_stack_00000008 == *(int *)(iVar2 + 0x28)) {
        crt_memory_c_memset_FUN_005fde40(&stack0xffffff80,0x20,100);
        crt_stdio_c_sprintf_FUN_005fdbd0(local_18,"%s\t%d",iVar2);
        if (*(int *)(iVar2 + 0x2c) == 0) {
          pcVar4 = "\t(abstract)";
          iVar2 = -1;
          pcVar6 = acStack_78;
          do {
            pcVar5 = pcVar6;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar5;
          } while (cVar1 != '\0');
          pcVar5 = pcVar5 + -1;
          do {
            cVar1 = *pcVar4;
            *pcVar5 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar5[1] = cVar1;
            pcVar5 = pcVar5 + 2;
          } while (cVar1 != '\0');
        }
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(in_stack_0000000c,acStack_78);
        core_msnedit_cpp_FUN_00537330();
      }
      local_14 = local_14 + 1;
      iVar3 = iVar3 + 4;
    } while (local_14 < g_NumActorClassTypes);
  }
  return;
}


// Assembly code:
// 00537330: PUSH EBX
//   Label: core_msnedit.cpp_FUN_00537330
// 00537331: PUSH ESI
// 00537332: PUSH EDI
// 00537333: PUSH EBP
// 00537334: SUB ESP,0x70
// 00537337: MOV EBX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0xc] (READ)
// 0053733e: XOR EDX,EDX
// 00537340: MOV ECX,dword ptr [0x00822044]
//   XREF to: 00822044 (READ)
// 00537346: MOV dword ptr [ESP + 0x6c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0053734a: TEST ECX,ECX
// 0053734c: JLE 0x00537389
//   XREF to: 00537389 (CONDITIONAL_JUMP)
// 0053734e: LEA EDI,[EBX + 0x1]
// 00537351: MOV dword ptr [ESP + 0x68],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00537355: ADD EBX,EBX
// 00537357: MOV EDI,ESP
// 00537359: ADD EDI,EBX
// 0053735b: XOR EBP,EBP
// 0053735d: MOV dword ptr [ESP + 0x64],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00537361: MOV EBX,dword ptr [EBP + 0x822048]
//   Label: LAB_00537361
//   XREF to: 00822048 (READ)
//   XREF to: 0082204c (READ)
// 00537367: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x8] (READ)
// 0053736e: CMP EAX,dword ptr [EBX + 0x28]
// 00537371: JZ 0x00537391
//   XREF to: 00537391 (CONDITIONAL_JUMP)
// 00537373: MOV EBX,dword ptr [ESP + 0x6c]
//   Label: LAB_00537373
//   XREF to: Stack[-0x14] (READ)
// 00537377: MOV ESI,dword ptr [0x00822044]
//   XREF to: 00822044 (READ)
// 0053737d: INC EBX
// 0053737e: ADD EBP,0x4
// 00537381: MOV dword ptr [ESP + 0x6c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00537385: CMP EBX,ESI
// 00537387: JL 0x00537361
//   XREF to: 00537361 (CONDITIONAL_JUMP)
// 00537389: ADD ESP,0x70
//   Label: LAB_00537389
// 0053738c: POP EBP
// 0053738d: POP EDI
// 0053738e: POP ESI
// 0053738f: POP EBX
// 00537390: RET
// 00537391: PUSH 0x64
//   Label: LAB_00537391
// 00537393: PUSH 0x20
// 00537395: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x80] (DATA)
// 00537399: PUSH EDI
// 0053739a: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0053739f: ADD ESP,0xc
// 005373a2: MOV EDX,dword ptr [EBX + 0x34]
// 005373a5: PUSH EDX
// 005373a6: PUSH EBX
// 005373a7: PUSH 0x63b7a4
//   XREF to: 0063b7a4 (DATA)
// 005373ac: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x1c] (READ)
// 005373b0: PUSH ECX
// 005373b1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005373b6: MOV ESI,dword ptr [EBX + 0x2c]
// 005373b9: ADD ESP,0x10
// 005373bc: TEST ESI,ESI
// 005373be: JNZ 0x005373e9
//   XREF to: 005373e9 (CONDITIONAL_JUMP)
// 005373c0: MOV ESI,0x63b7aa
//   XREF to: 0063b7aa (DATA)
// 005373c5: MOV EDI,ESP
// 005373c7: PUSH EDI
// 005373c8: SUB ECX,ECX
// 005373ca: DEC ECX
// 005373cb: MOV AL,0x0
// 005373cd: SCASB.REPNE ES:EDI
// 005373cf: DEC EDI
// 005373d0: MOV AL,byte ptr [ESI]
//   Label: LAB_005373d0
//   XREF to: 0063b7aa (READ)
//   XREF to: 0063b7ac (READ)
// 005373d2: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x80] (DATA)
// 005373d4: CMP AL,0x0
// 005373d6: JZ 0x005373e8
//   XREF to: 005373e8 (CONDITIONAL_JUMP)
// 005373d8: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063b7ab (READ)
//   XREF to: 0063b7ad (READ)
// 005373db: ADD ESI,0x2
// 005373de: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x7f] (WRITE)
// 005373e1: ADD EDI,0x2
// 005373e4: CMP AL,0x0
// 005373e6: JNZ 0x005373d0
//   XREF to: 005373d0 (CONDITIONAL_JUMP)
// 005373e8: POP EDI
//   Label: LAB_005373e8
// 005373e9: MOV EDI,ESP
//   Label: LAB_005373e9
// 005373eb: PUSH EDI
// 005373ec: MOV EDI,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x4] (READ)
// 005373f3: PUSH EDI
// 005373f4: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005373f9: ADD ESP,0x8
// 005373fc: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x18] (READ)
// 00537400: PUSH EAX
// 00537401: PUSH EBX
// 00537402: PUSH EDI
// 00537403: CALL core_msnedit.cpp_FUN_00537330
//   XREF to: 00537330 (UNCONDITIONAL_CALL)
// 00537408: ADD ESP,0xc
// 0053740b: JMP 0x00537373
//   XREF to: 00537373 (UNCONDITIONAL_JUMP)
