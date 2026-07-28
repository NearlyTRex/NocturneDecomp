// Name: crt_stdio.c_WideCharToSingleByte_FUN_0056f3a0
// Address: 0056f3a0
// Address Range: [[0056f3a0, 0056f3d4]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_WideCharToSingleByte_FUN_0056f3a0(wchar_t wide_char,char *output_buffer)

#include "nocturne.h"

int __cdecl WideCharToSingleByte(wchar_t wide_char,char *output_buffer)

{
  int iVar1;
  ushort in_stack_00000006;
  
  if (_wide_char == (LPSTR)0x0) {
    return 0;
  }
  iVar1 = WideCharToMultiByte(DAT_005c2144,0x200,(LPCWSTR)&output_buffer,1,_wide_char,2,(LPCSTR)0x0,
                              (LPBOOL)0x0);
  if (iVar1 != 0) {
    return iVar1;
  }
  return -1;
}
