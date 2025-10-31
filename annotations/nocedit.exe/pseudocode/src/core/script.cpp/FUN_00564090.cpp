// Name: core_script.cpp_FUN_00564090
// Address: 00564090
// Address Range: [[00564090, 005643cb]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00564090()
// Cross-references:
//   core_script.cpp_CScript_ParseCounterUsed_FUN_00567490 (00567490) at 005674f2 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00567080 (00567080) at 005670d9 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00564008 = 005640d5
//   CScript* g_CScriptPtr = 0310f858
//   CScript g_CScriptInstance
// Function calls:
//   core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   core_script.cpp_FUN_00567010
//   core_script.cpp_FUN_005671a0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00564090(undefined4 param_1, undefined4 param_2) */

void core_script_cpp_FUN_00564090(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  char local_124 [256];
  undefined4 local_24;
  
  pcVar13 = local_124;
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar13 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + 1;
    pcVar13 = (char *)((int)pcVar13 + 4);
  }
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xcc)) {
    iVar3 = in_stack_00000004 + 0xd0;
    do {
      pcVar5 = local_124;
      pcVar6 = local_124;
      pcVar7 = local_124;
      pcVar8 = local_124;
      pcVar9 = local_124;
      pcVar10 = local_124;
      pcVar11 = local_124;
      pcVar12 = local_124;
      pcVar4 = local_124;
      pcVar13 = local_124;
      switch(*(undefined4 *)(iVar3 + 600)) {
      case 3:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        if (*(char *)(iVar3 + 100) == '@') {
          local_24 = 0xb;
        }
        else {
          local_24 = 7;
        }
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 4:
        core_script_cpp_FUN_005671a0();
        break;
      case 7:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        local_24 = 10;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0xb:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar12 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar12[1] = cVar1;
          pcVar12 = pcVar12 + 2;
        } while (cVar1 != '\0');
        local_24 = 8;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0xc:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
        local_24 = 9;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0xf:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        local_24 = 5;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0x10:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar11 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar11[1] = cVar1;
          pcVar11 = pcVar11 + 2;
        } while (cVar1 != '\0');
        local_24 = 6;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0x14:
        core_script_cpp_FUN_00567010();
        break;
      case 0x15:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
        local_24 = 2;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0x16:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
        local_24 = 3;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0x1c:
        pcVar13 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar13;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar13[1];
          pcVar13 = pcVar13 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        local_24 = 4;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
        break;
      case 0x1f:
        pcVar4 = (char *)(iVar3 + 100);
        do {
          cVar1 = *pcVar4;
          *pcVar13 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar13[1] = cVar1;
          pcVar13 = pcVar13 + 2;
        } while (cVar1 != '\0');
        local_24 = 0xc;
        core_script_cpp_CScript_ReallocSomething_FUN_00567510();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x328;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0xcc));
  }
  return;
}


