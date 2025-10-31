// Name: crt_stdio.c_FormatWideString_FUN_006031c0
// Address: 006031c0
// Address Range: [[006031c0, 00603235]]
// Convention: __cdecl
// Signature: void crt_stdio.c_FormatWideString_FUN_006031c0(wchar_t * wide_string_offset, ushort segment, FormatSpec * spec_info, OUTPUT_CALLBACK output_func)
// Cross-references:
//   crt_stdio.c_FormatEngine_FUN_00602950 (00602950) at 00602c62 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_WideCharToSingleByte_FUN_0060acf0

#include "nocturne.h"

/* WARNING: Struct "FormatSpec": ignoring multiple overlapping fields */

void __cdecl
crt_stdio_c_FormatWideString_FUN_006031c0
          (wchar_t *wide_string_offset,ushort segment,FormatSpec *spec_info,
          OUTPUT_CALLBACK output_func)

{
  wchar_t wVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  byte *pbVar3;
  code *in_stack_00000014;
  
  iVar2 = spec_info->content_length;
  do {
    if (iVar2 < 1) {
      return;
    }
    wVar1 = *wide_string_offset;
    wide_string_offset = wide_string_offset + 1;
    iVar2 = crt_stdio_c_WideCharToSingleByte_FUN_0060acf0
                      ((wchar_t)&stack0xffffffe8,(char *)(uint)(ushort)wVar1);
    pbVar3 = &stack0xffffffec;
    if (iVar2 != -1) {
      if (spec_info->content_length < iVar2) {
        spec_info->content_length = 0;
        return;
      }
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        (*in_stack_00000014)(spec_info,(uint)*pbVar3);
        pbVar3 = pbVar3 + 1;
        spec_info->content_length = spec_info->content_length + -1;
      }
    }
    iVar2 = spec_info->content_length;
  } while( true );
}


// Assembly code:
// 006031c0: PUSH EBX
//   Label: crt_stdio.c_FormatWideString_FUN_006031c0
// 006031c1: PUSH ESI
// 006031c2: PUSH EDI
// 006031c3: PUSH ES
// 006031c4: PUSH EBP
// 006031c5: SUB ESP,0x4
// 006031c8: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 006031cc: MOV ES,word ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 006031d0: MOV EDX,dword ptr [EBX + 0x28]
// 006031d3: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 006031d7: TEST EDX,EDX
// 006031d9: JLE 0x0060322d
//   XREF to: 0060322d (CONDITIONAL_JUMP)
// 006031db: XOR EAX,EAX
//   Label: LAB_006031db
// 006031dd: MOV AX,word ptr ES:[EBP]
// 006031e2: PUSH EAX
// 006031e3: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 006031e7: PUSH EAX
// 006031e8: ADD EBP,0x2
// 006031eb: CALL crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
//   XREF to: 0060acf0 (UNCONDITIONAL_CALL)
// 006031f0: ADD ESP,0x8
// 006031f3: MOV ESI,EAX
// 006031f5: CMP EAX,-0x1
// 006031f8: JZ 0x00603207
//   XREF to: 00603207 (CONDITIONAL_JUMP)
// 006031fa: CMP EAX,dword ptr [EBX + 0x28]
// 006031fd: JG 0x00603226
//   XREF to: 00603226 (CONDITIONAL_JUMP)
// 006031ff: MOV EDI,ESP
// 00603201: DEC ESI
//   Label: LAB_00603201
// 00603202: CMP ESI,-0x1
// 00603205: JNZ 0x0060320f
//   XREF to: 0060320f (CONDITIONAL_JUMP)
// 00603207: CMP dword ptr [EBX + 0x28],0x0
//   Label: LAB_00603207
// 0060320b: JG 0x006031db
//   XREF to: 006031db (CONDITIONAL_JUMP)
// 0060320d: JMP 0x0060322d
//   XREF to: 0060322d (UNCONDITIONAL_JUMP)
// 0060320f: XOR EAX,EAX
//   Label: LAB_0060320f
// 00603211: MOV AL,byte ptr [EDI]
//   XREF to: Stack[-0x18] (DATA)
// 00603213: PUSH EAX
// 00603214: PUSH EBX
// 00603215: CALL dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 00603219: MOV EAX,dword ptr [EBX + 0x28]
// 0060321c: INC EDI
// 0060321d: DEC EAX
// 0060321e: ADD ESP,0x8
// 00603221: MOV dword ptr [EBX + 0x28],EAX
// 00603224: JMP 0x00603201
//   XREF to: 00603201 (UNCONDITIONAL_JUMP)
// 00603226: MOV dword ptr [EBX + 0x28],0x0
//   Label: LAB_00603226
// 0060322d: ADD ESP,0x4
//   Label: LAB_0060322d
// 00603230: POP EBP
// 00603231: POP ES
// 00603232: POP EDI
// 00603233: POP ESI
// 00603234: POP EBX
// 00603235: RET
