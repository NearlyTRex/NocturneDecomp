// Name: crt_stdio.c_ConvertFormatSpec_FUN_00603238
// Address: 00603238
// Address Range: [[00603238, 0060389b]]
// Convention: __cdecl
// Signature: char * crt_stdio.c_ConvertFormatSpec_FUN_00603238(char * output_buffer, va_list_t * args, FormatSpec * spec_info)
// Cross-references:
//   crt_stdio.c_FormatEngine_FUN_00602950 (00602950) at 00602b8b [UNCONDITIONAL_CALL]
// Globals:
//   int g_MultibyteLocaleActive
//   char[256] g_LeadByteTable
// Function calls:
//   crt_stdio.c_CalculateZeroPadding_FUN_0060317c
//   crt_stdio.c_FloatingPointStub_FUN_00603160
//   crt_stdio.c_FormatFixedPoint_FUN_0060305c
//   crt_stdio.c_FormatHexWithPadding_FUN_00602ff8
//   crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
//   crt_stdio.c_WideStringToMultiByteLen_FUN_00602f7c
//   crt_stdlib.c_i64toa_FUN_0060ad40
//   crt_stdlib.c_utoa_FUN_0060ae50
//   crt_string.c_strlen_far_FUN_00602f4c
//   crt_string.c_strupr_FUN_0060389c

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: value_64bit */
/* WARNING: Variable defined which should be unmapped: mb_char_buffer */
/* WARNING: Struct "FormatSpec": ignoring multiple overlapping fields */
/* NOTE: Ghidra decompilation artifacts in this function:
   
   FLAG LOGIC INVERSION: Ghidra shows complex inverted flag tests like:
   if ((spec_info->flags & LONG_MODIFIER) == ~(FAR_PTR|NEAR_PTR|...))
   These should be read as simple negated tests:
   if (!(spec_info->flags & LONG_MODIFIER))
   ESP REGISTER CONFUSION: Ghidra incorrectly treats ESP as a user variable
   (in_ESP, BADSPACEBASE) causing decompiler uncertainty.
   VARIABLE MAPPING WARNINGS: "Variable defined which should be unmapped"
   warnings for value_64bit and mb_char_buffer - these can be ignored.
   
   The actual function signatures, variable types, and structure layout are
   correct. This is a printf format specifier conversion function that handles
   integers, strings, characters, and pointers with proper 64-bit support.
   Assembly analysis confirms the logic is straightforward despite the
   decompiler display issues. */

char * __cdecl
crt_stdio_c_ConvertFormatSpec_FUN_00603238
          (char *output_buffer,va_list_t *args,FormatSpec *spec_info)

