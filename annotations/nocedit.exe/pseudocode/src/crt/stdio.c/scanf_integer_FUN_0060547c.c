// Name: crt_stdio.c_scanf_integer_FUN_0060547c
// Address: 0060547c
// Address Range: [[0060547c, 006058e4]]
// Convention: __cdecl
// Signature: int crt_stdio.c_scanf_integer_FUN_0060547c(scanf_state_t * state, va_list_t * args, int base, int is_signed)
// Cross-references:
//   crt_stdio.c_doscan_FUN_00604950 (00604950) at 00604b21 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_math.c_mul64_FUN_0060b2b8
//   crt_stdio.c_char_to_digit_FUN_006058e8
//   crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c

#include "nocturne.h"

int __cdecl
crt_stdio_c_scanf_integer_FUN_0060547c(scanf_state_t *state,va_list_t *args,int base,int is_signed)

{
  byte bVar1;
  va_list_t pcVar2;
  undefined4 *puVar3;
  undefined6 *puVar4;
  int iVar5;
  int iVar6;
  uint high2;
  int *piVar7;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar8;
  uint *puVar9;
  undefined2 in_ES;
  byte bVar10;
  ulonglong uVar11;
  scanf_state_t *in_stack_00000014;
  uint in_stack_ffffffcc;
  ulonglong local_30;
  uint uStack_2c;
  char local_20;
  uint local_1c;
  int local_18;
  int iStack_10;
  
  bVar10 = 0;
  iStack_10 = CONCAT22(iStack_10._2_2_,in_ES);
  iVar8 = 0;
  local_18 = 0;
  while( true ) {
    iVar5 = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
    local_20 = (char)iVar5;
    if ((g_CharacterClassificationTable[(byte)(local_20 + 1)] & 2U) == 0) break;
    local_18 = local_18 + 1;
  }
  if (((uint)args[4] & 2) != 0) goto LAB_00605798;
  pcVar2 = args[3];
  args[3] = pcVar2 + -1;
  if (pcVar2 != (va_list_t)0x0) {
    local_1c = 0x2b;
    if ((in_stack_00000014 != (scanf_state_t *)0x0) && ((iVar5 == 0x2b || (iVar5 == 0x2d)))) {
      local_18 = local_18 + 1;
      local_1c = crt_stdio_c_scanf_getc_with_width_FUN_00605918((scanf_state_t *)args);
      if (local_1c == 0xffffffff) goto LAB_00605798;
    }
    if (base == 0) {
      if (local_1c == 0x30) {
        iVar5 = crt_stdio_c_scanf_getc_with_width_FUN_00605918((scanf_state_t *)0x0);
        iVar8 = 1;
        if (iVar5 == -1) goto LAB_00605798;
        if ((iVar5 == 0x78) || (iVar5 == 0x58)) {
          unaff_EBP = local_18 + 2;
          local_1c = crt_stdio_c_scanf_getc_with_width_FUN_00605918((scanf_state_t *)args);
          iVar8 = 0;
          if (local_1c == 0xffffffff) goto LAB_00605798;
          iVar5 = 0x10;
        }
        else {
          iVar5 = 8;
        }
      }
      else {
        iVar5 = 10;
      }
    }
    else {
      iVar5 = base;
      if ((base == 0x10) && (local_1c == 0x30)) {
        iVar6 = crt_stdio_c_scanf_getc_with_width_FUN_00605918((scanf_state_t *)0x10);
        iVar8 = 1;
        if (iVar6 == -1) goto LAB_00605798;
        if ((iVar6 == 0x78) || (iVar6 == 0x58)) {
          unaff_EBP = local_18 + 2;
          local_1c = crt_stdio_c_scanf_getc_with_width_FUN_00605918((scanf_state_t *)args);
          iVar8 = 0;
          if (local_1c == 0xffffffff) goto LAB_00605798;
        }
      }
    }
    if ((*(byte *)(base + 0x10) & 0x40) == 0) {
      do {
        iVar6 = crt_stdio_c_char_to_digit_FUN_006058e8(local_1c);
        if (iVar5 <= iVar6) {
          if ((local_1c != 0x3a) || ((*(byte *)(is_signed + 0x10) & 0x80) == 0)) goto LAB_00605786;
          goto LAB_00605753;
        }
        in_stack_ffffffcc = is_signed;
        unaff_EBP = crt_stdio_c_scanf_getc_with_width_FUN_00605918((scanf_state_t *)is_signed);
        iVar8 = iVar8 + 1;
      } while (unaff_EBP != -1);
    }
    else {
      do {
        iVar6 = crt_stdio_c_char_to_digit_FUN_006058e8(local_1c);
        if (iVar5 <= iVar6) {
          if ((local_18 != 0x3a) || ((*(byte *)(is_signed + 0x10) & 0x80) == 0)) goto LAB_00605786;
          goto LAB_0060569e;
        }
        uVar11 = crt_math_c_mul64_FUN_0060b2b8((uint)local_30,uStack_2c,0,local_1c);
        uStack_2c = (uint)(uVar11 >> 0x20);
        local_30 = CONCAT44(uStack_2c,in_stack_00000014);
        in_stack_ffffffcc = 0x605672;
        iStack_10 = crt_stdio_c_scanf_getc_with_width_FUN_00605918(in_stack_00000014);
        iVar8 = iVar8 + 1;
      } while (iStack_10 != -1);
    }
    goto LAB_00605798;
  }
  goto LAB_00605786;
LAB_0060569e:
  in_stack_ffffffcc = 0x6056a8;
  high2 = crt_stdio_c_scanf_getc_with_width_FUN_00605918(in_stack_00000014);
  iVar8 = iVar8 + 1;
  if (high2 == 0xffffffff) goto LAB_00605798;
  iVar6 = crt_stdio_c_char_to_digit_FUN_006058e8(high2);
  if (iVar5 <= iVar6) goto LAB_00605786;
  uVar11 = crt_math_c_mul64_FUN_0060b2b8((uint)in_stack_00000014,uStack_2c,0,high2);
  local_30 = uVar11 & 0xffffffff00000000;
  goto LAB_0060569e;
  while (iVar6 = crt_stdio_c_char_to_digit_FUN_006058e8(iVar6), iVar6 < iVar5) {
LAB_00605753:
    in_stack_ffffffcc = is_signed;
    iVar6 = crt_stdio_c_scanf_getc_with_width_FUN_00605918((scanf_state_t *)is_signed);
    iVar8 = iVar8 + 1;
    if (iVar6 == -1) goto LAB_00605798;
  }
LAB_00605786:
  in_stack_ffffffcc = is_signed;
  crt_stdio_c_scanf_ungetc_wrapper_FUN_0060493c(local_18,(scanf_state_t *)is_signed);
LAB_00605798:
  if ((*(byte *)(base + 0x10) & 0x40) == 0) {
    if (local_18 == 0x2d) {
      iStack_10 = -iStack_10;
    }
    if (0 < iVar8) {
      bVar10 = *(byte *)(base + 0x10);
      iVar8 = iVar8 + unaff_EBP;
      if ((bVar10 & 1) != 0) {
        if ((bVar10 & 4) == 0) {
          if ((bVar10 & 8) == 0) {
            puVar3 = *(undefined4 **)is_signed;
            *(undefined4 **)is_signed = puVar3 + 1;
            piVar7 = (int *)*puVar3;
          }
          else {
            puVar3 = *(undefined4 **)is_signed;
            *(undefined4 **)is_signed = puVar3 + 1;
            piVar7 = (int *)*puVar3;
          }
        }
        else {
          puVar4 = *(undefined6 **)is_signed;
          *(undefined6 **)is_signed = puVar4 + 1;
          piVar7 = (int *)*puVar4;
        }
        if ((*(byte *)(base + 0x10) & 0x10) != 0) {
          *(short *)piVar7 = (short)iStack_10;
          return iVar8;
        }
        *piVar7 = iStack_10;
      }
    }
  }
  else {
    if (local_18 == 0x2d) {
      in_stack_ffffffcc = ~in_stack_ffffffcc + 1;
    }
    if (0 < iVar8) {
      bVar1 = *(byte *)(base + 0x10);
      iVar8 = iVar8 + unaff_EBP;
      if ((bVar1 & 1) != 0) {
        if ((bVar1 & 4) == 0) {
          if ((bVar1 & 8) != 0) {
            puVar3 = *(undefined4 **)is_signed;
            *(undefined4 **)is_signed = puVar3 + 1;
            puVar9 = (uint *)*puVar3;
            *puVar9 = in_stack_ffffffcc;
            puVar9[(uint)bVar10 * -2 + 1] = *(uint *)((int)&stack0xffffffd0 + (uint)bVar10 * -8);
            return iVar8;
          }
          puVar3 = *(undefined4 **)is_signed;
          *(undefined4 **)is_signed = puVar3 + 1;
          puVar9 = (uint *)*puVar3;
        }
        else {
          puVar3 = *(undefined4 **)is_signed;
          *(undefined4 **)is_signed = puVar3 + 2;
          puVar9 = (uint *)*puVar3;
        }
        *puVar9 = in_stack_ffffffcc;
        puVar9[(uint)bVar10 * -2 + 1] = *(uint *)((int)&stack0xffffffd0 + (uint)bVar10 * -8);
        return iVar8;
      }
    }
  }
  return iVar8;
}


