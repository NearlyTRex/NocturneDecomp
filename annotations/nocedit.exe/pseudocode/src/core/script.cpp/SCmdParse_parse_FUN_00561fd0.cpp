// Name: core_script.cpp_SCmdParse_parse_FUN_00561fd0
// Address: 00561fd0
// Address Range: [[00561fd0, 005624eb]]
// Convention: unknown
// Signature: undefined core_script.cpp_SCmdParse_parse_FUN_00561fd0()
// Cross-references:
//   core_script.cpp_CScript_ParseCounterUsed_FUN_00567490 (00567490) at 005674b1 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00567080 (00567080) at 005670a6 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00567bc0 (00567bc0) at 00567c2f [UNCONDITIONAL_CALL]
//   core_script.cpp_SCmdParse_bestParse_FUN_00561db0 (00561db0) at 00561ed5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_script_cpp_00643b59
//   TerminatedCString s_SCmdParse_parse_too_many_00643b6c
//   char[256] g_CharacterClassificationTable
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_script.cpp_FUN_00561cb0
//   core_script.cpp_SCmdParm_setTemplateText_FUN_00560de0
//   crt_ctype.c_toupper_FUN_005ff9e0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_SCmdParse_parse(CScriptCmdParse* param_1, undefined4
   param_2, undefined4 param_3) */

undefined4 core_script_cpp_SCmdParse_parse_FUN_00561fd0(void)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  byte *pbVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  byte bVar11;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined4 uStack_150;
  undefined1 auStack_14c [292];
  char *local_28;
  char *local_24;
  int *local_20;
  int *local_1c;
  char *local_14;
  
  bVar11 = 0;
  local_28 = (char *)0x0;
  *(undefined1 *)(in_stack_00000004 + 0x818) = 0;
  *in_stack_00000004 = in_stack_0000000c;
  in_stack_00000004[0x33] = 0;
  iVar5 = 0;
  while ((g_CharacterClassificationTable[(byte)(local_28[in_stack_00000008] + 1)] & 2U) != 0) {
    pcVar3 = local_28 + in_stack_00000008;
    local_28 = local_28 + 1;
    *(char *)((int)in_stack_00000004 + iVar5 + 4) = *pcVar3;
    iVar5 = iVar5 + 1;
  }
  *(undefined1 *)(iVar5 + 4 + (int)in_stack_00000004) = 0;
  local_14 = local_28;
  pcVar3 = local_28 + in_stack_00000008;
  cVar1 = *pcVar3;
  for (; (cVar1 != '\0' && ((*pcVar3 != '/' || (pcVar3[1] != '/')))); pcVar3 = pcVar3 + 1) {
    cVar1 = pcVar3[1];
    local_14 = local_14 + 1;
  }
  local_24 = (char *)0x0;
  while( true ) {
    *(char *)((int)(in_stack_00000004 + 0x1a) + (int)local_24) = '\0';
    pbVar7 = (byte *)(local_24 + in_stack_0000000c);
    bVar2 = *pbVar7;
    if ((((bVar2 == 0x28) || (bVar2 == 0x3c)) ||
        ((g_CharacterClassificationTable[(byte)(bVar2 + 1)] & 2U) != 0)) || (*pbVar7 == 0)) break;
    if ((int)local_14 <= (int)local_28) {
      local_28 = local_28 + in_stack_00000008;
      iVar5 = -1;
      piVar9 = in_stack_00000004 + 0x818;
      goto code_r0x005621ce;
    }
    iVar5 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar7);
    iVar4 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)local_24[in_stack_00000008]);
    if (iVar5 != iVar4) {
      return 0;
    }
    *(undefined1 *)((int)in_stack_00000004 + (int)local_1c + 0x68) =
         *(undefined1 *)((int)local_20 + in_stack_00000008);
    local_20 = (int *)((int)local_20 + 1);
    local_1c = (int *)((int)local_1c + 1);
  }
  local_20 = in_stack_00000004 + 0x34;
  local_1c = in_stack_00000004 + 0x818;
  iVar5 = 0;
