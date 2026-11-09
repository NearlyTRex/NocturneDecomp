// Name: core_mimic.cpp_CMimic_beginMorph_FUN_004f1d70
// Address: 004f1d70
// Address Range: [[004f1d70, 004f1e83]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_004f1d70(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_004f1d70(CMimic *this_ptr)

{
  int iVar1;
  CConsole *pCVar2;
  
  if (*(int *)&this_ptr->field_0x4c350 == 0) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0x499;
    core_main_c_FUN_004e4500("CMimic::beginMorph() - can't do this unless morphActor has been created!");
  }
  *(uint *)(*(int *)&this_ptr->field_0x4c350 + 0x108) = *(uint *)&this_ptr->field_0x108;
  *(uint *)(*(int *)&this_ptr->field_0x4c350 + 0x10c) = *(uint *)&this_ptr->field_0x10c;
  *(uint *)(*(int *)&this_ptr->field_0x4c350 + 0x110) = *(uint *)&this_ptr->field_0x110;
  *(uint *)(*(int *)&this_ptr->field_0x4c350 + 0x10ae8) = 1;
  iVar1 = *(int *)&this_ptr->field_0x4c350;
  *(uint *)(iVar1 + 0x20) = *(uint *)&this_ptr->field_0x20;
  *(uint *)(iVar1 + 0x24) = *(uint *)&this_ptr->field_0x24;
  *(uint *)(iVar1 + 0x28) = *(uint *)&this_ptr->field_0x28;
  *(uint *)(iVar1 + 0x2c) = *(uint *)&this_ptr->field_0x2c;
  iVar1 = *(int *)&this_ptr->field_0x4c350;
  if ((uint *)(iVar1 + 0x30) != (uint *)&this_ptr->field_0x30) {
    *(uint *)(iVar1 + 0x30) = *(uint *)&this_ptr->field_0x30;
    *(uint *)(iVar1 + 0x34) = *(uint *)&this_ptr->field_0x34;
    *(uint *)(iVar1 + 0x38) = *(uint *)&this_ptr->field_0x38;
  }
  *(uint *)&this_ptr->field_0x4c34c = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,0,1);
  core_mimic_cpp_CMimic_processMorph_FUN_004f1e90(this_ptr,0.0);
  pCVar2 = g_CConsolePtr;
  *(uint *)&this_ptr->field_0xfc = 1;
  engine_console_cpp_FUN_00436710
            (pCVar2,"%s morphing into type %s\n",this_ptr,&this_ptr->field_0x4b6f8);
  return;
}
