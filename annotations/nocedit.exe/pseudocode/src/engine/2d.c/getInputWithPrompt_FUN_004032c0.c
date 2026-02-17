// Name: engine_2d.c_getInputWithPrompt_FUN_004032c0
// Address: 004032c0
// Address Range: [[004032c0, 00403396]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_getInputWithPrompt_FUN_004032c0(char *buffer,int max_length,int x,int y,char *prompt)

#include "nocturne.h"

int __cdecl engine_2d_c_getInputWithPrompt_FUN_004032c0(char *buffer,int max_length,int x,int y,char *prompt)

{
  uchar *puVar1;
  uint uVar2;
  _BIT_INTEGER32 _Var3;
  int iVar4;
  char local_114 [256];
  _BIT_INTEGER32 local_14;
  
  *buffer = '\0';
  engine_2d_c_clearInputAndWait_FUN_00403260();
  iVar4 = 0;
  do {
    _sprintf(local_114,"%s%s_    ",prompt,buffer);
    engine_2d_c_drawText_FUN_00401fd0(local_114,x,y);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    _Var3.dword = uVar2 & 0xff;
    local_14.dword = _Var3.dword;
    if (_Var3.dword == 0xd) {
LAB_0040337b:
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return local_14.dword;
    }
    if (_Var3.dword == 0x1b) {
      *buffer = '\0';
      goto LAB_0040337b;
    }
    if ((_Var3.dword == 8) && (0 < iVar4)) {
      iVar4 = iVar4 + -1;
      buffer[iVar4] = '\0';
    }
    if (((0x1f < _Var3.dword) && (_Var3.dword < 0x80)) && (iVar4 < max_length)) {
      puVar1 = (uchar *)(buffer + iVar4);
      local_14.bytes[0] = (uchar)uVar2;
      iVar4 = iVar4 + 1;
      *puVar1 = local_14.bytes[0];
      buffer[iVar4] = '\0';
    }
  } while( true );
}
