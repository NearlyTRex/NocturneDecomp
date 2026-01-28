// Name: engine_2d.c_getInputWithPrompt_FUN_004032c0
// Address: 004032c0
// Address Range: [[004032c0, 00403396]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_getInputWithPrompt_FUN_004032c0(char *buffer,int max_length,int x,int y,char *prompt)

#include "nocturne.h"

int __cdecl
engine_2d_c_getInputWithPrompt_FUN_004032c0(char *buffer,int max_length,int x,int y,char *prompt)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  char local_114 [256];
  uint local_14;
  
  *buffer = '\0';
  engine_2d_c_clearInputAndWait_FUN_00403260();
  iVar3 = 0;
  do {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_114,"%s%s_    ",prompt,buffer);
    engine_2d_c_drawText_FUN_00401fd0(local_114,x,y);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    local_14 = uVar2 & 0xff;
    if (local_14 == 0xd) {
LAB_0040337b:
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return local_14;
    }
    if (local_14 == 0x1b) {
      *buffer = '\0';
      goto LAB_0040337b;
    }
    if ((local_14 == 8) && (0 < iVar3)) {
      iVar3 = iVar3 + -1;
      buffer[iVar3] = '\0';
    }
    if (((0x1f < local_14) && (local_14 < 0x80)) && (iVar3 < max_length)) {
      pcVar1 = buffer + iVar3;
      local_14._0_1_ = (char)uVar2;
      iVar3 = iVar3 + 1;
      *pcVar1 = (char)local_14;
      buffer[iVar3] = '\0';
    }
  } while( true );
}
