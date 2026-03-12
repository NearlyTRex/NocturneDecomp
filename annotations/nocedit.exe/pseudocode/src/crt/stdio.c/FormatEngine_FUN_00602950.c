// Name: crt_stdio.c_FormatEngine_FUN_00602950
// Address: 00602950
// Address Range: [[00602950, 00602d76]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_FormatEngine_FUN_00602950(void *output_context,char *format,va_list_t args,OUTPUT_CALLBACK callback)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl FormatEngine(void *output_context,char *format,va_list_t args,OUTPUT_CALLBACK callback)

{
  char cVar2;
  uint *puVar4;
  undefined6 *puVar5;
  ushort uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  wchar_t *wide_string_offset;
  uint *puVar6;
  int iVar12;
  int uVar13;
  ushort segment;
  FormatSpec local_88;
  va_list_t local_28;
  va_list_t local_24;
  uint *local_20;
  undefined6 *puVar2;
  char cVar1;
  uint *puVar3;
  uint uVar7;
  
  local_88.flags =
       ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
        ALTERNATE_FORM);
  local_88.length_flags =
       ~(BASIC_RESERVED|BASIC_NEAR_PTR_FLAG|BASIC_FAR_PTR_FLAG|BASIC_WIDE_FLAG|BASIC_CHAR_FLAG|
         BASIC_SHORT_FLAG|BASIC_LONG_FLAG|BASIC_I64_FLAG);
  local_88.unknown_0x1C[0] = 'd';
  local_88.unknown_0x1C[1] = '\0';
  local_88.padding1 = '\0';
  local_88.format_char = '\0';
  local_88.padding_char = '\0';
  local_88.padding2[0] = '\0';
  cVar1 = *format;
  local_88.unknown_0x00 = (char  [4])output_context;
  do {
    if (cVar1 == '\0') {
      uVar13._0_1_ = local_88.padding1;
      uVar13._1_1_ = local_88.format_char;
      uVar13._2_1_ = local_88.padding_char;
      uVar13._3_1_ = local_88.padding2[0];
      return uVar13;
    }
LAB_006029a0:
    while( true ) {
      cVar2 = *format;
      format = format + 1;
      if (cVar2 == '%') break;
      (*callback)(&local_88,(int)cVar2);
LAB_00602d41:
      if (*format == '\0') {
        iVar12._0_1_ = local_88.padding1;
        iVar12._1_1_ = local_88.format_char;
        iVar12._2_1_ = local_88.padding_char;
        iVar12._3_1_ = local_88.padding2[0];
        return iVar12;
      }
    }
    local_28.value[0] = *(char *(*) [1])args.value[0];
    pcVar5 = ScanFormatSpec(format,&local_28,&local_88);
    *(char *(*) [1])args.value[0] = local_28.value[0];
    local_88.conversion_char = *pcVar5;
    format = pcVar5 + 1;
    if (local_88.conversion_char == '\0') {
      uVar7._0_1_ = local_88.padding1;
      uVar7._1_1_ = local_88.format_char;
      uVar7._2_1_ = local_88.padding_char;
      uVar7._3_1_ = local_88.padding2[0];
      return uVar7;
    }
    if (local_88.conversion_char != 'n') {
      local_24.value[0] = *(char *(*) [1])args.value[0];
      wide_string_offset =
           (wchar_t *)
           ConvertFormatSpec
                     ((char *)&local_88.length_modifier_flags,&local_24,&local_88);
      *(char *(*) [1])args.value[0] = local_24.value[0];
      local_88.width =
           local_88.width -
           (local_88.output_length + local_88.padding_needed + local_88.content_length +
            local_88.prefix_length + local_88.suffix_length + local_88.alternate_form_length);
      if (((local_88._30_2_ & 8) == 0) && (local_88.zerofill == ' ')) {
        for (; 0 < local_88.width; local_88.width = local_88.width + -1) {
          (*callback)(&local_88,0x20);
        }
      }
      puVar6 = &local_88.length_modifier_flags;
      for (; 0 < local_88.output_length; local_88.output_length = local_88.output_length + -1) {
        (*callback)(&local_88,(int)(char)*puVar6);
        puVar6 = (uint *)((int)puVar6 + 1);
      }
      while( true ) {
        if (local_88.padding_needed < 1) break;
        (*callback)(&local_88,0x30);
        local_88.padding_needed = local_88.padding_needed + -1;
      }
      if (local_88.conversion_char == 's') {
        if ((local_88._30_2_ & 0x20) == 0) {
          for (; 0 < local_88.content_length; local_88.content_length = local_88.content_length + -1
              ) {
            (*callback)(&local_88,(int)(char)*wide_string_offset);
            wide_string_offset = (wchar_t *)((int)wide_string_offset + 1);
          }
        }
        else {
          FormatWideString(wide_string_offset,segment,&local_88,callback);
        }
      }
      else if (local_88.conversion_char == 'S') {
        FormatWideString(wide_string_offset,segment,&local_88,callback);
      }
      else {
        for (; 0 < local_88.content_length; local_88.content_length = local_88.content_length + -1)
        {
          (*callback)(&local_88,(int)(char)*wide_string_offset);
          wide_string_offset = (wchar_t *)((int)wide_string_offset + 1);
        }
      }
      for (; 0 < local_88.prefix_length; local_88.prefix_length = local_88.prefix_length + -1) {
        (*callback)(&local_88,0x30);
      }
      for (; 0 < local_88.suffix_length; local_88.suffix_length = local_88.suffix_length + -1) {
        (*callback)(&local_88,(int)(char)*wide_string_offset);
        wide_string_offset = (wchar_t *)((int)wide_string_offset + 1);
      }
      for (; 0 < local_88.alternate_form_length;
          local_88.alternate_form_length = local_88.alternate_form_length + -1) {
        (*callback)(&local_88,0x30);
      }
      if ((local_88._30_2_ & 8) != 0) {
        for (; 0 < local_88.width; local_88.width = local_88.width + -1) {
          (*callback)(&local_88,0x20);
        }
      }
      goto LAB_00602d41;
    }
    if ((local_88._30_2_ & 0x20) == 0) {
      if ((local_88._30_2_ & 0x10) == 0) {
        if ((local_88._30_2_ & 0x80) == 0) {
          if ((local_88._30_2_ & 0x40) == 0) {
            puVar4 = *(uint **)args.value[0];
            *(uint **)args.value[0] = puVar4 + 1;
            *(uint *)*puVar4 = local_88._16_4_;
            if (*format == '\0') {
              iVar11._0_1_ = local_88.padding1;
              iVar11._1_1_ = local_88.format_char;
              iVar11._2_1_ = local_88.padding_char;
              iVar11._3_1_ = local_88.padding2[0];
              return iVar11;
            }
          }
          else {
            puVar4 = *(uint **)args.value[0];
            *(uint **)args.value[0] = puVar4 + 1;
            *(uint *)*puVar4 = local_88._16_4_;
            if (*format == '\0') {
              iVar10._0_1_ = local_88.padding1;
              iVar10._1_1_ = local_88.format_char;
              iVar10._2_1_ = local_88.padding_char;
              iVar10._3_1_ = local_88.padding2[0];
              return iVar10;
            }
          }
        }
        else {
          puVar5 = *(undefined6 **)args.value[0];
          *(undefined6 **)args.value[0] = puVar5 + 1;
          *(uint *)*puVar5 = local_88._16_4_;
          if (*format == '\0') {
            iVar9._0_1_ = local_88.padding1;
            iVar9._1_1_ = local_88.format_char;
            iVar9._2_1_ = local_88.padding_char;
            iVar9._3_1_ = local_88.padding2[0];
            return iVar9;
          }
        }
      }
      else {
        uVar4 = local_88._16_2_;
        if ((local_88._30_2_ & 0x80) == 0) {
          if ((local_88._30_2_ & 0x40) == 0) {
            puVar4 = *(uint **)args.value[0];
            *(uint **)args.value[0] = puVar4 + 1;
            *(ushort *)*puVar4 = uVar4;
            if (*format == '\0') {
              iVar8._0_1_ = local_88.padding1;
              iVar8._1_1_ = local_88.format_char;
              iVar8._2_1_ = local_88.padding_char;
              iVar8._3_1_ = local_88.padding2[0];
              return iVar8;
            }
          }
          else {
            puVar4 = *(uint **)args.value[0];
            *(uint **)args.value[0] = puVar4 + 1;
            *(ushort *)*puVar4 = uVar4;
            if (*format == '\0') {
              iVar7._0_1_ = local_88.padding1;
              iVar7._1_1_ = local_88.format_char;
              iVar7._2_1_ = local_88.padding_char;
              iVar7._3_1_ = local_88.padding2[0];
              return iVar7;
            }
          }
        }
        else {
          puVar5 = *(undefined6 **)args.value[0];
          *(undefined6 **)args.value[0] = puVar5 + 1;
          *(ushort *)*puVar5 = uVar4;
          if (*format == '\0') {
            iVar6._0_1_ = local_88.padding1;
            iVar6._1_1_ = local_88.format_char;
            iVar6._2_1_ = local_88.padding_char;
            iVar6._3_1_ = local_88.padding2[0];
            return iVar6;
          }
        }
      }
      goto LAB_006029a0;
    }
    if ((local_88._30_2_ & 0x80) == 0) {
      if ((local_88._30_2_ & 0x40) == 0) {
        puVar4 = *(uint **)args.value[0];
        *(uint **)args.value[0] = puVar4 + 1;
        *(uint *)*puVar4 = local_88._16_4_;
        cVar1 = *format;
      }
      else {
        puVar3 = *(uint **)args.value[0];
        *(uint **)args.value[0] = puVar3 + 1;
        *(uint *)*puVar3 = local_88._16_4_;
        cVar1 = *format;
      }
    }
    else {
      puVar2 = *(undefined6 **)args.value[0];
      *(undefined6 **)args.value[0] = puVar2 + 1;
      *(uint *)*puVar2 = local_88._16_4_;
      cVar1 = *format;
    }
  } while( true );
}
