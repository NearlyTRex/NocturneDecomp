// Name: crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
// Address: 0060acf0
// Address Range: [[0060acf0, 0060ad24]]
// Convention: __cdecl
// Signature: int crt_stdio.c_WideCharToSingleByte_FUN_0060acf0(wchar_t wide_char, char * output_buffer)

#include "nocturne.h"

int __cdecl crt_stdio_c_WideCharToSingleByte_FUN_0060acf0(wchar_t wide_char,char *output_buffer)

{
  int iVar1;
  ushort in_stack_00000006;
  
  if (_wide_char == (LPSTR)0x0) {
    return 0;
  }
  iVar1 = (*g_WideCharToMultiByteFunc)
                    (g_CodePage,0x200,(LPCWSTR)&output_buffer,1,_wide_char,2,(LPCSTR)0x0,(LPBOOL)0x0
                    );
  if (iVar1 != 0) {
    return iVar1;
  }
  return -1;
}
