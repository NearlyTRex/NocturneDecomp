// Name: crt_stdio.c_FormatEngine_FUN_00602950
// Address: 00602950
// Address Range: [[00602950, 00602d76]]
// Convention: __cdecl
// Signature: int crt_stdio.c_FormatEngine_FUN_00602950(void * output_context, char * format, va_list_t args, OUTPUT_CALLBACK callback)
// Cross-references:
//   crt_stdio.c_vfprintf_FUN_00604850 (00604850) at 006048e0 [UNCONDITIONAL_CALL]
//   crt_stdio.c_vsprintf_FUN_005fdba8 (005fdba8) at 005fdbbd [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_ConvertFormatSpec_FUN_00603238
//   crt_stdio.c_FormatWideString_FUN_006031c0
//   crt_stdio.c_ScanFormatSpec_FUN_00602d78

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Struct "FormatSpec": ignoring multiple overlapping fields */

int __cdecl
crt_stdio_c_FormatEngine_FUN_00602950
          (void *output_context,char *format,va_list_t args,OUTPUT_CALLBACK callback)

{
  byte bVar1;
  char cVar2;
  undefined6 *puVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  char *pcVar6;
  wchar_t *wide_string_offset;
  int iVar7;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  FormatSpec local_84;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  va_list_t local_28;
  va_list_t local_24;
  undefined4 local_20;
  uint *local_1c;
  uint local_18;
  
  local_18 = local_18 & 0xffffff00;
  local_84.extended_length_flags = 100;
  local_84.total_output_count = 0;
  bVar1 = *format;
  do {
    if (bVar1 == 0) {
      return local_84.total_output_count;
    }
LAB_006029a0:
    while( true ) {
      bVar1 = *format;
      format = (char *)((byte *)format + 1);
      if (bVar1 == 0x25) break;
      (*callback)(&stack0xffffff78,(uint)bVar1);
LAB_00602d41:
      if (*format == 0) {
        iVar7._0_1_ = local_84.padding1;
        iVar7._1_1_ = local_84.format_char;
        iVar7._2_1_ = local_84.padding_char;
        iVar7._3_1_ = local_84.padding2[0];
        return iVar7;
      }
    }
    local_28 = *(va_list_t *)args;
    pcVar6 = crt_stdio_c_ScanFormatSpec_FUN_00602d78
                       (format,&local_28,(FormatSpec *)&stack0xffffff78);
    *(va_list_t *)args = local_28;
    cVar2 = *pcVar6;
    format = pcVar6 + 1;
    local_84.format_char = cVar2;
    if (cVar2 == '\0') {
      return local_84.total_output_count;
    }
    if (cVar2 != 'n') {
      local_24 = *(va_list_t *)args;
      wide_string_offset =
           (wchar_t *)
           crt_stdio_c_ConvertFormatSpec_FUN_00603238
                     ((char *)&local_84.alternate_form_length,&local_24,
                      (FormatSpec *)&stack0xffffff78);
      *(undefined4 *)args = local_20;
      local_84.width =
           local_84.width -
           (local_84._32_4_ + local_84.padding_needed + local_84.content_length +
            local_84.prefix_length + local_84.suffix_length + local_84.alternate_form_length);
      local_18 = extraout_EDX;
      if ((((undefined1)local_84.flags & LEFT_ALIGN) == 0) &&
         (local_84.zerofill == EXT_I64_MODIFIER >> 0x10)) {
        while (0 < local_84.width) {
          (*callback)(&local_84,0x20);
          local_84.extended_length_flags = local_84.extended_length_flags - 1;
        }
      }
      local_1c = &local_84.length_modifier_flags;
      for (; 0 < (int)local_84._32_4_; local_84._32_4_ = local_84._32_4_ + -1) {
        (*callback)(&local_84,(uint)(byte)*local_1c);
        local_1c = (uint *)((int)local_1c + 1);
      }
      while( true ) {
        if (local_84.padding_needed < 1) break;
        (*callback)(&local_84,0x30);
        local_84.length_modifier_flags = local_84.length_modifier_flags - 1;
      }
      if (local_84.conversion_char == 0x73) {
        if (((undefined1)local_84.flags & LONG_MODIFIER) == 0) {
          while (0 < local_84.content_length) {
            (*callback)(&local_84,(uint)(byte)*wide_string_offset);
            iStack_48 = iStack_48 + -1;
            wide_string_offset = (wchar_t *)((int)wide_string_offset + 1);
          }
        }
        else {
          crt_stdio_c_FormatWideString_FUN_006031c0
                    (wide_string_offset,(ushort)local_18,&local_84,callback);
        }
      }
      else if (local_84.conversion_char == 0x53) {
        crt_stdio_c_FormatWideString_FUN_006031c0
                  (wide_string_offset,(ushort)local_18,&local_84,callback);
      }
      else {
        while (0 < local_84.content_length) {
          (*callback)(&local_84,(uint)(byte)*wide_string_offset);
          iStack_48 = iStack_48 + -1;
          wide_string_offset = (wchar_t *)((int)wide_string_offset + 1);
        }
      }
      while (0 < local_84.prefix_length) {
        (*callback)(&local_84,0x30);
        iStack_44 = iStack_44 + -1;
      }
      while (0 < local_84.suffix_length) {
        (*callback)(&local_84,(uint)(byte)*wide_string_offset);
        iStack_40 = iStack_40 + -1;
        wide_string_offset = (wchar_t *)((int)wide_string_offset + 1);
      }
      while (0 < local_84.alternate_form_length) {
        (*callback)(&local_84,0x30);
        iStack_3c = iStack_3c + -1;
      }
      if (((undefined1)local_84.flags & LEFT_ALIGN) != 0) {
        while (0 < local_84.width) {
          (*callback)(&local_84,0x20);
          local_84.extended_length_flags = local_84.extended_length_flags - 1;
        }
      }
      goto LAB_00602d41;
    }
    if ((local_84.extended_length_flags & EXT_I64_MODIFIER) == 0) {
      if ((local_84.extended_length_flags & EXT_SHORT_MODIFIER) == 0) {
        if ((local_84.extended_length_flags & EXT_FAR_PTR_MODIFIER) == 0) {
          if ((local_84.extended_length_flags & EXT_LONG_MODIFIER) == 0) {
            puVar4 = *(undefined4 **)args;
            *(undefined4 **)args = puVar4 + 1;
            *(int *)*puVar4 = local_84.total_output_count;
            if (*format == 0) {
              return local_84.total_output_count;
            }
          }
          else {
            puVar4 = *(undefined4 **)args;
            *(undefined4 **)args = puVar4 + 1;
            *(int *)*puVar4 = local_84.total_output_count;
            if (*format == 0) {
              return local_84.total_output_count;
            }
          }
        }
        else {
          puVar3 = *(undefined6 **)args;
          *(undefined6 **)args = puVar3 + 1;
          *(int *)*puVar3 = local_84.total_output_count;
          if (*format == 0) {
            return local_84.total_output_count;
          }
        }
      }
      else {
        uVar5 = (undefined2)local_84.total_output_count;
        if ((local_84.extended_length_flags & EXT_FAR_PTR_MODIFIER) == 0) {
          if ((local_84.extended_length_flags & EXT_LONG_MODIFIER) == 0) {
            puVar4 = *(undefined4 **)args;
            *(undefined4 **)args = puVar4 + 1;
            *(undefined2 *)*puVar4 = uVar5;
            if (*format == 0) {
              return local_84.total_output_count;
            }
          }
          else {
            puVar4 = *(undefined4 **)args;
            *(undefined4 **)args = puVar4 + 1;
            *(undefined2 *)*puVar4 = uVar5;
            if (*format == 0) {
              return local_84.total_output_count;
            }
          }
        }
        else {
          puVar3 = *(undefined6 **)args;
          *(undefined6 **)args = puVar3 + 1;
          *(undefined2 *)*puVar3 = uVar5;
          if (*format == 0) {
            return local_84.total_output_count;
          }
        }
      }
      goto LAB_006029a0;
    }
    if ((local_84.extended_length_flags & EXT_FAR_PTR_MODIFIER) == 0) {
      if ((local_84.extended_length_flags & EXT_LONG_MODIFIER) == 0) {
        puVar4 = *(undefined4 **)args;
        *(undefined4 **)args = puVar4 + 1;
        *(int *)*puVar4 = local_84.total_output_count;
        bVar1 = *format;
      }
      else {
        puVar4 = *(undefined4 **)args;
        *(undefined4 **)args = puVar4 + 1;
        *(int *)*puVar4 = local_84.total_output_count;
        bVar1 = *format;
      }
    }
    else {
      puVar3 = *(undefined6 **)args;
      *(undefined6 **)args = puVar3 + 1;
      *(int *)*puVar3 = local_84.total_output_count;
      bVar1 = *format;
    }
  } while( true );
}


