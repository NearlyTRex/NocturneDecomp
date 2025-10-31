// Name: core_morph.cpp_CMorphModel_setFaceList_2_FUN_0052aca0
// Address: 0052aca0
// Address Range: [[0052aca0, 0052ae5e]]
// Convention: unknown
// Signature: undefined core_morph.cpp_CMorphModel_setFaceList_2_FUN_0052aca0()
// Cross-references:
//   core_morph.cpp_CMorphModel_addPart2_FUN_0052a710 (0052a710) at 0052a85d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_morph_cpp_0063a325
//   TerminatedCString s_CMorphModel_setFaceList__0063a337
//   TerminatedCString s_core_morph_cpp_0063a365
//   TerminatedCString s_CMorphModel_setFaceList__0063a377
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f43974
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_CMorphModel_setFaceList_2(CMorphModel* param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6,
   undefined4 param_7) */

void core_morph_cpp_CMorphModel_setFaceList_2_FUN_0052aca0(void)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  int iVar6;
  CMorphModel *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000014;
  ushort *in_stack_00000018;
  int in_stack_00000020;
  int in_stack_00000024;
  ushort *local_1c;
  char *local_14;
  
  if ((in_stack_00000008 < 0) || (*(int *)in_stack_00000004->padding_0x0 <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x191;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid part index");
  }
  iVar6 = (int)in_stack_00000018 +
          *(int *)(in_stack_00000004->padding_0x0 + in_stack_00000008 * 0x10 + 0x10);
  if (*(int *)(in_stack_00000004->padding_0x0 + in_stack_00000008 * 0x10 + 0x10) +
      *(int *)(in_stack_00000004->padding_0x0 + in_stack_00000008 * 0x10 + 8) <
      in_stack_00000020 + iVar6) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x198;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid vertex range");
  }
  if (0 < in_stack_00000020) {
    local_14 = in_stack_00000004->padding_0x0 + in_stack_00000008 * 0x10;
    iVar6 = iVar6 * 0x3c;
    local_1c = in_stack_00000018;
    do {
      iVar2 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
                        (in_stack_00000004,(char *)(*(int *)local_1c * 0x48 + in_stack_00000014 + 8)
                        );
      iVar5 = 0;
      *(undefined4 *)(*(int *)(in_stack_00000004->field2_0x58 + 8) + unaff_EDI + 4) = 3;
      puVar3 = local_1c;
      do {
        iVar4 = iVar5;
        if (DAT_02f43974 != 0) {
          iVar4 = 2 - iVar5;
        }
        iVar4 = iVar4 * 0xc;
        *(uint *)(iVar4 + 0x18 + *(int *)(in_stack_00000004->field2_0x58 + 8) + unaff_EDI) =
             (uint)*puVar3;
        iVar5 = iVar5 + 1;
        *(uint *)(iVar4 + 0x1c + *(int *)(in_stack_00000004->field2_0x58 + 8) + unaff_EDI) =
             (uint)puVar3[3] << 8;
        *(uint *)(iVar4 + *(int *)(in_stack_00000004->field2_0x58 + 8) + unaff_EDI + 0x20) =
             (uint)puVar3[6] << 8;
        puVar3 = puVar3 + 1;
      } while (iVar5 < 3);
      *(int *)(unaff_EDI + *(int *)(in_stack_00000004->field2_0x58 + 8)) = iVar2;
      piVar1 = (int *)(unaff_EDI + 0x18 + *(int *)(in_stack_00000004->field2_0x58 + 8));
      *piVar1 = *piVar1 + *(int *)(iVar6 + 0xc);
      *(int *)(unaff_EDI + 0x24 + *(int *)(in_stack_00000004->field2_0x58 + 8)) =
           *(int *)(unaff_EDI + 0x24 + *(int *)(in_stack_00000004->field2_0x58 + 8)) +
           *(int *)(iVar6 + 0xc);
      iVar2 = unaff_EDI + *(int *)(in_stack_00000004->field2_0x58 + 8);
      local_14 = local_14 + 1;
      *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + *(int *)(iVar6 + 0xc);
      local_1c = local_1c + 9;
      unaff_EDI = unaff_EDI + 0x3c;
    } while ((int)local_14 < in_stack_00000024);
  }
  return;
}