{
  byte *pbVar1;
  byte bVar2;
  uint *puVar3;
  int *piVar4;
  wchar_t *pwVar5;
  ushort *puVar6;
  uint uVar7;
  FormatFlags FVar8;
  char *pcVar9;
  int iVar10;
  int integer_value;
  BADSPACEBASE *in_ESP;
  int iVar11;
  ushort segment_es;
  ushort segment_ds;
  longlong value_64bit;
  char mb_char_buffer [2];
  ushort segment_storage;
  
  *(undefined4 *)((int)&spec_info->flags + 2) = 0;
  spec_info->padding_needed = 0;
  spec_info->content_length = 0;
  spec_info->prefix_length = 0;
  spec_info->suffix_length = 0;
  bVar2 = spec_info->conversion_char;
  spec_info->alternate_form_length = 0;
  if (bVar2 < 0x69) {
    if (0x57 < bVar2) {
      if (bVar2 < 0x59) goto LAB_006032b4;
      if (bVar2 == 100) goto LAB_0060330e;
    }
    goto LAB_006033d5;
  }
  if (bVar2 < 0x6a) {
LAB_0060330e:
    if ((spec_info->flags & 0x100) == 0) {
      if ((spec_info->flags & LONG_MODIFIER) == 0) {
        puVar3 = (uint *)*args;
        *args = (va_list_t)(puVar3 + 1);
        integer_value = *puVar3;
        if ((spec_info->flags & SHORT_MODIFIER) != 0) {
          integer_value = (int)(short)integer_value;
        }
      }
      else {
        puVar3 = (uint *)*args;
        *args = (va_list_t)(puVar3 + 1);
        integer_value = *puVar3;
      }
    }
    else {
      puVar3 = (uint *)*args;
      *args = (va_list_t)(puVar3 + 1);
      value_64bit._0_4_ = (FormatSpec *)*puVar3;
      puVar3 = (uint *)*args;
      *args = (va_list_t)(puVar3 + 1);
      value_64bit._4_4_ = *puVar3;
    }
    if ((spec_info->flags & 0x100) == 0) {
      if (-1 < integer_value) goto LAB_006033ac;
    }
    else if ((value_64bit._4_4_ & 0x80000000) == 0) {
LAB_006033ac:
      if ((spec_info->flags & FORCE_SIGN) == 0) {
        if ((spec_info->flags & SPACE_SIGN) != 0) {
          iVar11 = *(int *)((int)&spec_info->flags + 2);
          *(int *)((int)&spec_info->flags + 2) = iVar11 + 1;
          output_buffer[iVar11] = ' ';
        }
      }
      else {
        iVar11 = *(int *)((int)&spec_info->flags + 2);
        *(int *)((int)&spec_info->flags + 2) = iVar11 + 1;
        output_buffer[iVar11] = '+';
      }
      goto LAB_006033d5;
    }
    iVar11 = *(int *)((int)&spec_info->flags + 2);
    *(int *)((int)&spec_info->flags + 2) = iVar11 + 1;
    output_buffer[iVar11] = '-';
    if ((spec_info->flags & 0x100) == 0) {
      integer_value = -integer_value;
    }
    else {
      value_64bit._4_4_ = ~value_64bit._4_4_;
      value_64bit._0_4_ = (FormatSpec *)(~(uint)(FormatSpec *)value_64bit + 1);
      if ((FormatSpec *)value_64bit == (FormatSpec *)0x0) {
        value_64bit._4_4_ = value_64bit._4_4_ + 1;
      }
    }
  }
  else if (bVar2 < 0x75) {
    if (bVar2 == 0x6f) goto LAB_006032b4;
  }
  else if ((bVar2 < 0x76) || (bVar2 == 0x78)) {
LAB_006032b4:
    if ((spec_info->flags & 0x100) == 0) {
      if ((spec_info->flags & LONG_MODIFIER) == 0) {
        puVar3 = (uint *)*args;
        *args = (va_list_t)(puVar3 + 1);
        integer_value = *puVar3;
        if ((spec_info->flags & SHORT_MODIFIER) != 0) {
          integer_value = integer_value & 0xffff;
        }
      }
      else {
        puVar3 = (uint *)*args;
        *args = (va_list_t)(puVar3 + 1);
        integer_value = *puVar3;
      }
    }
    else {
      puVar3 = (uint *)*args;
      *args = (va_list_t)(puVar3 + 1);
      value_64bit._0_4_ = (FormatSpec *)*puVar3;
      puVar3 = (uint *)*args;
      *args = (va_list_t)(puVar3 + 1);
      value_64bit._4_4_ = *puVar3;
    }
  }
LAB_006033d5:
  bVar2 = spec_info->conversion_char;
  iVar11 = 10;
  if (bVar2 < 100) {
    if (bVar2 < 0x47) {
      if (bVar2 < 0x45) {
        if (bVar2 == 0x43) {
          puVar6 = (ushort *)*args;
          *args = (va_list_t)(puVar6 + 2);
          iVar11 = crt_stdio_c_WideCharToSingleByte_FUN_0060acf0
                             ((wchar_t)output_buffer,(char *)(uint)*puVar6);
          if (iVar11 != -1) {
            *(int *)((int)&spec_info->flags + 2) = iVar11;
            return output_buffer;
          }
          *(undefined4 *)((int)&spec_info->flags + 2) = 0;
          return output_buffer;
        }
        goto LAB_0060387a;
      }
      if (bVar2 < 0x46) goto LAB_006034c9;
LAB_00603493:
      if ((spec_info->flags & SHORT_MODIFIER) != 0) {
        piVar4 = (int *)*args;
        *args = (va_list_t)(piVar4 + 1);
        crt_stdio_c_FormatFixedPoint_FUN_0060305c(output_buffer,*piVar4,spec_info);
        value_64bit._0_4_ = (FormatSpec *)0xffffffff;
        iVar11 = crt_string_c_strlen_far_FUN_00602f4c(output_buffer,segment_ds,-1);
        spec_info->content_length = iVar11;
        return output_buffer;
      }
LAB_006034c9:
      crt_stdio_c_FloatingPointStub_FUN_00603160(output_buffer,args,spec_info);
      value_64bit._0_4_ = spec_info;
      crt_stdio_c_CalculateZeroPadding_FUN_0060317c(spec_info);
      return output_buffer + 1;
    }
    if (bVar2 < 0x48) goto LAB_006034c9;
    if (bVar2 < 0x53) {
      if (bVar2 == 0x50) {
LAB_00603702:
        if (spec_info->width == 0) {
          if ((spec_info->flags & FAR_PTR) == 0) {
            spec_info->width = 8;
          }
          else {
            spec_info->width = 0xd;
          }
        }
        *(undefined1 *)&spec_info->flags =
             (char)spec_info->flags &
             (FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|ALTERNATE_FORM);
        piVar4 = (int *)*args;
        *args = (va_list_t)(piVar4 + 1);
        iVar11 = *piVar4;
        pcVar9 = output_buffer;
        if ((spec_info->flags & FAR_PTR) != 0) {
          *args = (va_list_t)(piVar4 + 2);
          crt_stdio_c_FormatHexWithPadding_FUN_00602ff8(piVar4[1] & 0xffff,output_buffer,4);
          output_buffer[4] = ':';
          pcVar9 = output_buffer + 5;
        }
        crt_stdio_c_FormatHexWithPadding_FUN_00602ff8(iVar11,pcVar9,8);
        if (spec_info->conversion_char == 'P') {
          value_64bit._0_4_ = (FormatSpec *)output_buffer;
          crt_string_c_strupr_FUN_0060389c(output_buffer);
        }
        value_64bit._4_4_ = 0xffffffff;
        value_64bit._0_4_ = (FormatSpec *)(uint)segment_es;
        iVar11 = crt_string_c_strlen_far_FUN_00602f4c(output_buffer,segment_es,-1);
        *(int *)((int)&spec_info->flags + 2) = iVar11;
        return output_buffer;
      }
      goto LAB_0060387a;
    }
    if (bVar2 < 0x54) {
LAB_006034f3:
      *output_buffer = '\0';
      if ((spec_info->flags & FAR_PTR) == 0) {
        if ((spec_info->flags & NEAR_PTR) == 0) {
          piVar4 = (int *)*args;
          *args = (va_list_t)(piVar4 + 1);
          pwVar5 = (wchar_t *)*piVar4;
        }
        else {
          piVar4 = (int *)*args;
          *args = (va_list_t)(piVar4 + 1);
          pwVar5 = (wchar_t *)*piVar4;
        }
        if (pwVar5 != (wchar_t *)0x0) {
          output_buffer = (char *)pwVar5;
        }
      }
      else {
        piVar4 = (int *)*args;
        *args = (va_list_t)(piVar4 + 2);
        if (((wchar_t *)*piVar4 != (wchar_t *)0x0) || (*(ushort *)(piVar4 + 1) != 0)) {
          output_buffer = (char *)*piVar4;
          segment_ds = *(ushort *)(piVar4 + 1);
        }
      }
      if (spec_info->conversion_char == 'S') {
        if ((spec_info->flags & SHORT_MODIFIER) == 0) {
          iVar11 = crt_stdio_c_WideStringToMultiByteLen_FUN_00602f7c
                             ((wchar_t *)output_buffer,segment_ds,spec_info->precision);
          goto LAB_0060359a;
        }
        iVar11 = spec_info->precision;
      }
      else {
        if ((spec_info->flags & LONG_MODIFIER) != 0) {
          iVar11 = crt_stdio_c_WideStringToMultiByteLen_FUN_00602f7c
                             ((wchar_t *)output_buffer,segment_ds,spec_info->precision);
          goto LAB_0060359a;
        }
        iVar11 = spec_info->precision;
      }
      iVar11 = crt_string_c_strlen_far_FUN_00602f4c(output_buffer,segment_ds,iVar11);
LAB_0060359a:
      iVar10 = spec_info->precision;
      spec_info->content_length = iVar11;
      if (iVar10 < 0) {
        return (char *)(wchar_t *)output_buffer;
      }
      if (iVar11 <= iVar10) {
        return (char *)(wchar_t *)output_buffer;
      }
      spec_info->content_length = iVar10;
      return (char *)(wchar_t *)output_buffer;
    }
    if (bVar2 < 0x58) {
LAB_0060387a:
      spec_info->width = 0;
      *output_buffer = spec_info->conversion_char;
      *(undefined4 *)((int)&spec_info->flags + 2) = 1;
      return output_buffer;
    }
    if (0x58 < bVar2) {
      if (bVar2 == 99) {
        FVar8 = spec_info->flags;
        *(undefined4 *)((int)&spec_info->flags + 2) = 1;
        if ((FVar8 & LONG_MODIFIER) == 0) {
          pcVar9 = *args;
          *args = pcVar9 + 4;
          *output_buffer = *pcVar9;
          return output_buffer;
        }
        puVar6 = (ushort *)*args;
        *args = (va_list_t)(puVar6 + 2);
        iVar10 = crt_stdio_c_WideCharToSingleByte_FUN_0060acf0
                           ((wchar_t)mb_char_buffer,(char *)(uint)*puVar6);
        iVar11 = g_MultibyteLocaleActive;
        if (iVar10 == -1) {
          return output_buffer;
        }
        segment_storage._0_1_ = (byte)segment_ds;
        *output_buffer = (byte)segment_storage;
        if (iVar11 == 0) {
          return output_buffer;
        }
        if ((g_LeadByteTable[(byte)segment_storage] & 1U) == 0) {
          return output_buffer;
        }
        segment_storage._1_1_ = (char)(segment_ds >> 8);
        output_buffer[1] = segment_storage._1_1_;
        pbVar1 = (byte *)((int)&spec_info->flags + 2);
        *(int *)pbVar1 = *(int *)pbVar1 + 1;
        return output_buffer;
      }
      goto LAB_0060387a;
    }
LAB_006035c5:
    if (((spec_info->flags & ALTERNATE_FORM) != 0) &&
       (((uVar7 = integer_value, (spec_info->flags & 0x100) != 0 &&
         (uVar7 = value_64bit._4_4_, (FormatSpec *)value_64bit != (FormatSpec *)0x0)) ||
        (uVar7 != 0)))) {
      iVar11 = *(int *)((int)&spec_info->flags + 2);
      *(int *)((int)&spec_info->flags + 2) = iVar11 + 1;
      output_buffer[iVar11] = '0';
      iVar11 = *(int *)((int)&spec_info->flags + 2);
      *(int *)((int)&spec_info->flags + 2) = iVar11 + 1;
      output_buffer[iVar11] = spec_info->conversion_char;
    }
    iVar11 = 0x10;
LAB_00603607:
    if ((spec_info->conversion_char == 'o') &&
       (iVar11 = 8, (spec_info->flags & ALTERNATE_FORM) != 0)) {
      iVar10 = *(int *)((int)&spec_info->flags + 2);
      *(int *)((int)&spec_info->flags + 2) = iVar10 + 1;
      output_buffer[iVar10] = '0';
    }
  }
  else if (100 < bVar2) {
    if (bVar2 < 0x6f) {
      if (bVar2 < 0x66) goto LAB_006034c9;
      if (bVar2 < 0x67) goto LAB_00603493;
      if (bVar2 < 0x68) goto LAB_006034c9;
      if (bVar2 != 0x69) goto LAB_0060387a;
    }
    else {
      if (bVar2 < 0x70) goto LAB_00603607;
      if (bVar2 < 0x73) {
        if (bVar2 == 0x70) goto LAB_00603702;
        goto LAB_0060387a;
      }
      if (bVar2 < 0x74) goto LAB_006034f3;
      if (bVar2 < 0x75) goto LAB_0060387a;
      if (0x75 < bVar2) {
        if (bVar2 != 0x78) goto LAB_0060387a;
        goto LAB_006035c5;
      }
    }
  }
  pcVar9 = output_buffer + *(int *)((int)&spec_info->flags + 2);
  if ((spec_info->flags & 0x100) == 0) {
    if ((spec_info->precision == 0) && (integer_value == 0)) {
      *pcVar9 = '\0';
      iVar11 = 0;
      goto LAB_006036cd;
    }
    crt_stdlib_c_utoa_FUN_0060ae50
              (integer_value,output_buffer + *(int *)((int)&spec_info->flags + 2),iVar11);
    if (spec_info->conversion_char == 'X') {
      value_64bit._0_4_ = (FormatSpec *)output_buffer;
      crt_string_c_strupr_FUN_0060389c(output_buffer);
    }
  }
  else {
    if (((spec_info->precision == 0) && ((FormatSpec *)value_64bit == (FormatSpec *)0x0)) &&
       (value_64bit._4_4_ == 0)) {
      *pcVar9 = '\0';
      iVar11 = 0;
      goto LAB_006036cd;
    }
    crt_stdlib_c_i64toa_FUN_0060ad40
              (&value_64bit,output_buffer + *(int *)((int)&spec_info->flags + 2),iVar11);
    if (spec_info->conversion_char == 'X') {
      value_64bit._0_4_ = (FormatSpec *)output_buffer;
      crt_string_c_strupr_FUN_0060389c(output_buffer);
    }
  }
  value_64bit._4_4_ = 0xffffffff;
  value_64bit._0_4_ = (FormatSpec *)(uint)segment_es;
  iVar11 = crt_string_c_strlen_far_FUN_00602f4c(pcVar9,segment_es,-1);
LAB_006036cd:
  spec_info->content_length = iVar11;
  if (iVar11 < spec_info->precision) {
    spec_info->padding_needed = spec_info->precision - iVar11;
  }
  if (spec_info->precision != -1) {
    return pcVar9;
  }
  _mb_char_buffer = spec_info;
  value_64bit._4_4_ = 0x6036f0;
  crt_stdio_c_CalculateZeroPadding_FUN_0060317c(spec_info);
  return pcVar9;
}


