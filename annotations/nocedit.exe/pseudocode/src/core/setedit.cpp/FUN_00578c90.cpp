// Name: core_setedit.cpp_FUN_00578c90
// Address: 00578c90
// Address Range: [[00578c90, 00578d71]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00578c90()

#include "nocturne.h"

/* Signature: byte core_setedit.cpp_FUN_00578c90(uint param_1, uint param_2,
   uint param_3) */

uint core_setedit_cpp_FUN_00578c90(void)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000014;
  char acStack_2bc [384];
  char local_13c [4];
  char acStack_138 [8];
  byte auStack_130 [288];
  
  if (in_stack_0000000c == 0) {
    bVar1 = 0x4e;
  }
  else {
    bVar1 = 0x59;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(local_13c,"%s? [%c] ",in_stack_00000008,(uint)bVar1);
  engine_2d_c_drawText_FUN_00401fd0(acStack_138,0,in_stack_00000008);
  while( true ) {
    uVar2 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    if (uVar2 == 0x1b) {
      pcVar3 = "ESC";
      uVar4 = 0xffffffff;
      goto LAB_00578d14;
    }
    if (uVar2 == 0xd) {
      uVar2 = (uint)bVar1;
    }
    if (uVar2 == 0x59) break;
    if (uVar2 == 0x4e) {
      pcVar3 = "N";
      uVar4 = 0;
LAB_00578d14:
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffd40,"%s %s",auStack_130,pcVar3);
      engine_2d_c_drawText_FUN_00401fd0(acStack_2bc,0,in_stack_00000014);
      return uVar4;
    }
  }
  pcVar3 = "Y";
  uVar4 = 1;
  goto LAB_00578d14;
}
