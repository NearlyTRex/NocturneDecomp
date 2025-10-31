// Name: crt_string.c_parse_uint_FUN_00607318
// Address: 00607318
// Address Range: [[00607318, 00607346]]
// Convention: __cdecl
// Signature: char * crt_string.c_parse_uint_FUN_00607318(char * str, int * result)
// Cross-references:
//   crt_time.c_parse_dst_rule_FUN_00607464 (00607464) at 006074e1 [UNCONDITIONAL_CALL]
//   crt_time.c_parse_timezone_spec_FUN_00607348 (00607348) at 00607406 [UNCONDITIONAL_CALL]

#include "nocturne.h"

char * __cdecl crt_string_c_parse_uint_FUN_00607318(char *str,int *result)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  bVar1 = *str;
  iVar3 = 0;
  while ((0x2f < bVar1 && ((byte)*str < 0x3a))) {
    bVar2 = *str;
    str = (char *)((byte *)str + 1);
    bVar1 = *str;
    iVar3 = iVar3 * 10 + (uint)bVar2 + -0x30;
  }
  *result = iVar3;
  return str;
}


// Assembly code:
// 00607318: PUSH EBX
//   Label: crt_string.c_parse_uint_FUN_00607318
// 00607319: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060731d: MOV BL,byte ptr [EAX]
// 0060731f: XOR EDX,EDX
// 00607321: CMP BL,0x30
// 00607324: JC 0x0060733f
//   XREF to: 0060733f (CONDITIONAL_JUMP)
// 00607326: CMP byte ptr [EAX],0x39
//   Label: LAB_00607326
// 00607329: JA 0x0060733f
//   XREF to: 0060733f (CONDITIONAL_JUMP)
// 0060732b: IMUL EDX,EDX,0xa
// 0060732e: XOR EBX,EBX
// 00607330: MOV BL,byte ptr [EAX]
// 00607332: INC EAX
// 00607333: ADD EDX,EBX
// 00607335: MOV BH,byte ptr [EAX]
// 00607337: SUB EDX,0x30
// 0060733a: CMP BH,0x30
// 0060733d: JNC 0x00607326
//   XREF to: 00607326 (CONDITIONAL_JUMP)
// 0060733f: MOV EBX,dword ptr [ESP + 0xc]
//   Label: LAB_0060733f
//   XREF to: Stack[0x8] (READ)
// 00607343: MOV dword ptr [EBX],EDX
// 00607345: POP EBX
// 00607346: RET