// Assembly code:
// 0060547c: PUSH EBX
//   Label: crt_stdio.c_scanf_integer_FUN_0060547c
// 0060547d: PUSH ESI
// 0060547e: PUSH EDI
// 0060547f: PUSH ES
// 00605480: PUSH EBP
// 00605481: SUB ESP,0x28
// 00605484: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0xc] (READ)
// 00605488: XOR EDX,EDX
// 0060548a: XOR EBP,EBP
// 0060548c: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x3c] (DATA)
// 0060548f: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 00605493: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00605497: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0060549b: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_0060549b
//   XREF to: Stack[0x4] (READ)
// 0060549f: PUSH EAX
// 006054a0: CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   XREF to: 00604930 (UNCONDITIONAL_CALL)
// 006054a5: ADD ESP,0x4
// 006054a8: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 006054ac: MOV BL,byte ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 006054b0: INC BL
// 006054b2: AND EBX,0xff
// 006054b8: TEST byte ptr [EBX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 006054bf: JZ 0x006054c7
//   XREF to: 006054c7 (CONDITIONAL_JUMP)
// 006054c1: INC dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 006054c5: JMP 0x0060549b
//   XREF to: 0060549b (UNCONDITIONAL_JUMP)
// 006054c7: MOV EDX,dword ptr [ESP + 0x40]
//   Label: LAB_006054c7
//   XREF to: Stack[0x4] (READ)
// 006054cb: TEST byte ptr [EDX + 0x10],0x2
// 006054cf: JNZ 0x00605798
//   XREF to: 00605798 (CONDITIONAL_JUMP)
// 006054d5: MOV EBX,dword ptr [EDX + 0xc]
// 006054d8: LEA ESI,[EBX + -0x1]
// 006054db: MOV dword ptr [EDX + 0xc],ESI
// 006054de: TEST EBX,EBX
// 006054e0: JZ 0x00605786
//   XREF to: 00605786 (CONDITIONAL_JUMP)
// 006054e6: MOV EBX,0x2b
// 006054eb: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x10] (READ)
// 006054ef: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 006054f3: TEST ECX,ECX
// 006054f5: JZ 0x0060552b
//   XREF to: 0060552b (CONDITIONAL_JUMP)
// 006054f7: CMP EAX,EBX
// 006054f9: JZ 0x00605500
//   XREF to: 00605500 (CONDITIONAL_JUMP)
// 006054fb: CMP EAX,0x2d
// 006054fe: JNZ 0x0060552b
//   XREF to: 0060552b (CONDITIONAL_JUMP)
// 00605500: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00605500
//   XREF to: Stack[-0x24] (READ)
// 00605504: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00605508: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 0060550c: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 00605510: INC EAX
// 00605511: PUSH ESI
// 00605512: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00605516: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 0060551b: ADD ESP,0x4
// 0060551e: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00605522: CMP EAX,-0x1
// 00605525: JZ 0x00605798
//   XREF to: 00605798 (CONDITIONAL_JUMP)
// 0060552b: TEST EDI,EDI
//   Label: LAB_0060552b
// 0060552d: JNZ 0x006055a2
//   XREF to: 006055a2 (CONDITIONAL_JUMP)
// 00605533: CMP dword ptr [ESP + 0x18],0x30
//   XREF to: Stack[-0x24] (READ)
// 00605538: JNZ 0x0060559b
//   XREF to: 0060559b (CONDITIONAL_JUMP)
// 0060553a: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0060553e: PUSH EAX
// 0060553f: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 00605544: ADD ESP,0x4
// 00605547: MOV EBP,0x1
// 0060554c: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00605550: CMP EAX,-0x1
// 00605553: JZ 0x00605798
//   XREF to: 00605798 (CONDITIONAL_JUMP)
// 00605559: CMP EAX,0x78
// 0060555c: JZ 0x00605563
//   XREF to: 00605563 (CONDITIONAL_JUMP)
// 0060555e: CMP EAX,0x58
// 00605561: JNZ 0x00605594
//   XREF to: 00605594 (CONDITIONAL_JUMP)
// 00605563: MOV EDX,dword ptr [ESP + 0x40]
//   Label: LAB_00605563
//   XREF to: Stack[0x4] (READ)
// 00605567: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 0060556b: PUSH EDX
// 0060556c: ADD EBX,0x2
// 0060556f: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 00605574: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 00605578: ADD ESP,0x4
// 0060557b: XOR EBP,EBP
// 0060557d: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00605581: CMP EAX,-0x1
// 00605584: JZ 0x00605798
//   XREF to: 00605798 (CONDITIONAL_JUMP)
// 0060558a: MOV EDI,0x10
// 0060558f: JMP 0x006055fe
//   XREF to: 006055fe (UNCONDITIONAL_JUMP)
// 00605594: MOV EDI,0x8
//   Label: LAB_00605594
// 00605599: JMP 0x006055fe
//   XREF to: 006055fe (UNCONDITIONAL_JUMP)
// 0060559b: MOV EDI,0xa
//   Label: LAB_0060559b
// 006055a0: JMP 0x006055fe
//   XREF to: 006055fe (UNCONDITIONAL_JUMP)
// 006055a2: CMP EDI,0x10
//   Label: LAB_006055a2
// 006055a5: JNZ 0x006055fe
//   XREF to: 006055fe (CONDITIONAL_JUMP)
// 006055a7: CMP dword ptr [ESP + 0x18],0x30
//   XREF to: Stack[-0x24] (READ)
// 006055ac: JNZ 0x006055fe
//   XREF to: 006055fe (CONDITIONAL_JUMP)
// 006055ae: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 006055b2: PUSH EBX
// 006055b3: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 006055b8: ADD ESP,0x4
// 006055bb: MOV EBP,0x1
// 006055c0: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 006055c4: CMP EAX,-0x1
// 006055c7: JZ 0x00605798
//   XREF to: 00605798 (CONDITIONAL_JUMP)
// 006055cd: CMP EAX,0x78
// 006055d0: JZ 0x006055d7
//   XREF to: 006055d7 (CONDITIONAL_JUMP)
// 006055d2: CMP EAX,0x58
// 006055d5: JNZ 0x006055fe
//   XREF to: 006055fe (CONDITIONAL_JUMP)
// 006055d7: MOV ECX,dword ptr [ESP + 0x40]
//   Label: LAB_006055d7
//   XREF to: Stack[0x4] (READ)
// 006055db: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 006055df: PUSH ECX
// 006055e0: ADD ESI,0x2
// 006055e3: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 006055e8: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 006055ec: ADD ESP,0x4
// 006055ef: XOR EBP,EBP
// 006055f1: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 006055f5: CMP EAX,-0x1
// 006055f8: JZ 0x00605798
//   XREF to: 00605798 (CONDITIONAL_JUMP)
// 006055fe: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_006055fe
//   XREF to: Stack[0x4] (READ)
// 00605602: TEST byte ptr [EAX + 0x10],0x40
// 00605606: JZ 0x0060570d
//   XREF to: 0060570d (CONDITIONAL_JUMP)
// 0060560c: XOR ECX,ECX
// 0060560e: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 00605612: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00605616: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_00605616
//   XREF to: Stack[-0x24] (READ)
// 0060561a: PUSH ECX
// 0060561b: CALL crt_stdio.c_char_to_digit_FUN_006058e8
//   XREF to: 006058e8 (UNCONDITIONAL_CALL)
// 00605620: ADD ESP,0x4
// 00605623: CMP EAX,EDI
// 00605625: JGE 0x00605685
//   XREF to: 00605685 (CONDITIONAL_JUMP)
// 00605627: LEA EBX,[ESP + 0x10]
//   XREF to: Stack[-0x2c] (DATA)
// 0060562b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0060562f: XOR ESI,ESI
// 00605631: MOV EAX,ESP
// 00605633: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 00605637: MOV ESI,ESP
// 00605639: MOV EDX,dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x38] (READ)
// 0060563c: MOV EAX,dword ptr [EAX]
//   XREF to: Stack[-0x3c] (DATA)
// 0060563e: MOV ECX,dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 00605641: MOV EBX,dword ptr [EBX]
//   XREF to: Stack[-0x2c] (DATA)
// 00605643: CALL crt_math.c_mul64_FUN_0060b2b8
//   XREF to: 0060b2b8 (UNCONDITIONAL_CALL)
// 00605648: MOV dword ptr [ESI + 0x4],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 0060564b: MOV dword ptr [ESI],EAX
//   XREF to: Stack[-0x3c] (DATA)
// 0060564d: MOV ESI,ESP
// 0060564f: LEA EBX,[ESP + 0x8]
//   XREF to: Stack[-0x34] (DATA)
// 00605653: MOV EAX,ESP
// 00605655: MOV EDX,dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x38] (READ)
// 00605658: MOV EAX,dword ptr [EAX]
//   XREF to: Stack[-0x3c] (DATA)
// 0060565a: MOV ECX,dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x30] (READ)
// 0060565d: MOV EBX,dword ptr [EBX]
//   XREF to: Stack[-0x34] (DATA)
// 0060565f: ADD EAX,EBX
// 00605661: ADC EDX,ECX
// 00605663: MOV dword ptr [ESI + 0x4],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 00605666: MOV dword ptr [ESI],EAX
//   XREF to: Stack[-0x3c] (DATA)
// 00605668: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0060566c: PUSH EAX
// 0060566d: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 00605672: ADD ESP,0x4
// 00605675: INC EBP
// 00605676: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0060567a: CMP EAX,-0x1
// 0060567d: JZ 0x00605798
//   XREF to: 00605798 (CONDITIONAL_JUMP)
// 00605683: JMP 0x00605616
//   XREF to: 00605616 (UNCONDITIONAL_JUMP)
// 00605685: CMP dword ptr [ESP + 0x18],0x3a
//   Label: LAB_00605685
//   XREF to: Stack[-0x24] (READ)
// 0060568a: JNZ 0x00605786
//   XREF to: 00605786 (CONDITIONAL_JUMP)
// 00605690: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 00605694: TEST byte ptr [EAX + 0x10],0x80
// 00605698: JZ 0x00605786
//   XREF to: 00605786 (CONDITIONAL_JUMP)
// 0060569e: MOV EBX,dword ptr [ESP + 0x40]
//   Label: LAB_0060569e
//   XREF to: Stack[0x4] (READ)
// 006056a2: PUSH EBX
// 006056a3: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 006056a8: ADD ESP,0x4
// 006056ab: INC EBP
// 006056ac: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 006056b0: CMP EAX,-0x1
// 006056b3: JZ 0x00605798
//   XREF to: 00605798 (CONDITIONAL_JUMP)
// 006056b9: PUSH EAX
// 006056ba: CALL crt_stdio.c_char_to_digit_FUN_006058e8
//   XREF to: 006058e8 (UNCONDITIONAL_CALL)
// 006056bf: ADD ESP,0x4
// 006056c2: CMP EAX,EDI
// 006056c4: JGE 0x00605786
//   XREF to: 00605786 (CONDITIONAL_JUMP)
// 006056ca: MOV ESI,ESP
// 006056cc: LEA EBX,[ESP + 0x10]
//   XREF to: Stack[-0x2c] (DATA)
// 006056d0: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 006056d4: XOR ECX,ECX
// 006056d6: MOV EAX,ESP
// 006056d8: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 006056dc: MOV EDX,dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x38] (READ)
// 006056df: MOV EAX,dword ptr [EAX]
//   XREF to: Stack[-0x3c] (DATA)
// 006056e1: MOV ECX,dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 006056e4: MOV EBX,dword ptr [EBX]
//   XREF to: Stack[-0x2c] (DATA)
// 006056e6: CALL crt_math.c_mul64_FUN_0060b2b8
//   XREF to: 0060b2b8 (UNCONDITIONAL_CALL)
// 006056eb: MOV dword ptr [ESI + 0x4],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 006056ee: MOV dword ptr [ESI],EAX
//   XREF to: Stack[-0x3c] (DATA)
// 006056f0: MOV ESI,ESP
// 006056f2: LEA EBX,[ESP + 0x8]
//   XREF to: Stack[-0x34] (DATA)
// 006056f6: MOV EAX,ESP
// 006056f8: MOV EDX,dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x38] (READ)
// 006056fb: MOV EAX,dword ptr [EAX]
//   XREF to: Stack[-0x3c] (DATA)
// 006056fd: MOV ECX,dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x30] (READ)
// 00605700: MOV EBX,dword ptr [EBX]
//   XREF to: Stack[-0x34] (DATA)
// 00605702: ADD EAX,EBX
// 00605704: ADC EDX,ECX
// 00605706: MOV dword ptr [ESI + 0x4],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 00605709: MOV dword ptr [ESI],EAX
//   XREF to: Stack[-0x3c] (DATA)
// 0060570b: JMP 0x0060569e
//   XREF to: 0060569e (UNCONDITIONAL_JUMP)
// 0060570d: MOV ESI,dword ptr [ESP + 0x18]
//   Label: LAB_0060570d
//   XREF to: Stack[-0x24] (READ)
// 00605711: PUSH ESI
// 00605712: CALL crt_stdio.c_char_to_digit_FUN_006058e8
//   XREF to: 006058e8 (UNCONDITIONAL_CALL)
// 00605717: ADD ESP,0x4
// 0060571a: CMP EAX,EDI
// 0060571c: JGE 0x00605744
//   XREF to: 00605744 (CONDITIONAL_JUMP)
// 0060571e: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 00605722: IMUL EBX,EDI
// 00605725: ADD EBX,EAX
// 00605727: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0060572b: PUSH EAX
// 0060572c: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00605730: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 00605735: ADD ESP,0x4
// 00605738: INC EBP
// 00605739: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0060573d: CMP EAX,-0x1
// 00605740: JZ 0x00605798
//   XREF to: 00605798 (CONDITIONAL_JUMP)
// 00605742: JMP 0x0060570d
//   XREF to: 0060570d (UNCONDITIONAL_JUMP)
// 00605744: CMP ESI,0x3a
//   Label: LAB_00605744
// 00605747: JNZ 0x00605786
//   XREF to: 00605786 (CONDITIONAL_JUMP)
// 00605749: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0060574d: TEST byte ptr [EAX + 0x10],0x80
// 00605751: JZ 0x00605786
//   XREF to: 00605786 (CONDITIONAL_JUMP)
// 00605753: MOV EBX,dword ptr [ESP + 0x40]
//   Label: LAB_00605753
//   XREF to: Stack[0x4] (READ)
// 00605757: PUSH EBX
// 00605758: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 0060575d: ADD ESP,0x4
// 00605760: INC EBP
// 00605761: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00605765: CMP EAX,-0x1
// 00605768: JZ 0x00605798
//   XREF to: 00605798 (CONDITIONAL_JUMP)
// 0060576a: PUSH EAX
// 0060576b: CALL crt_stdio.c_char_to_digit_FUN_006058e8
//   XREF to: 006058e8 (UNCONDITIONAL_CALL)
// 00605770: ADD ESP,0x4
// 00605773: CMP EAX,EDI
// 00605775: JGE 0x00605786
//   XREF to: 00605786 (CONDITIONAL_JUMP)
// 00605777: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 0060577b: IMUL EBX,EDI
// 0060577e: ADD EBX,EAX
// 00605780: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00605784: JMP 0x00605753
//   XREF to: 00605753 (UNCONDITIONAL_JUMP)
// 00605786: MOV ESI,dword ptr [ESP + 0x40]
//   Label: LAB_00605786
//   XREF to: Stack[0x4] (READ)
// 0060578a: PUSH ESI
// 0060578b: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0060578f: PUSH EDI
// 00605790: CALL crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
//   XREF to: 0060493c (UNCONDITIONAL_CALL)
// 00605795: ADD ESP,0x8
// 00605798: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_00605798
//   XREF to: Stack[0x4] (READ)
// 0060579c: TEST byte ptr [EAX + 0x10],0x40
// 006057a0: JZ 0x0060584c
//   XREF to: 0060584c (CONDITIONAL_JUMP)
// 006057a6: CMP dword ptr [ESP + 0x1c],0x2d
//   XREF to: Stack[-0x20] (READ)
// 006057ab: JNZ 0x006057d4
//   XREF to: 006057d4 (CONDITIONAL_JUMP)
// 006057ad: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 006057b0: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x38] (READ)
// 006057b4: NOT EDX
// 006057b6: NOT EBX
// 006057b8: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x3c] (DATA)
// 006057bb: LEA ECX,[EDX + 0x1]
// 006057be: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 006057c2: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x3c] (DATA)
// 006057c5: TEST ECX,ECX
// 006057c7: JNZ 0x006057ce
//   XREF to: 006057ce (CONDITIONAL_JUMP)
// 006057c9: LEA EAX,[EBX + 0x1]
// 006057cc: JMP 0x006057d0
//   XREF to: 006057d0 (UNCONDITIONAL_JUMP)
// 006057ce: MOV EAX,EBX
//   Label: LAB_006057ce
// 006057d0: MOV dword ptr [ESP + 0x4],EAX
//   Label: LAB_006057d0
//   XREF to: Stack[-0x38] (WRITE)
// 006057d4: TEST EBP,EBP
//   Label: LAB_006057d4
// 006057d6: JLE 0x006058da
//   XREF to: 006058da (CONDITIONAL_JUMP)
// 006057dc: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 006057e0: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 006057e4: MOV DL,byte ptr [EAX + 0x10]
// 006057e7: ADD EBP,EDI
// 006057e9: TEST DL,0x1
// 006057ec: JZ 0x006058da
//   XREF to: 006058da (CONDITIONAL_JUMP)
// 006057f2: TEST DL,0x4
// 006057f5: JZ 0x0060580b
//   XREF to: 0060580b (CONDITIONAL_JUMP)
// 006057f7: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 006057fb: MOV ECX,dword ptr [EAX]
// 006057fd: ADD ECX,0x8
// 00605800: MOV dword ptr [EAX],ECX
// 00605802: MOV AX,word ptr [ECX + -0x4]
// 00605806: MOV EDI,dword ptr [ECX + -0x8]
// 00605809: JMP 0x0060583b
//   XREF to: 0060583b (UNCONDITIONAL_JUMP)
// 0060580b: TEST DL,0x8
//   Label: LAB_0060580b
// 0060580e: JZ 0x0060582b
//   XREF to: 0060582b (CONDITIONAL_JUMP)
// 00605810: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 00605814: MOV EBX,dword ptr [EAX]
// 00605816: ADD EBX,0x4
// 00605819: MOV dword ptr [EAX],EBX
// 0060581b: MOV AX,DS
// 0060581d: MOV EDI,dword ptr [EBX + -0x4]
// 00605820: MOV ESI,ESP
// 00605822: MOV ES,AX
// 00605824: MOVSD ES:EDI,ESI
// 00605825: MOVSD ES:EDI,ESI
// 00605826: JMP 0x006058da
//   XREF to: 006058da (UNCONDITIONAL_JUMP)
// 0060582b: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_0060582b
//   XREF to: Stack[0x8] (READ)
// 0060582f: MOV EDX,dword ptr [EAX]
// 00605831: ADD EDX,0x4
// 00605834: MOV dword ptr [EAX],EDX
// 00605836: MOV AX,DS
// 00605838: MOV EDI,dword ptr [EDX + -0x4]
// 0060583b: MOV ESI,ESP
//   Label: LAB_0060583b
// 0060583d: MOV ES,AX
// 0060583f: MOVSD ES:EDI,ESI
// 00605840: MOVSD ES:EDI,ESI
// 00605841: MOV EAX,EBP
// 00605843: ADD ESP,0x28
// 00605846: POP EBP
// 00605847: POP ES
// 00605848: POP EDI
// 00605849: POP ESI
// 0060584a: POP EBX
// 0060584b: RET
// 0060584c: CMP dword ptr [ESP + 0x1c],0x2d
//   Label: LAB_0060584c
//   XREF to: Stack[-0x20] (READ)
// 00605851: JNZ 0x00605857
//   XREF to: 00605857 (CONDITIONAL_JUMP)
// 00605853: NEG dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00605857: TEST EBP,EBP
//   Label: LAB_00605857
// 00605859: JLE 0x006058da
//   XREF to: 006058da (CONDITIONAL_JUMP)
// 0060585f: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 00605863: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 00605867: MOV DH,byte ptr [EAX + 0x10]
// 0060586a: ADD EBP,EBX
// 0060586c: TEST DH,0x1
// 0060586f: JZ 0x006058da
//   XREF to: 006058da (CONDITIONAL_JUMP)
// 00605871: TEST DH,0x4
// 00605874: JZ 0x00605886
//   XREF to: 00605886 (CONDITIONAL_JUMP)
// 00605876: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 0060587a: MOV EDI,dword ptr [EAX]
// 0060587c: ADD EDI,0x8
// 0060587f: MOV dword ptr [EAX],EDI
// 00605881: LES EAX,[EDI + -0x8]
// 00605884: JMP 0x006058b1
//   XREF to: 006058b1 (UNCONDITIONAL_JUMP)
// 00605886: TEST DH,0x8
//   Label: LAB_00605886
// 00605889: JZ 0x0060589f
//   XREF to: 0060589f (CONDITIONAL_JUMP)
// 0060588b: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 0060588f: MOV ESI,dword ptr [EAX]
// 00605891: ADD ESI,0x4
// 00605894: MOV BX,DS
// 00605896: MOV dword ptr [EAX],ESI
// 00605898: MOV ES,BX
// 0060589a: MOV EAX,dword ptr [ESI + -0x4]
// 0060589d: JMP 0x006058b1
//   XREF to: 006058b1 (UNCONDITIONAL_JUMP)
// 0060589f: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_0060589f
//   XREF to: Stack[0x8] (READ)
// 006058a3: MOV ECX,dword ptr [EAX]
// 006058a5: ADD ECX,0x4
// 006058a8: MOV BX,DS
// 006058aa: MOV dword ptr [EAX],ECX
// 006058ac: MOV ES,BX
// 006058ae: MOV EAX,dword ptr [ECX + -0x4]
// 006058b1: MOV EDX,dword ptr [ESP + 0x40]
//   Label: LAB_006058b1
//   XREF to: Stack[0x4] (READ)
// 006058b5: MOV CL,byte ptr [EDX + 0x10]
// 006058b8: TEST CL,0x10
// 006058bb: JZ 0x006058d0
//   XREF to: 006058d0 (CONDITIONAL_JUMP)
// 006058bd: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 006058c1: MOV word ptr ES:[EAX],BX
// 006058c5: MOV EAX,EBP
// 006058c7: ADD ESP,0x28
// 006058ca: POP EBP
// 006058cb: POP ES
// 006058cc: POP EDI
// 006058cd: POP ESI
// 006058ce: POP EBX
// 006058cf: RET
// 006058d0: TEST CL,0x20
//   Label: LAB_006058d0
// 006058d3: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 006058d7: MOV dword ptr ES:[EAX],EBX
// 006058da: MOV EAX,EBP
//   Label: LAB_006058da
// 006058dc: ADD ESP,0x28
// 006058df: POP EBP
// 006058e0: POP ES
// 006058e1: POP EDI
// 006058e2: POP ESI
// 006058e3: POP EBX
// 006058e4: RET
