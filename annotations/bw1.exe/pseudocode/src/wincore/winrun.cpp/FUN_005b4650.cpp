// Name: wincore_winrun.cpp_FUN_005b4650
// Address: 005b4650
// Address Range: [[005b4650, 005b47cb]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_005b4650(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void wincore_winrun_cpp_FUN_005b4650(void)

{
  int iVar1;
  int *value_ptr;
  int iVar2;
  CIniFile *in_stack_00000004;
  char acStack_124 [256];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  
  iVar2 = 0;
  iStack_1c = 0x2c9d1d4;
  do {
    iStack_24 = 0;
    _sprintf(acStack_124,"Controller_%d_type");
    engine_ini_cpp_CIniFile_getInteger_FUN_004f4d10(in_stack_00000004,acStack_124,&iStack_24);
    iStack_20 = iVar2;
    _sprintf(acStack_124,"Controller_%d_pc_port");
    engine_ini_cpp_CIniFile_getInteger_FUN_004f4d10(in_stack_00000004,acStack_124,&iStack_20);
    wincore_winrun_cpp_FUN_005b41c0(iVar2,iStack_24,iStack_20);
    iVar1 = 0;
    iStack_18 = iStack_1c;
    piStack_14 = (int *)(iStack_1c + 8);
    value_ptr = (int *)(iStack_1c + 4);
    do {
      _sprintf(acStack_124,"Controller_%d_axis_%d_min");
      engine_ini_cpp_CIniFile_getInteger_FUN_004f4d10
                (in_stack_00000004,acStack_124,(int *)(iVar1 * 0xc + iStack_18));
      _sprintf(acStack_124,"Controller_%d_axis_%d_max");
      engine_ini_cpp_CIniFile_getInteger_FUN_004f4d10(in_stack_00000004,acStack_124,value_ptr);
      _sprintf(acStack_124,"Controller_%d_axis_%d_center");
      engine_ini_cpp_CIniFile_getInteger_FUN_004f4d10(in_stack_00000004,acStack_124,piStack_14);
      value_ptr = value_ptr + 3;
      piStack_14 = piStack_14 + 3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iStack_1c = iStack_1c + 0x30;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}
