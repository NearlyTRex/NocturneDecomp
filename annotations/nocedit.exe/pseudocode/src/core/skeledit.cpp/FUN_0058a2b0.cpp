// Name: core_skeledit.cpp_FUN_0058a2b0
// Address: 0058a2b0
// Address Range: [[0058a2b0, 0058a3c8]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058a2b0()
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070 (004be070) at 004be0fe [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_FUN_004f3fa0 (004f3fa0) at 004f3fdb [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 (0058a260) at 0058a29a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_DATA_s_0064a258
//   TerminatedCString s_ART_s_RAW_0064a261
//   TerminatedCString s_ART_s_ACT_0064a26d
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* Signature: void core_skeledit.cpp_FUN_0058a2b0(int param_1, FILE* param_2, undefined4 param_3) */

void core_skeledit_cpp_FUN_0058a2b0(void)

{
  char cVar1;
  char *pcVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int in_stack_0000000c;
  FILE *in_stack_00000010;
  FILE *in_stack_00000014;
  FILE *in_stack_00000018;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  int iStack_c;
  ushort *puVar7;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x3c);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000010,"DATA\\%s\n",in_stack_0000000c + 0x8f5c);
  iStack_c = 0;
  if (0 < in_stack_00000010[6]._handle) {
    puVar7 = &in_stack_00000010[6]._ungotten;
    do {
      iVar3 = 0;
      if (0 < (int)in_stack_00000010[6]._bufsize) {
        pcVar2 = (char *)(puVar7 + 4);
        do {
          pcVar6 = (char *)&uStack_20;
          pcVar4 = pcVar2;
          do {
            cVar1 = *pcVar4;
            *pcVar6 = cVar1;
            pcVar5 = (char *)&uStack_20;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
            pcVar5 = (char *)&uStack_20;
          } while (cVar1 != '\0');
          do {
            pcVar4 = pcVar5;
            if (*pcVar5 == '.') goto LAB_0058a355;
            if (*pcVar5 == '\0') break;
            pcVar4 = pcVar5 + 1;
            if (*pcVar4 == '.') goto LAB_0058a355;
            pcVar5 = pcVar5 + 2;
          } while (*pcVar4 != '\0');
          pcVar4 = (char *)0x0;
LAB_0058a355:
          if (pcVar4 != (char *)0x0) {
            *pcVar4 = '\0';
          }
          crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000014,"ART\\%s.RAW\n",&uStack_20);
          uStack_20 = auStack_1c;
          crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000018,"ART\\%s.ACT\n");
          iVar3 = iVar3 + 1;
          pcVar2 = pcVar2 + 0x48;
        } while (iVar3 < (int)in_stack_00000018[6]._bufsize);
      }
      puVar7 = puVar7 + 0xb40;
      iStack_c = iStack_c + 1;
    } while (iStack_c < in_stack_00000010[6]._handle);
  }
  return;
}


