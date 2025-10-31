// Name: crt_string.c_mbstrnicmp_FUN_00608e50
// Address: 00608e50
// Address Range: [[00608e50, 00608edf]]
// Convention: __cdecl
// Signature: int crt_string.c_mbstrnicmp_FUN_00608e50(char * str1, char * str2, SIZE_T count)
// Cross-references:
//   crt_env.c_getenv_FUN_006013f0 (006013f0) at 0060141f [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_compare_mb_chars_ci_FUN_0060c790
//   crt_string.c_mbstring_termination_check_FUN_0060b630
//   crt_string.c_mbtowc_next_FUN_00605a70

#include "nocturne.h"

int __cdecl crt_string_c_mbstrnicmp_FUN_00608e50(char *str1,char *str2,SIZE_T count)

{
  int iVar1;
  
  if (count != 0) {
    do {
      iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str1);
      if ((iVar1 != 0) ||
         (iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str2), iVar1 != 0)) break;
      iVar1 = crt_string_c_compare_mb_chars_ci_FUN_0060c790(str1,str2);
      if (iVar1 != 0) {
        return iVar1;
      }
      str1 = crt_string_c_mbtowc_next_FUN_00605a70(str1);
      count = count - 1;
      str2 = crt_string_c_mbtowc_next_FUN_00605a70(str2);
    } while (count != 0);
  }
  if ((count != 0) &&
     ((iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str1), iVar1 != 0 ||
      (iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str2), iVar1 != 0)))) {
    return (uint)(byte)*str1 - (uint)(byte)*str2;
  }
  return 0;
}


// Assembly code:
// 00608e50: PUSH EBX
//   Label: crt_string.c_mbstrnicmp_FUN_00608e50
// 00608e51: PUSH ESI
// 00608e52: PUSH EDI
// 00608e53: PUSH EBP
// 00608e54: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00608e58: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00608e5c: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00608e60: XOR EBP,EBP
// 00608e62: TEST EDI,EDI
// 00608e64: JBE 0x00608eab
//   XREF to: 00608eab (CONDITIONAL_JUMP)
// 00608e66: PUSH ESI
//   Label: LAB_00608e66
// 00608e67: CALL crt_string.c_mbstring_termination_check_FUN_0060b630
//   XREF to: 0060b630 (UNCONDITIONAL_CALL)
// 00608e6c: ADD ESP,0x4
// 00608e6f: TEST EAX,EAX
// 00608e71: JNZ 0x00608eab
//   XREF to: 00608eab (CONDITIONAL_JUMP)
// 00608e73: PUSH EBX
// 00608e74: CALL crt_string.c_mbstring_termination_check_FUN_0060b630
//   XREF to: 0060b630 (UNCONDITIONAL_CALL)
// 00608e79: ADD ESP,0x4
// 00608e7c: TEST EAX,EAX
// 00608e7e: JNZ 0x00608eab
//   XREF to: 00608eab (CONDITIONAL_JUMP)
// 00608e80: PUSH EBX
// 00608e81: PUSH ESI
// 00608e82: CALL crt_string.c_compare_mb_chars_ci_FUN_0060c790
//   XREF to: 0060c790 (UNCONDITIONAL_CALL)
// 00608e87: ADD ESP,0x8
// 00608e8a: MOV EBP,EAX
// 00608e8c: TEST EAX,EAX
// 00608e8e: JNZ 0x00608edb
//   XREF to: 00608edb (CONDITIONAL_JUMP)
// 00608e90: PUSH ESI
// 00608e91: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 00608e96: ADD ESP,0x4
// 00608e99: PUSH EBX
// 00608e9a: DEC EDI
// 00608e9b: MOV ESI,EAX
// 00608e9d: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 00608ea2: ADD ESP,0x4
// 00608ea5: MOV EBX,EAX
// 00608ea7: TEST EDI,EDI
// 00608ea9: JA 0x00608e66
//   XREF to: 00608e66 (CONDITIONAL_JUMP)
// 00608eab: TEST EDI,EDI
//   Label: LAB_00608eab
// 00608ead: JBE 0x00608ed9
//   XREF to: 00608ed9 (CONDITIONAL_JUMP)
// 00608eaf: PUSH ESI
// 00608eb0: CALL crt_string.c_mbstring_termination_check_FUN_0060b630
//   XREF to: 0060b630 (UNCONDITIONAL_CALL)
// 00608eb5: ADD ESP,0x4
// 00608eb8: TEST EAX,EAX
// 00608eba: JNZ 0x00608ec9
//   XREF to: 00608ec9 (CONDITIONAL_JUMP)
// 00608ebc: PUSH EBX
// 00608ebd: CALL crt_string.c_mbstring_termination_check_FUN_0060b630
//   XREF to: 0060b630 (UNCONDITIONAL_CALL)
// 00608ec2: ADD ESP,0x4
// 00608ec5: TEST EAX,EAX
// 00608ec7: JZ 0x00608ed9
//   XREF to: 00608ed9 (CONDITIONAL_JUMP)
// 00608ec9: XOR EAX,EAX
//   Label: LAB_00608ec9
// 00608ecb: MOVZX ESI,byte ptr [ESI]
// 00608ece: MOV AL,byte ptr [EBX]
// 00608ed0: SUB ESI,EAX
// 00608ed2: MOV EAX,ESI
// 00608ed4: POP EBP
// 00608ed5: POP EDI
// 00608ed6: POP ESI
// 00608ed7: POP EBX
// 00608ed8: RET
// 00608ed9: MOV EAX,EBP
//   Label: LAB_00608ed9
// 00608edb: POP EBP
//   Label: LAB_00608edb
// 00608edc: POP EDI
// 00608edd: POP ESI
// 00608ede: POP EBX
// 00608edf: RET