// Assembly code:
// 00602950: PUSH EBX
//   Label: crt_stdio.c_FormatEngine_FUN_00602950
// 00602951: PUSH ESI
// 00602952: PUSH EDI
// 00602953: PUSH ES
// 00602954: PUSH EBP
// 00602955: SUB ESP,0x74
// 00602958: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[0x8] (READ)
// 0060295f: MOV EBX,dword ptr [ESP + 0x94]
//   XREF to: Stack[0xc] (READ)
// 00602966: MOV ESI,dword ptr [ESP + 0x98]
//   XREF to: Stack[0x10] (READ)
// 0060296d: XOR DL,DL
// 0060296f: MOV byte ptr [ESP + 0x70],DL
//   XREF to: Stack[-0x18] (WRITE)
// 00602973: MOV EDX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x4] (READ)
// 0060297a: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x88] (DATA)
// 0060297d: XOR EDX,EDX
// 0060297f: MOV ECX,0x64
// 00602984: MOV word ptr [ESP + 0x1e],DX
//   XREF to: Stack[-0x6a] (WRITE)
// 00602989: XOR EDX,EDX
// 0060298b: MOV word ptr [ESP + 0x1c],CX
//   XREF to: Stack[-0x6c] (WRITE)
// 00602990: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 00602994: MOV DH,byte ptr [EAX]
// 00602996: MOV EBP,EAX
// 00602998: TEST DH,DH
// 0060299a: JZ 0x00602d6a
//   XREF to: 00602d6a (CONDITIONAL_JUMP)
// 006029a0: MOV CH,byte ptr [EBP]
//   Label: LAB_006029a0
// 006029a3: LEA EDI,[EBP + 0x1]
// 006029a6: CMP CH,0x25
// 006029a9: JZ 0x006029c1
//   XREF to: 006029c1 (CONDITIONAL_JUMP)
// 006029ab: XOR EAX,EAX
// 006029ad: MOV AL,CH
// 006029af: PUSH EAX
// 006029b0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x88] (DATA)
// 006029b4: PUSH EAX
// 006029b5: MOV EBP,EDI
// 006029b7: CALL ESI
// 006029b9: ADD ESP,0x8
// 006029bc: JMP 0x00602d41
//   XREF to: 00602d41 (UNCONDITIONAL_JUMP)
// 006029c1: MOV EAX,dword ptr [EBX]
//   Label: LAB_006029c1
// 006029c3: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 006029c7: MOV EAX,ESP
// 006029c9: PUSH EAX
// 006029ca: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x28] (DATA)
// 006029ce: PUSH EAX
// 006029cf: PUSH EDI
// 006029d0: CALL crt_stdio.c_ScanFormatSpec_FUN_00602d78
//   XREF to: 00602d78 (UNCONDITIONAL_CALL)
// 006029d5: ADD ESP,0xc
// 006029d8: MOV EBP,EAX
// 006029da: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (READ)
// 006029de: MOV dword ptr [EBX],EAX
// 006029e0: MOV AL,byte ptr [EBP]
// 006029e3: INC EBP
// 006029e4: MOV byte ptr [ESP + 0x15],AL
//   XREF to: Stack[-0x73] (WRITE)
// 006029e8: TEST AL,AL
// 006029ea: JZ 0x00602d6a
//   XREF to: 00602d6a (CONDITIONAL_JUMP)
// 006029f0: CMP AL,0x6e
// 006029f2: JNZ 0x00602b71
//   XREF to: 00602b71 (CONDITIONAL_JUMP)
// 006029f8: MOV CL,byte ptr [ESP + 0x1e]
//   XREF to: Stack[-0x6a] (READ)
// 006029fc: TEST CL,0x20
// 006029ff: JZ 0x00602a65
//   XREF to: 00602a65 (CONDITIONAL_JUMP)
// 00602a01: TEST CL,0x80
// 00602a04: JZ 0x00602a22
//   XREF to: 00602a22 (CONDITIONAL_JUMP)
// 00602a06: MOV ECX,dword ptr [EBX]
// 00602a08: ADD ECX,0x8
// 00602a0b: MOV dword ptr [EBX],ECX
// 00602a0d: LES EDI,[ECX + -0x8]
// 00602a10: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00602a14: MOV dword ptr ES:[EDI],EAX
// 00602a17: CMP byte ptr [EBP],0x0
// 00602a1b: JNZ 0x006029a0
//   XREF to: 006029a0 (CONDITIONAL_JUMP)
// 00602a1d: JMP 0x00602d6a
//   XREF to: 00602d6a (UNCONDITIONAL_JUMP)
// 00602a22: TEST CL,0x40
//   Label: LAB_00602a22
// 00602a25: JZ 0x00602a46
//   XREF to: 00602a46 (CONDITIONAL_JUMP)
// 00602a27: MOV EDX,dword ptr [EBX]
// 00602a29: ADD EDX,0x4
// 00602a2c: MOV dword ptr [EBX],EDX
// 00602a2e: MOV EDI,dword ptr [EDX + -0x4]
// 00602a31: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00602a35: MOV dword ptr [EDI],EAX
// 00602a37: CMP byte ptr [EBP],0x0
// 00602a3b: JNZ 0x006029a0
//   XREF to: 006029a0 (CONDITIONAL_JUMP)
// 00602a41: JMP 0x00602d6a
//   XREF to: 00602d6a (UNCONDITIONAL_JUMP)
// 00602a46: MOV EAX,dword ptr [EBX]
//   Label: LAB_00602a46
// 00602a48: ADD EAX,0x4
// 00602a4b: MOV dword ptr [EBX],EAX
// 00602a4d: MOV EDI,dword ptr [EAX + -0x4]
// 00602a50: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00602a54: MOV dword ptr [EDI],EAX
// 00602a56: CMP byte ptr [EBP],0x0
// 00602a5a: JNZ 0x006029a0
//   XREF to: 006029a0 (CONDITIONAL_JUMP)
// 00602a60: JMP 0x00602d6a
//   XREF to: 00602d6a (UNCONDITIONAL_JUMP)
// 00602a65: TEST CL,0x10
//   Label: LAB_00602a65
// 00602a68: JZ 0x00602af1
//   XREF to: 00602af1 (CONDITIONAL_JUMP)
// 00602a6e: TEST CL,0x80
// 00602a71: JZ 0x00602a9c
//   XREF to: 00602a9c (CONDITIONAL_JUMP)
// 00602a73: MOV EDI,dword ptr [EBX]
// 00602a75: ADD EDI,0x8
// 00602a78: MOV dword ptr [EBX],EDI
// 00602a7a: LES EDI,[EDI + -0x8]
// 00602a7d: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00602a81: MOV word ptr ES:[EDI],AX
// 00602a85: CMP byte ptr [EBP],0x0
// 00602a89: JNZ 0x006029a0
//   XREF to: 006029a0 (CONDITIONAL_JUMP)
// 00602a8f: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00602a93: ADD ESP,0x74
// 00602a96: POP EBP
// 00602a97: POP ES
// 00602a98: POP EDI
// 00602a99: POP ESI
// 00602a9a: POP EBX
// 00602a9b: RET
// 00602a9c: TEST CL,0x40
//   Label: LAB_00602a9c
// 00602a9f: JZ 0x00602ac9
//   XREF to: 00602ac9 (CONDITIONAL_JUMP)
// 00602aa1: MOV ECX,dword ptr [EBX]
// 00602aa3: ADD ECX,0x4
// 00602aa6: MOV dword ptr [EBX],ECX
// 00602aa8: MOV EDI,dword ptr [ECX + -0x4]
// 00602aab: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00602aaf: MOV word ptr [EDI],AX
// 00602ab2: CMP byte ptr [EBP],0x0
// 00602ab6: JNZ 0x006029a0
//   XREF to: 006029a0 (CONDITIONAL_JUMP)
// 00602abc: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00602ac0: ADD ESP,0x74
// 00602ac3: POP EBP
// 00602ac4: POP ES
// 00602ac5: POP EDI
// 00602ac6: POP ESI
// 00602ac7: POP EBX
// 00602ac8: RET
// 00602ac9: MOV EDX,dword ptr [EBX]
//   Label: LAB_00602ac9
// 00602acb: ADD EDX,0x4
// 00602ace: MOV dword ptr [EBX],EDX
// 00602ad0: MOV EDI,dword ptr [EDX + -0x4]
// 00602ad3: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00602ad7: MOV word ptr [EDI],AX
// 00602ada: CMP byte ptr [EBP],0x0
// 00602ade: JNZ 0x006029a0
//   XREF to: 006029a0 (CONDITIONAL_JUMP)
// 00602ae4: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00602ae8: ADD ESP,0x74
// 00602aeb: POP EBP
// 00602aec: POP ES
// 00602aed: POP EDI
// 00602aee: POP ESI
// 00602aef: POP EBX
// 00602af0: RET
// 00602af1: TEST CL,0x80
//   Label: LAB_00602af1
// 00602af4: JZ 0x00602b1e
//   XREF to: 00602b1e (CONDITIONAL_JUMP)
// 00602af6: MOV EAX,dword ptr [EBX]
// 00602af8: ADD EAX,0x8
// 00602afb: MOV dword ptr [EBX],EAX
// 00602afd: LES EDI,[EAX + -0x8]
// 00602b00: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00602b04: MOV dword ptr ES:[EDI],EAX
// 00602b07: CMP byte ptr [EBP],0x0
// 00602b0b: JNZ 0x006029a0
//   XREF to: 006029a0 (CONDITIONAL_JUMP)
// 00602b11: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00602b15: ADD ESP,0x74
// 00602b18: POP EBP
// 00602b19: POP ES
// 00602b1a: POP EDI
// 00602b1b: POP ESI
// 00602b1c: POP EBX
// 00602b1d: RET
// 00602b1e: TEST CL,0x40
//   Label: LAB_00602b1e
// 00602b21: JZ 0x00602b4a
//   XREF to: 00602b4a (CONDITIONAL_JUMP)
// 00602b23: MOV EDI,dword ptr [EBX]
// 00602b25: ADD EDI,0x4
// 00602b28: MOV dword ptr [EBX],EDI
// 00602b2a: MOV EDI,dword ptr [EDI + -0x4]
// 00602b2d: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00602b31: MOV dword ptr [EDI],EAX
// 00602b33: CMP byte ptr [EBP],0x0
// 00602b37: JNZ 0x006029a0
//   XREF to: 006029a0 (CONDITIONAL_JUMP)
// 00602b3d: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00602b41: ADD ESP,0x74
// 00602b44: POP EBP
// 00602b45: POP ES
// 00602b46: POP EDI
// 00602b47: POP ESI
// 00602b48: POP EBX
// 00602b49: RET
// 00602b4a: MOV ECX,dword ptr [EBX]
//   Label: LAB_00602b4a
// 00602b4c: ADD ECX,0x4
// 00602b4f: MOV dword ptr [EBX],ECX
// 00602b51: MOV EDI,dword ptr [ECX + -0x4]
// 00602b54: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00602b58: MOV dword ptr [EDI],EAX
// 00602b5a: CMP byte ptr [EBP],0x0
// 00602b5e: JNZ 0x006029a0
//   XREF to: 006029a0 (CONDITIONAL_JUMP)
// 00602b64: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00602b68: ADD ESP,0x74
// 00602b6b: POP EBP
// 00602b6c: POP ES
// 00602b6d: POP EDI
// 00602b6e: POP ESI
// 00602b6f: POP EBX
// 00602b70: RET
// 00602b71: MOV EAX,dword ptr [EBX]
//   Label: LAB_00602b71
// 00602b73: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00602b77: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x18] (DATA)
// 00602b7b: PUSH EAX
// 00602b7c: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x88] (DATA)
// 00602b80: PUSH EAX
// 00602b81: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x24] (DATA)
// 00602b85: PUSH EAX
// 00602b86: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x50] (DATA)
// 00602b8a: PUSH EAX
// 00602b8b: CALL crt_stdio.c_ConvertFormatSpec_FUN_00603238
//   XREF to: 00603238 (UNCONDITIONAL_CALL)
// 00602b90: ADD ESP,0x10
// 00602b93: MOV EDI,EAX
// 00602b95: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 00602b99: MOV dword ptr [EBX],EAX
// 00602b9b: MOV dword ptr [ESP + 0x6c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00602b9f: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (READ)
// 00602ba3: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x64] (READ)
// 00602ba7: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (READ)
// 00602bab: ADD EAX,ECX
// 00602bad: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x5c] (READ)
// 00602bb1: ADD EAX,EDX
// 00602bb3: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 00602bb7: ADD EAX,ECX
// 00602bb9: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 00602bbd: ADD EAX,EDX
// 00602bbf: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x84] (READ)
// 00602bc3: ADD EAX,ECX
// 00602bc5: SUB EDX,EAX
// 00602bc7: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x84] (WRITE)
// 00602bcb: TEST byte ptr [ESP + 0x1e],0x8
//   XREF to: Stack[-0x6a] (READ)
// 00602bd0: JNZ 0x00602bf2
//   XREF to: 00602bf2 (CONDITIONAL_JUMP)
// 00602bd2: CMP byte ptr [ESP + 0x16],0x20
//   XREF to: Stack[-0x72] (READ)
// 00602bd7: JNZ 0x00602bf2
//   XREF to: 00602bf2 (CONDITIONAL_JUMP)
// 00602bd9: CMP dword ptr [ESP + 0x4],0x0
//   Label: LAB_00602bd9
//   XREF to: Stack[-0x84] (READ)
// 00602bde: JLE 0x00602bf2
//   XREF to: 00602bf2 (CONDITIONAL_JUMP)
// 00602be0: PUSH 0x20
// 00602be2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x88] (DATA)
// 00602be6: PUSH EAX
// 00602be7: CALL ESI
// 00602be9: ADD ESP,0x8
// 00602bec: DEC dword ptr [ESP + 0x4]
// 00602bf0: JMP 0x00602bd9
//   XREF to: 00602bd9 (UNCONDITIONAL_JUMP)
// 00602bf2: LEA EAX,[ESP + 0x38]
//   Label: LAB_00602bf2
//   XREF to: Stack[-0x50] (DATA)
// 00602bf6: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (READ)
// 00602bfa: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00602bfe: TEST ECX,ECX
// 00602c00: JLE 0x00602c2b
//   XREF to: 00602c2b (CONDITIONAL_JUMP)
// 00602c02: MOV EDX,dword ptr [ESP + 0x68]
//   Label: LAB_00602c02
//   XREF to: Stack[-0x20] (READ)
// 00602c06: XOR EAX,EAX
// 00602c08: MOV AL,byte ptr [EDX]
//   XREF to: Stack[-0x50] (DATA)
// 00602c0a: PUSH EAX
// 00602c0b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x88] (DATA)
// 00602c0f: PUSH EAX
// 00602c10: CALL ESI
// 00602c12: ADD ESP,0x8
// 00602c15: MOV EAX,dword ptr [ESP + 0x68]
// 00602c19: MOV EDX,dword ptr [ESP + 0x20]
// 00602c1d: INC EAX
// 00602c1e: DEC EDX
// 00602c1f: MOV dword ptr [ESP + 0x68],EAX
// 00602c23: MOV dword ptr [ESP + 0x20],EDX
// 00602c27: TEST EDX,EDX
// 00602c29: JG 0x00602c02
//   XREF to: 00602c02 (CONDITIONAL_JUMP)
// 00602c2b: CMP dword ptr [ESP + 0x24],0x0
//   Label: LAB_00602c2b
//   XREF to: Stack[-0x64] (READ)
// 00602c30: JLE 0x00602c44
//   XREF to: 00602c44 (CONDITIONAL_JUMP)
// 00602c32: PUSH 0x30
// 00602c34: LEA EAX,[ESP + 0x4]
// 00602c38: PUSH EAX
// 00602c39: CALL ESI
// 00602c3b: ADD ESP,0x8
// 00602c3e: DEC dword ptr [ESP + 0x24]
// 00602c42: JMP 0x00602c2b
//   XREF to: 00602c2b (UNCONDITIONAL_JUMP)
// 00602c44: MOV AL,byte ptr [ESP + 0x15]
//   Label: LAB_00602c44
// 00602c48: CMP AL,0x73
// 00602c4a: JNZ 0x00602c96
//   XREF to: 00602c96 (CONDITIONAL_JUMP)
// 00602c4c: TEST byte ptr [ESP + 0x1e],0x20
// 00602c51: JZ 0x00602c6f
//   XREF to: 00602c6f (CONDITIONAL_JUMP)
// 00602c53: PUSH ESI
// 00602c54: LEA EAX,[ESP + 0x4]
// 00602c58: PUSH EAX
// 00602c59: XOR EAX,EAX
// 00602c5b: MOV AX,word ptr [ESP + 0x74]
// 00602c60: PUSH EAX
// 00602c61: PUSH EDI
// 00602c62: CALL crt_stdio.c_FormatWideString_FUN_006031c0
//   XREF to: 006031c0 (UNCONDITIONAL_CALL)
// 00602c67: ADD ESP,0x10
// 00602c6a: JMP 0x00602cda
//   XREF to: 00602cda (UNCONDITIONAL_JUMP)
// 00602c6f: MOV ES,word ptr [ESP + 0x6c]
//   Label: LAB_00602c6f
// 00602c73: CMP dword ptr [ESP + 0x28],0x0
//   Label: LAB_00602c73
// 00602c78: JLE 0x00602cda
//   XREF to: 00602cda (CONDITIONAL_JUMP)
// 00602c7a: XOR EAX,EAX
// 00602c7c: MOV AL,byte ptr ES:[EDI]
// 00602c7f: PUSH EAX
// 00602c80: LEA EAX,[ESP + 0x4]
// 00602c84: PUSH EAX
// 00602c85: CALL ESI
// 00602c87: ADD ESP,0x8
// 00602c8a: MOV ECX,dword ptr [ESP + 0x28]
// 00602c8e: DEC ECX
// 00602c8f: INC EDI
// 00602c90: MOV dword ptr [ESP + 0x28],ECX
// 00602c94: JMP 0x00602c73
//   XREF to: 00602c73 (UNCONDITIONAL_JUMP)
// 00602c96: CMP AL,0x53
//   Label: LAB_00602c96
// 00602c98: JNZ 0x00602cb3
//   XREF to: 00602cb3 (CONDITIONAL_JUMP)
// 00602c9a: PUSH ESI
// 00602c9b: LEA EAX,[ESP + 0x4]
// 00602c9f: PUSH EAX
// 00602ca0: XOR EAX,EAX
// 00602ca2: MOV AX,word ptr [ESP + 0x74]
// 00602ca7: PUSH EAX
// 00602ca8: PUSH EDI
// 00602ca9: CALL crt_stdio.c_FormatWideString_FUN_006031c0
//   XREF to: 006031c0 (UNCONDITIONAL_CALL)
// 00602cae: ADD ESP,0x10
// 00602cb1: JMP 0x00602cda
//   XREF to: 00602cda (UNCONDITIONAL_JUMP)
// 00602cb3: MOV ES,word ptr [ESP + 0x6c]
//   Label: LAB_00602cb3
// 00602cb7: CMP dword ptr [ESP + 0x28],0x0
//   Label: LAB_00602cb7
// 00602cbc: JLE 0x00602cda
//   XREF to: 00602cda (CONDITIONAL_JUMP)
// 00602cbe: XOR EAX,EAX
// 00602cc0: MOV AL,byte ptr ES:[EDI]
// 00602cc3: PUSH EAX
// 00602cc4: LEA EAX,[ESP + 0x4]
// 00602cc8: PUSH EAX
// 00602cc9: CALL ESI
// 00602ccb: ADD ESP,0x8
// 00602cce: MOV EAX,dword ptr [ESP + 0x28]
// 00602cd2: DEC EAX
// 00602cd3: INC EDI
// 00602cd4: MOV dword ptr [ESP + 0x28],EAX
// 00602cd8: JMP 0x00602cb7
//   XREF to: 00602cb7 (UNCONDITIONAL_JUMP)
// 00602cda: CMP dword ptr [ESP + 0x2c],0x0
//   Label: LAB_00602cda
// 00602cdf: JLE 0x00602cf3
//   XREF to: 00602cf3 (CONDITIONAL_JUMP)
// 00602ce1: PUSH 0x30
// 00602ce3: LEA EAX,[ESP + 0x4]
// 00602ce7: PUSH EAX
// 00602ce8: CALL ESI
// 00602cea: ADD ESP,0x8
// 00602ced: DEC dword ptr [ESP + 0x2c]
// 00602cf1: JMP 0x00602cda
//   XREF to: 00602cda (UNCONDITIONAL_JUMP)
// 00602cf3: MOV ES,word ptr [ESP + 0x6c]
//   Label: LAB_00602cf3
// 00602cf7: CMP dword ptr [ESP + 0x30],0x0
//   Label: LAB_00602cf7
// 00602cfc: JLE 0x00602d1a
//   XREF to: 00602d1a (CONDITIONAL_JUMP)
// 00602cfe: XOR EAX,EAX
// 00602d00: MOV AL,byte ptr ES:[EDI]
// 00602d03: PUSH EAX
// 00602d04: LEA EAX,[ESP + 0x4]
// 00602d08: PUSH EAX
// 00602d09: CALL ESI
// 00602d0b: ADD ESP,0x8
// 00602d0e: MOV EAX,dword ptr [ESP + 0x30]
// 00602d12: DEC EAX
// 00602d13: INC EDI
// 00602d14: MOV dword ptr [ESP + 0x30],EAX
// 00602d18: JMP 0x00602cf7
//   XREF to: 00602cf7 (UNCONDITIONAL_JUMP)
// 00602d1a: CMP dword ptr [ESP + 0x34],0x0
//   Label: LAB_00602d1a
// 00602d1f: JLE 0x00602d33
//   XREF to: 00602d33 (CONDITIONAL_JUMP)
// 00602d21: PUSH 0x30
// 00602d23: LEA EAX,[ESP + 0x4]
// 00602d27: PUSH EAX
// 00602d28: CALL ESI
// 00602d2a: ADD ESP,0x8
// 00602d2d: DEC dword ptr [ESP + 0x34]
// 00602d31: JMP 0x00602d1a
//   XREF to: 00602d1a (UNCONDITIONAL_JUMP)
// 00602d33: TEST byte ptr [ESP + 0x1e],0x8
//   Label: LAB_00602d33
// 00602d38: JZ 0x00602d41
//   XREF to: 00602d41 (CONDITIONAL_JUMP)
// 00602d3a: CMP dword ptr [ESP + 0x4],0x0
//   Label: LAB_00602d3a
// 00602d3f: JG 0x00602d58
//   XREF to: 00602d58 (CONDITIONAL_JUMP)
// 00602d41: CMP byte ptr [EBP],0x0
//   Label: LAB_00602d41
// 00602d45: JNZ 0x006029a0
//   XREF to: 006029a0 (CONDITIONAL_JUMP)
// 00602d4b: MOV EAX,dword ptr [ESP + 0x10]
// 00602d4f: ADD ESP,0x74
// 00602d52: POP EBP
// 00602d53: POP ES
// 00602d54: POP EDI
// 00602d55: POP ESI
// 00602d56: POP EBX
// 00602d57: RET
// 00602d58: PUSH 0x20
//   Label: LAB_00602d58
// 00602d5a: LEA EAX,[ESP + 0x4]
// 00602d5e: PUSH EAX
// 00602d5f: CALL ESI
// 00602d61: ADD ESP,0x8
// 00602d64: DEC dword ptr [ESP + 0x4]
// 00602d68: JMP 0x00602d3a
//   XREF to: 00602d3a (UNCONDITIONAL_JUMP)
// 00602d6a: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_00602d6a
//   XREF to: Stack[-0x78] (READ)
// 00602d6e: ADD ESP,0x74
// 00602d71: POP EBP
// 00602d72: POP ES
//   Label: LAB_00602d72
// 00602d73: POP EDI
// 00602d74: POP ESI
// 00602d75: POP EBX
// 00602d76: RET