// Assembly code:
// 0052aca0: PUSH EBX
//   Label: core_morph.cpp_CMorphModel_setFaceList_2_FUN_0052aca0
// 0052aca1: PUSH ESI
// 0052aca2: PUSH EDI
// 0052aca3: PUSH EBP
// 0052aca4: SUB ESP,0x18
// 0052aca7: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0052acab: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0052acaf: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x18] (READ)
// 0052acb3: TEST ESI,ESI
// 0052acb5: JL 0x0052acbb
//   XREF to: 0052acbb (CONDITIONAL_JUMP)
// 0052acb7: CMP ESI,dword ptr [EBX]
// 0052acb9: JL 0x0052acde
//   XREF to: 0052acde (CONDITIONAL_JUMP)
// 0052acbb: MOV ECX,0x63a325
//   Label: LAB_0052acbb
//   XREF to: 0063a325 (PARAM)
// 0052acc0: MOV EBP,0x191
// 0052acc5: PUSH 0x63a337
//   XREF to: 0063a337 (DATA)
// 0052acca: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0052acd0: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0052acd6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052acdb: ADD ESP,0x4
// 0052acde: MOV EAX,ESI
//   Label: LAB_0052acde
// 0052ace0: SHL EAX,0x4
// 0052ace3: MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10]
// 0052ace7: MOV ECX,dword ptr [EBX + EAX*0x1 + 0x8]
// 0052aceb: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x1c] (READ)
// 0052acef: ADD EDI,EDX
// 0052acf1: ADD EDX,ECX
// 0052acf3: ADD EAX,EDI
// 0052acf5: CMP EAX,EDX
// 0052acf7: JLE 0x0052ad1b
//   XREF to: 0052ad1b (CONDITIONAL_JUMP)
// 0052acf9: MOV EBP,0x63a365
//   XREF to: 0063a365 (DATA)
// 0052acfe: MOV EAX,0x198
// 0052ad03: PUSH 0x63a377
//   XREF to: 0063a377 (DATA)
// 0052ad08: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0052ad0e: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0052ad13: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052ad18: ADD ESP,0x4
// 0052ad1b: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_0052ad1b
//   XREF to: Stack[0xc] (READ)
// 0052ad1f: XOR EDX,EDX
// 0052ad21: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x1c] (READ)
// 0052ad25: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052ad29: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0052ad2d: TEST ECX,ECX
// 0052ad2f: JLE 0x0052ae50
//   XREF to: 0052ae50 (CONDITIONAL_JUMP)
// 0052ad35: SHL ESI,0x4
// 0052ad38: LEA EAX,[EBX + ESI*0x1]
// 0052ad3b: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052ad3f: LEA EAX,[EDI*0x4 + 0x0]
// 0052ad46: MOV EDX,EAX
// 0052ad48: SHL EAX,0x4
// 0052ad4b: SUB EAX,EDX
// 0052ad4d: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052ad51: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x14] (READ)
// 0052ad55: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0052ad59: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0052ad59
//   XREF to: Stack[-0x20] (READ)
// 0052ad5d: IMUL EAX,dword ptr [EAX],0x48
// 0052ad60: ADD EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 0052ad64: ADD EAX,0x8
// 0052ad67: PUSH EAX
// 0052ad68: PUSH EBX
// 0052ad69: CALL core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
//   XREF to: 0052ae60 (UNCONDITIONAL_CALL)
// 0052ad6e: ADD ESP,0x8
// 0052ad71: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0052ad75: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 0052ad78: MOV EAX,dword ptr [EBX + 0x60]
// 0052ad7b: ADD EAX,EDI
// 0052ad7d: XOR EDX,EDX
// 0052ad7f: MOV ESI,EDI
// 0052ad81: MOV dword ptr [EAX + 0x4],0x3
// 0052ad88: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0052ad8c: CMP dword ptr [0x02f43974],0x0
//   Label: LAB_0052ad8c
//   XREF to: 02f43974 (READ)
// 0052ad93: JZ 0x0052ae58
//   XREF to: 0052ae58 (CONDITIONAL_JUMP)
// 0052ad99: MOV ECX,0x2
// 0052ad9e: SUB ECX,EDX
// 0052ada0: IMUL ECX,ECX,0xc
//   Label: LAB_0052ada0
// 0052ada3: MOV EDI,dword ptr [EBX + 0x60]
// 0052ada6: ADD EDI,ESI
// 0052ada8: MOVZX EBP,word ptr [EAX]
// 0052adab: MOV dword ptr [ECX + EDI*0x1 + 0x18],EBP
// 0052adaf: ADD EAX,0x2
// 0052adb2: MOV EDI,dword ptr [EBX + 0x60]
// 0052adb5: MOVZX EBP,word ptr [EAX + 0x4]
// 0052adb9: ADD EDI,ESI
// 0052adbb: SHL EBP,0x8
// 0052adbe: INC EDX
// 0052adbf: MOV dword ptr [ECX + EDI*0x1 + 0x1c],EBP
// 0052adc3: MOV EBP,dword ptr [EBX + 0x60]
// 0052adc6: XOR EDI,EDI
// 0052adc8: ADD EBP,ESI
// 0052adca: MOV DI,word ptr [EAX + 0xa]
// 0052adce: ADD ECX,EBP
// 0052add0: SHL EDI,0x8
// 0052add3: MOV dword ptr [ECX + 0x20],EDI
// 0052add6: CMP EDX,0x3
// 0052add9: JL 0x0052ad8c
//   XREF to: 0052ad8c (CONDITIONAL_JUMP)
// 0052addb: MOV EAX,dword ptr [EBX + 0x60]
// 0052adde: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0052ade1: MOV dword ptr [ESI + EAX*0x1],EDX
// 0052ade4: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0052ade8: MOV EAX,dword ptr [EBX + 0x60]
// 0052adeb: MOV EDX,dword ptr [EDX + 0xc]
// 0052adee: ADD dword ptr [ESI + EAX*0x1 + 0x18],EDX
// 0052adf2: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0052adf6: MOV EAX,dword ptr [EBX + 0x60]
// 0052adf9: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0052adfd: MOV EDX,dword ptr [EDX + 0xc]
// 0052ae00: MOV EBP,dword ptr [ESI + EAX*0x1 + 0x24]
// 0052ae04: ADD ECX,0x3c
// 0052ae07: ADD EBP,EDX
// 0052ae09: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0052ae0d: MOV dword ptr [ESI + EAX*0x1 + 0x24],EBP
// 0052ae11: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0052ae15: MOV EAX,dword ptr [EBX + 0x60]
// 0052ae18: ADD EDI,0x4
// 0052ae1b: ADD ESI,EAX
// 0052ae1d: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0052ae21: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0052ae25: MOV EDX,dword ptr [ESI + 0x30]
// 0052ae28: MOV EAX,dword ptr [EAX + 0xc]
// 0052ae2b: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0052ae2f: ADD EDX,EAX
// 0052ae31: INC EBP
// 0052ae32: MOV dword ptr [ESI + 0x30],EDX
// 0052ae35: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0052ae39: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 0052ae3d: ADD ESI,0x12
// 0052ae40: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x1c] (READ)
// 0052ae44: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0052ae48: CMP EBP,EDX
// 0052ae4a: JL 0x0052ad59
//   XREF to: 0052ad59 (CONDITIONAL_JUMP)
// 0052ae50: ADD ESP,0x18
//   Label: LAB_0052ae50
// 0052ae53: POP EBP
// 0052ae54: POP EDI
// 0052ae55: POP ESI
// 0052ae56: POP EBX
// 0052ae57: RET
// 0052ae58: MOV ECX,EDX
//   Label: LAB_0052ae58
// 0052ae5a: JMP 0x0052ada0
//   XREF to: 0052ada0 (UNCONDITIONAL_JUMP)
