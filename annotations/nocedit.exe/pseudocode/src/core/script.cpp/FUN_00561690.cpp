// Name: core_script.cpp_FUN_00561690
// Address: 00561690
// Address Range: [[00561690, 00561a28]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00561690()
// Cross-references:
//   core_script.cpp_FUN_00561a30 (00561a30) at 00561b29 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00561c70 (00561c70) at 00561c9e [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0056160c = 00561842
// Function calls:
//   core_script.cpp_FUN_00561a30
//   core_script.cpp_SCmdParse_bestParse_FUN_00561db0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00561690(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4
   param_7, undefined4 param_8, undefined4 param_9) */

int core_script_cpp_FUN_00561690(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *unaff_EBP;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  char *in_stack_00000008;
  char *in_stack_00000010;
  undefined4 *in_stack_0000001c;
  undefined4 *in_stack_00000020;
  char *local_2144;
  char acStack_2140 [100];
  char acStack_20dc [104];
  int iStack_2074;
  char acStack_2070 [96];
  char acStack_2010 [4];
  char acStack_200c [496];
  undefined4 auStack_1e1c [1871];
  char acStack_e0 [196];
  int local_1c;
  undefined4 local_18;
  int local_14;
  
  bVar10 = 0;
  local_14 = core_script_cpp_SCmdParse_bestParse_FUN_00561db0();
  if (local_14 < 0) {
    return -1;
  }
  if (in_stack_00000020 != (undefined4 *)0x0) {
    ppcVar4 = &local_2144;
    for (iVar2 = 0x84a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *in_stack_00000020 = *ppcVar4;
      ppcVar4 = ppcVar4 + (uint)bVar10 * -2 + 1;
      in_stack_00000020 = in_stack_00000020 + (uint)bVar10 * -2 + 1;
    }
  }
  pcVar5 = acStack_2140;
  pcVar7 = in_stack_00000008;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  pcVar5 = acStack_20dc;
  iVar2 = -1;
  pcVar7 = in_stack_00000008;
  do {
    pcVar8 = pcVar7;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar7 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  iVar2 = 0;
  if (0 < local_14) {
    unaff_EBP = acStack_2010;
    do {
      pcVar7 = acStack_2070 + iVar2 * 0x328 + -4;
      iVar3 = -1;
      pcVar5 = in_stack_00000008;
      do {
        pcVar8 = pcVar5;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar8 = pcVar5 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar8;
      } while (cVar1 != '\0');
      pcVar8 = pcVar8 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      iVar3 = -1;
      pcVar5 = in_stack_00000008;
      do {
        pcVar7 = pcVar5;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar5 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      pcVar5 = unaff_EBP;
      do {
        cVar1 = *pcVar5;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      iVar2 = iVar2 + 1;
      unaff_EBP = unaff_EBP + 0x328;
    } while (iVar2 < local_14);
  }
  local_1c = local_14 * 0x328;
  pcVar7 = acStack_2070 + local_1c + -4;
  iVar2 = -1;
  pcVar5 = in_stack_00000008;
  do {
    pcVar8 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar5 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar8;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  local_18 = auStack_1e1c[local_14 * 0xca];
  switch(auStack_1e1c[local_14 * 0xca]) {
  default:
    iVar2 = 0xca;
    pcVar5 = acStack_2010 + local_14 * 0x328;
    *in_stack_00000010 = '\0';
    pcVar7 = in_stack_00000010;
    do {
      cVar1 = *pcVar5;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar5 = acStack_2070 + local_14 * 0x328 + -4;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *in_stack_0000001c = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + ((uint)bVar10 * -2 + 1) * 4;
      in_stack_0000001c = in_stack_0000001c + (uint)bVar10 * -2 + 1;
    }
    break;
  case 4:
    iVar2 = -1;
    pcVar5 = in_stack_00000008;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    iVar2 = -1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    local_14 = core_script_cpp_FUN_00561a30();
    break;
  case 0x14:
    pcVar5 = acStack_2010 + local_1c;
    *in_stack_00000010 = '\0';
    pcVar7 = in_stack_00000010;
    do {
      cVar1 = *pcVar5;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar5 = acStack_2070 + local_1c + -4;
    for (iVar2 = 0xca; iVar2 != 0; iVar2 = iVar2 + -1) {
      *in_stack_0000001c = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + ((uint)bVar10 * -2 + 1) * 4;
      in_stack_0000001c = in_stack_0000001c + (uint)bVar10 * -2 + 1;
    }
    local_18 = 0x20;
  }
  pcVar5 = unaff_EBP + 1;
  if ((int)pcVar5 < iStack_2074) {
    pcVar7 = acStack_200c + (int)pcVar5 * 0x328;
    do {
      pcVar6 = acStack_2070 + (int)pcVar5 * 0x328;
      local_2144 = in_stack_00000010;
      iVar2 = -1;
      pcVar8 = in_stack_00000010;
      do {
        pcVar9 = pcVar8;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar9 = pcVar8 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + 1;
      iVar2 = -1;
      pcVar8 = in_stack_00000010;
      do {
        pcVar6 = pcVar8;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar6 = pcVar8 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      pcVar8 = pcVar7;
      do {
        cVar1 = *pcVar8;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + 0x328;
    } while ((int)pcVar5 < iStack_2074);
  }
  pcVar5 = acStack_e0;
  local_2144 = in_stack_00000010;
  iVar2 = -1;
  do {
    pcVar7 = in_stack_00000010;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = in_stack_00000010 + (uint)bVar10 * -2 + 1;
    cVar1 = *in_stack_00000010;
    in_stack_00000010 = pcVar7;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') {
      return local_14;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  return local_14;
}


// Assembly code:
// 00561690: PUSH EBX
//   Label: core_script.cpp_FUN_00561690
// 00561691: PUSH ESI
// 00561692: PUSH EDI
// 00561693: PUSH EBP
// 00561694: SUB ESP,0x2138
// 0056169a: MOV EBX,dword ptr [ESP + 0x2150]
//   XREF to: Stack[0x8] (READ)
// 005616a1: MOV EBP,dword ptr [ESP + 0x2158]
//   XREF to: Stack[0x10] (READ)
// 005616a8: MOV EDX,dword ptr [ESP + 0x216c]
//   XREF to: Stack[0x24] (READ)
// 005616af: PUSH EDX
// 005616b0: MOV ECX,dword ptr [ESP + 0x216c]
//   XREF to: Stack[0x20] (READ)
// 005616b7: PUSH ECX
// 005616b8: MOV ESI,dword ptr [ESP + 0x2164]
//   XREF to: Stack[0x14] (READ)
// 005616bf: PUSH ESI
// 005616c0: MOV EDI,dword ptr [ESP + 0x2158]
//   XREF to: Stack[0x4] (READ)
// 005616c7: PUSH EDI
// 005616c8: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x2148] (DATA)
// 005616cc: PUSH EAX
// 005616cd: CALL core_script.cpp_SCmdParse_bestParse_FUN_00561db0
//   XREF to: 00561db0 (UNCONDITIONAL_CALL)
// 005616d2: ADD ESP,0x14
// 005616d5: MOV dword ptr [ESP + 0x2130],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005616dc: TEST EAX,EAX
// 005616de: JL 0x0056196f
//   XREF to: 0056196f (CONDITIONAL_JUMP)
// 005616e4: MOV EAX,dword ptr [ESP + 0x2164]
//   XREF to: Stack[0x1c] (READ)
// 005616eb: TEST EAX,EAX
// 005616ed: JZ 0x005616fa
//   XREF to: 005616fa (CONDITIONAL_JUMP)
// 005616ef: MOV ECX,0x84a
// 005616f4: MOV ESI,ESP
// 005616f6: MOV EDI,EAX
// 005616f8: MOVSD.REP ES:EDI,ESI
// 005616fa: LEA ESI,[ESP + 0x4]
//   Label: LAB_005616fa
//   XREF to: Stack[-0x2144] (DATA)
// 005616fe: MOV EDI,EBX
// 00561700: PUSH EDI
// 00561701: MOV AL,byte ptr [ESI]
//   Label: LAB_00561701
//   XREF to: Stack[-0x2144] (DATA)
// 00561703: MOV byte ptr [EDI],AL
// 00561705: CMP AL,0x0
// 00561707: JZ 0x00561719
//   XREF to: 00561719 (CONDITIONAL_JUMP)
// 00561709: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x2143] (READ)
// 0056170c: ADD ESI,0x2
// 0056170f: MOV byte ptr [EDI + 0x1],AL
// 00561712: ADD EDI,0x2
// 00561715: CMP AL,0x0
// 00561717: JNZ 0x00561701
//   XREF to: 00561701 (CONDITIONAL_JUMP)
// 00561719: POP EDI
//   Label: LAB_00561719
// 0056171a: LEA ESI,[ESP + 0x68]
//   XREF to: Stack[-0x20e0] (DATA)
// 0056171e: PUSH EDI
// 0056171f: SUB ECX,ECX
// 00561721: DEC ECX
// 00561722: MOV AL,0x0
// 00561724: SCASB.REPNE ES:EDI
// 00561726: DEC EDI
// 00561727: MOV AL,byte ptr [ESI]
//   Label: LAB_00561727
//   XREF to: Stack[-0x20e0] (DATA)
// 00561729: MOV byte ptr [EDI],AL
// 0056172b: CMP AL,0x0
// 0056172d: JZ 0x0056173f
//   XREF to: 0056173f (CONDITIONAL_JUMP)
// 0056172f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x20df] (READ)
// 00561732: ADD ESI,0x2
// 00561735: MOV byte ptr [EDI + 0x1],AL
// 00561738: ADD EDI,0x2
// 0056173b: CMP AL,0x0
// 0056173d: JNZ 0x00561727
//   XREF to: 00561727 (CONDITIONAL_JUMP)
// 0056173f: POP EDI
//   Label: LAB_0056173f
// 00561740: MOV ECX,dword ptr [ESP + 0x2130]
//   XREF to: Stack[-0x18] (READ)
// 00561747: XOR EDX,EDX
// 00561749: TEST ECX,ECX
// 0056174b: JLE 0x005617e0
//   XREF to: 005617e0 (CONDITIONAL_JUMP)
// 00561751: LEA EAX,[ESP + 0xd0]
//   XREF to: Stack[-0x2078] (DATA)
// 00561758: ADD EAX,0x64
// 0056175b: MOV dword ptr [ESP + 0x2134],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00561762: IMUL EAX,EDX,0x328
//   Label: LAB_00561762
// 00561768: LEA ESI,[ESP + 0xd0]
//   XREF to: Stack[-0x2078] (DATA)
// 0056176f: MOV EDI,EBX
// 00561771: ADD ESI,EAX
// 00561773: PUSH EDI
// 00561774: SUB ECX,ECX
// 00561776: DEC ECX
// 00561777: MOV AL,0x0
// 00561779: SCASB.REPNE ES:EDI
// 0056177b: DEC EDI
// 0056177c: MOV AL,byte ptr [ESI]
//   Label: LAB_0056177c
//   XREF to: Stack[-0x2078] (DATA)
// 0056177e: MOV byte ptr [EDI],AL
// 00561780: CMP AL,0x0
// 00561782: JZ 0x00561794
//   XREF to: 00561794 (CONDITIONAL_JUMP)
// 00561784: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x2077] (READ)
// 00561787: ADD ESI,0x2
// 0056178a: MOV byte ptr [EDI + 0x1],AL
// 0056178d: ADD EDI,0x2
// 00561790: CMP AL,0x0
// 00561792: JNZ 0x0056177c
//   XREF to: 0056177c (CONDITIONAL_JUMP)
// 00561794: POP EDI
//   Label: LAB_00561794
// 00561795: MOV ESI,dword ptr [ESP + 0x2134]
//   XREF to: Stack[-0x14] (READ)
// 0056179c: PUSH EDI
// 0056179d: SUB ECX,ECX
// 0056179f: DEC ECX
// 005617a0: MOV AL,0x0
// 005617a2: SCASB.REPNE ES:EDI
// 005617a4: DEC EDI
// 005617a5: MOV AL,byte ptr [ESI]
//   Label: LAB_005617a5
//   XREF to: Stack[-0x2014] (DATA)
// 005617a7: MOV byte ptr [EDI],AL
// 005617a9: CMP AL,0x0
// 005617ab: JZ 0x005617bd
//   XREF to: 005617bd (CONDITIONAL_JUMP)
// 005617ad: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x2013] (READ)
// 005617b0: ADD ESI,0x2
// 005617b3: MOV byte ptr [EDI + 0x1],AL
// 005617b6: ADD EDI,0x2
// 005617b9: CMP AL,0x0
// 005617bb: JNZ 0x005617a5
//   XREF to: 005617a5 (CONDITIONAL_JUMP)
// 005617bd: POP EDI
//   Label: LAB_005617bd
// 005617be: MOV ESI,dword ptr [ESP + 0x2134]
//   XREF to: Stack[-0x14] (READ)
// 005617c5: INC EDX
// 005617c6: ADD ESI,0x328
// 005617cc: MOV EDI,dword ptr [ESP + 0x2130]
//   XREF to: Stack[-0x18] (READ)
// 005617d3: MOV dword ptr [ESP + 0x2134],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005617da: CMP EDX,EDI
// 005617dc: JL 0x00561762
//   XREF to: 00561762 (CONDITIONAL_JUMP)
// 005617de: MOV EAX,EAX
// 005617e0: IMUL EAX,dword ptr [ESP + 0x2130],0x328
//   Label: LAB_005617e0
//   XREF to: Stack[-0x18] (READ)
// 005617eb: LEA EDX,[ESP + 0xd0]
//   XREF to: Stack[-0x2078] (DATA)
// 005617f2: ADD EDX,EAX
// 005617f4: MOV EDI,EBX
// 005617f6: MOV ESI,EDX
// 005617f8: MOV dword ptr [ESP + 0x2128],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005617ff: PUSH EDI
// 00561800: SUB ECX,ECX
// 00561802: DEC ECX
// 00561803: MOV AL,0x0
// 00561805: SCASB.REPNE ES:EDI
// 00561807: DEC EDI
// 00561808: MOV AL,byte ptr [ESI]
//   Label: LAB_00561808
// 0056180a: MOV byte ptr [EDI],AL
// 0056180c: CMP AL,0x0
// 0056180e: JZ 0x00561820
//   XREF to: 00561820 (CONDITIONAL_JUMP)
// 00561810: MOV AL,byte ptr [ESI + 0x1]
// 00561813: ADD ESI,0x2
// 00561816: MOV byte ptr [EDI + 0x1],AL
// 00561819: ADD EDI,0x2
// 0056181c: CMP AL,0x0
// 0056181e: JNZ 0x00561808
//   XREF to: 00561808 (CONDITIONAL_JUMP)
// 00561820: POP EDI
//   Label: LAB_00561820
// 00561821: MOV EAX,dword ptr [ESP + 0x2128]
//   XREF to: Stack[-0x20] (READ)
// 00561828: MOV EAX,dword ptr [ESP + EAX*0x1 + 0x328]
// 0056182f: MOV dword ptr [ESP + 0x212c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00561836: CMP EAX,0x20
// 00561839: JA 0x00561842
//   XREF to: 00561842 (CONDITIONAL_JUMP)
// 0056183b: JMP dword ptr [EAX*0x4 + 0x56160c]
//   Label: switchD
//   XREF to: 00561842 (COMPUTED_JUMP)
//   XREF to: 00561981 (COMPUTED_JUMP)
//   XREF to: 005619d5 (COMPUTED_JUMP)
//   XREF to: 0056160c (DATA)
// 00561842: IMUL EDX,dword ptr [ESP + 0x2130],0x328
//   Label: caseD_20
//   XREF to: Stack[-0x18] (READ)
// 0056184d: LEA EAX,[ESP + 0xd0]
//   XREF to: Stack[-0x2078] (DATA)
// 00561854: MOV ECX,0xca
// 00561859: ADD EAX,EDX
// 0056185b: MOV EDI,dword ptr [ESP + 0x2154]
//   XREF to: Stack[0xc] (READ)
// 00561862: LEA ESI,[EAX + 0x64]
// 00561865: MOV byte ptr [EBP],0x0
// 00561869: PUSH EDI
// 0056186a: MOV AL,byte ptr [ESI]
//   Label: LAB_0056186a
// 0056186c: MOV byte ptr [EDI],AL
// 0056186e: CMP AL,0x0
// 00561870: JZ 0x00561882
//   XREF to: 00561882 (CONDITIONAL_JUMP)
// 00561872: MOV AL,byte ptr [ESI + 0x1]
// 00561875: ADD ESI,0x2
// 00561878: MOV byte ptr [EDI + 0x1],AL
// 0056187b: ADD EDI,0x2
// 0056187e: CMP AL,0x0
// 00561880: JNZ 0x0056186a
//   XREF to: 0056186a (CONDITIONAL_JUMP)
// 00561882: POP EDI
//   Label: LAB_00561882
// 00561883: MOV EDI,dword ptr [ESP + 0x2160]
//   XREF to: Stack[0x18] (READ)
// 0056188a: LEA ESI,[ESP + EDX*0x1 + 0xd0]
// 00561891: MOVSD.REP ES:EDI,ESI
// 00561893: MOV EBX,dword ptr [ESP + 0x2130]
//   Label: LAB_00561893
//   XREF to: Stack[-0x18] (READ)
// 0056189a: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x207c] (READ)
// 005618a1: INC EBX
// 005618a2: CMP EBX,EAX
// 005618a4: JGE 0x00561930
//   XREF to: 00561930 (CONDITIONAL_JUMP)
// 005618aa: IMUL EDX,EBX,0x328
// 005618b0: LEA EAX,[ESP + 0xd0]
//   XREF to: Stack[-0x2078] (DATA)
// 005618b7: ADD EDX,0x64
// 005618ba: MOV EDI,EBP
// 005618bc: ADD EDX,EAX
// 005618be: IMUL EAX,EBX,0x328
//   Label: LAB_005618be
// 005618c4: LEA ESI,[ESP + 0xd0]
//   XREF to: Stack[-0x2078] (DATA)
// 005618cb: ADD ESI,EAX
// 005618cd: PUSH EDI
// 005618ce: SUB ECX,ECX
// 005618d0: DEC ECX
// 005618d1: MOV AL,0x0
// 005618d3: SCASB.REPNE ES:EDI
// 005618d5: DEC EDI
// 005618d6: MOV AL,byte ptr [ESI]
//   Label: LAB_005618d6
// 005618d8: MOV byte ptr [EDI],AL
// 005618da: CMP AL,0x0
// 005618dc: JZ 0x005618ee
//   XREF to: 005618ee (CONDITIONAL_JUMP)
// 005618de: MOV AL,byte ptr [ESI + 0x1]
// 005618e1: ADD ESI,0x2
// 005618e4: MOV byte ptr [EDI + 0x1],AL
// 005618e7: ADD EDI,0x2
// 005618ea: CMP AL,0x0
// 005618ec: JNZ 0x005618d6
//   XREF to: 005618d6 (CONDITIONAL_JUMP)
// 005618ee: POP EDI
//   Label: LAB_005618ee
// 005618ef: MOV ESI,EDX
// 005618f1: INC EBX
// 005618f2: PUSH EDI
// 005618f3: SUB ECX,ECX
// 005618f5: DEC ECX
// 005618f6: MOV AL,0x0
// 005618f8: SCASB.REPNE ES:EDI
// 005618fa: DEC EDI
// 005618fb: MOV AL,byte ptr [ESI]
//   Label: LAB_005618fb
// 005618fd: MOV byte ptr [EDI],AL
// 005618ff: CMP AL,0x0
// 00561901: JZ 0x00561913
//   XREF to: 00561913 (CONDITIONAL_JUMP)
// 00561903: MOV AL,byte ptr [ESI + 0x1]
// 00561906: ADD ESI,0x2
// 00561909: MOV byte ptr [EDI + 0x1],AL
// 0056190c: ADD EDI,0x2
// 0056190f: CMP AL,0x0
// 00561911: JNZ 0x005618fb
//   XREF to: 005618fb (CONDITIONAL_JUMP)
// 00561913: POP EDI
//   Label: LAB_00561913
// 00561914: MOV ECX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x207c] (READ)
// 0056191b: ADD EDX,0x328
// 00561921: CMP EBX,ECX
// 00561923: JL 0x005618be
//   XREF to: 005618be (CONDITIONAL_JUMP)
// 00561925: LEA EAX,[EAX]
// 0056192b: LEA EDX,[EDX]
// 0056192e: MOV EBX,EBX
// 00561930: LEA ESI,[ESP + 0x2060]
//   Label: LAB_00561930
//   XREF to: Stack[-0xe8] (DATA)
// 00561937: MOV EDI,EBP
// 00561939: PUSH EDI
// 0056193a: SUB ECX,ECX
// 0056193c: DEC ECX
// 0056193d: MOV AL,0x0
// 0056193f: SCASB.REPNE ES:EDI
// 00561941: DEC EDI
// 00561942: MOV AL,byte ptr [ESI]
//   Label: LAB_00561942
//   XREF to: Stack[-0xe8] (DATA)
// 00561944: MOV byte ptr [EDI],AL
// 00561946: CMP AL,0x0
// 00561948: JZ 0x0056195a
//   XREF to: 0056195a (CONDITIONAL_JUMP)
// 0056194a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0xe7] (READ)
// 0056194d: ADD ESI,0x2
// 00561950: MOV byte ptr [EDI + 0x1],AL
// 00561953: ADD EDI,0x2
// 00561956: CMP AL,0x0
// 00561958: JNZ 0x00561942
//   XREF to: 00561942 (CONDITIONAL_JUMP)
// 0056195a: POP EDI
//   Label: LAB_0056195a
// 0056195b: MOV ESI,dword ptr [ESP + 0x212c]
//   XREF to: Stack[-0x1c] (READ)
// 00561962: MOV EAX,ESI
// 00561964: ADD ESP,0x2138
// 0056196a: POP EBP
// 0056196b: POP EDI
// 0056196c: POP ESI
// 0056196d: POP EBX
// 0056196e: RET
// 0056196f: MOV ESI,0xffffffff
//   Label: LAB_0056196f
// 00561974: MOV EAX,ESI
// 00561976: ADD ESP,0x2138
// 0056197c: POP EBP
// 0056197d: POP EDI
// 0056197e: POP ESI
// 0056197f: POP EBX
// 00561980: RET
// 00561981: SUB ECX,ECX
//   Label: caseD_4
// 00561983: DEC ECX
// 00561984: XOR EAX,EAX
// 00561986: SCASB.REPNE ES:EDI
// 00561988: NOT ECX
// 0056198a: DEC ECX
// 0056198b: MOV ESI,dword ptr [ESP + 0x215c]
//   XREF to: Stack[0x14] (READ)
// 00561992: MOV EDI,EBX
// 00561994: SUB ESI,ECX
// 00561996: SUB ECX,ECX
// 00561998: DEC ECX
// 00561999: XOR EAX,EAX
// 0056199b: SCASB.REPNE ES:EDI
// 0056199d: NOT ECX
// 0056199f: DEC ECX
// 005619a0: MOV EAX,dword ptr [ESP + 0x2164]
//   XREF to: Stack[0x1c] (READ)
// 005619a7: PUSH EAX
// 005619a8: ADD ECX,EBX
// 005619aa: MOV EBX,dword ptr [ESP + 0x2164]
//   XREF to: Stack[0x18] (READ)
// 005619b1: PUSH EBX
// 005619b2: PUSH ESI
// 005619b3: PUSH EBP
// 005619b4: MOV ESI,dword ptr [ESP + 0x2164]
//   XREF to: Stack[0xc] (READ)
// 005619bb: PUSH ESI
// 005619bc: PUSH ECX
// 005619bd: ADD EDX,0x64
// 005619c0: PUSH EDX
// 005619c1: CALL core_script.cpp_FUN_00561a30
//   XREF to: 00561a30 (UNCONDITIONAL_CALL)
// 005619c6: ADD ESP,0x1c
// 005619c9: MOV dword ptr [ESP + 0x212c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005619d0: JMP 0x00561893
//   XREF to: 00561893 (UNCONDITIONAL_JUMP)
// 005619d5: MOV EDI,dword ptr [ESP + 0x2154]
//   Label: caseD_14
//   XREF to: Stack[0xc] (READ)
// 005619dc: LEA ESI,[EDX + 0x64]
// 005619df: MOV byte ptr [EBP],0x0
// 005619e3: PUSH EDI
// 005619e4: MOV AL,byte ptr [ESI]
//   Label: LAB_005619e4
// 005619e6: MOV byte ptr [EDI],AL
// 005619e8: CMP AL,0x0
// 005619ea: JZ 0x005619fc
//   XREF to: 005619fc (CONDITIONAL_JUMP)
// 005619ec: MOV AL,byte ptr [ESI + 0x1]
// 005619ef: ADD ESI,0x2
// 005619f2: MOV byte ptr [EDI + 0x1],AL
// 005619f5: ADD EDI,0x2
// 005619f8: CMP AL,0x0
// 005619fa: JNZ 0x005619e4
//   XREF to: 005619e4 (CONDITIONAL_JUMP)
// 005619fc: POP EDI
//   Label: LAB_005619fc
// 005619fd: MOV ESI,dword ptr [ESP + 0x2128]
//   XREF to: Stack[-0x20] (READ)
// 00561a04: MOV ECX,0xca
// 00561a09: MOV EDI,dword ptr [ESP + 0x2160]
//   XREF to: Stack[0x18] (READ)
// 00561a10: LEA ESI,[ESP + ESI*0x1 + 0xd0]
// 00561a17: MOVSD.REP ES:EDI,ESI
// 00561a19: MOV dword ptr [ESP + 0x212c],0x20
//   XREF to: Stack[-0x1c] (WRITE)
// 00561a24: JMP 0x00561893
//   XREF to: 00561893 (UNCONDITIONAL_JUMP)