// Assembly code:
// 00603238: PUSH EBX
//   Label: crt_stdio.c_ConvertFormatSpec_FUN_00603238
// 00603239: PUSH ESI
// 0060323a: PUSH EDI
// 0060323b: PUSH ES
// 0060323c: PUSH EBP
// 0060323d: SUB ESP,0x10
// 00603240: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00603244: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00603248: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 0060324c: MOV dword ptr [EBX + 0x20],0x0
// 00603253: MOV dword ptr [EBX + 0x24],0x0
// 0060325a: MOV dword ptr [EBX + 0x28],0x0
// 00603261: MOV dword ptr [EBX + 0x2c],0x0
// 00603268: MOV word ptr [ESP + 0xc],DS
//   XREF to: Stack[-0x18] (WRITE)
// 0060326c: MOV dword ptr [EBX + 0x30],0x0
// 00603273: MOV EDI,ESI
// 00603275: MOV AL,byte ptr [EBX + 0x15]
// 00603278: MOV dword ptr [EBX + 0x34],0x0
// 0060327f: CMP AL,0x69
// 00603281: JC 0x006032a1
//   XREF to: 006032a1 (CONDITIONAL_JUMP)
// 00603283: JBE 0x0060330e
//   XREF to: 0060330e (CONDITIONAL_JUMP)
// 00603289: CMP AL,0x75
// 0060328b: JC 0x00603298
//   XREF to: 00603298 (CONDITIONAL_JUMP)
// 0060328d: JBE 0x006032b4
//   XREF to: 006032b4 (CONDITIONAL_JUMP)
// 0060328f: CMP AL,0x78
// 00603291: JZ 0x006032b4
//   XREF to: 006032b4 (CONDITIONAL_JUMP)
// 00603293: JMP 0x006033d5
//   XREF to: 006033d5 (UNCONDITIONAL_JUMP)
// 00603298: CMP AL,0x6f
//   Label: LAB_00603298
// 0060329a: JZ 0x006032b4
//   XREF to: 006032b4 (CONDITIONAL_JUMP)
// 0060329c: JMP 0x006033d5
//   XREF to: 006033d5 (UNCONDITIONAL_JUMP)
// 006032a1: CMP AL,0x58
//   Label: LAB_006032a1
// 006032a3: JC 0x006033d5
//   XREF to: 006033d5 (CONDITIONAL_JUMP)
// 006032a9: JBE 0x006032b4
//   XREF to: 006032b4 (CONDITIONAL_JUMP)
// 006032ab: CMP AL,0x64
// 006032ad: JZ 0x0060330e
//   XREF to: 0060330e (CONDITIONAL_JUMP)
// 006032af: JMP 0x006033d5
//   XREF to: 006033d5 (UNCONDITIONAL_JUMP)
// 006032b4: TEST byte ptr [EBX + 0x1f],0x1
//   Label: LAB_006032b4
// 006032b8: JZ 0x006032da
//   XREF to: 006032da (CONDITIONAL_JUMP)
// 006032ba: MOV EBP,dword ptr [EDX]
// 006032bc: ADD EBP,0x4
// 006032bf: MOV dword ptr [EDX],EBP
// 006032c1: MOV EAX,dword ptr [EBP + -0x4]
// 006032c4: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 006032c7: MOV EAX,dword ptr [EDX]
// 006032c9: ADD EAX,0x4
// 006032cc: MOV dword ptr [EDX],EAX
// 006032ce: MOV EAX,dword ptr [EAX + -0x4]
// 006032d1: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 006032d5: JMP 0x006033d5
//   XREF to: 006033d5 (UNCONDITIONAL_JUMP)
// 006032da: TEST byte ptr [EBX + 0x1e],0x20
//   Label: LAB_006032da
// 006032de: JZ 0x006032ef
//   XREF to: 006032ef (CONDITIONAL_JUMP)
// 006032e0: MOV ECX,dword ptr [EDX]
// 006032e2: ADD ECX,0x4
// 006032e5: MOV dword ptr [EDX],ECX
// 006032e7: MOV ECX,dword ptr [ECX + -0x4]
// 006032ea: JMP 0x006033d5
//   XREF to: 006033d5 (UNCONDITIONAL_JUMP)
// 006032ef: MOV EAX,dword ptr [EDX]
//   Label: LAB_006032ef
// 006032f1: ADD EAX,0x4
// 006032f4: MOV dword ptr [EDX],EAX
// 006032f6: MOV ECX,dword ptr [EAX + -0x4]
// 006032f9: TEST byte ptr [EBX + 0x1e],0x10
// 006032fd: JZ 0x006033d5
//   XREF to: 006033d5 (CONDITIONAL_JUMP)
// 00603303: AND ECX,0xffff
// 00603309: JMP 0x006033d5
//   XREF to: 006033d5 (UNCONDITIONAL_JUMP)
// 0060330e: TEST byte ptr [EBX + 0x1f],0x1
//   Label: LAB_0060330e
// 00603312: JZ 0x00603331
//   XREF to: 00603331 (CONDITIONAL_JUMP)
// 00603314: MOV EAX,dword ptr [EDX]
// 00603316: ADD EAX,0x4
// 00603319: MOV dword ptr [EDX],EAX
// 0060331b: MOV EAX,dword ptr [EAX + -0x4]
// 0060331e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 00603321: MOV EBP,dword ptr [EDX]
// 00603323: ADD EBP,0x4
// 00603326: MOV dword ptr [EDX],EBP
// 00603328: MOV EAX,dword ptr [EBP + -0x4]
// 0060332b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0060332f: JMP 0x00603357
//   XREF to: 00603357 (UNCONDITIONAL_JUMP)
// 00603331: TEST byte ptr [EBX + 0x1e],0x20
//   Label: LAB_00603331
// 00603335: JZ 0x00603343
//   XREF to: 00603343 (CONDITIONAL_JUMP)
// 00603337: MOV EBP,dword ptr [EDX]
// 00603339: ADD EBP,0x4
// 0060333c: MOV dword ptr [EDX],EBP
// 0060333e: MOV ECX,dword ptr [EBP + -0x4]
// 00603341: JMP 0x00603357
//   XREF to: 00603357 (UNCONDITIONAL_JUMP)
// 00603343: MOV ECX,dword ptr [EDX]
//   Label: LAB_00603343
// 00603345: ADD ECX,0x4
// 00603348: MOV dword ptr [EDX],ECX
// 0060334a: MOV AL,byte ptr [EBX + 0x1e]
// 0060334d: MOV ECX,dword ptr [ECX + -0x4]
// 00603350: TEST AL,0x10
// 00603352: JZ 0x00603357
//   XREF to: 00603357 (CONDITIONAL_JUMP)
// 00603354: MOVSX ECX,CX
// 00603357: XOR EAX,EAX
//   Label: LAB_00603357
// 00603359: TEST byte ptr [EBX + 0x1f],0x1
// 0060335d: JZ 0x00603368
//   XREF to: 00603368 (CONDITIONAL_JUMP)
// 0060335f: TEST byte ptr [ESP + 0x7],0x80
//   XREF to: Stack[-0x1d] (READ)
// 00603364: JZ 0x0060336c
//   XREF to: 0060336c (CONDITIONAL_JUMP)
// 00603366: JMP 0x00603370
//   XREF to: 00603370 (UNCONDITIONAL_JUMP)
// 00603368: TEST ECX,ECX
//   Label: LAB_00603368
// 0060336a: JL 0x00603370
//   XREF to: 00603370 (CONDITIONAL_JUMP)
// 0060336c: TEST EAX,EAX
//   Label: LAB_0060336c
// 0060336e: JZ 0x006033ac
//   XREF to: 006033ac (CONDITIONAL_JUMP)
// 00603370: MOV EAX,dword ptr [EBX + 0x20]
//   Label: LAB_00603370
// 00603373: LEA EBP,[EAX + 0x1]
// 00603376: MOV dword ptr [EBX + 0x20],EBP
// 00603379: MOV byte ptr [ESI + EAX*0x1],0x2d
// 0060337d: TEST byte ptr [EBX + 0x1f],0x1
// 00603381: JZ 0x006033a8
//   XREF to: 006033a8 (CONDITIONAL_JUMP)
// 00603383: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00603386: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0060338a: NOT EAX
// 0060338c: NOT EBP
// 0060338e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 00603391: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 00603395: INC EAX
// 00603396: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 00603399: JNZ 0x006033a0
//   XREF to: 006033a0 (CONDITIONAL_JUMP)
// 0060339b: LEA EAX,[EBP + 0x1]
// 0060339e: JMP 0x006033a2
//   XREF to: 006033a2 (UNCONDITIONAL_JUMP)
// 006033a0: MOV EAX,EBP
//   Label: LAB_006033a0
// 006033a2: MOV dword ptr [ESP + 0x4],EAX
//   Label: LAB_006033a2
//   XREF to: Stack[-0x20] (WRITE)
// 006033a6: JMP 0x006033d5
//   XREF to: 006033d5 (UNCONDITIONAL_JUMP)
// 006033a8: NEG ECX
//   Label: LAB_006033a8
// 006033aa: JMP 0x006033d5
//   XREF to: 006033d5 (UNCONDITIONAL_JUMP)
// 006033ac: MOV AH,byte ptr [EBX + 0x1e]
//   Label: LAB_006033ac
// 006033af: TEST AH,0x4
// 006033b2: JZ 0x006033c3
//   XREF to: 006033c3 (CONDITIONAL_JUMP)
// 006033b4: MOV EAX,dword ptr [EBX + 0x20]
// 006033b7: LEA EBP,[EAX + 0x1]
// 006033ba: MOV dword ptr [EBX + 0x20],EBP
// 006033bd: MOV byte ptr [ESI + EAX*0x1],0x2b
// 006033c1: JMP 0x006033d5
//   XREF to: 006033d5 (UNCONDITIONAL_JUMP)
// 006033c3: TEST AH,0x2
//   Label: LAB_006033c3
// 006033c6: JZ 0x006033d5
//   XREF to: 006033d5 (CONDITIONAL_JUMP)
// 006033c8: MOV EAX,dword ptr [EBX + 0x20]
// 006033cb: LEA EBP,[EAX + 0x1]
// 006033ce: MOV dword ptr [EBX + 0x20],EBP
// 006033d1: MOV byte ptr [ESI + EAX*0x1],0x20
// 006033d5: MOV AL,byte ptr [EBX + 0x15]
//   Label: LAB_006033d5
// 006033d8: MOV EBP,0xa
// 006033dd: CMP AL,0x64
// 006033df: JC 0x00603442
//   XREF to: 00603442 (CONDITIONAL_JUMP)
// 006033e1: JBE 0x00603627
//   XREF to: 00603627 (CONDITIONAL_JUMP)
// 006033e7: CMP AL,0x6f
// 006033e9: JC 0x00603423
//   XREF to: 00603423 (CONDITIONAL_JUMP)
// 006033eb: JBE 0x00603607
//   XREF to: 00603607 (CONDITIONAL_JUMP)
// 006033f1: CMP AL,0x73
// 006033f3: JC 0x00603416
//   XREF to: 00603416 (CONDITIONAL_JUMP)
// 006033f5: JBE 0x006034f3
//   XREF to: 006034f3 (CONDITIONAL_JUMP)
// 006033fb: CMP AL,0x75
// 006033fd: JC 0x0060387a
//   XREF to: 0060387a (CONDITIONAL_JUMP)
// 00603403: JBE 0x00603627
//   XREF to: 00603627 (CONDITIONAL_JUMP)
// 00603409: CMP AL,0x78
// 0060340b: JZ 0x006035c5
//   XREF to: 006035c5 (CONDITIONAL_JUMP)
// 00603411: JMP 0x0060387a
//   XREF to: 0060387a (UNCONDITIONAL_JUMP)
// 00603416: CMP AL,0x70
//   Label: LAB_00603416
// 00603418: JZ 0x00603702
//   XREF to: 00603702 (CONDITIONAL_JUMP)
// 0060341e: JMP 0x0060387a
//   XREF to: 0060387a (UNCONDITIONAL_JUMP)
// 00603423: CMP AL,0x66
//   Label: LAB_00603423
// 00603425: JC 0x006034c9
//   XREF to: 006034c9 (CONDITIONAL_JUMP)
// 0060342b: JBE 0x00603493
//   XREF to: 00603493 (CONDITIONAL_JUMP)
// 0060342d: CMP AL,0x67
// 0060342f: JBE 0x006034c9
//   XREF to: 006034c9 (CONDITIONAL_JUMP)
// 00603435: CMP AL,0x69
// 00603437: JZ 0x00603627
//   XREF to: 00603627 (CONDITIONAL_JUMP)
// 0060343d: JMP 0x0060387a
//   XREF to: 0060387a (UNCONDITIONAL_JUMP)
// 00603442: CMP AL,0x47
//   Label: LAB_00603442
// 00603444: JC 0x0060347e
//   XREF to: 0060347e (CONDITIONAL_JUMP)
// 00603446: JBE 0x006034c9
//   XREF to: 006034c9 (CONDITIONAL_JUMP)
// 0060344c: CMP AL,0x53
// 0060344e: JC 0x00603471
//   XREF to: 00603471 (CONDITIONAL_JUMP)
// 00603450: JBE 0x006034f3
//   XREF to: 006034f3 (CONDITIONAL_JUMP)
// 00603456: CMP AL,0x58
// 00603458: JC 0x0060387a
//   XREF to: 0060387a (CONDITIONAL_JUMP)
// 0060345e: JBE 0x006035c5
//   XREF to: 006035c5 (CONDITIONAL_JUMP)
// 00603464: CMP AL,0x63
// 00603466: JZ 0x0060379a
//   XREF to: 0060379a (CONDITIONAL_JUMP)
// 0060346c: JMP 0x0060387a
//   XREF to: 0060387a (UNCONDITIONAL_JUMP)
// 00603471: CMP AL,0x50
//   Label: LAB_00603471
// 00603473: JZ 0x00603702
//   XREF to: 00603702 (CONDITIONAL_JUMP)
// 00603479: JMP 0x0060387a
//   XREF to: 0060387a (UNCONDITIONAL_JUMP)
// 0060347e: CMP AL,0x45
//   Label: LAB_0060347e
// 00603480: JC 0x00603486
//   XREF to: 00603486 (CONDITIONAL_JUMP)
// 00603482: JBE 0x006034c9
//   XREF to: 006034c9 (CONDITIONAL_JUMP)
// 00603484: JMP 0x00603493
//   XREF to: 00603493 (UNCONDITIONAL_JUMP)
// 00603486: CMP AL,0x43
//   Label: LAB_00603486
// 00603488: JZ 0x00603831
//   XREF to: 00603831 (CONDITIONAL_JUMP)
// 0060348e: JMP 0x0060387a
//   XREF to: 0060387a (UNCONDITIONAL_JUMP)
// 00603493: TEST byte ptr [EBX + 0x1e],0x10
//   Label: LAB_00603493
// 00603497: JZ 0x006034c9
//   XREF to: 006034c9 (CONDITIONAL_JUMP)
// 00603499: MOV EBP,dword ptr [EDX]
// 0060349b: ADD EBP,0x4
// 0060349e: MOV dword ptr [EDX],EBP
// 006034a0: PUSH EBX
// 006034a1: MOV ECX,dword ptr [EBP + -0x4]
// 006034a4: PUSH ECX
// 006034a5: PUSH ESI
// 006034a6: CALL crt_stdio.c_FormatFixedPoint_FUN_0060305c
//   XREF to: 0060305c (UNCONDITIONAL_CALL)
// 006034ab: ADD ESP,0xc
// 006034ae: MOV AX,DS
// 006034b0: PUSH -0x1
// 006034b2: AND EAX,0xffff
// 006034b7: PUSH EAX
// 006034b8: PUSH ESI
// 006034b9: CALL crt_string.c_strlen_far_FUN_00602f4c
//   XREF to: 00602f4c (UNCONDITIONAL_CALL)
// 006034be: ADD ESP,0xc
// 006034c1: MOV dword ptr [EBX + 0x28],EAX
// 006034c4: JMP 0x0060388d
//   XREF to: 0060388d (UNCONDITIONAL_JUMP)
// 006034c9: PUSH EBX
//   Label: LAB_006034c9
// 006034ca: PUSH EDX
// 006034cb: PUSH ESI
// 006034cc: CALL crt_stdio.c_FloatingPointStub_FUN_00603160
//   XREF to: 00603160 (UNCONDITIONAL_CALL)
// 006034d1: ADD ESP,0xc
// 006034d4: PUSH EBX
// 006034d5: CALL crt_stdio.c_CalculateZeroPadding_FUN_0060317c
//   XREF to: 0060317c (UNCONDITIONAL_CALL)
// 006034da: ADD ESP,0x4
// 006034dd: LEA EDI,[ESI + 0x1]
// 006034e0: MOV word ptr [ESP + 0xc],DS
//   XREF to: Stack[-0x18] (WRITE)
// 006034e4: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 006034e8: MOV EAX,EDI
// 006034ea: ADD ESP,0x10
// 006034ed: POP EBP
// 006034ee: POP ES
// 006034ef: POP EDI
// 006034f0: POP ESI
// 006034f1: POP EBX
// 006034f2: RET
// 006034f3: MOV byte ptr [ESI],0x0
//   Label: LAB_006034f3
// 006034f6: MOV CH,byte ptr [EBX + 0x1e]
// 006034f9: TEST CH,0x80
// 006034fc: JZ 0x0060351d
//   XREF to: 0060351d (CONDITIONAL_JUMP)
// 006034fe: MOV ESI,dword ptr [EDX]
// 00603500: ADD ESI,0x8
// 00603503: MOV dword ptr [EDX],ESI
// 00603505: MOV EDX,dword ptr [ESI + -0x8]
// 00603508: MOV AX,word ptr [ESI + -0x4]
// 0060350c: TEST EDX,EDX
// 0060350e: JNZ 0x00603515
//   XREF to: 00603515 (CONDITIONAL_JUMP)
// 00603510: TEST AX,AX
// 00603513: JZ 0x00603546
//   XREF to: 00603546 (CONDITIONAL_JUMP)
// 00603515: MOV dword ptr [ESP + 0xc],EAX
//   Label: LAB_00603515
//   XREF to: Stack[-0x18] (WRITE)
// 00603519: MOV EDI,EDX
// 0060351b: JMP 0x00603546
//   XREF to: 00603546 (UNCONDITIONAL_JUMP)
// 0060351d: TEST CH,0x40
//   Label: LAB_0060351d
// 00603520: JZ 0x00603532
//   XREF to: 00603532 (CONDITIONAL_JUMP)
// 00603522: MOV ECX,dword ptr [EDX]
// 00603524: ADD ECX,0x4
// 00603527: MOV dword ptr [EDX],ECX
// 00603529: MOV EAX,dword ptr [ECX + -0x4]
// 0060352c: TEST EAX,EAX
// 0060352e: JZ 0x00603546
//   XREF to: 00603546 (CONDITIONAL_JUMP)
// 00603530: JMP 0x00603540
//   XREF to: 00603540 (UNCONDITIONAL_JUMP)
// 00603532: MOV EAX,dword ptr [EDX]
//   Label: LAB_00603532
// 00603534: ADD EAX,0x4
// 00603537: MOV dword ptr [EDX],EAX
// 00603539: MOV EAX,dword ptr [EAX + -0x4]
// 0060353c: TEST EAX,EAX
// 0060353e: JZ 0x00603546
//   XREF to: 00603546 (CONDITIONAL_JUMP)
// 00603540: MOV word ptr [ESP + 0xc],DS
//   Label: LAB_00603540
//   XREF to: Stack[-0x18] (WRITE)
// 00603544: MOV EDI,EAX
// 00603546: CMP byte ptr [EBX + 0x15],0x53
//   Label: LAB_00603546
// 0060354a: JNZ 0x0060356e
//   XREF to: 0060356e (CONDITIONAL_JUMP)
// 0060354c: TEST byte ptr [EBX + 0x1e],0x10
// 00603550: JZ 0x0060355a
//   XREF to: 0060355a (CONDITIONAL_JUMP)
// 00603552: MOV ECX,dword ptr [EBX + 0x8]
// 00603555: XOR EAX,EAX
// 00603557: PUSH ECX
// 00603558: JMP 0x0060358e
//   XREF to: 0060358e (UNCONDITIONAL_JUMP)
// 0060355a: MOV EDX,dword ptr [EBX + 0x8]
//   Label: LAB_0060355a
// 0060355d: XOR EAX,EAX
// 0060355f: PUSH EDX
// 00603560: MOV AX,word ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00603565: PUSH EAX
// 00603566: PUSH EDI
// 00603567: CALL crt_stdio.c_WideStringToMultiByteLen_FUN_00602f7c
//   XREF to: 00602f7c (UNCONDITIONAL_CALL)
// 0060356c: JMP 0x0060359a
//   XREF to: 0060359a (UNCONDITIONAL_JUMP)
// 0060356e: TEST byte ptr [EBX + 0x1e],0x20
//   Label: LAB_0060356e
// 00603572: JZ 0x00603588
//   XREF to: 00603588 (CONDITIONAL_JUMP)
// 00603574: MOV EAX,dword ptr [EBX + 0x8]
// 00603577: PUSH EAX
// 00603578: XOR EAX,EAX
// 0060357a: MOV AX,word ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0060357f: PUSH EAX
// 00603580: PUSH EDI
// 00603581: CALL crt_stdio.c_WideStringToMultiByteLen_FUN_00602f7c
//   XREF to: 00602f7c (UNCONDITIONAL_CALL)
// 00603586: JMP 0x0060359a
//   XREF to: 0060359a (UNCONDITIONAL_JUMP)
// 00603588: MOV EBP,dword ptr [EBX + 0x8]
//   Label: LAB_00603588
// 0060358b: XOR EAX,EAX
// 0060358d: PUSH EBP
// 0060358e: MOV AX,word ptr [ESP + 0x10]
//   Label: LAB_0060358e
//   XREF to: Stack[-0x18] (READ)
// 00603593: PUSH EAX
// 00603594: PUSH EDI
// 00603595: CALL crt_string.c_strlen_far_FUN_00602f4c
//   XREF to: 00602f4c (UNCONDITIONAL_CALL)
// 0060359a: ADD ESP,0xc
//   Label: LAB_0060359a
// 0060359d: MOV ESI,dword ptr [EBX + 0x8]
// 006035a0: MOV dword ptr [EBX + 0x28],EAX
// 006035a3: TEST ESI,ESI
// 006035a5: JL 0x0060388d
//   XREF to: 0060388d (CONDITIONAL_JUMP)
// 006035ab: CMP EAX,ESI
// 006035ad: JLE 0x0060388d
//   XREF to: 0060388d (CONDITIONAL_JUMP)
// 006035b3: MOV dword ptr [EBX + 0x28],ESI
// 006035b6: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 006035ba: MOV EAX,EDI
// 006035bc: ADD ESP,0x10
// 006035bf: POP EBP
// 006035c0: POP ES
// 006035c1: POP EDI
// 006035c2: POP ESI
// 006035c3: POP EBX
// 006035c4: RET
// 006035c5: TEST byte ptr [EBX + 0x1e],0x1
//   Label: LAB_006035c5
// 006035c9: JZ 0x00603602
//   XREF to: 00603602 (CONDITIONAL_JUMP)
// 006035cb: TEST byte ptr [EBX + 0x1f],0x1
// 006035cf: JZ 0x006035e0
//   XREF to: 006035e0 (CONDITIONAL_JUMP)
// 006035d1: CMP dword ptr [ESP],0x0
//   XREF to: Stack[-0x24] (DATA)
// 006035d5: JNZ 0x006035e4
//   XREF to: 006035e4 (CONDITIONAL_JUMP)
// 006035d7: CMP dword ptr [ESP + 0x4],0x0
//   XREF to: Stack[-0x20] (READ)
// 006035dc: JZ 0x00603602
//   XREF to: 00603602 (CONDITIONAL_JUMP)
// 006035de: JMP 0x006035e4
//   XREF to: 006035e4 (UNCONDITIONAL_JUMP)
// 006035e0: TEST ECX,ECX
//   Label: LAB_006035e0
// 006035e2: JZ 0x00603602
//   XREF to: 00603602 (CONDITIONAL_JUMP)
// 006035e4: MOV EAX,dword ptr [EBX + 0x20]
//   Label: LAB_006035e4
// 006035e7: LEA EDX,[EAX + 0x1]
// 006035ea: MOV dword ptr [EBX + 0x20],EDX
// 006035ed: MOV byte ptr [ESI + EAX*0x1],0x30
// 006035f1: MOV EAX,dword ptr [EBX + 0x20]
// 006035f4: LEA EDX,[EAX + 0x1]
// 006035f7: MOV dword ptr [EBX + 0x20],EDX
// 006035fa: LEA EDX,[ESI + EAX*0x1]
// 006035fd: MOV AL,byte ptr [EBX + 0x15]
// 00603600: MOV byte ptr [EDX],AL
// 00603602: MOV EBP,0x10
//   Label: LAB_00603602
// 00603607: CMP byte ptr [EBX + 0x15],0x6f
//   Label: LAB_00603607
// 0060360b: JNZ 0x00603627
//   XREF to: 00603627 (CONDITIONAL_JUMP)
// 0060360d: MOV AH,byte ptr [EBX + 0x1e]
// 00603610: MOV EBP,0x8
// 00603615: TEST AH,0x1
// 00603618: JZ 0x00603627
//   XREF to: 00603627 (CONDITIONAL_JUMP)
// 0060361a: MOV EAX,dword ptr [EBX + 0x20]
// 0060361d: LEA EDX,[EAX + 0x1]
// 00603620: MOV dword ptr [EBX + 0x20],EDX
// 00603623: MOV byte ptr [ESI + EAX*0x1],0x30
// 00603627: MOV EAX,dword ptr [EBX + 0x20]
//   Label: LAB_00603627
// 0060362a: MOV word ptr [ESP + 0xc],DS
//   XREF to: Stack[-0x18] (WRITE)
// 0060362e: ADD EAX,ESI
// 00603630: MOV DL,byte ptr [EBX + 0x1f]
// 00603633: MOV EDI,EAX
// 00603635: TEST DL,0x1
// 00603638: JZ 0x00603683
//   XREF to: 00603683 (CONDITIONAL_JUMP)
// 0060363a: CMP dword ptr [EBX + 0x8],0x0
// 0060363e: JNZ 0x0060365c
//   XREF to: 0060365c (CONDITIONAL_JUMP)
// 00603640: CMP dword ptr [ESP],0x0
//   XREF to: Stack[-0x24] (DATA)
// 00603644: JNZ 0x0060365c
//   XREF to: 0060365c (CONDITIONAL_JUMP)
// 00603646: CMP dword ptr [ESP + 0x4],0x0
//   XREF to: Stack[-0x20] (READ)
// 0060364b: JNZ 0x0060365c
//   XREF to: 0060365c (CONDITIONAL_JUMP)
// 0060364d: MOV ES,word ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 00603651: MOV byte ptr ES:[EAX],0x0
// 00603655: XOR EAX,EAX
// 00603657: JMP 0x006036cd
//   XREF to: 006036cd (UNCONDITIONAL_JUMP)
// 0060365c: MOV EAX,dword ptr [EBX + 0x20]
//   Label: LAB_0060365c
// 0060365f: PUSH EBP
// 00603660: ADD EAX,ESI
// 00603662: PUSH EAX
// 00603663: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x24] (DATA)
// 00603667: PUSH EAX
// 00603668: CALL crt_stdlib.c_i64toa_FUN_0060ad40
//   XREF to: 0060ad40 (UNCONDITIONAL_CALL)
// 0060366d: MOV CL,byte ptr [EBX + 0x15]
// 00603670: ADD ESP,0xc
// 00603673: CMP CL,0x58
// 00603676: JNZ 0x006036ba
//   XREF to: 006036ba (CONDITIONAL_JUMP)
// 00603678: PUSH ESI
// 00603679: CALL crt_string.c_strupr_FUN_0060389c
//   XREF to: 0060389c (UNCONDITIONAL_CALL)
// 0060367e: ADD ESP,0x4
// 00603681: JMP 0x006036ba
//   XREF to: 006036ba (UNCONDITIONAL_JUMP)
// 00603683: CMP dword ptr [EBX + 0x8],0x0
//   Label: LAB_00603683
// 00603687: JNZ 0x00603699
//   XREF to: 00603699 (CONDITIONAL_JUMP)
// 00603689: TEST ECX,ECX
// 0060368b: JNZ 0x00603699
//   XREF to: 00603699 (CONDITIONAL_JUMP)
// 0060368d: MOV ES,word ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 00603691: MOV byte ptr ES:[EAX],0x0
// 00603695: XOR EAX,EAX
// 00603697: JMP 0x006036cd
//   XREF to: 006036cd (UNCONDITIONAL_JUMP)
// 00603699: MOV EAX,dword ptr [EBX + 0x20]
//   Label: LAB_00603699
// 0060369c: PUSH EBP
// 0060369d: ADD EAX,ESI
// 0060369f: PUSH EAX
// 006036a0: PUSH ECX
// 006036a1: CALL crt_stdlib.c_utoa_FUN_0060ae50
//   XREF to: 0060ae50 (UNCONDITIONAL_CALL)
// 006036a6: MOV DH,byte ptr [EBX + 0x15]
// 006036a9: ADD ESP,0xc
// 006036ac: CMP DH,0x58
// 006036af: JNZ 0x006036ba
//   XREF to: 006036ba (CONDITIONAL_JUMP)
// 006036b1: PUSH ESI
// 006036b2: CALL crt_string.c_strupr_FUN_0060389c
//   XREF to: 0060389c (UNCONDITIONAL_CALL)
// 006036b7: ADD ESP,0x4
// 006036ba: XOR EAX,EAX
//   Label: LAB_006036ba
// 006036bc: PUSH -0x1
// 006036be: MOV AX,word ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 006036c3: PUSH EAX
// 006036c4: PUSH EDI
// 006036c5: CALL crt_string.c_strlen_far_FUN_00602f4c
//   XREF to: 00602f4c (UNCONDITIONAL_CALL)
// 006036ca: ADD ESP,0xc
// 006036cd: MOV EDX,EAX
//   Label: LAB_006036cd
// 006036cf: MOV ESI,dword ptr [EBX + 0x8]
// 006036d2: MOV dword ptr [EBX + 0x28],EAX
// 006036d5: CMP EAX,ESI
// 006036d7: JGE 0x006036e0
//   XREF to: 006036e0 (CONDITIONAL_JUMP)
// 006036d9: MOV EAX,ESI
// 006036db: SUB EAX,EDX
// 006036dd: MOV dword ptr [EBX + 0x24],EAX
// 006036e0: CMP dword ptr [EBX + 0x8],-0x1
//   Label: LAB_006036e0
// 006036e4: JNZ 0x0060388d
//   XREF to: 0060388d (CONDITIONAL_JUMP)
// 006036ea: PUSH EBX
// 006036eb: CALL crt_stdio.c_CalculateZeroPadding_FUN_0060317c
//   XREF to: 0060317c (UNCONDITIONAL_CALL)
// 006036f0: ADD ESP,0x4
// 006036f3: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 006036f7: MOV EAX,EDI
// 006036f9: ADD ESP,0x10
// 006036fc: POP EBP
// 006036fd: POP ES
// 006036fe: POP EDI
// 006036ff: POP ESI
// 00603700: POP EBX
// 00603701: RET
// 00603702: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_00603702
// 00603706: JNZ 0x0060371e
//   XREF to: 0060371e (CONDITIONAL_JUMP)
// 00603708: TEST byte ptr [EBX + 0x1e],0x80
// 0060370c: JZ 0x00603717
//   XREF to: 00603717 (CONDITIONAL_JUMP)
// 0060370e: MOV dword ptr [EBX + 0x4],0xd
// 00603715: JMP 0x0060371e
//   XREF to: 0060371e (UNCONDITIONAL_JUMP)
// 00603717: MOV dword ptr [EBX + 0x4],0x8
//   Label: LAB_00603717
// 0060371e: AND byte ptr [EBX + 0x1e],0xf9
//   Label: LAB_0060371e
// 00603722: MOV ECX,dword ptr [EDX]
// 00603724: ADD ECX,0x4
// 00603727: MOV dword ptr [EDX],ECX
// 00603729: MOV EAX,ECX
// 0060372b: MOV EBP,dword ptr [ECX + -0x4]
// 0060372e: TEST byte ptr [EBX + 0x1e],0x80
// 00603732: JZ 0x0060375a
//   XREF to: 0060375a (CONDITIONAL_JUMP)
// 00603734: ADD EAX,0x4
// 00603737: MOV dword ptr [EDX],EAX
// 00603739: PUSH 0x4
// 0060373b: MOV EAX,dword ptr [EAX + -0x4]
// 0060373e: PUSH ESI
// 0060373f: AND EAX,0xffff
// 00603744: PUSH EAX
// 00603745: CALL crt_stdio.c_FormatHexWithPadding_FUN_00602ff8
//   XREF to: 00602ff8 (UNCONDITIONAL_CALL)
// 0060374a: ADD ESP,0xc
// 0060374d: PUSH 0x8
// 0060374f: LEA EAX,[ESI + 0x5]
// 00603752: PUSH EAX
// 00603753: PUSH EBP
// 00603754: MOV byte ptr [ESI + 0x4],0x3a
// 00603758: JMP 0x0060375e
//   XREF to: 0060375e (UNCONDITIONAL_JUMP)
// 0060375a: PUSH 0x8
//   Label: LAB_0060375a
// 0060375c: PUSH ESI
// 0060375d: PUSH EBP
// 0060375e: CALL crt_stdio.c_FormatHexWithPadding_FUN_00602ff8
//   Label: LAB_0060375e
//   XREF to: 00602ff8 (UNCONDITIONAL_CALL)
// 00603763: ADD ESP,0xc
// 00603766: CMP byte ptr [EBX + 0x15],0x50
// 0060376a: JNZ 0x00603775
//   XREF to: 00603775 (CONDITIONAL_JUMP)
// 0060376c: PUSH ESI
// 0060376d: CALL crt_string.c_strupr_FUN_0060389c
//   XREF to: 0060389c (UNCONDITIONAL_CALL)
// 00603772: ADD ESP,0x4
// 00603775: XOR EAX,EAX
//   Label: LAB_00603775
// 00603777: PUSH -0x1
// 00603779: MOV AX,word ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0060377e: PUSH EAX
// 0060377f: PUSH EDI
// 00603780: CALL crt_string.c_strlen_far_FUN_00602f4c
//   XREF to: 00602f4c (UNCONDITIONAL_CALL)
// 00603785: ADD ESP,0xc
// 00603788: MOV dword ptr [EBX + 0x20],EAX
// 0060378b: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0060378f: MOV EAX,EDI
// 00603791: ADD ESP,0x10
// 00603794: POP EBP
// 00603795: POP ES
// 00603796: POP EDI
// 00603797: POP ESI
// 00603798: POP EBX
// 00603799: RET
// 0060379a: MOV AH,byte ptr [EBX + 0x1e]
//   Label: LAB_0060379a
// 0060379d: MOV dword ptr [EBX + 0x20],0x1
// 006037a4: TEST AH,0x20
// 006037a7: JZ 0x00603816
//   XREF to: 00603816 (CONDITIONAL_JUMP)
// 006037a9: MOV ECX,dword ptr [EDX]
// 006037ab: ADD ECX,0x4
// 006037ae: MOV dword ptr [EDX],ECX
// 006037b0: MOV AX,word ptr [ECX + -0x4]
// 006037b4: AND EAX,0xffff
// 006037b9: PUSH EAX
// 006037ba: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 006037be: PUSH EAX
// 006037bf: CALL crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
//   XREF to: 0060acf0 (UNCONDITIONAL_CALL)
// 006037c4: ADD ESP,0x8
// 006037c7: CMP EAX,-0x1
// 006037ca: JZ 0x0060388d
//   XREF to: 0060388d (CONDITIONAL_JUMP)
// 006037d0: MOV AL,byte ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 006037d4: MOV EBP,dword ptr [0x03f9c020]
//   XREF to: 03f9c020 (READ)
// 006037da: MOV byte ptr [ESI],AL
// 006037dc: TEST EBP,EBP
// 006037de: JZ 0x0060388d
//   XREF to: 0060388d (CONDITIONAL_JUMP)
// 006037e4: XOR EAX,EAX
// 006037e6: MOV AL,byte ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 006037ea: MOV AL,byte ptr [EAX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 006037f0: AND AL,0x1
// 006037f2: AND EAX,0xff
// 006037f7: JZ 0x0060388d
//   XREF to: 0060388d (CONDITIONAL_JUMP)
// 006037fd: MOV AL,byte ptr [ESP + 0x9]
//   XREF to: Stack[-0x1b] (READ)
// 00603801: MOV byte ptr [ESI + 0x1],AL
// 00603804: INC dword ptr [EBX + 0x20]
// 00603807: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0060380b: MOV EAX,EDI
// 0060380d: ADD ESP,0x10
// 00603810: POP EBP
// 00603811: POP ES
// 00603812: POP EDI
// 00603813: POP ESI
// 00603814: POP EBX
// 00603815: RET
// 00603816: MOV EBX,dword ptr [EDX]
//   Label: LAB_00603816
// 00603818: ADD EBX,0x4
// 0060381b: MOV dword ptr [EDX],EBX
// 0060381d: MOV AL,byte ptr [EBX + -0x4]
// 00603820: MOV byte ptr [ESI],AL
// 00603822: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 00603826: MOV EAX,EDI
// 00603828: ADD ESP,0x10
// 0060382b: POP EBP
// 0060382c: POP ES
// 0060382d: POP EDI
// 0060382e: POP ESI
// 0060382f: POP EBX
// 00603830: RET
// 00603831: MOV EAX,dword ptr [EDX]
//   Label: LAB_00603831
// 00603833: ADD EAX,0x4
// 00603836: MOV dword ptr [EDX],EAX
// 00603838: MOV AX,word ptr [EAX + -0x4]
// 0060383c: AND EAX,0xffff
// 00603841: PUSH EAX
// 00603842: PUSH ESI
// 00603843: CALL crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
//   XREF to: 0060acf0 (UNCONDITIONAL_CALL)
// 00603848: ADD ESP,0x8
// 0060384b: MOV EDX,EAX
// 0060384d: CMP EAX,-0x1
// 00603850: JZ 0x00603864
//   XREF to: 00603864 (CONDITIONAL_JUMP)
// 00603852: MOV dword ptr [EBX + 0x20],EAX
// 00603855: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 00603859: MOV EAX,EDI
// 0060385b: ADD ESP,0x10
// 0060385e: POP EBP
// 0060385f: POP ES
// 00603860: POP EDI
// 00603861: POP ESI
// 00603862: POP EBX
// 00603863: RET
// 00603864: MOV dword ptr [EBX + 0x20],0x0
//   Label: LAB_00603864
// 0060386b: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0060386f: MOV EAX,EDI
// 00603871: ADD ESP,0x10
// 00603874: POP EBP
// 00603875: POP ES
// 00603876: POP EDI
// 00603877: POP ESI
// 00603878: POP EBX
// 00603879: RET
// 0060387a: MOV dword ptr [EBX + 0x4],0x0
//   Label: LAB_0060387a
// 00603881: MOV AL,byte ptr [EBX + 0x15]
// 00603884: MOV byte ptr [ESI],AL
// 00603886: MOV dword ptr [EBX + 0x20],0x1
// 0060388d: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_0060388d
//   XREF to: Stack[-0x18] (READ)
// 00603891: MOV EAX,EDI
// 00603893: ADD ESP,0x10
// 00603896: POP EBP
// 00603897: POP ES
// 00603898: POP EDI
// 00603899: POP ESI
// 0060389a: POP EBX
// 0060389b: RET
