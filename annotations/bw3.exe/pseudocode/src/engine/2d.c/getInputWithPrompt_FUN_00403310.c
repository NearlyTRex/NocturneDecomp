// Name: engine_2d.c_getInputWithPrompt_FUN_00403310
// Address: 00403310
// Address Range: [[00403310, 004033e6]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_getInputWithPrompt_FUN_00403310(char *buffer,int max_length,int x,int y,char *prompt)

#include "nocturne.h"

int __cdecl engine_2d_c_getInputWithPrompt_FUN_00403310(char *buffer,int max_length,int x,int y,char *prompt)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  char acStack_114 [256];
  uint uStack_14;
  
  *buffer = '\0';
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  iVar3 = 0;
  do {
    _sprintf(acStack_114,"%s%s_    ");
    engine_2d_c_drawText_FUN_00401fe0(acStack_114,x,y);
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_00580790();
    uStack_14 = uVar2 & 0xff;
    if (uStack_14 == 0xd) {
LAB_004033cb:
      wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      return uStack_14;
    }
    if (uStack_14 == 0x1b) {
      *buffer = '\0';
      goto LAB_004033cb;
    }
    if ((uStack_14 == 8) && (0 < iVar3)) {
      iVar3 = iVar3 + -1;
      buffer[iVar3] = '\0';
    }
    if (((0x1f < uStack_14) && (uStack_14 < 0x80)) && (iVar3 < max_length)) {
      pcVar1 = buffer + iVar3;
      uStack_14._0_1_ = (char)uVar2;
      iVar3 = iVar3 + 1;
      *pcVar1 = (char)uStack_14;
      buffer[iVar3] = '\0';
    }
  } while( true );
}
