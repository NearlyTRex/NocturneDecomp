// Name: core_script.cpp_FUN_00567310
// Address: 00567310
// Address Range: [[00567310, 00567482]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00567310()
// Cross-references:
//   core_script.cpp_FUN_00561a30 (00561a30) at 00561a60 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005671a0 (005671a0) at 005671df [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   core_event.cpp_FUN_004b0f90
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00567310(undefined1 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

undefined4 core_script_cpp_FUN_00567310(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  char *pcVar9;
  int in_stack_00000008;
  CStrList *in_stack_00000010;
  CBitFont *in_stack_00000014;
  int *in_stack_00000018;
  
  iVar2 = 0;
  do {
    do {
      do {
        iVar8 = iVar2;
        pcVar9 = (char *)(in_stack_00000008 + iVar8);
        iVar2 = iVar8 + 1;
      } while ((g_CharacterClassificationTable[(byte)(*pcVar9 + 1)] & 2U) != 0);
      if (*pcVar9 == '\0') {
        return 0xffffffff;
      }
      iVar5 = core_event_cpp_FUN_004b0f90();
    } while ((iVar5 == 0) && (*pcVar9 != '.'));
    if (*(char *)(in_stack_00000008 + iVar8) == '.') {
      iVar8 = iVar8 + 1;
    }
    pcVar9 = (char *)(iVar8 + in_stack_00000008);
    iVar5 = 0;
    while( true ) {
      iVar6 = core_event_cpp_FUN_004b0f90();
      iVar1 = iVar5 + 1;
      iVar2 = iVar8 + 1;
      if (iVar6 == 0) break;
      pcVar9 = pcVar9 + 1;
      (&stack0xfffffe54)[iVar5] = *(undefined1 *)(in_stack_00000008 + iVar8);
      iVar8 = iVar2;
      iVar5 = iVar1;
    }
    if (*pcVar9 == '(') {
      iVar7 = 1;
      pcVar9 = (char *)(iVar2 + in_stack_00000008);
      (&stack0xfffffe54)[iVar5] = *(undefined1 *)(in_stack_00000008 + iVar8);
      cVar4 = *pcVar9;
      iVar6 = iVar1;
      iVar8 = iVar2;
      while (iVar5 = iVar6, cVar4 != '\0') {
        if (*pcVar9 == '(') {
          iVar7 = iVar7 + 1;
        }
        if (*pcVar9 == ')') {
          iVar7 = iVar7 + -1;
        }
        pcVar9 = pcVar9 + 1;
        iVar5 = iVar6 + 1;
        puVar3 = (undefined1 *)(in_stack_00000008 + iVar8);
        iVar8 = iVar8 + 1;
        (&stack0xfffffe58)[iVar6] = *puVar3;
        if (iVar7 < 1) break;
        iVar6 = iVar5;
        cVar4 = *pcVar9;
      }
    }
    iVar2 = iVar8;
    if (0 < iVar5) {
      (&stack0xfffffe54)[iVar5] = 0;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(in_stack_00000010,&stack0xfffffe54);
      if (((in_stack_00000018 != (int *)0x0) && (iVar1 <= *in_stack_00000018)) &&
         (*in_stack_00000018 <= iVar8)) {
        *in_stack_00000018 = iVar1;
        shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(in_stack_00000014);
      }
    }
  } while( true );
}


// Assembly code:
// 00567310: PUSH EBX
//   Label: core_script.cpp_FUN_00567310
// 00567311: PUSH ESI
// 00567312: PUSH EDI
// 00567313: PUSH EBP
// 00567314: SUB ESP,0x19c
// 0056731a: MOV EDI,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[0x8] (READ)
// 00567321: MOV EDX,0xffffffff
// 00567326: XOR EBX,EBX
// 00567328: MOV dword ptr [ESP + 0x190],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056732f: LEA ESI,[EDI + EBX*0x1]
//   Label: LAB_0056732f
// 00567332: MOV AL,byte ptr [ESI]
// 00567334: INC AL
// 00567336: AND EAX,0xff
// 0056733b: MOV DL,byte ptr [EAX + 0x6849c4]
//   XREF to: 006849c4 (DATA)
// 00567341: LEA EBP,[EBX + 0x1]
// 00567344: TEST DL,0x2
// 00567347: JZ 0x0056734d
//   XREF to: 0056734d (CONDITIONAL_JUMP)
// 00567349: MOV EBX,EBP
// 0056734b: JMP 0x0056732f
//   XREF to: 0056732f (UNCONDITIONAL_JUMP)
// 0056734d: MOV DH,byte ptr [ESI]
//   Label: LAB_0056734d
// 0056734f: TEST DH,DH
// 00567351: JZ 0x00567471
//   XREF to: 00567471 (CONDITIONAL_JUMP)
// 00567357: XOR EAX,EAX
// 00567359: MOV AL,DH
// 0056735b: PUSH EAX
// 0056735c: CALL core_event.cpp_FUN_004b0f90
//   XREF to: 004b0f90 (UNCONDITIONAL_CALL)
// 00567361: ADD ESP,0x4
// 00567364: TEST EAX,EAX
// 00567366: JZ 0x005673b1
//   XREF to: 005673b1 (CONDITIONAL_JUMP)
// 00567368: LEA EAX,[EDI + EBX*0x1]
//   Label: LAB_00567368
// 0056736b: MOV dword ptr [ESP + 0x194],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00567372: MOV CH,byte ptr [EAX]
// 00567374: XOR ESI,ESI
// 00567376: CMP CH,0x2e
// 00567379: JZ 0x005673bd
//   XREF to: 005673bd (CONDITIONAL_JUMP)
// 0056737b: LEA EBP,[EBX + EDI*0x1]
//   Label: LAB_0056737b
// 0056737e: XOR EAX,EAX
//   Label: LAB_0056737e
// 00567380: MOV AL,byte ptr [EBP]
// 00567383: PUSH EAX
// 00567384: CALL core_event.cpp_FUN_004b0f90
//   XREF to: 004b0f90 (UNCONDITIONAL_CALL)
// 00567389: ADD ESP,0x4
// 0056738c: LEA EDX,[ESI + 0x1]
// 0056738f: MOV dword ptr [ESP + 0x198],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00567396: LEA EDX,[EBX + 0x1]
// 00567399: TEST EAX,EAX
// 0056739b: JZ 0x005673c0
//   XREF to: 005673c0 (CONDITIONAL_JUMP)
// 0056739d: MOV EAX,EBX
// 0056739f: INC EBP
// 005673a0: MOV AL,byte ptr [EDI + EAX*0x1]
// 005673a3: MOV EBX,EDX
// 005673a5: MOV byte ptr [ESP + ESI*0x1],AL
//   XREF to: Stack[-0x1ac] (DATA)
// 005673a8: MOV ESI,dword ptr [ESP + 0x198]
//   XREF to: Stack[-0x14] (READ)
// 005673af: JMP 0x0056737e
//   XREF to: 0056737e (UNCONDITIONAL_JUMP)
// 005673b1: CMP byte ptr [ESI],0x2e
//   Label: LAB_005673b1
// 005673b4: JZ 0x00567368
//   XREF to: 00567368 (CONDITIONAL_JUMP)
// 005673b6: MOV EBX,EBP
// 005673b8: JMP 0x0056732f
//   XREF to: 0056732f (UNCONDITIONAL_JUMP)
// 005673bd: INC EBX
//   Label: LAB_005673bd
// 005673be: JMP 0x0056737b
//   XREF to: 0056737b (UNCONDITIONAL_JUMP)
// 005673c0: CMP byte ptr [EBP],0x28
//   Label: LAB_005673c0
// 005673c4: JNZ 0x00567409
//   XREF to: 00567409 (CONDITIONAL_JUMP)
// 005673c6: MOV EBP,EBX
// 005673c8: MOV EAX,0x1
// 005673cd: MOV EBX,EDX
// 005673cf: MOV CL,byte ptr [EDI + EBP*0x1]
// 005673d2: LEA EBP,[EDX + EDI*0x1]
// 005673d5: MOV byte ptr [ESP + ESI*0x1],CL
//   XREF to: Stack[-0x1ac] (DATA)
// 005673d8: MOV ESI,dword ptr [ESP + 0x198]
//   XREF to: Stack[-0x14] (READ)
// 005673df: MOV CL,byte ptr [EBP]
// 005673e2: MOV EDX,EBP
// 005673e4: TEST CL,CL
// 005673e6: JZ 0x00567409
//   XREF to: 00567409 (CONDITIONAL_JUMP)
// 005673e8: CMP byte ptr [EDX],0x28
//   Label: LAB_005673e8
// 005673eb: JNZ 0x005673ee
//   XREF to: 005673ee (CONDITIONAL_JUMP)
// 005673ed: INC EAX
// 005673ee: CMP byte ptr [EDX],0x29
//   Label: LAB_005673ee
// 005673f1: JNZ 0x005673f4
//   XREF to: 005673f4 (CONDITIONAL_JUMP)
// 005673f3: DEC EAX
// 005673f4: MOV EBP,EBX
//   Label: LAB_005673f4
// 005673f6: INC EDX
// 005673f7: INC ESI
// 005673f8: MOV CL,byte ptr [EDI + EBP*0x1]
// 005673fb: INC EBX
// 005673fc: MOV byte ptr [ESP + ESI*0x1 + -0x1],CL
//   XREF to: Stack[-0x1ab] (DATA)
// 00567400: TEST EAX,EAX
// 00567402: JLE 0x00567409
//   XREF to: 00567409 (CONDITIONAL_JUMP)
// 00567404: CMP byte ptr [EDX],0x0
// 00567407: JNZ 0x005673e8
//   XREF to: 005673e8 (CONDITIONAL_JUMP)
// 00567409: CMP ESI,0x1
//   Label: LAB_00567409
// 0056740c: JL 0x0056732f
//   XREF to: 0056732f (CONDITIONAL_JUMP)
// 00567412: XOR AL,AL
// 00567414: MOV byte ptr [ESP + ESI*0x1],AL
//   XREF to: Stack[-0x1ab] (DATA)
// 00567417: MOV EAX,ESP
// 00567419: PUSH EAX
// 0056741a: MOV ECX,dword ptr [ESP + 0x1bc]
//   XREF to: Stack[0xc] (READ)
// 00567421: PUSH ECX
// 00567422: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00567427: ADD ESP,0x8
// 0056742a: MOV ESI,dword ptr [ESP + 0x1bc]
//   XREF to: Stack[0x10] (READ)
// 00567431: TEST ESI,ESI
// 00567433: JZ 0x0056732f
//   XREF to: 0056732f (CONDITIONAL_JUMP)
// 00567439: MOV EAX,dword ptr [ESP + 0x194]
//   XREF to: Stack[-0x18] (READ)
// 00567440: MOV EBP,dword ptr [ESI]
// 00567442: CMP EAX,EBP
// 00567444: JG 0x0056732f
//   XREF to: 0056732f (CONDITIONAL_JUMP)
// 0056744a: CMP EBX,EBP
// 0056744c: JL 0x0056732f
//   XREF to: 0056732f (CONDITIONAL_JUMP)
// 00567452: MOV ECX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[0xc] (READ)
// 00567459: PUSH ECX
// 0056745a: MOV dword ptr [ESI],EAX
// 0056745c: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00567461: ADD ESP,0x4
// 00567464: DEC EAX
// 00567465: MOV dword ptr [ESP + 0x190],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056746c: JMP 0x0056732f
//   XREF to: 0056732f (UNCONDITIONAL_JUMP)
// 00567471: MOV EAX,dword ptr [ESP + 0x190]
//   Label: LAB_00567471
//   XREF to: Stack[-0x1c] (READ)
// 00567478: ADD ESP,0x19c
// 0056747e: POP EBP
// 0056747f: POP EDI
// 00567480: POP ESI
// 00567481: POP EBX
// 00567482: RET
