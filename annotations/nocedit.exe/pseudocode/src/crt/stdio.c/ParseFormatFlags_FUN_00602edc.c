// Name: crt_stdio.c_ParseFormatFlags_FUN_00602edc
// Address: 00602edc
// Address Range: [[00602edc, 00602f4b]]
// Convention: __cdecl
// Signature: char * crt_stdio.c_ParseFormatFlags_FUN_00602edc(char * format, FormatSpec * spec_info)
// Cross-references:
//   crt_stdio.c_ScanFormatSpec_FUN_00602d78 (00602d78) at 00602d8d [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* WARNING: Struct "FormatSpec": ignoring multiple overlapping fields */

char * __cdecl crt_stdio_c_ParseFormatFlags_FUN_00602edc(char *format,FormatSpec *spec_info)

{
  undefined1 uVar1;
  char cVar2;
  
  *(undefined2 *)&spec_info->flags = 0;
  cVar2 = *format;
  if (cVar2 != '-') goto LAB_00602ef8;
  *(undefined1 *)&spec_info->flags = (char)spec_info->flags | LEFT_ALIGN;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            format = format + 1;
            cVar2 = *format;
            if (cVar2 != '-') break;
            *(undefined1 *)&spec_info->flags = (char)spec_info->flags | LEFT_ALIGN;
          }
LAB_00602ef8:
          if (cVar2 != '#') break;
          *(undefined1 *)&spec_info->flags = (char)spec_info->flags | ALTERNATE_FORM;
        }
        if (cVar2 != '+') break;
        uVar1 = (undefined1)spec_info->flags;
        *(undefined1 *)&spec_info->flags = uVar1 | FORCE_SIGN;
        *(undefined1 *)&spec_info->flags =
             uVar1 & (FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|
                     ALTERNATE_FORM) | FORCE_SIGN;
      }
      if (cVar2 != ' ') break;
      uVar1 = (undefined1)spec_info->flags;
      if ((uVar1 & FORCE_SIGN) == 0) {
        *(undefined1 *)&spec_info->flags = uVar1 | SPACE_SIGN;
      }
    }
    if (cVar2 != '0') break;
    spec_info->zerofill = '0';
  }
  return format;
}


// Assembly code:
// 00602edc: PUSH EBX
//   Label: crt_stdio.c_ParseFormatFlags_FUN_00602edc
// 00602edd: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00602ee1: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00602ee5: MOV word ptr [EAX + 0x1e],0x0
// 00602eeb: MOV BL,byte ptr [EDX]
// 00602eed: CMP BL,0x2d
// 00602ef0: JNZ 0x00602ef8
//   XREF to: 00602ef8 (CONDITIONAL_JUMP)
// 00602ef2: OR byte ptr [EAX + 0x1e],0x8
// 00602ef6: JMP 0x00602f3a
//   XREF to: 00602f3a (UNCONDITIONAL_JUMP)
// 00602ef8: CMP BL,0x23
//   Label: LAB_00602ef8
// 00602efb: JNZ 0x00602f03
//   XREF to: 00602f03 (CONDITIONAL_JUMP)
// 00602efd: OR byte ptr [EAX + 0x1e],0x1
// 00602f01: JMP 0x00602f3a
//   XREF to: 00602f3a (UNCONDITIONAL_JUMP)
// 00602f03: CMP BL,0x2b
//   Label: LAB_00602f03
// 00602f06: JNZ 0x00602f1b
//   XREF to: 00602f1b (CONDITIONAL_JUMP)
// 00602f08: MOV CH,byte ptr [EAX + 0x1e]
// 00602f0b: OR CH,0x4
// 00602f0e: MOV BL,CH
// 00602f10: MOV byte ptr [EAX + 0x1e],CH
// 00602f13: AND BL,0xfd
// 00602f16: MOV byte ptr [EAX + 0x1e],BL
// 00602f19: JMP 0x00602f3a
//   XREF to: 00602f3a (UNCONDITIONAL_JUMP)
// 00602f1b: CMP BL,0x20
//   Label: LAB_00602f1b
// 00602f1e: JNZ 0x00602f32
//   XREF to: 00602f32 (CONDITIONAL_JUMP)
// 00602f20: MOV BH,byte ptr [EAX + 0x1e]
// 00602f23: TEST BH,0x4
// 00602f26: JNZ 0x00602f3a
//   XREF to: 00602f3a (CONDITIONAL_JUMP)
// 00602f28: MOV CL,BH
// 00602f2a: OR CL,0x2
// 00602f2d: MOV byte ptr [EAX + 0x1e],CL
// 00602f30: JMP 0x00602f3a
//   XREF to: 00602f3a (UNCONDITIONAL_JUMP)
// 00602f32: CMP BL,0x30
//   Label: LAB_00602f32
// 00602f35: JNZ 0x00602f48
//   XREF to: 00602f48 (CONDITIONAL_JUMP)
// 00602f37: MOV byte ptr [EAX + 0x16],BL
// 00602f3a: INC EDX
//   Label: LAB_00602f3a
// 00602f3b: MOV BL,byte ptr [EDX]
// 00602f3d: CMP BL,0x2d
// 00602f40: JNZ 0x00602ef8
//   XREF to: 00602ef8 (CONDITIONAL_JUMP)
// 00602f42: OR byte ptr [EAX + 0x1e],0x8
// 00602f46: JMP 0x00602f3a
//   XREF to: 00602f3a (UNCONDITIONAL_JUMP)
// 00602f48: MOV EAX,EDX
//   Label: LAB_00602f48
// 00602f4a: POP EBX
// 00602f4b: RET
