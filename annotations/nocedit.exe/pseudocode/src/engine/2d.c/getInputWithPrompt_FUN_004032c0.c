// Name: engine_2d.c_getInputWithPrompt_FUN_004032c0
// Address: 004032c0
// Address Range: [[004032c0, 00403396]]
// Convention: __cdecl
// Signature: int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, char * prompt)

#include "nocturne.h"

int __cdecl
engine_2d_c_getInputWithPrompt_FUN_004032c0(char *buffer,int max_length,int x,int y,char *prompt)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  uint in_stack_00000018;
  int in_stack_0000001c;
  char acStack_10c [252];
  
  *buffer = '\0';
  engine_2d_c_clearInputAndWait_FUN_00403260();
  iVar4 = 0;
  do {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffef0,"%s%s_    ",in_stack_00000018,buffer);
    engine_2d_c_drawText_FUN_00401fd0(acStack_10c,x,y);
    builtin_strncpy(acStack_10c,"\x183@",4);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    builtin_strncpy(acStack_10c + 4,"\x1d3@",4);
    uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    uVar3 = uVar2 & 0xff;
    if (uVar3 == 0xd) {
LAB_0040337b:
      acStack_10c[8] = -0x80;
      acStack_10c[9] = '3';
      acStack_10c[10] = '@';
      acStack_10c[0xb] = '\0';
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      acStack_10c[0xc] = -0x7b;
      acStack_10c[0xd] = '3';
      acStack_10c[0xe] = '@';
      acStack_10c[0xf] = '\0';
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return max_length;
    }
    if (uVar3 == 0x1b) {
      *buffer = '\0';
      goto LAB_0040337b;
    }
    if ((uVar3 == 8) && (0 < iVar4)) {
      iVar4 = iVar4 + -1;
      buffer[iVar4] = '\0';
    }
    if (((0x1f < uVar3) && (uVar3 < 0x80)) && (iVar4 < in_stack_0000001c)) {
      pcVar1 = buffer + iVar4;
      iVar4 = iVar4 + 1;
      *pcVar1 = (char)uVar2;
      buffer[iVar4] = '\0';
    }
  } while( true );
}
