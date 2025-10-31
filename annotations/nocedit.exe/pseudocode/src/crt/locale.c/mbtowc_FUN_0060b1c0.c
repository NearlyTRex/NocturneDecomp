// Name: crt_locale.c_mbtowc_FUN_0060b1c0
// Address: 0060b1c0
// Address Range: [[0060b1c0, 0060b26b]]
// Convention: __watcallStack
// Signature: int crt_locale.c_mbtowc_FUN_0060b1c0(wchar_t * wide_char, char * mb_string, SIZE_T max_bytes)
// Cross-references:
//   crt_stdio.c_scanf_char_FUN_00604d54 (00604d54) at 00604e13 [UNCONDITIONAL_CALL]
//   crt_stdio.c_scanf_string_FUN_00604e4c (00604e4c) at 00604f3a [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fac0 (0060fac0) at 0060fae3 [UNCONDITIONAL_CALL]
// Globals:
//   MultiByteToWideChar* PTR_MultiByteToWideChar_006115f4 = 00212092
//   uint g_CodePage = 0x1
//   int g_MultibyteLocaleActive
//   char[256] g_LeadByteTable
// Function calls:
//   crt_locale.c_mblen_FUN_00605a40
//   MultiByteToWideChar

#include "nocturne.h"

int __watcallStack
crt_locale_c_mbtowc_FUN_0060b1c0(wchar_t *wide_char,char *mb_string,SIZE_T max_bytes)

{
  int iVar1;
  uint uVar2;
  uint cbMultiByte;
  BADSPACEBASE *in_ESP;
  wchar_t wVar3;
  
  if (mb_string == (char *)0x0) {
    iVar1 = 0;
  }
  else {
    if (max_bytes != 0) {
      if (*mb_string == '\0') {
        if (wide_char != (wchar_t *)0x0) {
          *wide_char = L'\0';
        }
        return 0;
      }
      if (((g_MultibyteLocaleActive == 0) || ((g_LeadByteTable[(byte)*mb_string] & 1U) == 0)) ||
         (mb_string[1] != '\0')) {
        uVar2 = crt_locale_c_mblen_FUN_00605a40(mb_string);
        wVar3 = L'\x01';
        cbMultiByte = uVar2;
        if (max_bytes < uVar2) {
          cbMultiByte = max_bytes;
        }
        iVar1 = (*PTR_MultiByteToWideChar_006115f4)
                          (g_CodePage,8,mb_string,cbMultiByte,(LPWSTR)&stack0xffffffec,1);
        if (iVar1 != 0) {
          if (wide_char != (wchar_t *)0x0) {
            *wide_char = wVar3;
          }
          return uVar2;
        }
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}


// Assembly code:
// 0060b1c0: PUSH EBX
//   Label: crt_locale.c_mbtowc_FUN_0060b1c0
// 0060b1c1: PUSH ESI
// 0060b1c2: PUSH EDI
// 0060b1c3: PUSH EBP
// 0060b1c4: MOV EBP,ESP
// 0060b1c6: SUB ESP,0x4
// 0060b1c9: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0060b1cc: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060b1cf: TEST EBX,EBX
// 0060b1d1: JNZ 0x0060b1da
//   XREF to: 0060b1da (CONDITIONAL_JUMP)
// 0060b1d3: XOR EAX,EAX
// 0060b1d5: JMP 0x0060b265
//   XREF to: 0060b265 (UNCONDITIONAL_JUMP)
// 0060b1da: CMP dword ptr [EBP + 0x1c],0x0
//   Label: LAB_0060b1da
//   XREF to: Stack[0xc] (READ)
// 0060b1de: JBE 0x0060b260
//   XREF to: 0060b260 (CONDITIONAL_JUMP)
// 0060b1e4: CMP byte ptr [EBX],0x0
// 0060b1e7: JNZ 0x0060b1fb
//   XREF to: 0060b1fb (CONDITIONAL_JUMP)
// 0060b1e9: TEST ESI,ESI
// 0060b1eb: JZ 0x0060b1f2
//   XREF to: 0060b1f2 (CONDITIONAL_JUMP)
// 0060b1ed: MOV word ptr [ESI],0x0
// 0060b1f2: XOR EAX,EAX
//   Label: LAB_0060b1f2
// 0060b1f4: MOV ESP,EBP
// 0060b1f6: POP EBP
// 0060b1f7: POP EDI
// 0060b1f8: POP ESI
// 0060b1f9: POP EBX
// 0060b1fa: RET
// 0060b1fb: CMP dword ptr [0x03f9c020],0x0
//   Label: LAB_0060b1fb
//   XREF to: 03f9c020 (READ)
// 0060b202: JZ 0x0060b21d
//   XREF to: 0060b21d (CONDITIONAL_JUMP)
// 0060b204: XOR EAX,EAX
// 0060b206: MOV AL,byte ptr [EBX]
// 0060b208: MOV AL,byte ptr [EAX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 0060b20e: AND AL,0x1
// 0060b210: AND EAX,0xff
// 0060b215: JZ 0x0060b21d
//   XREF to: 0060b21d (CONDITIONAL_JUMP)
// 0060b217: CMP byte ptr [EBX + 0x1],0x0
// 0060b21b: JZ 0x0060b260
//   XREF to: 0060b260 (CONDITIONAL_JUMP)
// 0060b21d: PUSH EBX
//   Label: LAB_0060b21d
// 0060b21e: CALL crt_locale.c_mblen_FUN_00605a40
//   XREF to: 00605a40 (UNCONDITIONAL_CALL)
// 0060b223: ADD ESP,0x4
// 0060b226: PUSH 0x1
// 0060b228: LEA EDX,[EBP + -0x4]
//   XREF to: Stack[-0x14] (DATA)
// 0060b22b: PUSH EDX
// 0060b22c: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0060b22f: MOV EDI,EAX
// 0060b231: CMP EAX,EDX
// 0060b233: JBE 0x0060b237
//   XREF to: 0060b237 (CONDITIONAL_JUMP)
// 0060b235: MOV EAX,EDX
// 0060b237: PUSH EAX
//   Label: LAB_0060b237
// 0060b238: PUSH EBX
// 0060b239: PUSH 0x8
// 0060b23b: MOV EBX,dword ptr [0x00685570]
//   XREF to: 00685570 (READ)
// 0060b241: PUSH EBX
// 0060b242: CALL dword ptr CS:[0x6115f4]
//   XREF to: EXTERNAL:00000088 (COMPUTED_CALL)
//   XREF to: 006115f4 (READ)
// 0060b249: TEST EAX,EAX
// 0060b24b: JZ 0x0060b260
//   XREF to: 0060b260 (CONDITIONAL_JUMP)
// 0060b24d: TEST ESI,ESI
// 0060b24f: JZ 0x0060b257
//   XREF to: 0060b257 (CONDITIONAL_JUMP)
// 0060b251: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0060b254: MOV word ptr [ESI],AX
// 0060b257: MOV EAX,EDI
//   Label: LAB_0060b257
// 0060b259: MOV ESP,EBP
// 0060b25b: POP EBP
// 0060b25c: POP EDI
// 0060b25d: POP ESI
// 0060b25e: POP EBX
// 0060b25f: RET
// 0060b260: MOV EAX,0xffffffff
//   Label: LAB_0060b260
// 0060b265: MOV ESP,EBP
//   Label: LAB_0060b265
// 0060b267: POP EBP
// 0060b268: POP EDI
// 0060b269: POP ESI
// 0060b26a: POP EBX
// 0060b26b: RET
