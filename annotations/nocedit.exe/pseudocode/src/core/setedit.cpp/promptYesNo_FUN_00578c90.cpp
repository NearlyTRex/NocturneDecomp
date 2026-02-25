// Name: core_setedit.cpp_promptYesNo_FUN_00578c90
// Address: 00578c90
// Address Range: [[00578c90, 00578d71]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_promptYesNo_FUN_00578c90(int screen_y,char *prompt,int default_yes)

#include "nocturne.h"

int __cdecl core_setedit_cpp_promptYesNo_FUN_00578c90(int screen_y,char *prompt,int default_yes)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char local_2cc [400];
  char local_13c [300];
  
  if (default_yes == 0) {
    bVar1 = 0x4e;
  }
  else {
    bVar1 = 0x59;
  }
  _sprintf(local_13c,"%s? [%c] ",prompt,(uint)bVar1);
  engine_2d_c_drawText_FUN_00401fd0(local_13c,0,screen_y);
  while( true ) {
    uVar2 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    if (uVar2 == 0x1b) {
      pcVar3 = "ESC";
      iVar4 = -1;
      goto LAB_00578d14;
    }
    if (uVar2 == 0xd) {
      uVar2 = (uint)bVar1;
    }
    if (uVar2 == 0x59) break;
    if (uVar2 == 0x4e) {
      pcVar3 = "N";
      iVar4 = 0;
LAB_00578d14:
      _sprintf(local_2cc,"%s %s",local_13c,pcVar3);
      engine_2d_c_drawText_FUN_00401fd0(local_2cc,0,screen_y);
      return iVar4;
    }
  }
  pcVar3 = "Y";
  iVar4 = 1;
  goto LAB_00578d14;
}
