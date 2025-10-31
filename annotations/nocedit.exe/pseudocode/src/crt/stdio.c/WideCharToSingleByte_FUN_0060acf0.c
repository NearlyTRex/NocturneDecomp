// Name: crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
// Address: 0060acf0
// Address Range: [[0060acf0, 0060ad24]]
// Convention: __cdecl
// Signature: int crt_stdio.c_WideCharToSingleByte_FUN_0060acf0(wchar_t wide_char, char * output_buffer)
// Cross-references:
//   crt_stdio.c_ConvertFormatSpec_FUN_00603238 (00603238) at 00603843 [UNCONDITIONAL_CALL]
//   crt_stdio.c_FormatWideString_FUN_006031c0 (006031c0) at 006031eb [UNCONDITIONAL_CALL]
//   crt_stdio.c_WideStringToMultiByteLen_FUN_00602f7c (00602f7c) at 00602fa9 [UNCONDITIONAL_CALL]
//   crt_string.c_wcstombs_FUN_0060c0c0 (0060c0c0) at 0060c163 [UNCONDITIONAL_CALL]
// Globals:
//   WideCharToMultiByte* PTR_WideCharToMultiByte_00611670 = 002122da
//   uint g_CodePage = 0x1
// Function calls:
//   WideCharToMultiByte

#include "nocturne.h"

int __cdecl crt_stdio_c_WideCharToSingleByte_FUN_0060acf0(wchar_t wide_char,char *output_buffer)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined2 in_stack_00000006;
  
  if (_wide_char == (LPSTR)0x0) {
    return (int)_wide_char;
  }
  iVar1 = (*PTR_WideCharToMultiByte_00611670)
                    (g_CodePage,0x200,(LPCWSTR)&output_buffer,1,_wide_char,2,(LPCSTR)0x0,(LPBOOL)0x0
                    );
  if (iVar1 != 0) {
    return iVar1;
  }
  return -1;
}


// Assembly code:
// 0060acf0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
//   XREF to: Stack[0x4] (READ)
// 0060acf4: TEST EAX,EAX
// 0060acf6: JNZ 0x0060acf9
//   XREF to: 0060acf9 (CONDITIONAL_JUMP)
// 0060acf8: RET
// 0060acf9: PUSH 0x0
//   Label: LAB_0060acf9
// 0060acfb: PUSH 0x0
// 0060acfd: PUSH 0x2
// 0060acff: PUSH EAX
// 0060ad00: PUSH 0x1
// 0060ad02: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[0x8] (DATA)
// 0060ad06: PUSH EAX
// 0060ad07: PUSH 0x200
// 0060ad0c: MOV EDX,dword ptr [0x00685570]
//   XREF to: 00685570 (READ)
// 0060ad12: PUSH EDX
// 0060ad13: CALL dword ptr CS:[0x611670]
//   XREF to: EXTERNAL:000000a7 (COMPUTED_CALL)
//   XREF to: 00611670 (READ)
// 0060ad1a: TEST EAX,EAX
// 0060ad1c: JZ 0x0060ad1f
//   XREF to: 0060ad1f (CONDITIONAL_JUMP)
// 0060ad1e: RET
// 0060ad1f: MOV EAX,0xffffffff
//   Label: LAB_0060ad1f
// 0060ad24: RET