// Assembly code:
// 0058a2b0: PUSH 0x3c
//   Label: core_skeledit.cpp_FUN_0058a2b0
// 0058a2b5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058a2ba: PUSH EBX
// 0058a2bb: PUSH ESI
// 0058a2bc: PUSH EDI
// 0058a2bd: PUSH EBP
// 0058a2be: SUB ESP,0x1c
// 0058a2c1: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0058a2c5: ADD EBX,0x8f5c
// 0058a2cb: PUSH EBX
// 0058a2cc: PUSH 0x64a258
//   XREF to: 0064a258 (DATA)
// 0058a2d1: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 0058a2d5: PUSH EDX
// 0058a2d6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058a2db: ADD ESP,0xc
// 0058a2de: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0058a2e2: XOR ECX,ECX
// 0058a2e4: MOV ESI,dword ptr [EBX + 0xb8]
// 0058a2ea: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0058a2ee: TEST ESI,ESI
// 0058a2f0: JLE 0x0058a3c1
//   XREF to: 0058a3c1 (CONDITIONAL_JUMP)
// 0058a2f6: ADD EBX,0xc0
// 0058a2fc: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0058a300: MOV EBX,dword ptr [ESP + 0x30]
//   Label: LAB_0058a300
//   XREF to: Stack[0x4] (READ)
// 0058a304: MOV EDX,dword ptr [EBX + 0xbc]
// 0058a30a: XOR EBP,EBP
// 0058a30c: TEST EDX,EDX
// 0058a30e: JLE 0x0058a398
//   XREF to: 0058a398 (CONDITIONAL_JUMP)
// 0058a314: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0058a318: ADD EBX,0x8
// 0058a31b: MOV EDI,ESP
//   Label: LAB_0058a31b
// 0058a31d: MOV ESI,EBX
// 0058a31f: MOV DL,0x2e
// 0058a321: PUSH EDI
// 0058a322: MOV AL,byte ptr [ESI]
//   Label: LAB_0058a322
// 0058a324: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x2c] (DATA)
// 0058a326: CMP AL,0x0
// 0058a328: JZ 0x0058a33a
//   XREF to: 0058a33a (CONDITIONAL_JUMP)
// 0058a32a: MOV AL,byte ptr [ESI + 0x1]
// 0058a32d: ADD ESI,0x2
// 0058a330: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x2b] (WRITE)
// 0058a333: ADD EDI,0x2
// 0058a336: CMP AL,0x0
// 0058a338: JNZ 0x0058a322
//   XREF to: 0058a322 (CONDITIONAL_JUMP)
// 0058a33a: POP EDI
//   Label: LAB_0058a33a
// 0058a33b: MOV ESI,ESP
// 0058a33d: MOV AL,byte ptr [ESI]
//   Label: LAB_0058a33d
//   XREF to: Stack[-0x2c] (DATA)
// 0058a33f: CMP AL,DL
// 0058a341: JZ 0x0058a355
//   XREF to: 0058a355 (CONDITIONAL_JUMP)
// 0058a343: CMP AL,0x0
// 0058a345: JZ 0x0058a353
//   XREF to: 0058a353 (CONDITIONAL_JUMP)
// 0058a347: INC ESI
// 0058a348: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x2b] (DATA)
// 0058a34a: CMP AL,DL
// 0058a34c: JZ 0x0058a355
//   XREF to: 0058a355 (CONDITIONAL_JUMP)
// 0058a34e: INC ESI
// 0058a34f: CMP AL,0x0
// 0058a351: JNZ 0x0058a33d
//   XREF to: 0058a33d (CONDITIONAL_JUMP)
// 0058a353: SUB ESI,ESI
//   Label: LAB_0058a353
// 0058a355: TEST ESI,ESI
//   Label: LAB_0058a355
// 0058a357: JZ 0x0058a35c
//   XREF to: 0058a35c (CONDITIONAL_JUMP)
// 0058a359: MOV byte ptr [ESI],0x0
//   XREF to: Stack[-0x29] (DATA)
// 0058a35c: MOV ESI,ESP
//   Label: LAB_0058a35c
// 0058a35e: PUSH ESI
// 0058a35f: PUSH 0x64a261
//   XREF to: 0064a261 (DATA)
// 0058a364: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 0058a368: PUSH ECX
// 0058a369: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058a36e: ADD ESP,0xc
// 0058a371: MOV ESI,ESP
// 0058a373: PUSH ESI
// 0058a374: PUSH 0x64a26d
//   XREF to: 0064a26d (DATA)
// 0058a379: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 0058a37d: PUSH ESI
// 0058a37e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058a383: ADD ESP,0xc
// 0058a386: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0058a38a: INC EBP
// 0058a38b: MOV EDI,dword ptr [ESI + 0xbc]
// 0058a391: ADD EBX,0x48
// 0058a394: CMP EBP,EDI
// 0058a396: JL 0x0058a31b
//   XREF to: 0058a31b (CONDITIONAL_JUMP)
// 0058a398: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_0058a398
//   XREF to: Stack[-0x14] (READ)
// 0058a39c: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0058a3a0: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0058a3a4: ADD EDI,0x1680
// 0058a3aa: INC EBP
// 0058a3ab: MOV EAX,dword ptr [ESI + 0xb8]
// 0058a3b1: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0058a3b5: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 0058a3b9: CMP EBP,EAX
// 0058a3bb: JL 0x0058a300
//   XREF to: 0058a300 (CONDITIONAL_JUMP)
// 0058a3c1: ADD ESP,0x1c
//   Label: LAB_0058a3c1
// 0058a3c4: POP EBP
// 0058a3c5: POP EDI
// 0058a3c6: POP ESI
// 0058a3c7: POP EBX
// 0058a3c8: RET