// Assembly code:
// 00564090: PUSH EBX
//   Label: core_script.cpp_FUN_00564090
// 00564091: PUSH ESI
// 00564092: PUSH EDI
// 00564093: PUSH EBP
// 00564094: SUB ESP,0x114
// 0056409a: MOV ESI,dword ptr [ESP + 0x12c]
//   XREF to: Stack[0x8] (READ)
// 005640a1: MOV ECX,0x45
// 005640a6: MOV EDI,ESP
// 005640a8: MOV EBX,dword ptr [ESP + 0x128]
//   XREF to: Stack[0x4] (READ)
// 005640af: MOVSD.REP ES:EDI,ESI
// 005640b1: MOV EDX,dword ptr [EBX + 0xcc]
// 005640b7: XOR EBP,EBP
// 005640b9: TEST EDX,EDX
// 005640bb: JLE 0x005640ed
//   XREF to: 005640ed (CONDITIONAL_JUMP)
// 005640bd: ADD EBX,0xd0
// 005640c3: MOV ESI,dword ptr [EBX + 0x258]
//   Label: LAB_005640c3
// 005640c9: CMP ESI,0x1f
// 005640cc: JA 0x005640d5
//   XREF to: 005640d5 (CONDITIONAL_JUMP)
// 005640ce: JMP dword ptr [ESI*0x4 + 0x564008]
//   Label: switchD
//   XREF to: 005640d5 (COMPUTED_JUMP)
//   XREF to: 005640f8 (COMPUTED_JUMP)
//   XREF to: 00564148 (COMPUTED_JUMP)
//   XREF to: 00564163 (COMPUTED_JUMP)
//   XREF to: 005641a5 (COMPUTED_JUMP)
//   XREF to: 005641c0 (COMPUTED_JUMP)
//   XREF to: 00564201 (COMPUTED_JUMP)
//   XREF to: 00564243 (COMPUTED_JUMP)
//   XREF to: 00564285 (COMPUTED_JUMP)
//   XREF to: 005642c6 (COMPUTED_JUMP)
//   XREF to: 00564308 (COMPUTED_JUMP)
//   XREF to: 00564349 (COMPUTED_JUMP)
//   XREF to: 0056438b (COMPUTED_JUMP)
//   XREF to: 00564008 (DATA)
// 005640d5: MOV ESI,dword ptr [ESP + 0x128]
//   Label: caseD_1e
//   XREF to: Stack[0x4] (READ)
// 005640dc: INC EBP
// 005640dd: MOV ECX,dword ptr [ESI + 0xcc]
// 005640e3: ADD EBX,0x328
// 005640e9: CMP EBP,ECX
// 005640eb: JL 0x005640c3
//   XREF to: 005640c3 (CONDITIONAL_JUMP)
// 005640ed: ADD ESP,0x114
//   Label: LAB_005640ed
// 005640f3: POP EBP
// 005640f4: POP EDI
// 005640f5: POP ESI
// 005640f6: POP EBX
// 005640f7: RET
// 005640f8: MOV EDI,ESP
//   Label: caseD_3
// 005640fa: LEA ESI,[EBX + 0x64]
// 005640fd: PUSH EDI
// 005640fe: MOV AL,byte ptr [ESI]
//   Label: LAB_005640fe
// 00564100: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x124] (DATA)
// 00564102: CMP AL,0x0
// 00564104: JZ 0x00564116
//   XREF to: 00564116 (CONDITIONAL_JUMP)
// 00564106: MOV AL,byte ptr [ESI + 0x1]
// 00564109: ADD ESI,0x2
// 0056410c: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x123] (WRITE)
// 0056410f: ADD EDI,0x2
// 00564112: CMP AL,0x0
// 00564114: JNZ 0x005640fe
//   XREF to: 005640fe (CONDITIONAL_JUMP)
// 00564116: POP EDI
//   Label: LAB_00564116
// 00564117: CMP byte ptr [EBX + 0x64],0x40
// 0056411b: JNZ 0x0056413b
//   XREF to: 0056413b (CONDITIONAL_JUMP)
// 0056411d: MOV dword ptr [ESP + 0x100],0xb
//   XREF to: Stack[-0x24] (WRITE)
// 00564128: MOV ESI,ESP
//   Label: LAB_00564128
// 0056412a: PUSH ESI
// 0056412b: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00564130: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 00564131: CALL core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   XREF to: 00567510 (UNCONDITIONAL_CALL)
// 00564136: ADD ESP,0x8
// 00564139: JMP 0x005640d5
//   XREF to: 005640d5 (UNCONDITIONAL_JUMP)
// 0056413b: MOV dword ptr [ESP + 0x100],0x7
//   Label: LAB_0056413b
//   XREF to: Stack[-0x24] (WRITE)
// 00564146: JMP 0x00564128
//   XREF to: 00564128 (UNCONDITIONAL_JUMP)
// 00564148: MOV ESI,ESP
//   Label: caseD_4
// 0056414a: PUSH ESI
// 0056414b: LEA ESI,[EBX + 0x64]
// 0056414e: PUSH ESI
// 0056414f: MOV ECX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00564155: PUSH ECX
//   XREF to: 0310f858 (DATA)
// 00564156: CALL core_script.cpp_FUN_005671a0
//   XREF to: 005671a0 (UNCONDITIONAL_CALL)
// 0056415b: ADD ESP,0xc
// 0056415e: JMP 0x005640d5
//   XREF to: 005640d5 (UNCONDITIONAL_JUMP)
// 00564163: MOV EDI,ESP
//   Label: caseD_7
// 00564165: LEA ESI,[EBX + 0x64]
// 00564168: PUSH EDI
// 00564169: MOV AL,byte ptr [ESI]
//   Label: LAB_00564169
// 0056416b: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x124] (DATA)
// 0056416d: CMP AL,0x0
// 0056416f: JZ 0x00564181
//   XREF to: 00564181 (CONDITIONAL_JUMP)
// 00564171: MOV AL,byte ptr [ESI + 0x1]
// 00564174: ADD ESI,0x2
// 00564177: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x123] (WRITE)
// 0056417a: ADD EDI,0x2
// 0056417d: CMP AL,0x0
// 0056417f: JNZ 0x00564169
//   XREF to: 00564169 (CONDITIONAL_JUMP)
// 00564181: POP EDI
//   Label: LAB_00564181
// 00564182: MOV ESI,ESP
// 00564184: PUSH ESI
// 00564185: MOV EDX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0056418b: MOV EAX,0xa
// 00564190: PUSH EDX
//   XREF to: 0310f858 (DATA)
// 00564191: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00564198: CALL core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   XREF to: 00567510 (UNCONDITIONAL_CALL)
// 0056419d: ADD ESP,0x8
// 005641a0: JMP 0x005640d5
//   XREF to: 005640d5 (UNCONDITIONAL_JUMP)
// 005641a5: MOV ESI,ESP
//   Label: caseD_14
// 005641a7: PUSH ESI
// 005641a8: LEA ESI,[EBX + 0x64]
// 005641ab: PUSH ESI
// 005641ac: MOV EDX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 005641b2: PUSH EDX
//   XREF to: 0310f858 (DATA)
// 005641b3: CALL core_script.cpp_FUN_00567010
//   XREF to: 00567010 (UNCONDITIONAL_CALL)
// 005641b8: ADD ESP,0xc
// 005641bb: JMP 0x005640d5
//   XREF to: 005640d5 (UNCONDITIONAL_JUMP)
// 005641c0: MOV EDI,ESP
//   Label: caseD_15
// 005641c2: LEA ESI,[EBX + 0x64]
// 005641c5: PUSH EDI
// 005641c6: MOV AL,byte ptr [ESI]
//   Label: LAB_005641c6
// 005641c8: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x124] (DATA)
// 005641ca: CMP AL,0x0
// 005641cc: JZ 0x005641de
//   XREF to: 005641de (CONDITIONAL_JUMP)
// 005641ce: MOV AL,byte ptr [ESI + 0x1]
// 005641d1: ADD ESI,0x2
// 005641d4: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x123] (WRITE)
// 005641d7: ADD EDI,0x2
// 005641da: CMP AL,0x0
// 005641dc: JNZ 0x005641c6
//   XREF to: 005641c6 (CONDITIONAL_JUMP)
// 005641de: POP EDI
//   Label: LAB_005641de
// 005641df: MOV ESI,ESP
// 005641e1: PUSH ESI
// 005641e2: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 005641e7: MOV EDI,0x2
// 005641ec: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 005641ed: MOV dword ptr [ESP + 0x108],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 005641f4: CALL core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   XREF to: 00567510 (UNCONDITIONAL_CALL)
// 005641f9: ADD ESP,0x8
// 005641fc: JMP 0x005640d5
//   XREF to: 005640d5 (UNCONDITIONAL_JUMP)
// 00564201: MOV EDI,ESP
//   Label: caseD_16
// 00564203: LEA ESI,[EBX + 0x64]
// 00564206: PUSH EDI
// 00564207: MOV AL,byte ptr [ESI]
//   Label: LAB_00564207
// 00564209: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x124] (DATA)
// 0056420b: CMP AL,0x0
// 0056420d: JZ 0x0056421f
//   XREF to: 0056421f (CONDITIONAL_JUMP)
// 0056420f: MOV AL,byte ptr [ESI + 0x1]
// 00564212: ADD ESI,0x2
// 00564215: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x123] (WRITE)
// 00564218: ADD EDI,0x2
// 0056421b: CMP AL,0x0
// 0056421d: JNZ 0x00564207
//   XREF to: 00564207 (CONDITIONAL_JUMP)
// 0056421f: POP EDI
//   Label: LAB_0056421f
// 00564220: MOV ESI,ESP
// 00564222: PUSH ESI
// 00564223: MOV ESI,dword ptr [0x00680d50]
//   XREF to: 00680d50 (READ)
// 00564229: MOV ECX,0x3
// 0056422e: PUSH ESI
//   XREF to: 0310f858 (DATA)
// 0056422f: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00564236: CALL core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   XREF to: 00567510 (UNCONDITIONAL_CALL)
// 0056423b: ADD ESP,0x8
// 0056423e: JMP 0x005640d5
//   XREF to: 005640d5 (UNCONDITIONAL_JUMP)
// 00564243: MOV EDI,ESP
//   Label: caseD_1c
// 00564245: LEA ESI,[EBX + 0x64]
// 00564248: PUSH EDI
// 00564249: MOV AL,byte ptr [ESI]
//   Label: LAB_00564249
// 0056424b: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x124] (DATA)
// 0056424d: CMP AL,0x0
// 0056424f: JZ 0x00564261
//   XREF to: 00564261 (CONDITIONAL_JUMP)
// 00564251: MOV AL,byte ptr [ESI + 0x1]
// 00564254: ADD ESI,0x2
// 00564257: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x123] (WRITE)
// 0056425a: ADD EDI,0x2
// 0056425d: CMP AL,0x0
// 0056425f: JNZ 0x00564249
//   XREF to: 00564249 (CONDITIONAL_JUMP)
// 00564261: POP EDI
//   Label: LAB_00564261
// 00564262: MOV ESI,ESP
// 00564264: PUSH ESI
// 00564265: MOV EDX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0056426b: MOV EAX,0x4
// 00564270: PUSH EDX
//   XREF to: 0310f858 (DATA)
// 00564271: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00564278: CALL core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   XREF to: 00567510 (UNCONDITIONAL_CALL)
// 0056427d: ADD ESP,0x8
// 00564280: JMP 0x005640d5
//   XREF to: 005640d5 (UNCONDITIONAL_JUMP)
// 00564285: MOV EDI,ESP
//   Label: caseD_f
// 00564287: LEA ESI,[EBX + 0x64]
// 0056428a: PUSH EDI
// 0056428b: MOV AL,byte ptr [ESI]
//   Label: LAB_0056428b
// 0056428d: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x124] (DATA)
// 0056428f: CMP AL,0x0
// 00564291: JZ 0x005642a3
//   XREF to: 005642a3 (CONDITIONAL_JUMP)
// 00564293: MOV AL,byte ptr [ESI + 0x1]
// 00564296: ADD ESI,0x2
// 00564299: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x123] (WRITE)
// 0056429c: ADD EDI,0x2
// 0056429f: CMP AL,0x0
// 005642a1: JNZ 0x0056428b
//   XREF to: 0056428b (CONDITIONAL_JUMP)
// 005642a3: POP EDI
//   Label: LAB_005642a3
// 005642a4: MOV ESI,ESP
// 005642a6: PUSH ESI
// 005642a7: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 005642ac: MOV EDI,0x5
// 005642b1: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 005642b2: MOV dword ptr [ESP + 0x108],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 005642b9: CALL core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   XREF to: 00567510 (UNCONDITIONAL_CALL)
// 005642be: ADD ESP,0x8
// 005642c1: JMP 0x005640d5
//   XREF to: 005640d5 (UNCONDITIONAL_JUMP)
// 005642c6: MOV EDI,ESP
//   Label: caseD_10
// 005642c8: LEA ESI,[EBX + 0x64]
// 005642cb: PUSH EDI
// 005642cc: MOV AL,byte ptr [ESI]
//   Label: LAB_005642cc
// 005642ce: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x124] (DATA)
// 005642d0: CMP AL,0x0
// 005642d2: JZ 0x005642e4
//   XREF to: 005642e4 (CONDITIONAL_JUMP)
// 005642d4: MOV AL,byte ptr [ESI + 0x1]
// 005642d7: ADD ESI,0x2
// 005642da: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x123] (WRITE)
// 005642dd: ADD EDI,0x2
// 005642e0: CMP AL,0x0
// 005642e2: JNZ 0x005642cc
//   XREF to: 005642cc (CONDITIONAL_JUMP)
// 005642e4: POP EDI
//   Label: LAB_005642e4
// 005642e5: MOV ESI,ESP
// 005642e7: PUSH ESI
// 005642e8: MOV ESI,dword ptr [0x00680d50]
//   XREF to: 00680d50 (READ)
// 005642ee: MOV ECX,0x6
// 005642f3: PUSH ESI
//   XREF to: 0310f858 (DATA)
// 005642f4: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005642fb: CALL core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   XREF to: 00567510 (UNCONDITIONAL_CALL)
// 00564300: ADD ESP,0x8
// 00564303: JMP 0x005640d5
//   XREF to: 005640d5 (UNCONDITIONAL_JUMP)
// 00564308: MOV EDI,ESP
//   Label: caseD_b
// 0056430a: LEA ESI,[EBX + 0x64]
// 0056430d: PUSH EDI
// 0056430e: MOV AL,byte ptr [ESI]
//   Label: LAB_0056430e
// 00564310: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x124] (DATA)
// 00564312: CMP AL,0x0
// 00564314: JZ 0x00564326
//   XREF to: 00564326 (CONDITIONAL_JUMP)
// 00564316: MOV AL,byte ptr [ESI + 0x1]
// 00564319: ADD ESI,0x2
// 0056431c: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x123] (WRITE)
// 0056431f: ADD EDI,0x2
// 00564322: CMP AL,0x0
// 00564324: JNZ 0x0056430e
//   XREF to: 0056430e (CONDITIONAL_JUMP)
// 00564326: POP EDI
//   Label: LAB_00564326
// 00564327: MOV dword ptr [ESP + 0x100],0x8
//   XREF to: Stack[-0x24] (WRITE)
// 00564332: MOV ESI,ESP
// 00564334: PUSH ESI
// 00564335: MOV EDI,dword ptr [0x00680d50]
//   XREF to: 00680d50 (READ)
// 0056433b: PUSH EDI
//   XREF to: 0310f858 (DATA)
// 0056433c: CALL core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   XREF to: 00567510 (UNCONDITIONAL_CALL)
// 00564341: ADD ESP,0x8
// 00564344: JMP 0x005640d5
//   XREF to: 005640d5 (UNCONDITIONAL_JUMP)
// 00564349: MOV EDI,ESP
//   Label: caseD_c
// 0056434b: LEA ESI,[EBX + 0x64]
// 0056434e: PUSH EDI
// 0056434f: MOV AL,byte ptr [ESI]
//   Label: LAB_0056434f
// 00564351: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x124] (DATA)
// 00564353: CMP AL,0x0
// 00564355: JZ 0x00564367
//   XREF to: 00564367 (CONDITIONAL_JUMP)
// 00564357: MOV AL,byte ptr [ESI + 0x1]
// 0056435a: ADD ESI,0x2
// 0056435d: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x123] (WRITE)
// 00564360: ADD EDI,0x2
// 00564363: CMP AL,0x0
// 00564365: JNZ 0x0056434f
//   XREF to: 0056434f (CONDITIONAL_JUMP)
// 00564367: POP EDI
//   Label: LAB_00564367
// 00564368: MOV ESI,ESP
// 0056436a: PUSH ESI
// 0056436b: MOV ECX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00564371: MOV EDX,0x9
// 00564376: PUSH ECX
//   XREF to: 0310f858 (DATA)
// 00564377: MOV dword ptr [ESP + 0x108],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0056437e: CALL core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   XREF to: 00567510 (UNCONDITIONAL_CALL)
// 00564383: ADD ESP,0x8
// 00564386: JMP 0x005640d5
//   XREF to: 005640d5 (UNCONDITIONAL_JUMP)
// 0056438b: MOV EDI,ESP
//   Label: caseD_1f
// 0056438d: LEA ESI,[EBX + 0x64]
// 00564390: PUSH EDI
// 00564391: MOV AL,byte ptr [ESI]
//   Label: LAB_00564391
// 00564393: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x124] (DATA)
// 00564395: CMP AL,0x0
// 00564397: JZ 0x005643a9
//   XREF to: 005643a9 (CONDITIONAL_JUMP)
// 00564399: MOV AL,byte ptr [ESI + 0x1]
// 0056439c: ADD ESI,0x2
// 0056439f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x123] (WRITE)
// 005643a2: ADD EDI,0x2
// 005643a5: CMP AL,0x0
// 005643a7: JNZ 0x00564391
//   XREF to: 00564391 (CONDITIONAL_JUMP)
// 005643a9: POP EDI
//   Label: LAB_005643a9
// 005643aa: MOV dword ptr [ESP + 0x100],0xc
//   XREF to: Stack[-0x24] (WRITE)
// 005643b5: MOV ESI,ESP
// 005643b7: PUSH ESI
// 005643b8: MOV EDI,dword ptr [0x00680d50]
//   XREF to: 00680d50 (READ)
// 005643be: PUSH EDI
//   XREF to: 0310f858 (DATA)
// 005643bf: CALL core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   XREF to: 00567510 (UNCONDITIONAL_CALL)
// 005643c4: ADD ESP,0x8
// 005643c7: JMP 0x005640d5
//   XREF to: 005640d5 (UNCONDITIONAL_JUMP)
