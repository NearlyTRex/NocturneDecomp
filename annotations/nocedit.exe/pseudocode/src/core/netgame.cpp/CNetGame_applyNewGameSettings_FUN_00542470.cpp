// Name: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470
// Address: 00542470
// Address Range: [[00542470, 00542af1]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470()
// Cross-references:
//   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 (005406a0) at 00540e56 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063db4d
//   TerminatedCString s_CNetGame_applyNewGameSet_0063db61
//   TerminatedCString s_core_netgame_cpp_0063dbad
//   TerminatedCString s_Hell_froze_0063dbc1
//   undefined4 DAT_00680a04
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
//   core_netgame.cpp_CNetGame_FUN_00543e20
//   core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00
//   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

/* Signature: undefined1 core_netgame.cpp_CNetGame_applyNewGameSettings(undefined4 param_1,
   undefined4 param_2) */

undefined4 core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  byte bVar15;
  int *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 auStackY_2088 [1988];
  undefined4 local_163;
  char acStack_15f [80];
  int local_10f;
  char acStack_10b [20];
  int local_f7 [2];
  int aiStack_ef [13];
  undefined4 uStack_b8;
  undefined4 auStack_b4 [4];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined2 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int aiStack_40 [6];
  int *local_28;
  undefined4 *local_24;
  char *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 *local_14;
  
  bVar15 = 0;
  if ((*in_stack_00000004 != 2) || (in_stack_00000004[1] != 1)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x7e6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::applyNewGameSettings - should only call this in client lobby mode");
  }
  puVar8 = in_stack_00000008;
  puVar9 = (undefined4 *)&stack0xfffffe94;
  for (iVar5 = 0x2c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + (uint)bVar15 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar15 * -2 + 1;
  }
  *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
  iVar5 = -1;
  in_stack_00000008[0x5b] = local_163;
  aiStack_40[5] = -1;
  iVar10 = 0;
  if (0 < local_10f) {
    piVar3 = local_f7;
    do {
      if (((short)piVar3[1] == *(short *)(in_stack_00000008 + in_stack_00000008[0x45] * 0x1e + 0x10)
          ) && (*piVar3 == in_stack_00000008[in_stack_00000008[0x45] * 0x1e + 0xf])) {
        iVar5 = iVar10;
      }
      if (((short)piVar3[1] == *(short *)(in_stack_00000008 + in_stack_00000008[0x44] * 0x1e + 0x10)
          ) && (*piVar3 == in_stack_00000008[in_stack_00000008[0x44] * 0x1e + 0xf])) {
        aiStack_40[5] = iVar10;
      }
      iVar10 = iVar10 + 1;
      piVar3 = piVar3 + 10;
    } while (iVar10 < local_10f);
  }
  if ((aiStack_40[5] < 0) || (iVar5 < 0)) {
    return 0;
  }
  pcVar6 = acStack_15f;
  pcVar11 = (char *)(in_stack_00000008 + 0x46);
  do {
    cVar1 = *pcVar6;
    *pcVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
  aiStack_40[3] = 0;
  if (0 < (int)in_stack_00000008[7]) {
    aiStack_40[2] = 0;
    local_20 = (char *)(in_stack_00000008 + 8);
    local_28 = in_stack_00000008 + 0xf;
    local_24 = in_stack_00000008;
    do {
      iVar5 = 0;
      if (0 < local_10f) {
        piVar3 = local_f7;
        do {
          if (((short)piVar3[1] == (short)local_28[1]) && (*piVar3 == *local_28)) break;
          iVar5 = iVar5 + 1;
          piVar3 = piVar3 + 10;
        } while (iVar5 < local_10f);
      }
      if (iVar5 == local_10f) {
        if (aiStack_40[3] == in_stack_00000008[0x45]) {
          g_CurrentFilename = "..\\core\\netgame.cpp";
          g_CurrentLineNumber = 0x811;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
        }
        core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00();
      }
      else {
        *(int *)((int)aiStack_40 + aiStack_40[2]) = iVar5;
        pcVar11 = acStack_10b + iVar5 * 0x28;
        pcVar6 = local_20;
        if (aiStack_40[3] == in_stack_00000008[0x45]) {
          DAT_00680a04 = aiStack_40[3] ^ in_stack_00000008[0x45];
          iVar10 = crt_string_c_strcmp_FUN_005fef20(local_20,pcVar11);
          if (iVar10 != 0) {
            DAT_00680a04 = 1;
          }
          if (local_24[0x19] == aiStack_ef[iVar5 * 10 + 2]) {
            if (DAT_00680a04 == 0) goto LAB_005429ed;
          }
          else {
            DAT_00680a04 = 1;
          }
          core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0();
        }
        else {
          do {
            cVar1 = *pcVar11;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar11[1];
            pcVar11 = pcVar11 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
          in_stack_00000008[aiStack_40[3] * 0x1e + 0x19] = aiStack_ef[iVar5 * 10 + 2];
          in_stack_00000008[aiStack_40[3] * 0x1e + 0xd] = aiStack_ef[iVar5 * 10];
          in_stack_00000008[aiStack_40[3] * 0x1e + 0xe] = aiStack_ef[iVar5 * 10 + 1];
        }
LAB_005429ed:
        local_20 = local_20 + 0x78;
        local_24 = local_24 + 0x1e;
        aiStack_40[3] = aiStack_40[3] + 1;
        acStack_10b[iVar5 * 0x28] = '\0';
        local_28 = local_28 + 0x1e;
        aiStack_40[2] = aiStack_40[2] + 4;
      }
    } while (aiStack_40[3] < (int)in_stack_00000008[7]);
  }
  iVar5 = 0;
  if (0 < local_10f) {
    iVar10 = 0;
    do {
      if (acStack_10b[iVar10] == '\0') break;
      iVar4 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0();
      in_stack_00000008[iVar4 * 0x1e + 0x19] = *(undefined4 *)((int)aiStack_ef + iVar10 + 8);
      aiStack_40[iVar4] = iVar5;
      iVar5 = iVar5 + 1;
      iVar10 = iVar10 + 0x28;
    } while (iVar5 < local_10f);
  }
  in_stack_00000008[0x44] = aiStack_40[in_stack_00000008[0x44]];
  in_stack_00000008[0x45] = aiStack_40[in_stack_00000008[0x45]];
  local_18 = in_stack_00000008[7] + -1;
  if (-1 < in_stack_00000008[7] + -1) {
    local_1c = in_stack_00000008 + 8;
    do {
      iVar5 = 0;
      if (0 < local_18) {
        aiStack_40[4] = 0;
        local_14 = local_1c + 7;
        puVar8 = local_1c;
        do {
          puVar9 = puVar8 + 0x1e;
          if (*(int *)((int)aiStack_40 + aiStack_40[4] + 4) <
              *(int *)((int)aiStack_40 + aiStack_40[4])) {
            puVar14 = (undefined4 *)((int)aiStack_40 + aiStack_40[4] + 4);
            uVar2 = *(undefined4 *)((int)aiStack_40 + aiStack_40[4]);
            *(undefined4 *)((int)aiStack_40 + aiStack_40[4]) = *puVar14;
            *puVar14 = uVar2;
            puVar13 = local_1c + iVar5 * 0x1e;
            puVar14 = puVar13 + (uint)bVar15 * -2 + 1;
            uStack_b8 = *puVar13;
            puVar12 = auStack_b4 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1;
            puVar7 = puVar14 + (uint)bVar15 * -2 + 1;
            auStack_b4[(uint)bVar15 * -2] = *puVar14;
            puVar14 = local_14;
            *puVar12 = *puVar7;
            puVar12[(uint)bVar15 * -2 + 1] = puVar7[(uint)bVar15 * -2 + 1];
            (puVar12 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
                 (puVar7 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
            local_a4 = puVar13[5];
            local_a0 = puVar13[6];
            core_netgame_cpp_CNetGame_FUN_00543e20();
            local_94 = *(undefined2 *)(puVar14 + 1);
            local_90 = puVar13[9];
            local_8c = puVar13[10];
            local_88 = puVar13[0xb];
            local_84 = puVar13[0xc];
            local_80 = puVar13[0xd];
            local_7c = puVar13[0xe];
            local_78 = puVar13[0xf];
            local_74 = puVar13[0x10];
            local_70 = puVar13[0x11];
            local_6c = puVar13[0x12];
            local_68 = puVar8[0x13];
            local_64 = puVar8[0x14];
            local_60 = puVar8[0x15];
            local_5c = puVar8[0x16];
            local_58 = puVar8[0x17];
            local_54 = puVar8[0x18];
            local_50 = puVar8[0x19];
            local_4c = puVar8[0x1a];
            local_48 = puVar8[0x1b];
            local_44 = puVar8[0x1c];
            aiStack_40[0] = puVar8[0x1d];
            puVar8 = puVar9;
            for (iVar10 = 0x1e; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar13 = *puVar8;
              puVar8 = puVar8 + (uint)bVar15 * -2 + 1;
              puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
            }
            puVar8 = auStack_b4;
            puVar14 = puVar9;
            for (iVar10 = 0x1e; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar14 = *puVar8;
              puVar8 = puVar8 + (uint)bVar15 * -2 + 1;
              puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
            }
          }
          iVar5 = iVar5 + 1;
          aiStack_40[4] = aiStack_40[4] + 4;
          local_14 = local_14 + 0x1e;
          puVar8 = puVar9;
        } while (iVar5 < local_18);
      }
      local_18 = local_18 + -1;
    } while (-1 < local_18);
  }
  return 1;
}


// Assembly code:
// 00542470: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470
// 00542471: PUSH ESI
// 00542472: PUSH EDI
// 00542473: PUSH EBP
// 00542474: SUB ESP,0x160
// 0054247a: MOV ESI,dword ptr [ESP + 0x178]
//   XREF to: Stack[0x8] (READ)
// 00542481: MOV EAX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x4] (READ)
// 00542488: CMP dword ptr [EAX],0x2
// 0054248b: JNZ 0x00542493
//   XREF to: 00542493 (CONDITIONAL_JUMP)
// 0054248d: CMP dword ptr [EAX + 0x4],0x1
// 00542491: JZ 0x005424b6
//   XREF to: 005424b6 (CONDITIONAL_JUMP)
// 00542493: MOV EBX,0x63db4d
//   Label: LAB_00542493
//   XREF to: 0063db4d (PARAM)
// 00542498: MOV EDI,0x7e6
// 0054249d: PUSH 0x63db61
//   XREF to: 0063db61 (DATA)
// 005424a2: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 005424a8: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005424ae: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005424b3: ADD ESP,0x4
// 005424b6: MOV ECX,0x2c
//   Label: LAB_005424b6
// 005424bb: MOV EDI,ESP
// 005424bd: MOVSD.REP ES:EDI,ESI
// 005424bf: MOVSB ES:EDI,ESI
// 005424c0: MOV EDX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x4] (READ)
// 005424c7: MOV EAX,dword ptr [ESP + 0x9]
//   XREF to: Stack[-0x167] (READ)
// 005424cb: MOV EBP,0xffffffff
// 005424d0: MOV dword ptr [EDX + 0x16c],EAX
// 005424d6: MOV dword ptr [ESP + 0x140],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 005424dd: MOV EAX,dword ptr [ESP + 0x5d]
//   XREF to: Stack[-0x113] (READ)
// 005424e1: XOR EDI,EDI
// 005424e3: TEST EAX,EAX
// 005424e5: JLE 0x00542562
//   XREF to: 00542562 (CONDITIONAL_JUMP)
// 005424eb: MOV EAX,dword ptr [EDX + 0x110]
// 005424f1: SHL EAX,0x3
// 005424f4: MOV EDX,EAX
// 005424f6: SHL EAX,0x4
// 005424f9: SUB EAX,EDX
// 005424fb: MOV EDX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x4] (READ)
// 00542502: MOV EDX,dword ptr [EDX + 0x114]
// 00542508: MOV EBX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x4] (READ)
// 0054250f: SHL EDX,0x3
// 00542512: ADD EBX,0x20
// 00542515: MOV ECX,EDX
// 00542517: SHL EDX,0x4
// 0054251a: ADD EAX,EBX
// 0054251c: SUB EDX,ECX
// 0054251e: ADD EAX,0x1c
// 00542521: ADD EDX,EBX
// 00542523: LEA ECX,[ESP + 0x61]
//   XREF to: Stack[-0x10f] (DATA)
// 00542527: ADD EDX,0x1c
// 0054252a: LEA ESI,[ECX + 0x14]
//   XREF to: Stack[-0xfb] (DATA)
// 0054252d: MOV CX,word ptr [ESI + 0x4]
//   Label: LAB_0054252d
//   XREF to: Stack[-0xf7] (READ)
// 00542531: CMP CX,word ptr [EDX + 0x4]
// 00542535: JNZ 0x0054253f
//   XREF to: 0054253f (CONDITIONAL_JUMP)
// 00542537: MOV EBX,dword ptr [ESI]
//   XREF to: Stack[-0xfb] (DATA)
// 00542539: CMP EBX,dword ptr [EDX]
// 0054253b: JNZ 0x0054253f
//   XREF to: 0054253f (CONDITIONAL_JUMP)
// 0054253d: MOV EBP,EDI
// 0054253f: MOV CX,word ptr [ESI + 0x4]
//   Label: LAB_0054253f
//   XREF to: Stack[-0xf7] (READ)
// 00542543: CMP CX,word ptr [EAX + 0x4]
// 00542547: JNZ 0x00542556
//   XREF to: 00542556 (CONDITIONAL_JUMP)
// 00542549: MOV EBX,dword ptr [ESI]
//   XREF to: Stack[-0xfb] (DATA)
// 0054254b: CMP EBX,dword ptr [EAX]
// 0054254d: JNZ 0x00542556
//   XREF to: 00542556 (CONDITIONAL_JUMP)
// 0054254f: MOV dword ptr [ESP + 0x140],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 00542556: MOV ECX,dword ptr [ESP + 0x5d]
//   Label: LAB_00542556
//   XREF to: Stack[-0x113] (READ)
// 0054255a: INC EDI
// 0054255b: ADD ESI,0x28
// 0054255e: CMP EDI,ECX
// 00542560: JL 0x0054252d
//   XREF to: 0054252d (CONDITIONAL_JUMP)
// 00542562: CMP dword ptr [ESP + 0x140],0x0
//   Label: LAB_00542562
//   XREF to: Stack[-0x30] (READ)
// 0054256a: JL 0x00542935
//   XREF to: 00542935 (CONDITIONAL_JUMP)
// 00542570: TEST EBP,EBP
// 00542572: JL 0x00542935
//   XREF to: 00542935 (CONDITIONAL_JUMP)
// 00542578: MOV EDI,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x4] (READ)
// 0054257f: LEA ESI,[ESP + 0xd]
//   XREF to: Stack[-0x163] (DATA)
// 00542583: ADD EDI,0x118
// 00542589: PUSH EDI
// 0054258a: MOV AL,byte ptr [ESI]
//   Label: LAB_0054258a
//   XREF to: Stack[-0x163] (DATA)
// 0054258c: MOV byte ptr [EDI],AL
// 0054258e: CMP AL,0x0
// 00542590: JZ 0x005425a2
//   XREF to: 005425a2 (CONDITIONAL_JUMP)
// 00542592: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x162] (READ)
// 00542595: ADD ESI,0x2
// 00542598: MOV byte ptr [EDI + 0x1],AL
// 0054259b: ADD EDI,0x2
// 0054259e: CMP AL,0x0
// 005425a0: JNZ 0x0054258a
//   XREF to: 0054258a (CONDITIONAL_JUMP)
// 005425a2: POP EDI
//   Label: LAB_005425a2
// 005425a3: MOV EAX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x4] (READ)
// 005425aa: XOR ESI,ESI
// 005425ac: MOV EDI,dword ptr [EAX + 0x1c]
// 005425af: MOV dword ptr [ESP + 0x138],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 005425b6: TEST EDI,EDI
// 005425b8: JLE 0x00542694
//   XREF to: 00542694 (CONDITIONAL_JUMP)
// 005425be: MOV EDX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x4] (READ)
// 005425c5: ADD EAX,0x20
// 005425c8: MOV dword ptr [ESP + 0x134],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 005425cf: ADD EDX,0x3c
// 005425d2: MOV dword ptr [ESP + 0x14c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005425d9: MOV EAX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x4] (READ)
// 005425e0: MOV dword ptr [ESP + 0x144],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 005425e7: MOV dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005425ee: MOV EAX,dword ptr [ESP + 0x5d]
//   Label: LAB_005425ee
//   XREF to: Stack[-0x113] (READ)
// 005425f2: XOR EBX,EBX
// 005425f4: TEST EAX,EAX
// 005425f6: JLE 0x00542623
//   XREF to: 00542623 (CONDITIONAL_JUMP)
// 005425f8: LEA EAX,[ESP + 0x61]
//   XREF to: Stack[-0x10f] (DATA)
// 005425fc: MOV ECX,dword ptr [ESP + 0x5d]
//   XREF to: Stack[-0x113] (READ)
// 00542600: MOV EBP,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x2c] (READ)
// 00542607: ADD EAX,0x14
// 0054260a: MOV SI,word ptr [EAX + 0x4]
//   Label: LAB_0054260a
//   XREF to: Stack[-0xf7] (READ)
// 0054260e: CMP SI,word ptr [EBP + 0x4]
// 00542612: JNZ 0x00542942
//   XREF to: 00542942 (CONDITIONAL_JUMP)
// 00542618: MOV ESI,dword ptr [EAX]
//   XREF to: Stack[-0xfb] (DATA)
// 0054261a: CMP ESI,dword ptr [EBP]
// 0054261d: JNZ 0x00542942
//   XREF to: 00542942 (CONDITIONAL_JUMP)
// 00542623: CMP EBX,dword ptr [ESP + 0x5d]
//   Label: LAB_00542623
//   XREF to: Stack[-0x113] (READ)
// 00542627: JNZ 0x00542953
//   XREF to: 00542953 (CONDITIONAL_JUMP)
// 0054262d: MOV EDX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x4] (READ)
// 00542634: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x38] (READ)
// 0054263b: CMP EAX,dword ptr [EDX + 0x114]
// 00542641: JNZ 0x00542665
//   XREF to: 00542665 (CONDITIONAL_JUMP)
// 00542643: MOV EAX,0x63dbad
//   XREF to: 0063dbad (PARAM)
// 00542648: MOV EDX,0x811
// 0054264d: PUSH 0x63dbc1
//   XREF to: 0063dbc1 (DATA)
// 00542652: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00542657: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0054265d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00542662: ADD ESP,0x4
// 00542665: MOV ECX,dword ptr [ESP + 0x138]
//   Label: LAB_00542665
//   XREF to: Stack[-0x38] (READ)
// 0054266c: PUSH ECX
// 0054266d: MOV EBX,dword ptr [ESP + 0x178]
//   XREF to: Stack[0x4] (READ)
// 00542674: PUSH EBX
// 00542675: CALL core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00
//   XREF to: 00542b00 (UNCONDITIONAL_CALL)
// 0054267a: ADD ESP,0x8
// 0054267d: MOV EDX,dword ptr [ESP + 0x174]
//   Label: LAB_0054267d
//   XREF to: Stack[0x4] (READ)
// 00542684: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x38] (READ)
// 0054268b: CMP EAX,dword ptr [EDX + 0x1c]
// 0054268e: JL 0x005425ee
//   XREF to: 005425ee (CONDITIONAL_JUMP)
// 00542694: MOV EDI,dword ptr [ESP + 0x5d]
//   Label: LAB_00542694
//   XREF to: Stack[-0x113] (READ)
// 00542698: XOR ESI,ESI
// 0054269a: TEST EDI,EDI
// 0054269c: JLE 0x005426b2
//   XREF to: 005426b2 (CONDITIONAL_JUMP)
// 0054269e: MOV EDI,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x4] (READ)
// 005426a5: XOR EBX,EBX
// 005426a7: CMP byte ptr [ESP + EBX*0x1 + 0x61],0x0
//   Label: LAB_005426a7
// 005426ac: JNZ 0x00542aa3
//   XREF to: 00542aa3 (CONDITIONAL_JUMP)
// 005426b2: MOV EAX,dword ptr [ESP + 0x174]
//   Label: LAB_005426b2
//   XREF to: Stack[0x4] (READ)
// 005426b9: MOV EAX,dword ptr [EAX + 0x110]
// 005426bf: MOV EDX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x4] (READ)
// 005426c6: MOV EAX,dword ptr [ESP + EAX*0x4 + 0x12c]
// 005426cd: MOV dword ptr [EDX + 0x110],EAX
// 005426d3: MOV EAX,dword ptr [EDX + 0x114]
// 005426d9: MOV EAX,dword ptr [ESP + EAX*0x4 + 0x12c]
// 005426e0: MOV dword ptr [EDX + 0x114],EAX
// 005426e6: MOV EAX,dword ptr [EDX + 0x1c]
// 005426e9: DEC EAX
// 005426ea: MOV dword ptr [ESP + 0x154],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005426f1: TEST EAX,EAX
// 005426f3: JL 0x00542925
//   XREF to: 00542925 (CONDITIONAL_JUMP)
// 005426f9: LEA EAX,[EDX + 0x20]
// 005426fc: MOV dword ptr [ESP + 0x150],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00542703: XOR EBP,EBP
//   Label: LAB_00542703
// 00542705: MOV EAX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x1c] (READ)
// 0054270c: MOV dword ptr [ESP + 0x15c],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 00542713: TEST EAX,EAX
// 00542715: JLE 0x0054290e
//   XREF to: 0054290e (CONDITIONAL_JUMP)
// 0054271b: MOV EAX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x20] (READ)
// 00542722: MOV EBX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x20] (READ)
// 00542729: MOV dword ptr [ESP + 0x13c],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 00542730: ADD EAX,0x1c
// 00542733: ADD EBX,0x78
// 00542736: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0054273d: MOV EDX,dword ptr [ESP + 0x13c]
//   Label: LAB_0054273d
//   XREF to: Stack[-0x34] (READ)
// 00542744: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x34] (READ)
// 0054274b: MOV ECX,dword ptr [ESP + EDX*0x1 + 0x130]
// 00542752: CMP ECX,dword ptr [ESP + EAX*0x1 + 0x12c]
// 00542759: JGE 0x005428cb
//   XREF to: 005428cb (CONDITIONAL_JUMP)
// 0054275f: LEA EBP,[ESP + 0x12c]
//   XREF to: Stack[-0x44] (DATA)
// 00542766: LEA EAX,[EDX + 0x4]
// 00542769: ADD EBP,EAX
// 0054276b: LEA EAX,[ESP + 0x12c]
//   XREF to: Stack[-0x44] (DATA)
// 00542772: ADD EAX,EDX
// 00542774: MOV EDX,dword ptr [EBP]
// 00542777: MOV ECX,dword ptr [EAX]
// 00542779: MOV dword ptr [EAX],EDX
// 0054277b: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x14] (READ)
// 00542782: SHL EAX,0x3
// 00542785: MOV dword ptr [EBP],ECX
// 00542788: MOV EBP,EAX
// 0054278a: SHL EAX,0x4
// 0054278d: SUB EAX,EBP
// 0054278f: MOV EBP,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x20] (READ)
// 00542796: ADD EBP,EAX
// 00542798: LEA EDI,[ESP + 0xb4]
//   XREF to: Stack[-0xbc] (DATA)
// 0054279f: MOV ESI,EBP
// 005427a1: MOVSD ES:EDI,ESI
// 005427a2: MOVSD ES:EDI,ESI
// 005427a3: MOVSD ES:EDI,ESI
// 005427a4: MOVSD ES:EDI,ESI
// 005427a5: MOVSD ES:EDI,ESI
// 005427a6: MOV EAX,dword ptr [EBP + 0x14]
// 005427a9: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005427b0: MOV EDI,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x18] (READ)
// 005427b7: MOV EAX,dword ptr [EBP + 0x18]
// 005427ba: PUSH EDI
// 005427bb: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005427c2: LEA EAX,[ESP + 0xd4]
//   XREF to: Stack[-0xa0] (DATA)
// 005427c9: PUSH EAX
// 005427ca: CALL core_netgame.cpp_CNetGame_FUN_00543e20
//   XREF to: 00543e20 (UNCONDITIONAL_CALL)
// 005427cf: ADD ESP,0x8
// 005427d2: MOV AX,word ptr [EDI + 0x4]
// 005427d6: MOV word ptr [ESP + 0xd4],AX
//   XREF to: Stack[-0x9c] (WRITE)
// 005427de: MOV EAX,dword ptr [EBP + 0x24]
// 005427e1: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005427e8: MOV EAX,dword ptr [EBP + 0x28]
// 005427eb: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 005427f2: MOV EAX,dword ptr [EBP + 0x2c]
// 005427f5: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 005427fc: MOV EAX,dword ptr [EBP + 0x30]
// 005427ff: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 00542806: MOV EAX,dword ptr [EBP + 0x34]
// 00542809: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 00542810: MOV EAX,dword ptr [EBP + 0x38]
// 00542813: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0054281a: MOV EAX,dword ptr [EBP + 0x3c]
// 0054281d: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 00542824: MOV EAX,dword ptr [EBP + 0x40]
// 00542827: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0054282e: MOV EAX,dword ptr [EBP + 0x44]
// 00542831: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00542838: MOV EAX,dword ptr [EBP + 0x48]
// 0054283b: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00542842: MOV EAX,dword ptr [EBX + -0x2c]
// 00542845: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0054284c: MOV EAX,dword ptr [EBX + -0x28]
// 0054284f: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 00542856: MOV EAX,dword ptr [EBX + -0x24]
// 00542859: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00542860: MOV EAX,dword ptr [EBX + -0x20]
// 00542863: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0054286a: MOV EAX,dword ptr [EBX + -0x1c]
// 0054286d: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00542874: MOV EAX,dword ptr [EBX + -0x18]
// 00542877: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0054287e: MOV EAX,dword ptr [EBX + -0x14]
// 00542881: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00542888: MOV EAX,dword ptr [EBX + -0x10]
// 0054288b: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00542892: MOV EAX,dword ptr [EBX + -0xc]
// 00542895: MOV dword ptr [ESP + 0x120],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0054289c: MOV EAX,dword ptr [EBX + -0x8]
// 0054289f: MOV ESI,EBX
// 005428a1: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005428a8: MOV ECX,0x1e
// 005428ad: MOV EAX,dword ptr [EBX + -0x4]
// 005428b0: MOV EDI,EBP
// 005428b2: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005428b9: MOVSD.REP ES:EDI,ESI
// 005428bb: MOV ECX,0x1e
// 005428c0: LEA ESI,[ESP + 0xb4]
//   XREF to: Stack[-0xbc] (DATA)
// 005428c7: MOV EDI,EBX
// 005428c9: MOVSD.REP ES:EDI,ESI
// 005428cb: MOV EDX,dword ptr [ESP + 0x13c]
//   Label: LAB_005428cb
//   XREF to: Stack[-0x34] (READ)
// 005428d2: MOV ECX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x18] (READ)
// 005428d9: MOV ESI,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x14] (READ)
// 005428e0: MOV EDI,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x1c] (READ)
// 005428e7: ADD EBX,0x78
// 005428ea: ADD EDX,0x4
// 005428ed: ADD ECX,0x78
// 005428f0: INC ESI
// 005428f1: MOV dword ptr [ESP + 0x13c],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 005428f8: MOV dword ptr [ESP + 0x158],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005428ff: MOV dword ptr [ESP + 0x15c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00542906: CMP ESI,EDI
// 00542908: JL 0x0054273d
//   XREF to: 0054273d (CONDITIONAL_JUMP)
// 0054290e: MOV ESI,dword ptr [ESP + 0x154]
//   Label: LAB_0054290e
//   XREF to: Stack[-0x1c] (READ)
// 00542915: DEC ESI
// 00542916: MOV dword ptr [ESP + 0x154],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0054291d: TEST ESI,ESI
// 0054291f: JGE 0x00542703
//   XREF to: 00542703 (CONDITIONAL_JUMP)
// 00542925: MOV EAX,0x1
//   Label: LAB_00542925
// 0054292a: ADD ESP,0x160
// 00542930: POP EBP
// 00542931: POP EDI
// 00542932: POP ESI
// 00542933: POP EBX
// 00542934: RET
// 00542935: XOR EAX,EAX
//   Label: LAB_00542935
// 00542937: ADD ESP,0x160
// 0054293d: POP EBP
// 0054293e: POP EDI
// 0054293f: POP ESI
// 00542940: POP EBX
// 00542941: RET
// 00542942: INC EBX
//   Label: LAB_00542942
// 00542943: ADD EAX,0x28
// 00542946: CMP EBX,ECX
// 00542948: JL 0x0054260a
//   XREF to: 0054260a (CONDITIONAL_JUMP)
// 0054294e: JMP 0x00542623
//   XREF to: 00542623 (UNCONDITIONAL_JUMP)
// 00542953: MOV EAX,dword ptr [ESP + 0x134]
//   Label: LAB_00542953
//   XREF to: Stack[-0x3c] (READ)
// 0054295a: MOV dword ptr [ESP + EAX*0x1 + 0x12c],EBX
// 00542961: IMUL EDX,EBX,0x28
// 00542964: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x38] (READ)
// 0054296b: SHL EAX,0x3
// 0054296e: LEA ESI,[ESP + 0x61]
//   XREF to: Stack[-0x10f] (DATA)
// 00542972: MOV ECX,EAX
// 00542974: MOV EDI,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x4] (READ)
// 0054297b: SHL ECX,0x4
// 0054297e: MOV EBP,dword ptr [EDI + 0x114]
// 00542984: SUB ECX,EAX
// 00542986: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x38] (READ)
// 0054298d: ADD ESI,EDX
// 0054298f: CMP EAX,EBP
// 00542991: JNZ 0x00542a59
//   XREF to: 00542a59 (CONDITIONAL_JUMP)
// 00542997: PUSH ESI
// 00542998: MOV EDX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x24] (READ)
// 0054299f: XOR EAX,EBP
// 005429a1: PUSH EDX
// 005429a2: MOV [0x00680a04],EAX
//   XREF to: 00680a04 (WRITE)
// 005429a7: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 005429ac: ADD ESP,0x8
// 005429af: TEST EAX,EAX
// 005429b1: JZ 0x005429bd
//   XREF to: 005429bd (CONDITIONAL_JUMP)
// 005429b3: MOV dword ptr [0x00680a04],0x1
//   XREF to: 00680a04 (WRITE)
// 005429bd: IMUL EAX,EBX,0x28
//   Label: LAB_005429bd
// 005429c0: MOV EDX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x28] (READ)
// 005429c7: MOV EDX,dword ptr [EDX + 0x64]
// 005429ca: CMP EDX,dword ptr [ESP + EAX*0x1 + 0x85]
// 005429d1: JZ 0x00542a4e
//   XREF to: 00542a4e (CONDITIONAL_JUMP)
// 005429d3: MOV dword ptr [0x00680a04],0x1
//   XREF to: 00680a04 (WRITE)
// 005429dd: MOV EAX,dword ptr [ESP + 0x174]
//   Label: LAB_005429dd
//   XREF to: Stack[0x4] (READ)
// 005429e4: PUSH EAX
// 005429e5: CALL core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
//   XREF to: 00542ff0 (UNCONDITIONAL_CALL)
// 005429ea: ADD ESP,0x4
// 005429ed: IMUL EBX,EBX,0x28
//   Label: LAB_005429ed
// 005429f0: MOV ECX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x24] (READ)
// 005429f7: MOV ESI,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x28] (READ)
// 005429fe: MOV EDI,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x38] (READ)
// 00542a05: XOR DL,DL
// 00542a07: ADD ECX,0x78
// 00542a0a: ADD ESI,0x78
// 00542a0d: INC EDI
// 00542a0e: MOV dword ptr [ESP + 0x14c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00542a15: MOV dword ptr [ESP + 0x148],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 00542a1c: MOV dword ptr [ESP + 0x138],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 00542a23: MOV byte ptr [ESP + EBX*0x1 + 0x61],DL
// 00542a27: MOV EDX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x2c] (READ)
// 00542a2e: MOV EBX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x3c] (READ)
// 00542a35: ADD EDX,0x78
// 00542a38: ADD EBX,0x4
// 00542a3b: MOV dword ptr [ESP + 0x144],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00542a42: MOV dword ptr [ESP + 0x134],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 00542a49: JMP 0x0054267d
//   XREF to: 0054267d (UNCONDITIONAL_JUMP)
// 00542a4e: CMP dword ptr [0x00680a04],0x0
//   Label: LAB_00542a4e
//   XREF to: 00680a04 (READ)
// 00542a55: JNZ 0x005429dd
//   XREF to: 005429dd (CONDITIONAL_JUMP)
// 00542a57: JMP 0x005429ed
//   XREF to: 005429ed (UNCONDITIONAL_JUMP)
// 00542a59: MOV EDI,dword ptr [ESP + 0x14c]
//   Label: LAB_00542a59
//   XREF to: Stack[-0x24] (READ)
// 00542a60: PUSH EDI
// 00542a61: MOV AL,byte ptr [ESI]
//   Label: LAB_00542a61
//   XREF to: Stack[-0x10f] (DATA)
// 00542a63: MOV byte ptr [EDI],AL
// 00542a65: CMP AL,0x0
// 00542a67: JZ 0x00542a79
//   XREF to: 00542a79 (CONDITIONAL_JUMP)
// 00542a69: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x10e] (READ)
// 00542a6c: ADD ESI,0x2
// 00542a6f: MOV byte ptr [EDI + 0x1],AL
// 00542a72: ADD EDI,0x2
// 00542a75: CMP AL,0x0
// 00542a77: JNZ 0x00542a61
//   XREF to: 00542a61 (CONDITIONAL_JUMP)
// 00542a79: POP EDI
//   Label: LAB_00542a79
// 00542a7a: MOV EAX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x4] (READ)
// 00542a81: ADD EAX,ECX
// 00542a83: MOV ECX,dword ptr [ESP + EDX*0x1 + 0x85]
// 00542a8a: MOV dword ptr [EAX + 0x64],ECX
// 00542a8d: MOV ECX,dword ptr [ESP + EDX*0x1 + 0x7d]
// 00542a91: MOV dword ptr [EAX + 0x34],ECX
// 00542a94: MOV EDX,dword ptr [ESP + EDX*0x1 + 0x81]
// 00542a9b: MOV dword ptr [EAX + 0x38],EDX
// 00542a9e: JMP 0x005429ed
//   XREF to: 005429ed (UNCONDITIONAL_JUMP)
// 00542aa3: MOV EDX,dword ptr [ESP + EBX*0x1 + 0x81]
//   Label: LAB_00542aa3
// 00542aaa: PUSH EDX
// 00542aab: MOV ECX,dword ptr [ESP + EBX*0x1 + 0x81]
// 00542ab2: LEA EAX,[ESP + 0x65]
//   XREF to: Stack[-0x10f] (DATA)
// 00542ab6: PUSH ECX
// 00542ab7: ADD EAX,EBX
// 00542ab9: PUSH EAX
// 00542aba: ADD EAX,0x14
// 00542abd: PUSH EAX
// 00542abe: PUSH EDI
// 00542abf: CALL core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
//   XREF to: 005412b0 (UNCONDITIONAL_CALL)
// 00542ac4: IMUL ECX,EAX,0x78
// 00542ac7: ADD ESP,0x14
// 00542aca: ADD ECX,EDI
// 00542acc: MOV EDX,dword ptr [ESP + EBX*0x1 + 0x85]
// 00542ad3: MOV dword ptr [ECX + 0x64],EDX
// 00542ad6: MOV dword ptr [ESP + EAX*0x4 + 0x12c],ESI
// 00542add: MOV EAX,dword ptr [ESP + 0x5d]
//   XREF to: Stack[-0x113] (READ)
// 00542ae1: INC ESI
// 00542ae2: ADD EBX,0x28
// 00542ae5: CMP ESI,EAX
// 00542ae7: JL 0x005426a7
//   XREF to: 005426a7 (CONDITIONAL_JUMP)
// 00542aed: JMP 0x005426b2
//   XREF to: 005426b2 (UNCONDITIONAL_JUMP)
