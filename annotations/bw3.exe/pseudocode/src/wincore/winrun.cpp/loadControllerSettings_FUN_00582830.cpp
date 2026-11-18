// Name: wincore_winrun.cpp_loadControllerSettings_FUN_00582830
// Address: 00582830
// Address Range: [[00582830, 005829ab]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_loadControllerSettings_FUN_00582830(CIniFile *ini)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_loadControllerSettings_FUN_00582830(CIniFile *ini)

{
  int *value_ptr;
  int iVar1;
  int unaff_EBP;
  int *value_ptr_00;
  uint controller_index;
  int iStack_24;
  uint auStack_20 [4];
  
  controller_index = 0;
  auStack_20[1] = 0x2d22ee4;
  do {
    iStack_24 = 0;
    _sprintf(&stack0xfffffedc,"Controller_%d_type");
    engine_ini_cpp_CIniFile_getInteger_FUN_004d8c30(ini,&stack0xfffffedc,&iStack_24);
    auStack_20[0] = controller_index;
    _sprintf(&stack0xfffffedc,"Controller_%d_pc_port");
    engine_ini_cpp_CIniFile_getInteger_FUN_004d8c30(ini,&stack0xfffffedc,(int *)auStack_20);
    wincore_winrun_cpp_initController_FUN_005823a0(controller_index,iStack_24,auStack_20[0]);
    iVar1 = 0;
    value_ptr = (int *)(unaff_EBP + 8);
    value_ptr_00 = (int *)(unaff_EBP + 4);
    do {
      _sprintf(&stack0xfffffedc,"Controller_%d_axis_%d_min");
      engine_ini_cpp_CIniFile_getInteger_FUN_004d8c30
                (ini,&stack0xfffffedc,(int *)(iVar1 * 0xc + unaff_EBP));
      _sprintf(&stack0xfffffedc,"Controller_%d_axis_%d_max");
      engine_ini_cpp_CIniFile_getInteger_FUN_004d8c30(ini,&stack0xfffffedc,value_ptr_00);
      _sprintf(&stack0xfffffedc,"Controller_%d_axis_%d_center");
      engine_ini_cpp_CIniFile_getInteger_FUN_004d8c30(ini,&stack0xfffffedc,value_ptr);
      value_ptr_00 = value_ptr_00 + 3;
      value_ptr = value_ptr + 3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    unaff_EBP = unaff_EBP + 0x30;
    controller_index = controller_index + 1;
  } while ((int)controller_index < 4);
  return;
}
