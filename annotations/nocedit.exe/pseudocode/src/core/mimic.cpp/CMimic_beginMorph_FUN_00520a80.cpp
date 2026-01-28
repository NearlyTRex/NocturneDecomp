// Name: core_mimic.cpp_CMimic_beginMorph_FUN_00520a80
// Address: 00520a80
// Address Range: [[00520a80, 00520b93]]
// Convention: unknown
// Signature: void core_mimic_cpp_CMimic_beginMorph_FUN_00520a80(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_mimic.cpp_CMimic_beginMorph(uint param_1) */

void core_mimic_cpp_CMimic_beginMorph_FUN_00520a80(void)

{
  int iVar1;
  CConsole *this_ptr;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x4ca54) == 0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 0x499;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic::beginMorph() - can't do this unless morphActor has been created!");
  }
  *(uint *)(*(int *)(in_stack_00000004 + 0x4ca54) + 0x108) =
       *(uint *)(in_stack_00000004 + 0x108);
  *(uint *)(*(int *)(in_stack_00000004 + 0x4ca54) + 0x10c) =
       *(uint *)(in_stack_00000004 + 0x10c);
  *(uint *)(*(int *)(in_stack_00000004 + 0x4ca54) + 0x110) =
       *(uint *)(in_stack_00000004 + 0x110);
  *(uint *)(*(int *)(in_stack_00000004 + 0x4ca54) + 0xbeac) = 1;
  iVar1 = *(int *)(in_stack_00000004 + 0x4ca54);
  *(uint *)(iVar1 + 0x20) = *(uint *)(in_stack_00000004 + 0x20);
  *(uint *)(iVar1 + 0x24) = *(uint *)(in_stack_00000004 + 0x24);
  *(uint *)(iVar1 + 0x28) = *(uint *)(in_stack_00000004 + 0x28);
  *(uint *)(iVar1 + 0x2c) = *(uint *)(in_stack_00000004 + 0x2c);
  iVar1 = *(int *)(in_stack_00000004 + 0x4ca54);
  if ((uint *)(iVar1 + 0x30) != (uint *)(in_stack_00000004 + 0x30)) {
    *(uint *)(iVar1 + 0x30) = *(uint *)(in_stack_00000004 + 0x30);
    *(uint *)(iVar1 + 0x34) = *(uint *)(in_stack_00000004 + 0x34);
    *(uint *)(iVar1 + 0x38) = *(uint *)(in_stack_00000004 + 0x38);
  }
  *(uint *)(in_stack_00000004 + 0x4ca50) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),0,1);
  core_mimic_cpp_CMimic_processMorph_FUN_00520ba0();
  this_ptr = g_CConsolePtr;
  *(uint *)(in_stack_00000004 + 0xfc) = 1;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (this_ptr,"%s morphing into type %s\n",in_stack_00000004,
             in_stack_00000004 + 0x4bdfc);
  return;
}
