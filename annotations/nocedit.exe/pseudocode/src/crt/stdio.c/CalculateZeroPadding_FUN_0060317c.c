// Name: crt_stdio.c_CalculateZeroPadding_FUN_0060317c
// Address: 0060317c
// Address Range: [[0060317c, 006031be]]
// Convention: __cdecl
// Signature: void crt_stdio.c_CalculateZeroPadding_FUN_0060317c(FormatSpec * spec_info)
// Cross-references:
//   crt_stdio.c_ConvertFormatSpec_FUN_00603238 (00603238) at 006036eb [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* WARNING: Struct "FormatSpec": ignoring multiple overlapping fields */

void __cdecl crt_stdio_c_CalculateZeroPadding_FUN_0060317c(FormatSpec *spec_info)

{
  int iVar1;
  
  if (((spec_info->flags & LEFT_ALIGN) == 0) && (spec_info->zerofill == '0')) {
    iVar1 = (((((spec_info->width - *(int *)((int)&spec_info->flags + 2)) -
               spec_info->padding_needed) - spec_info->content_length) - spec_info->prefix_length) -
            spec_info->suffix_length) - spec_info->alternate_form_length;
    if (0 < iVar1) {
      spec_info->padding_needed = spec_info->padding_needed + iVar1;
    }
  }
  return;
}


// Assembly code:
// 0060317c: PUSH EBX
//   Label: crt_stdio.c_CalculateZeroPadding_FUN_0060317c
// 0060317d: PUSH ESI
// 0060317e: PUSH EDI
// 0060317f: PUSH EBP
// 00603180: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00603184: TEST byte ptr [EAX + 0x1e],0x8
// 00603188: JNZ 0x006031ba
//   XREF to: 006031ba (CONDITIONAL_JUMP)
// 0060318a: CMP byte ptr [EAX + 0x16],0x30
// 0060318e: JNZ 0x006031ba
//   XREF to: 006031ba (CONDITIONAL_JUMP)
// 00603190: MOV EDX,dword ptr [EAX + 0x4]
// 00603193: MOV EBX,dword ptr [EAX + 0x20]
// 00603196: MOV ECX,dword ptr [EAX + 0x24]
// 00603199: SUB EDX,EBX
// 0060319b: MOV ESI,dword ptr [EAX + 0x28]
// 0060319e: SUB EDX,ECX
// 006031a0: MOV EDI,dword ptr [EAX + 0x2c]
// 006031a3: SUB EDX,ESI
// 006031a5: MOV EBP,dword ptr [EAX + 0x30]
// 006031a8: SUB EDX,EDI
// 006031aa: MOV EBX,dword ptr [EAX + 0x34]
// 006031ad: SUB EDX,EBP
// 006031af: SUB EDX,EBX
// 006031b1: TEST EDX,EDX
// 006031b3: JLE 0x006031ba
//   XREF to: 006031ba (CONDITIONAL_JUMP)
// 006031b5: ADD ECX,EDX
// 006031b7: MOV dword ptr [EAX + 0x24],ECX
// 006031ba: POP EBP
//   Label: LAB_006031ba
// 006031bb: POP EDI
// 006031bc: POP ESI
// 006031bd: POP EBX
// 006031be: RET