LAB_005620a2:
  while( true ) {
    while( true ) {
      while ((pcVar3 = local_28, pcVar10 = &stack0xfffffeac, (int)local_28 < (int)local_14 &&
             ((g_CharacterClassificationTable[(byte)(local_28[in_stack_00000008] + 1)] & 2U) != 0)))
      {
        local_28 = local_28 + 1;
        auStack_14c[iVar5 + -8] = pcVar3[in_stack_00000008];
        iVar5 = iVar5 + 1;
      }
      if ((g_CharacterClassificationTable[(byte)(local_24[in_stack_0000000c] + 1)] & 2U) == 0)
      break;
      local_24 = local_24 + 1;
    }
    if (local_24[in_stack_0000000c] != '<') break;
    if (9 < in_stack_00000004[0x33]) {
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 0x1302;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SCmdParse::parse - too many parms!");
    }
    iVar4 = core_script_cpp_SCmdParm_setTemplateText_FUN_00560de0();
    pcVar3 = (char *)&uStack_150;
    if (iVar4 == 0) {
      return 2;
    }
    auStack_14c[iVar5 + -4] = 0;
    piVar9 = local_1c + in_stack_00000004[0x33] * 0xca;
    do {
      cVar1 = *pcVar3;
      *(char *)piVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      *(char *)((int)piVar9 + 1) = cVar1;
      piVar9 = (int *)((int)piVar9 + 2);
    } while (cVar1 != '\0');
    local_14 = local_24;
    iVar5 = core_script_cpp_FUN_00561cb0();
    pcVar3 = &stack0xfffffeac;
    if (iVar5 == 0) {
      uStack_150 = in_stack_00000004 + 0x818;
      piVar9 = uStack_150;
      goto LAB_0056233e;
    }
    in_stack_00000004[0x33] = in_stack_00000004[0x33] + 1;
    iVar5 = 0;
  }
  if ((int)local_14 <= (int)local_28) {
    auStack_14c[iVar5 + -8] = 0;
    piVar9 = local_1c;
    goto LAB_00562475;
  }
  iVar4 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)local_28[in_stack_00000008]);
  iVar6 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*(byte *)(in_stack_00000010 + (int)local_20));
  piVar9 = local_20;
  pcVar3 = &stack0xfffffeac;
  if (iVar4 == iVar6) {
    local_20 = (int *)((int)local_20 + 1);
    local_1c = (int *)((int)local_1c + 1);
    auStack_14c[iVar5] = *(undefined1 *)((int)piVar9 + in_stack_00000008);
    iVar5 = iVar5 + 1;
    goto LAB_005620a2;
  }
  uStack_150 = (int *)local_14;
  pcVar10 = local_14;
  do {
    cVar1 = *pcVar3;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)((int)local_20 + in_stack_00000008);
  iVar5 = -1;
  do {
    pcVar10 = local_14;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = local_14 + (uint)bVar11 * -2 + 1;
    cVar1 = *local_14;
    local_14 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') {
      return 2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  return 2;
  while( true ) {
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    *(char *)((int)piVar9 + 1) = cVar1;
    piVar9 = (int *)((int)piVar9 + 2);
    if (cVar1 == '\0') break;
LAB_00562475:
    cVar1 = *pcVar10;
    *(char *)piVar9 = cVar1;
    if (cVar1 == '\0') break;
  }
  local_14 = local_14 + in_stack_00000008;
  iVar5 = -1;
  do {
    piVar9 = local_1c;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    piVar9 = (int *)((int)local_1c + (uint)bVar11 * -2 + 1);
    iVar4 = *local_1c;
    local_1c = piVar9;
  } while ((char)iVar4 != '\0');
  pcVar3 = (char *)((int)piVar9 + -1);
  do {
    cVar1 = *local_14;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = local_14[1];
    local_14 = local_14 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  if (local_24[in_stack_0000000c] == '\0') {
    return 3;
  }
  return 2;
  while( true ) {
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar9 + 1) = cVar1;
    piVar9 = (int *)((int)piVar9 + 2);
    if (cVar1 == '\0') break;
LAB_0056233e:
    cVar1 = *pcVar3;
    *(char *)piVar9 = cVar1;
    if (cVar1 == '\0') break;
  }
  pcVar3 = (char *)(unaff_EBP + in_stack_00000008);
  iVar5 = -1;
  do {
    piVar9 = uStack_150;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    piVar9 = (int *)((int)uStack_150 + (uint)bVar11 * -2 + 1);
    iVar4 = *uStack_150;
    uStack_150 = piVar9;
  } while ((char)iVar4 != '\0');
  pcVar10 = (char *)((int)piVar9 + -1);
  do {
    cVar1 = *pcVar3;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') {
      return 2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  return 2;
  while( true ) {
    iVar5 = iVar5 + -1;
    piVar8 = (int *)((int)piVar9 + (uint)bVar11 * -2 + 1);
    iVar4 = *piVar9;
    piVar9 = piVar8;
    if ((char)iVar4 == '\0') break;
code_r0x005621ce:
    piVar8 = piVar9;
    if (iVar5 == 0) break;
  }
  pcVar3 = (char *)((int)piVar8 + -1);
  do {
    cVar1 = *local_28;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = local_28[1];
    local_28 = local_28 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return 1;
}


// Assembly code:
// 00561fd0: PUSH EBX
//   Label: core_script.cpp_SCmdParse_parse_FUN_00561fd0
// 00561fd1: PUSH ESI
// 00561fd2: PUSH EDI
// 00561fd3: PUSH EBP
// 00561fd4: SUB ESP,0x144
// 00561fda: MOV EBX,dword ptr [ESP + 0x158]
//   XREF to: Stack[0x4] (READ)
// 00561fe1: MOV EBP,dword ptr [ESP + 0x15c]
//   XREF to: Stack[0x8] (READ)
// 00561fe8: XOR EDX,EDX
// 00561fea: MOV dword ptr [ESP + 0x12c],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00561ff1: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0xc] (READ)
// 00561ff8: MOV byte ptr [EBX + 0x2060],0x0
// 00561fff: MOV dword ptr [EBX],EAX
// 00562001: XOR ESI,ESI
// 00562003: MOV dword ptr [EBX + 0xcc],EDX
// 00562009: MOV EAX,dword ptr [ESP + 0x12c]
//   Label: LAB_00562009
//   XREF to: Stack[-0x28] (READ)
// 00562010: MOV AL,byte ptr [EAX + EBP*0x1]
// 00562013: INC AL
// 00562015: AND EAX,0xff
// 0056201a: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 00562021: JNZ 0x005620e8
//   XREF to: 005620e8 (CONDITIONAL_JUMP)
// 00562027: MOV byte ptr [ESI + EBX*0x1 + 0x4],0x0
// 0056202c: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x28] (READ)
// 00562033: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0056203a: ADD EAX,EBP
// 0056203c: MOV DH,byte ptr [EAX]
// 0056203e: MOV ESI,EAX
// 00562040: TEST DH,DH
// 00562042: JZ 0x00562058
//   XREF to: 00562058 (CONDITIONAL_JUMP)
// 00562044: MOV CH,byte ptr [ESI]
//   Label: LAB_00562044
// 00562046: CMP CH,0x2f
// 00562049: JNZ 0x0056210a
//   XREF to: 0056210a (CONDITIONAL_JUMP)
// 0056204f: CMP CH,byte ptr [ESI + 0x1]
// 00562052: JNZ 0x0056210a
//   XREF to: 0056210a (CONDITIONAL_JUMP)
// 00562058: XOR EAX,EAX
//   Label: LAB_00562058
// 0056205a: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00562061: MOV EAX,dword ptr [ESP + 0x130]
//   Label: LAB_00562061
//   XREF to: Stack[-0x24] (READ)
// 00562068: MOV byte ptr [EBX + EAX*0x1 + 0x68],0x0
// 0056206d: MOV ESI,dword ptr [ESP + 0x160]
//   XREF to: Stack[0xc] (READ)
// 00562074: ADD ESI,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x24] (READ)
// 0056207b: MOV AH,byte ptr [ESI]
// 0056207d: CMP AH,0x28
// 00562080: JNZ 0x0056212a
//   XREF to: 0056212a (CONDITIONAL_JUMP)
// 00562086: LEA EAX,[EBX + 0xd0]
//   Label: LAB_00562086
// 0056208c: MOV dword ptr [ESP + 0x134],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00562093: LEA EAX,[EBX + 0x2060]
// 00562099: XOR ESI,ESI
// 0056209b: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005620a2: MOV EAX,dword ptr [ESP + 0x12c]
//   Label: LAB_005620a2
//   XREF to: Stack[-0x28] (READ)
// 005620a9: CMP EAX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x14] (READ)
// 005620b0: JGE 0x00562207
//   XREF to: 00562207 (CONDITIONAL_JUMP)
// 005620b6: MOV AL,byte ptr [EAX + EBP*0x1]
// 005620b9: INC AL
// 005620bb: AND EAX,0xff
// 005620c0: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005620c7: JZ 0x00562207
//   XREF to: 00562207 (CONDITIONAL_JUMP)
// 005620cd: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x28] (READ)
// 005620d4: LEA ECX,[EAX + 0x1]
// 005620d7: MOV dword ptr [ESP + 0x12c],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005620de: INC ESI
// 005620df: MOV AL,byte ptr [EAX + EBP*0x1]
// 005620e2: MOV byte ptr [ESP + ESI*0x1 + -0x1],AL
//   XREF to: Stack[-0x154] (DATA)
// 005620e6: JMP 0x005620a2
//   XREF to: 005620a2 (UNCONDITIONAL_JUMP)
// 005620e8: MOV EAX,dword ptr [ESP + 0x12c]
//   Label: LAB_005620e8
//   XREF to: Stack[-0x28] (READ)
// 005620ef: LEA ECX,[EAX + 0x1]
// 005620f2: LEA EDX,[EAX + EBP*0x1]
// 005620f5: MOV dword ptr [ESP + 0x12c],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005620fc: MOV EAX,ESI
// 005620fe: MOV DL,byte ptr [EDX]
// 00562100: INC ESI
// 00562101: MOV byte ptr [EBX + EAX*0x1 + 0x4],DL
// 00562105: JMP 0x00562009
//   XREF to: 00562009 (UNCONDITIONAL_JUMP)
// 0056210a: MOV EDI,dword ptr [ESP + 0x140]
//   Label: LAB_0056210a
//   XREF to: Stack[-0x14] (READ)
// 00562111: MOV CL,byte ptr [ESI + 0x1]
// 00562114: INC EDI
// 00562115: INC ESI
// 00562116: MOV dword ptr [ESP + 0x140],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0056211d: TEST CL,CL
// 0056211f: JNZ 0x00562044
//   XREF to: 00562044 (CONDITIONAL_JUMP)
// 00562125: JMP 0x00562058
//   XREF to: 00562058 (UNCONDITIONAL_JUMP)
// 0056212a: CMP AH,0x3c
//   Label: LAB_0056212a
// 0056212d: JZ 0x00562086
//   XREF to: 00562086 (CONDITIONAL_JUMP)
// 00562133: MOV AL,AH
// 00562135: INC AL
// 00562137: AND EAX,0xff
// 0056213c: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 00562143: JNZ 0x00562086
//   XREF to: 00562086 (CONDITIONAL_JUMP)
// 00562149: CMP byte ptr [ESI],0x0
// 0056214c: JZ 0x00562086
//   XREF to: 00562086 (CONDITIONAL_JUMP)
// 00562152: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x28] (READ)
// 00562159: CMP EAX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x14] (READ)
// 00562160: JGE 0x005621bf
//   XREF to: 005621bf (CONDITIONAL_JUMP)
// 00562162: XOR EAX,EAX
// 00562164: MOV AL,byte ptr [ESI]
// 00562166: PUSH EAX
// 00562167: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0056216c: ADD ESP,0x4
// 0056216f: MOV ESI,EAX
// 00562171: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x28] (READ)
// 00562178: MOV AL,byte ptr [EAX + EBP*0x1]
// 0056217b: AND EAX,0xff
// 00562180: PUSH EAX
// 00562181: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 00562186: ADD ESP,0x4
// 00562189: CMP ESI,EAX
// 0056218b: JNZ 0x005621fa
//   XREF to: 005621fa (CONDITIONAL_JUMP)
// 0056218d: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x28] (READ)
// 00562194: LEA ESI,[EAX + 0x1]
// 00562197: LEA EDX,[EAX + EBP*0x1]
// 0056219a: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x24] (READ)
// 005621a1: LEA EDI,[EAX + 0x1]
// 005621a4: MOV dword ptr [ESP + 0x12c],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 005621ab: MOV dword ptr [ESP + 0x130],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 005621b2: LEA ESI,[EBX + EAX*0x1]
// 005621b5: MOV AL,byte ptr [EDX]
// 005621b7: MOV byte ptr [ESI + 0x68],AL
// 005621ba: JMP 0x00562061
//   XREF to: 00562061 (UNCONDITIONAL_JUMP)
// 005621bf: LEA EDI,[EBX + 0x2060]
//   Label: LAB_005621bf
// 005621c5: LEA ESI,[EAX + EBP*0x1]
// 005621c8: PUSH EDI
// 005621c9: SUB ECX,ECX
// 005621cb: DEC ECX
// 005621cc: MOV AL,0x0
// 005621ce: SCASB.REPNE ES:EDI
// 005621d0: DEC EDI
// 005621d1: MOV AL,byte ptr [ESI]
//   Label: LAB_005621d1
// 005621d3: MOV byte ptr [EDI],AL
// 005621d5: CMP AL,0x0
// 005621d7: JZ 0x005621e9
//   XREF to: 005621e9 (CONDITIONAL_JUMP)
// 005621d9: MOV AL,byte ptr [ESI + 0x1]
// 005621dc: ADD ESI,0x2
// 005621df: MOV byte ptr [EDI + 0x1],AL
// 005621e2: ADD EDI,0x2
// 005621e5: CMP AL,0x0
// 005621e7: JNZ 0x005621d1
//   XREF to: 005621d1 (CONDITIONAL_JUMP)
// 005621e9: POP EDI
//   Label: LAB_005621e9
// 005621ea: MOV EAX,0x1
// 005621ef: ADD ESP,0x144
// 005621f5: POP EBP
// 005621f6: POP EDI
// 005621f7: POP ESI
// 005621f8: POP EBX
// 005621f9: RET
// 005621fa: XOR EAX,EAX
//   Label: LAB_005621fa
// 005621fc: ADD ESP,0x144
// 00562202: POP EBP
// 00562203: POP EDI
// 00562204: POP ESI
// 00562205: POP EBX
// 00562206: RET
// 00562207: MOV EDI,dword ptr [ESP + 0x160]
//   Label: LAB_00562207
//   XREF to: Stack[0xc] (READ)
// 0056220e: MOV ECX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x24] (READ)
// 00562215: ADD EDI,ECX
// 00562217: MOV AL,byte ptr [EDI]
// 00562219: INC AL
// 0056221b: AND EAX,0xff
// 00562220: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 00562227: JZ 0x00562238
//   XREF to: 00562238 (CONDITIONAL_JUMP)
// 00562229: LEA EDX,[ECX + 0x1]
// 0056222c: MOV dword ptr [ESP + 0x130],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00562233: JMP 0x005620a2
//   XREF to: 005620a2 (UNCONDITIONAL_JUMP)
// 00562238: CMP byte ptr [EDI],0x3c
//   Label: LAB_00562238
// 0056223b: JNZ 0x00562392
//   XREF to: 00562392 (CONDITIONAL_JUMP)
// 00562241: CMP dword ptr [EBX + 0xcc],0xa
// 00562248: JL 0x0056226d
//   XREF to: 0056226d (CONDITIONAL_JUMP)
// 0056224a: MOV EDX,0x643b59
//   XREF to: 00643b59 (PARAM)
// 0056224f: MOV ECX,0x1302
// 00562254: PUSH 0x643b6c
//   XREF to: 00643b6c (DATA)
// 00562259: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0056225f: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00562265: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0056226a: ADD ESP,0x4
// 0056226d: LEA EAX,[ESP + 0x130]
//   Label: LAB_0056226d
//   XREF to: Stack[-0x24] (DATA)
// 00562274: MOV EDX,dword ptr [EBX + 0xcc]
// 0056227a: PUSH EAX
// 0056227b: IMUL EAX,EDX,0x328
// 00562281: MOV EDI,dword ptr [ESP + 0x164]
//   XREF to: Stack[0xc] (READ)
// 00562288: MOV ECX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x20] (READ)
// 0056228f: PUSH EDI
// 00562290: ADD EAX,ECX
// 00562292: PUSH EAX
// 00562293: CALL core_script.cpp_SCmdParm_setTemplateText_FUN_00560de0
//   XREF to: 00560de0 (UNCONDITIONAL_CALL)
// 00562298: ADD ESP,0xc
// 0056229b: TEST EAX,EAX
// 0056229d: JZ 0x00562325
//   XREF to: 00562325 (CONDITIONAL_JUMP)
// 005622a3: XOR CL,CL
// 005622a5: MOV byte ptr [ESP + ESI*0x1],CL
//   XREF to: Stack[-0x154] (DATA)
// 005622a8: IMUL EDI,dword ptr [EBX + 0xcc],0x328
// 005622b2: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x20] (READ)
// 005622b9: MOV ESI,ESP
// 005622bb: ADD EDI,EAX
// 005622bd: MOV EDX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x14] (READ)
// 005622c4: PUSH EDI
// 005622c5: MOV AL,byte ptr [ESI]
//   Label: LAB_005622c5
//   XREF to: Stack[-0x154] (DATA)
// 005622c7: MOV byte ptr [EDI],AL
// 005622c9: CMP AL,0x0
// 005622cb: JZ 0x005622dd
//   XREF to: 005622dd (CONDITIONAL_JUMP)
// 005622cd: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x153] (READ)
// 005622d0: ADD ESI,0x2
// 005622d3: MOV byte ptr [EDI + 0x1],AL
// 005622d6: ADD EDI,0x2
// 005622d9: CMP AL,0x0
// 005622db: JNZ 0x005622c5
//   XREF to: 005622c5 (CONDITIONAL_JUMP)
// 005622dd: POP EDI
//   Label: LAB_005622dd
// 005622de: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x28] (READ)
// 005622e5: PUSH EDX
// 005622e6: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005622ed: LEA EAX,[ESP + 0x130]
//   XREF to: Stack[-0x28] (DATA)
// 005622f4: MOV ECX,dword ptr [EBX + 0xcc]
// 005622fa: PUSH EAX
// 005622fb: IMUL EAX,ECX,0x328
// 00562301: MOV EDI,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x20] (READ)
// 00562308: PUSH EBP
// 00562309: ADD EAX,EDI
// 0056230b: PUSH EAX
// 0056230c: XOR ESI,ESI
// 0056230e: CALL core_script.cpp_FUN_00561cb0
//   XREF to: 00561cb0 (UNCONDITIONAL_CALL)
// 00562313: ADD ESP,0x10
// 00562316: TEST EAX,EAX
// 00562318: JZ 0x00562335
//   XREF to: 00562335 (CONDITIONAL_JUMP)
// 0056231a: INC dword ptr [EBX + 0xcc]
// 00562320: JMP 0x005620a2
//   XREF to: 005620a2 (UNCONDITIONAL_JUMP)
// 00562325: MOV EAX,0x2
//   Label: LAB_00562325
// 0056232a: ADD ESP,0x144
// 00562330: POP EBP
// 00562331: POP EDI
// 00562332: POP ESI
// 00562333: POP EBX
// 00562334: RET
// 00562335: MOV ESI,ESP
//   Label: LAB_00562335
// 00562337: LEA EDI,[EBX + 0x2060]
// 0056233d: PUSH EDI
// 0056233e: MOV AL,byte ptr [ESI]
//   Label: LAB_0056233e
//   XREF to: Stack[-0x154] (DATA)
// 00562340: MOV byte ptr [EDI],AL
// 00562342: CMP AL,0x0
// 00562344: JZ 0x00562356
//   XREF to: 00562356 (CONDITIONAL_JUMP)
// 00562346: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x153] (READ)
// 00562349: ADD ESI,0x2
// 0056234c: MOV byte ptr [EDI + 0x1],AL
// 0056234f: ADD EDI,0x2
// 00562352: CMP AL,0x0
// 00562354: JNZ 0x0056233e
//   XREF to: 0056233e (CONDITIONAL_JUMP)
// 00562356: POP EDI
//   Label: LAB_00562356
// 00562357: MOV ESI,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x18] (READ)
// 0056235e: ADD ESI,EBP
// 00562360: PUSH EDI
// 00562361: SUB ECX,ECX
// 00562363: DEC ECX
// 00562364: MOV AL,0x0
// 00562366: SCASB.REPNE ES:EDI
// 00562368: DEC EDI
// 00562369: MOV AL,byte ptr [ESI]
//   Label: LAB_00562369
// 0056236b: MOV byte ptr [EDI],AL
// 0056236d: CMP AL,0x0
// 0056236f: JZ 0x00562381
//   XREF to: 00562381 (CONDITIONAL_JUMP)
// 00562371: MOV AL,byte ptr [ESI + 0x1]
// 00562374: ADD ESI,0x2
// 00562377: MOV byte ptr [EDI + 0x1],AL
// 0056237a: ADD EDI,0x2
// 0056237d: CMP AL,0x0
// 0056237f: JNZ 0x00562369
//   XREF to: 00562369 (CONDITIONAL_JUMP)
// 00562381: POP EDI
//   Label: LAB_00562381
// 00562382: MOV EAX,0x2
// 00562387: ADD ESP,0x144
// 0056238d: POP EBP
// 0056238e: POP EDI
// 0056238f: POP ESI
// 00562390: POP EBX
// 00562391: RET
// 00562392: MOV EAX,dword ptr [ESP + 0x12c]
//   Label: LAB_00562392
//   XREF to: Stack[-0x28] (READ)
// 00562399: CMP EAX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x14] (READ)
// 005623a0: JGE 0x00562466
//   XREF to: 00562466 (CONDITIONAL_JUMP)
// 005623a6: MOV AL,byte ptr [EAX + EBP*0x1]
// 005623a9: AND EAX,0xff
// 005623ae: PUSH EAX
// 005623af: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 005623b4: ADD ESP,0x4
// 005623b7: MOV EDI,EAX
// 005623b9: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0xc] (READ)
// 005623c0: ADD EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x24] (READ)
// 005623c7: MOV AL,byte ptr [EAX]
// 005623c9: AND EAX,0xff
// 005623ce: PUSH EAX
// 005623cf: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 005623d4: ADD ESP,0x4
// 005623d7: CMP EDI,EAX
// 005623d9: JNZ 0x00562408
//   XREF to: 00562408 (CONDITIONAL_JUMP)
// 005623db: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x28] (READ)
// 005623e2: MOV EDI,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x24] (READ)
// 005623e9: LEA ECX,[EAX + 0x1]
// 005623ec: INC ESI
// 005623ed: MOV dword ptr [ESP + 0x12c],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005623f4: INC EDI
// 005623f5: MOV AL,byte ptr [EAX + EBP*0x1]
// 005623f8: MOV dword ptr [ESP + 0x130],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 005623ff: MOV byte ptr [ESP + ESI*0x1 + -0x1],AL
//   XREF to: Stack[-0x154] (DATA)
// 00562403: JMP 0x005620a2
//   XREF to: 005620a2 (UNCONDITIONAL_JUMP)
// 00562408: MOV ESI,ESP
//   Label: LAB_00562408
// 0056240a: MOV EDI,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x1c] (READ)
// 00562411: PUSH EDI
// 00562412: MOV AL,byte ptr [ESI]
//   Label: LAB_00562412
//   XREF to: Stack[-0x154] (DATA)
// 00562414: MOV byte ptr [EDI],AL
// 00562416: CMP AL,0x0
// 00562418: JZ 0x0056242a
//   XREF to: 0056242a (CONDITIONAL_JUMP)
// 0056241a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x153] (READ)
// 0056241d: ADD ESI,0x2
// 00562420: MOV byte ptr [EDI + 0x1],AL
// 00562423: ADD EDI,0x2
// 00562426: CMP AL,0x0
// 00562428: JNZ 0x00562412
//   XREF to: 00562412 (CONDITIONAL_JUMP)
// 0056242a: POP EDI
//   Label: LAB_0056242a
// 0056242b: MOV ESI,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x28] (READ)
// 00562432: ADD ESI,EBP
// 00562434: PUSH EDI
// 00562435: SUB ECX,ECX
// 00562437: DEC ECX
// 00562438: MOV AL,0x0
// 0056243a: SCASB.REPNE ES:EDI
// 0056243c: DEC EDI
// 0056243d: MOV AL,byte ptr [ESI]
//   Label: LAB_0056243d
// 0056243f: MOV byte ptr [EDI],AL
// 00562441: CMP AL,0x0
// 00562443: JZ 0x00562455
//   XREF to: 00562455 (CONDITIONAL_JUMP)
// 00562445: MOV AL,byte ptr [ESI + 0x1]
// 00562448: ADD ESI,0x2
// 0056244b: MOV byte ptr [EDI + 0x1],AL
// 0056244e: ADD EDI,0x2
// 00562451: CMP AL,0x0
// 00562453: JNZ 0x0056243d
//   XREF to: 0056243d (CONDITIONAL_JUMP)
// 00562455: POP EDI
//   Label: LAB_00562455
// 00562456: MOV EAX,0x2
// 0056245b: ADD ESP,0x144
// 00562461: POP EBP
// 00562462: POP EDI
// 00562463: POP ESI
// 00562464: POP EBX
// 00562465: RET
// 00562466: XOR BL,BL
//   Label: LAB_00562466
// 00562468: MOV EDI,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x1c] (READ)
// 0056246f: MOV byte ptr [ESP + ESI*0x1],BL
//   XREF to: Stack[-0x154] (DATA)
// 00562472: MOV ESI,ESP
// 00562474: PUSH EDI
// 00562475: MOV AL,byte ptr [ESI]
//   Label: LAB_00562475
//   XREF to: Stack[-0x154] (DATA)
// 00562477: MOV byte ptr [EDI],AL
// 00562479: CMP AL,0x0
// 0056247b: JZ 0x0056248d
//   XREF to: 0056248d (CONDITIONAL_JUMP)
// 0056247d: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x153] (READ)
// 00562480: ADD ESI,0x2
// 00562483: MOV byte ptr [EDI + 0x1],AL
// 00562486: ADD EDI,0x2
// 00562489: CMP AL,0x0
// 0056248b: JNZ 0x00562475
//   XREF to: 00562475 (CONDITIONAL_JUMP)
// 0056248d: POP EDI
//   Label: LAB_0056248d
// 0056248e: MOV ESI,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x14] (READ)
// 00562495: ADD ESI,EBP
// 00562497: PUSH EDI
// 00562498: SUB ECX,ECX
// 0056249a: DEC ECX
// 0056249b: MOV AL,0x0
// 0056249d: SCASB.REPNE ES:EDI
// 0056249f: DEC EDI
// 005624a0: MOV AL,byte ptr [ESI]
//   Label: LAB_005624a0
// 005624a2: MOV byte ptr [EDI],AL
// 005624a4: CMP AL,0x0
// 005624a6: JZ 0x005624b8
//   XREF to: 005624b8 (CONDITIONAL_JUMP)
// 005624a8: MOV AL,byte ptr [ESI + 0x1]
// 005624ab: ADD ESI,0x2
// 005624ae: MOV byte ptr [EDI + 0x1],AL
// 005624b1: ADD EDI,0x2
// 005624b4: CMP AL,0x0
// 005624b6: JNZ 0x005624a0
//   XREF to: 005624a0 (CONDITIONAL_JUMP)
// 005624b8: POP EDI
//   Label: LAB_005624b8
// 005624b9: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[0xc] (READ)
// 005624c0: ADD EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x24] (READ)
// 005624c7: CMP byte ptr [EAX],0x0
// 005624ca: JZ 0x005624dc
//   XREF to: 005624dc (CONDITIONAL_JUMP)
// 005624cc: MOV EAX,0x2
// 005624d1: ADD ESP,0x144
// 005624d7: POP EBP
// 005624d8: POP EDI
// 005624d9: POP ESI
// 005624da: POP EBX
// 005624db: RET
// 005624dc: MOV EAX,0x3
//   Label: LAB_005624dc
// 005624e1: ADD ESP,0x144
// 005624e7: POP EBP
// 005624e8: POP EDI
// 005624e9: POP ESI
// 005624ea: POP EBX
// 005624eb: RET
