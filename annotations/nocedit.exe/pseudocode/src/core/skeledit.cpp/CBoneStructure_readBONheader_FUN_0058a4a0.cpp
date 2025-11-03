// Name: core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0
// Address: 0058a4a0
// Address Range: [[0058a4a0, 0058aa01]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0(CBoneStructure * this_ptr)
// Cross-references:
//   core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0 (0058a3d0) at 0058a43f [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c235 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00592f26 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_d_0064a2e7
//   TerminatedCString s_core_skeledit_cpp_0064a2ee
//   TerminatedCString s_Too_bony_0064a303
//   TerminatedCString s_d_0064a30d
//   TerminatedCString s_core_skeledit_cpp_0064a319
//   TerminatedCString s_CBoneStructure_readBONhe_0064a32e
//   TerminatedCString s_core_skeledit_cpp_0064a362
//   TerminatedCString s_Hell_froze_while_shuffli_0064a377
//   TerminatedCString s_core_skeledit_cpp_0064a39b
//   TerminatedCString s_Hell_froze_while_shuffli_0064a3b0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined1 DAT_03659830
//   undefined1 DAT_03659831
//   undefined1 DAT_03659832
//   undefined1 DAT_03659833
//   undefined4 DAT_0365984e
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeledit.cpp_FUN_0058ac30
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0(CBoneStructure *this_ptr)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar9;
  char *pcVar10;
  streambuf **ppsVar11;
  int *piVar12;
  undefined1 *puVar13;
  char *pcVar14;
  streambuf **ppsVar15;
  byte bVar16;
  streambuf **str2;
  streambuf **ppsVar17;
  FILE *in_stack_00000010;
  FILE *in_stack_00000014;
  int *in_stack_00000018;
  FILE *in_stack_0000001c;
  int *in_stack_00000020;
  undefined1 *puVar18;
  int aiStack_22c [100];
  int aiStack_9c [8];
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  streambuf **local_14;
  streambuf **ppsStack_c;
  streambuf **str1;
  
  bVar16 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x25c);
  iVar5 = 1;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000010);
    if (iVar4 < 0) break;
  } while ((iVar4 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  crt_stdio_c_fscanf_FUN_005fe7c0
            (in_stack_00000014,"%d,%d\n",in_stack_00000010,in_stack_00000018);
  if (100 < (int)in_stack_00000014->_ptr) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x2a6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too bony!");
  }
  iVar5 = 1;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000001c);
    if (iVar4 < 0) break;
  } while ((iVar4 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  iVar5 = 0;
  if (0 < (int)in_stack_0000001c->_ptr) {
    local_1c = &in_stack_0000001c->_cnt;
    local_14 = &in_stack_0000001c[1]._link;
    pcVar14 = &DAT_03659830;
    do {
      pcVar10 = (char *)(iVar5 * 0x84 + local_20);
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_0000001c,"\"%[^\"]\",%d\n","\"%[^\"]\",%d\n",pcVar10,local_18);
      pcVar6 = pcVar14 + 0x1e;
      do {
        cVar1 = *pcVar10;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      iVar5 = iVar5 + 1;
      local_18 = local_18 + 0x84;
      pcVar14 = pcVar6;
    } while (iVar5 < *in_stack_00000018);
  }
  iVar5 = 1;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000001c);
    if (iVar4 < 0) break;
  } while ((iVar4 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  if ((*(byte *)(in_stack_00000020 + 3) & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 699;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::readBONheader - error reading file!");
  }
  iVar5 = 0;
  if (0 < *in_stack_00000020) {
    iVar4 = 0;
    do {
      *(undefined4 *)((int)aiStack_22c + iVar4) = 0;
      for (iVar2 = iVar5; -1 < iVar2; iVar2 = in_stack_00000020[iVar2 * 0x21 + 9]) {
        *(int *)((int)aiStack_22c + iVar4) = *(int *)((int)aiStack_22c + iVar4) + 1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < *in_stack_00000020);
  }
  iVar5 = *in_stack_00000020 + -1;
  if (-1 < iVar5) {
    local_14 = (streambuf **)(in_stack_00000020 + 1);
    ppsStack_c = (streambuf **)(in_stack_00000020 + 1);
    do {
      this_ptr = (CBoneStructure *)0x0;
      if (0 < iVar5) {
        piVar7 = (int *)(ppsStack_c + 9);
        piVar8 = aiStack_22c;
        str1 = local_14;
        str2 = local_14;
        ppsVar17 = ppsStack_c;
        do {
          ppsVar17 = ppsVar17 + 0x21;
          str2 = str2 + 0x21;
          puVar9 = piVar8 + 1;
          iVar4 = aiStack_22c[(int)this_ptr] - aiStack_22c[(int)(this_ptr + 1)];
          if (iVar4 == 0) {
            iVar4 = crt_string_c_stricmp_FUN_005fe7f0((char *)str1,(char *)str2);
          }
          if (0 < iVar4) {
            ppsVar15 = ppsStack_c + (int)this_ptr * 0x21;
            ppsVar11 = ppsVar15;
            piVar12 = aiStack_9c;
            for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar12 = (int)*ppsVar11;
              ppsVar11 = ppsVar11 + (uint)bVar16 * -2 + 1;
              piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
            }
            *(undefined2 *)piVar12 = *(undefined2 *)ppsVar11;
            local_7c = (int)ppsVar15[8];
            local_78 = *piVar7;
            local_74 = piVar7[1];
            local_70 = piVar7[2];
            local_6c = piVar7[3];
            local_68 = piVar7[4];
            local_64 = piVar7[5];
            local_60 = piVar7[6];
            local_5c = piVar7[7];
            local_58 = piVar7[8];
            local_54 = piVar7[9];
            local_50 = piVar7[10];
            local_4c = piVar7[0xb];
            local_48 = piVar7[0xc];
            local_44 = piVar7[0xd];
            local_40 = piVar7[0xe];
            local_3c = piVar7[0xf];
            local_38 = piVar7[0x10];
            local_34 = piVar7[0x11];
            local_30 = piVar7[0x12];
            local_2c = piVar7[0x13];
            local_28 = piVar7[0x14];
            local_24 = piVar7[0x15];
            local_20 = piVar7[0x16];
            local_1c = (int *)piVar7[0x17];
            ppsVar11 = ppsVar17;
            for (iVar4 = 0x21; iVar4 != 0; iVar4 = iVar4 + -1) {
              *ppsVar15 = *ppsVar11;
              ppsVar11 = ppsVar11 + (uint)bVar16 * -2 + 1;
              ppsVar15 = ppsVar15 + (uint)bVar16 * -2 + 1;
            }
            piVar12 = aiStack_9c;
            ppsVar11 = ppsVar17;
            for (iVar4 = 0x21; iVar4 != 0; iVar4 = iVar4 + -1) {
              *ppsVar11 = (streambuf *)*piVar12;
              piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
              ppsVar11 = ppsVar11 + (uint)bVar16 * -2 + 1;
            }
            uVar3 = *piVar8;
            *piVar8 = *puVar9;
            *puVar9 = uVar3;
          }
          piVar7 = piVar7 + 0x21;
          str1 = str1 + 0x21;
          this_ptr = this_ptr + 1;
          piVar8 = puVar9;
        } while ((int)this_ptr < iVar5);
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  iVar5 = 0;
  if (0 < *in_stack_00000020) {
    puVar13 = &DAT_03659830;
    piVar8 = in_stack_00000020;
    do {
      puVar18 = puVar13;
      iVar4 = core_skeledit_cpp_FUN_0058ac30();
      piVar8[0xce5] = iVar4;
      if (iVar4 < 0) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x2e8;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze while shuffling bones...",puVar18);
      }
      piVar8 = piVar8 + 1;
      iVar5 = iVar5 + 1;
      puVar13 = puVar13 + 0x1e;
    } while (iVar5 < *in_stack_00000020);
  }
  iVar5 = 0;
  piVar8 = in_stack_00000020;
  if (0 < *in_stack_00000020) {
    do {
      if ((-1 < piVar8[9]) &&
         (iVar4 = in_stack_00000020[piVar8[9] + 0xce5], piVar8[9] = iVar4, iVar5 <= iVar4)) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x2f0;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze while shuffling parent bones...");
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 0x21;
    } while (iVar5 < *in_stack_00000020);
  }
  return;
}


// Assembly code:
// 0058a4a0: PUSH 0x25c
//   Label: core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0
// 0058a4a5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058a4aa: PUSH EBX
// 0058a4ab: PUSH ESI
// 0058a4ac: PUSH EDI
// 0058a4ad: PUSH EBP
// 0058a4ae: SUB ESP,0x238
// 0058a4b4: MOV EBX,0x1
// 0058a4b9: MOV ESI,dword ptr [ESP + 0x250]
//   XREF to: Stack[0x8] (READ)
// 0058a4c0: PUSH ESI
//   Label: LAB_0058a4c0
// 0058a4c1: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058a4c6: ADD ESP,0x4
// 0058a4c9: TEST EAX,EAX
// 0058a4cb: JL 0x0058a4d7
//   XREF to: 0058a4d7 (CONDITIONAL_JUMP)
// 0058a4cd: CMP EAX,0xa
// 0058a4d0: JNZ 0x0058a4c0
//   XREF to: 0058a4c0 (CONDITIONAL_JUMP)
// 0058a4d2: DEC EBX
// 0058a4d3: TEST EBX,EBX
// 0058a4d5: JG 0x0058a4c0
//   XREF to: 0058a4c0 (CONDITIONAL_JUMP)
// 0058a4d7: MOV EDX,dword ptr [ESP + 0x254]
//   Label: LAB_0058a4d7
//   XREF to: Stack[0xc] (READ)
// 0058a4de: PUSH EDX
// 0058a4df: MOV ECX,dword ptr [ESP + 0x250]
//   XREF to: Stack[0x4] (READ)
// 0058a4e6: PUSH ECX
// 0058a4e7: PUSH 0x64a2e7
//   XREF to: 0064a2e7 (DATA)
// 0058a4ec: MOV EBX,dword ptr [ESP + 0x25c]
//   XREF to: Stack[0x8] (READ)
// 0058a4f3: PUSH EBX
// 0058a4f4: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a4f9: ADD ESP,0x10
// 0058a4fc: MOV EAX,dword ptr [ESP + 0x24c]
//   XREF to: Stack[0x4] (READ)
// 0058a503: CMP dword ptr [EAX],0x64
// 0058a506: JG 0x0058a98a
//   XREF to: 0058a98a (CONDITIONAL_JUMP)
// 0058a50c: MOV EBX,0x1
//   Label: LAB_0058a50c
// 0058a511: MOV ESI,dword ptr [ESP + 0x250]
//   XREF to: Stack[0x8] (READ)
// 0058a518: PUSH ESI
//   Label: LAB_0058a518
// 0058a519: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058a51e: ADD ESP,0x4
// 0058a521: TEST EAX,EAX
// 0058a523: JL 0x0058a52f
//   XREF to: 0058a52f (CONDITIONAL_JUMP)
// 0058a525: CMP EAX,0xa
// 0058a528: JNZ 0x0058a518
//   XREF to: 0058a518 (CONDITIONAL_JUMP)
// 0058a52a: DEC EBX
// 0058a52b: TEST EBX,EBX
// 0058a52d: JG 0x0058a518
//   XREF to: 0058a518 (CONDITIONAL_JUMP)
// 0058a52f: MOV EAX,dword ptr [ESP + 0x24c]
//   Label: LAB_0058a52f
//   XREF to: Stack[0x4] (READ)
// 0058a536: MOV EDX,dword ptr [EAX]
// 0058a538: XOR EBP,EBP
// 0058a53a: TEST EDX,EDX
// 0058a53c: JLE 0x0058a5d0
//   XREF to: 0058a5d0 (CONDITIONAL_JUMP)
// 0058a542: ADD EAX,0x4
// 0058a545: MOV dword ptr [ESP + 0x214],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0058a54c: MOV EAX,dword ptr [ESP + 0x24c]
//   XREF to: Stack[0x4] (READ)
// 0058a553: ADD EAX,0x24
// 0058a556: MOV EBX,0x3659830
//   XREF to: 03659830 (DATA)
// 0058a55b: MOV dword ptr [ESP + 0x21c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0058a562: IMUL ESI,EBP,0x84
//   Label: LAB_0058a562
// 0058a568: MOV EDI,dword ptr [ESP + 0x21c]
//   XREF to: Stack[-0x2c] (READ)
// 0058a56f: MOV ECX,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x34] (READ)
// 0058a576: PUSH EDI
// 0058a577: ADD ESI,ECX
// 0058a579: PUSH ESI
// 0058a57a: PUSH 0x64a30d
//   XREF to: 0064a30d (DATA)
// 0058a57f: MOV EAX,dword ptr [ESP + 0x25c]
//   XREF to: Stack[0x8] (READ)
// 0058a586: PUSH EAX
// 0058a587: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a58c: ADD ESP,0x10
// 0058a58f: MOV EDI,EBX
// 0058a591: ADD EBX,0x1e
// 0058a594: PUSH EDI
//   XREF to: 03659830 (DATA)
// 0058a595: MOV AL,byte ptr [ESI]
//   Label: LAB_0058a595
// 0058a597: MOV byte ptr [EDI],AL
//   XREF to: 03659830 (WRITE)
//   XREF to: 03659832 (WRITE)
// 0058a599: CMP AL,0x0
// 0058a59b: JZ 0x0058a5ad
//   XREF to: 0058a5ad (CONDITIONAL_JUMP)
// 0058a59d: MOV AL,byte ptr [ESI + 0x1]
// 0058a5a0: ADD ESI,0x2
// 0058a5a3: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 03659831 (WRITE)
//   XREF to: 03659833 (WRITE)
// 0058a5a6: ADD EDI,0x2
// 0058a5a9: CMP AL,0x0
// 0058a5ab: JNZ 0x0058a595
//   XREF to: 0058a595 (CONDITIONAL_JUMP)
// 0058a5ad: POP EDI
//   Label: LAB_0058a5ad
// 0058a5ae: MOV EDX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[-0x2c] (READ)
// 0058a5b5: MOV EAX,dword ptr [ESP + 0x24c]
//   XREF to: Stack[0x4] (READ)
// 0058a5bc: INC EBP
// 0058a5bd: ADD EDX,0x84
// 0058a5c3: MOV ECX,dword ptr [EAX]
// 0058a5c5: MOV dword ptr [ESP + 0x21c],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0058a5cc: CMP EBP,ECX
// 0058a5ce: JL 0x0058a562
//   XREF to: 0058a562 (CONDITIONAL_JUMP)
// 0058a5d0: MOV EBX,0x1
//   Label: LAB_0058a5d0
// 0058a5d5: MOV ESI,dword ptr [ESP + 0x250]
//   XREF to: Stack[0x8] (READ)
// 0058a5dc: PUSH ESI
//   Label: LAB_0058a5dc
// 0058a5dd: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058a5e2: ADD ESP,0x4
// 0058a5e5: TEST EAX,EAX
// 0058a5e7: JL 0x0058a5f3
//   XREF to: 0058a5f3 (CONDITIONAL_JUMP)
// 0058a5e9: CMP EAX,0xa
// 0058a5ec: JNZ 0x0058a5dc
//   XREF to: 0058a5dc (CONDITIONAL_JUMP)
// 0058a5ee: DEC EBX
// 0058a5ef: TEST EBX,EBX
// 0058a5f1: JG 0x0058a5dc
//   XREF to: 0058a5dc (CONDITIONAL_JUMP)
// 0058a5f3: MOV EAX,dword ptr [ESP + 0x250]
//   Label: LAB_0058a5f3
//   XREF to: Stack[0x8] (READ)
// 0058a5fa: TEST byte ptr [EAX + 0xc],0x20
// 0058a5fe: JZ 0x0058a623
//   XREF to: 0058a623 (CONDITIONAL_JUMP)
// 0058a600: MOV EBX,0x64a319
//   XREF to: 0064a319 (PARAM)
// 0058a605: MOV ESI,0x2bb
// 0058a60a: PUSH 0x64a32e
//   XREF to: 0064a32e (DATA)
// 0058a60f: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0058a615: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0058a61b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058a620: ADD ESP,0x4
// 0058a623: MOV EAX,dword ptr [ESP + 0x24c]
//   Label: LAB_0058a623
//   XREF to: Stack[0x4] (READ)
// 0058a62a: MOV EDI,dword ptr [EAX]
// 0058a62c: XOR EBX,EBX
// 0058a62e: TEST EDI,EDI
// 0058a630: JLE 0x0058a66f
//   XREF to: 0058a66f (CONDITIONAL_JUMP)
// 0058a632: MOV ECX,dword ptr [ESP + 0x24c]
//   XREF to: Stack[0x4] (READ)
// 0058a639: XOR EBP,EBP
// 0058a63b: XOR ESI,ESI
//   Label: LAB_0058a63b
// 0058a63d: MOV EAX,EBX
// 0058a63f: MOV dword ptr [ESP + EBP*0x1],ESI
//   XREF to: Stack[-0x248] (DATA)
// 0058a642: TEST EBX,EBX
// 0058a644: JL 0x0058a65e
//   XREF to: 0058a65e (CONDITIONAL_JUMP)
// 0058a646: MOV EDX,EBP
// 0058a648: IMUL EAX,EAX,0x84
//   Label: LAB_0058a648
// 0058a64e: MOV EDI,dword ptr [ESP + EDX*0x1]
//   XREF to: Stack[-0x248] (DATA)
// 0058a651: INC EDI
// 0058a652: ADD EAX,ECX
// 0058a654: MOV dword ptr [ESP + EDX*0x1],EDI
//   XREF to: Stack[-0x248] (DATA)
// 0058a657: MOV EAX,dword ptr [EAX + 0x24]
// 0058a65a: TEST EAX,EAX
// 0058a65c: JGE 0x0058a648
//   XREF to: 0058a648 (CONDITIONAL_JUMP)
// 0058a65e: MOV EAX,dword ptr [ESP + 0x24c]
//   Label: LAB_0058a65e
//   XREF to: Stack[0x4] (READ)
// 0058a665: INC EBX
// 0058a666: MOV EDX,dword ptr [EAX]
// 0058a668: ADD EBP,0x4
// 0058a66b: CMP EBX,EDX
// 0058a66d: JL 0x0058a63b
//   XREF to: 0058a63b (CONDITIONAL_JUMP)
// 0058a66f: MOV EAX,dword ptr [ESP + 0x24c]
//   Label: LAB_0058a66f
//   XREF to: Stack[0x4] (READ)
// 0058a676: MOV EAX,dword ptr [EAX]
// 0058a678: DEC EAX
// 0058a679: MOV dword ptr [ESP + 0x224],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0058a680: TEST EAX,EAX
// 0058a682: JL 0x0058a8ed
//   XREF to: 0058a8ed (CONDITIONAL_JUMP)
// 0058a688: MOV EAX,dword ptr [ESP + 0x24c]
//   XREF to: Stack[0x4] (READ)
// 0058a68f: ADD EAX,0x4
// 0058a692: MOV dword ptr [ESP + 0x218],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0058a699: MOV dword ptr [ESP + 0x220],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0058a6a0: XOR EBP,EBP
//   Label: LAB_0058a6a0
// 0058a6a2: MOV EAX,dword ptr [ESP + 0x224]
//   XREF to: Stack[-0x24] (READ)
// 0058a6a9: MOV dword ptr [ESP + 0x234],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0058a6b0: TEST EAX,EAX
// 0058a6b2: JLE 0x0058a8d6
//   XREF to: 0058a8d6 (CONDITIONAL_JUMP)
// 0058a6b8: MOV EAX,dword ptr [ESP + 0x218]
//   XREF to: Stack[-0x30] (READ)
// 0058a6bf: MOV EBP,ESP
// 0058a6c1: MOV dword ptr [ESP + 0x228],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0058a6c8: ADD EAX,0x84
// 0058a6cd: MOV EBX,dword ptr [ESP + 0x220]
//   XREF to: Stack[-0x28] (READ)
// 0058a6d4: MOV dword ptr [ESP + 0x22c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058a6db: MOV EAX,dword ptr [ESP + 0x220]
//   XREF to: Stack[-0x28] (READ)
// 0058a6e2: ADD EBP,0x4
// 0058a6e5: ADD EAX,0x84
// 0058a6ea: ADD EBX,0x24
// 0058a6ed: MOV dword ptr [ESP + 0x230],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0058a6f4: MOV EDX,dword ptr [ESP + 0x234]
//   Label: LAB_0058a6f4
//   XREF to: Stack[-0x14] (READ)
// 0058a6fb: MOV EAX,dword ptr [ESP + EDX*0x4]
// 0058a6fe: SUB EAX,dword ptr [ESP + EDX*0x4 + 0x4]
// 0058a702: JNZ 0x0058a71c
//   XREF to: 0058a71c (CONDITIONAL_JUMP)
// 0058a704: MOV ESI,dword ptr [ESP + 0x22c]
//   XREF to: Stack[-0x1c] (READ)
// 0058a70b: PUSH ESI
// 0058a70c: MOV EDI,dword ptr [ESP + 0x22c]
//   XREF to: Stack[-0x20] (READ)
// 0058a713: PUSH EDI
// 0058a714: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0058a719: ADD ESP,0x8
// 0058a71c: TEST EAX,EAX
//   Label: LAB_0058a71c
// 0058a71e: JLE 0x0058a874
//   XREF to: 0058a874 (CONDITIONAL_JUMP)
// 0058a724: IMUL EDX,dword ptr [ESP + 0x234],0x84
//   XREF to: Stack[-0x14] (READ)
// 0058a72f: MOV ECX,dword ptr [ESP + 0x220]
//   XREF to: Stack[-0x28] (READ)
// 0058a736: LEA EDI,[ESP + 0x190]
//   XREF to: Stack[-0xb8] (DATA)
// 0058a73d: ADD EDX,ECX
// 0058a73f: MOV ECX,0x7
// 0058a744: MOV ESI,EDX
// 0058a746: MOVSD.REP ES:EDI,ESI
// 0058a748: MOVSW ES:EDI,ESI
// 0058a74a: MOV EAX,dword ptr [EDX + 0x20]
// 0058a74d: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 0058a754: MOV EAX,dword ptr [EBX]
// 0058a756: MOV dword ptr [ESP + 0x1b4],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 0058a75d: MOV EAX,dword ptr [EBX + 0x4]
// 0058a760: MOV dword ptr [ESP + 0x1b8],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 0058a767: MOV EAX,dword ptr [EBX + 0x8]
// 0058a76a: MOV dword ptr [ESP + 0x1bc],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 0058a771: MOV EAX,dword ptr [EBX + 0xc]
// 0058a774: MOV dword ptr [ESP + 0x1c0],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0058a77b: MOV EAX,dword ptr [EBX + 0x10]
// 0058a77e: MOV dword ptr [ESP + 0x1c4],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0058a785: MOV EAX,dword ptr [EBX + 0x14]
// 0058a788: MOV dword ptr [ESP + 0x1c8],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0058a78f: MOV EAX,dword ptr [EBX + 0x18]
// 0058a792: MOV dword ptr [ESP + 0x1cc],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0058a799: MOV EAX,dword ptr [EBX + 0x1c]
// 0058a79c: MOV dword ptr [ESP + 0x1d0],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0058a7a3: MOV EAX,dword ptr [EBX + 0x20]
// 0058a7a6: MOV dword ptr [ESP + 0x1d4],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0058a7ad: MOV EAX,dword ptr [EBX + 0x24]
// 0058a7b0: MOV dword ptr [ESP + 0x1d8],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0058a7b7: MOV EAX,dword ptr [EBX + 0x28]
// 0058a7ba: MOV dword ptr [ESP + 0x1dc],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0058a7c1: MOV EAX,dword ptr [EBX + 0x2c]
// 0058a7c4: MOV dword ptr [ESP + 0x1e0],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 0058a7cb: MOV EAX,dword ptr [EBX + 0x30]
// 0058a7ce: MOV dword ptr [ESP + 0x1e4],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0058a7d5: MOV EAX,dword ptr [EBX + 0x34]
// 0058a7d8: MOV dword ptr [ESP + 0x1e8],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0058a7df: MOV EAX,dword ptr [EBX + 0x38]
// 0058a7e2: MOV dword ptr [ESP + 0x1ec],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0058a7e9: MOV EAX,dword ptr [EBX + 0x3c]
// 0058a7ec: MOV dword ptr [ESP + 0x1f0],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0058a7f3: MOV EAX,dword ptr [EBX + 0x40]
// 0058a7f6: MOV dword ptr [ESP + 0x1f4],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0058a7fd: MOV EAX,dword ptr [EBX + 0x44]
// 0058a800: MOV dword ptr [ESP + 0x1f8],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0058a807: MOV EAX,dword ptr [EBX + 0x48]
// 0058a80a: MOV dword ptr [ESP + 0x1fc],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0058a811: MOV EAX,dword ptr [EBX + 0x4c]
// 0058a814: MOV dword ptr [ESP + 0x200],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0058a81b: MOV EAX,dword ptr [EBX + 0x50]
// 0058a81e: MOV ECX,0x21
// 0058a823: MOV dword ptr [ESP + 0x204],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0058a82a: MOV EAX,dword ptr [EBX + 0x54]
// 0058a82d: MOV ESI,dword ptr [ESP + 0x230]
//   XREF to: Stack[-0x18] (READ)
// 0058a834: MOV dword ptr [ESP + 0x208],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0058a83b: MOV EAX,dword ptr [EBX + 0x58]
// 0058a83e: MOV EDI,EDX
// 0058a840: MOV dword ptr [ESP + 0x20c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0058a847: MOV EAX,dword ptr [EBX + 0x5c]
// 0058a84a: MOVSD.REP ES:EDI,ESI
// 0058a84c: MOV ECX,0x21
// 0058a851: MOV EDI,dword ptr [ESP + 0x230]
//   XREF to: Stack[-0x18] (READ)
// 0058a858: LEA ESI,[ESP + 0x190]
//   XREF to: Stack[-0xb8] (DATA)
// 0058a85f: MOV dword ptr [ESP + 0x210],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0058a866: MOVSD.REP ES:EDI,ESI
// 0058a868: MOV EAX,dword ptr [EBP]
//   XREF to: Stack[-0x244] (DATA)
// 0058a86b: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x248] (READ)
// 0058a86e: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x248] (WRITE)
// 0058a871: MOV dword ptr [EBP],EDX
//   XREF to: Stack[-0x244] (DATA)
// 0058a874: MOV EAX,dword ptr [ESP + 0x228]
//   Label: LAB_0058a874
//   XREF to: Stack[-0x20] (READ)
// 0058a87b: MOV EDX,dword ptr [ESP + 0x22c]
//   XREF to: Stack[-0x1c] (READ)
// 0058a882: MOV ECX,dword ptr [ESP + 0x230]
//   XREF to: Stack[-0x18] (READ)
// 0058a889: MOV ESI,dword ptr [ESP + 0x234]
//   XREF to: Stack[-0x14] (READ)
// 0058a890: MOV EDI,dword ptr [ESP + 0x224]
//   XREF to: Stack[-0x24] (READ)
// 0058a897: ADD EBP,0x4
// 0058a89a: ADD EBX,0x84
// 0058a8a0: ADD EAX,0x84
// 0058a8a5: ADD EDX,0x84
// 0058a8ab: ADD ECX,0x84
// 0058a8b1: INC ESI
// 0058a8b2: MOV dword ptr [ESP + 0x228],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0058a8b9: MOV dword ptr [ESP + 0x22c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058a8c0: MOV dword ptr [ESP + 0x230],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0058a8c7: MOV dword ptr [ESP + 0x234],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0058a8ce: CMP ESI,EDI
// 0058a8d0: JL 0x0058a6f4
//   XREF to: 0058a6f4 (CONDITIONAL_JUMP)
// 0058a8d6: MOV EBX,dword ptr [ESP + 0x224]
//   Label: LAB_0058a8d6
//   XREF to: Stack[-0x24] (READ)
// 0058a8dd: DEC EBX
// 0058a8de: MOV dword ptr [ESP + 0x224],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0058a8e5: TEST EBX,EBX
// 0058a8e7: JGE 0x0058a6a0
//   XREF to: 0058a6a0 (CONDITIONAL_JUMP)
// 0058a8ed: MOV EAX,dword ptr [ESP + 0x24c]
//   Label: LAB_0058a8ed
//   XREF to: Stack[0x4] (READ)
// 0058a8f4: MOV EDI,dword ptr [EAX]
// 0058a8f6: XOR EBX,EBX
// 0058a8f8: TEST EDI,EDI
// 0058a8fa: JLE 0x0058a936
//   XREF to: 0058a936 (CONDITIONAL_JUMP)
// 0058a8fc: MOV ESI,0x3659830
//   XREF to: 03659830 (DATA)
// 0058a901: MOV EDI,dword ptr [ESP + 0x24c]
//   XREF to: Stack[0x4] (READ)
// 0058a908: MOV EBP,EAX
// 0058a90a: PUSH ESI
//   Label: LAB_0058a90a
//   XREF to: 03659830 (DATA)
//   XREF to: 0365984e (DATA)
// 0058a90b: PUSH EDI
// 0058a90c: CALL core_skeledit.cpp_FUN_0058ac30
//   XREF to: 0058ac30 (UNCONDITIONAL_CALL)
// 0058a911: ADD ESP,0x8
// 0058a914: MOV dword ptr [EBP + 0x3394],EAX
// 0058a91a: TEST EAX,EAX
// 0058a91c: JL 0x0058a9b2
//   XREF to: 0058a9b2 (CONDITIONAL_JUMP)
// 0058a922: MOV EAX,dword ptr [ESP + 0x24c]
//   Label: LAB_0058a922
//   XREF to: Stack[0x4] (READ)
// 0058a929: ADD EBP,0x4
// 0058a92c: INC EBX
// 0058a92d: MOV EDX,dword ptr [EAX]
// 0058a92f: ADD ESI,0x1e
// 0058a932: CMP EBX,EDX
// 0058a934: JL 0x0058a90a
//   XREF to: 0058a90a (CONDITIONAL_JUMP)
// 0058a936: MOV EAX,dword ptr [ESP + 0x24c]
//   Label: LAB_0058a936
//   XREF to: Stack[0x4] (READ)
// 0058a93d: MOV ECX,dword ptr [EAX]
// 0058a93f: XOR EBP,EBP
// 0058a941: TEST ECX,ECX
// 0058a943: JLE 0x0058a97f
//   XREF to: 0058a97f (CONDITIONAL_JUMP)
// 0058a945: MOV EBX,EAX
// 0058a947: MOV EDI,dword ptr [EBX + 0x24]
//   Label: LAB_0058a947
// 0058a94a: TEST EDI,EDI
// 0058a94c: JL 0x0058a96b
//   XREF to: 0058a96b (CONDITIONAL_JUMP)
// 0058a94e: MOV EDX,dword ptr [ESP + 0x24c]
//   XREF to: Stack[0x4] (READ)
// 0058a955: LEA EAX,[EDI*0x4 + 0x0]
// 0058a95c: ADD EAX,EDX
// 0058a95e: MOV EAX,dword ptr [EAX + 0x3394]
// 0058a964: MOV dword ptr [EBX + 0x24],EAX
// 0058a967: CMP EBP,EAX
// 0058a969: JLE 0x0058a9da
//   XREF to: 0058a9da (CONDITIONAL_JUMP)
// 0058a96b: MOV EAX,dword ptr [ESP + 0x24c]
//   Label: LAB_0058a96b
//   XREF to: Stack[0x4] (READ)
// 0058a972: INC EBP
// 0058a973: MOV ESI,dword ptr [EAX]
// 0058a975: ADD EBX,0x84
// 0058a97b: CMP EBP,ESI
// 0058a97d: JL 0x0058a947
//   XREF to: 0058a947 (CONDITIONAL_JUMP)
// 0058a97f: ADD ESP,0x238
//   Label: LAB_0058a97f
// 0058a985: POP EBP
// 0058a986: POP EDI
// 0058a987: POP ESI
// 0058a988: POP EBX
// 0058a989: RET
// 0058a98a: MOV EDI,0x64a2ee
//   Label: LAB_0058a98a
//   XREF to: 0064a2ee (DATA)
// 0058a98f: MOV EBP,0x2a6
// 0058a994: PUSH 0x64a303
//   XREF to: 0064a303 (DATA)
// 0058a999: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0058a99f: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0058a9a5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058a9aa: ADD ESP,0x4
// 0058a9ad: JMP 0x0058a50c
//   XREF to: 0058a50c (UNCONDITIONAL_JUMP)
// 0058a9b2: MOV EDX,0x64a362
//   Label: LAB_0058a9b2
//   XREF to: 0064a362 (PARAM)
// 0058a9b7: MOV ECX,0x2e8
// 0058a9bc: PUSH 0x64a377
//   XREF to: 0064a377 (DATA)
// 0058a9c1: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0058a9c7: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0058a9cd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058a9d2: ADD ESP,0x4
// 0058a9d5: JMP 0x0058a922
//   XREF to: 0058a922 (UNCONDITIONAL_JUMP)
// 0058a9da: MOV ESI,0x64a39b
//   Label: LAB_0058a9da
//   XREF to: 0064a39b (DATA)
// 0058a9df: MOV EDI,0x2f0
// 0058a9e4: PUSH 0x64a3b0
//   XREF to: 0064a3b0 (DATA)
// 0058a9e9: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0058a9ef: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0058a9f5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058a9fa: ADD ESP,0x4
// 0058a9fd: JMP 0x0058a96b
//   XREF to: 0058a96b (UNCONDITIONAL_JUMP)
