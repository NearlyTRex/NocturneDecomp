// Name: core_platfrm.cpp_FUN_0054f060
// Address: 0054f060
// Address Range: [[0054f060, 0054f290]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054f060()

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054f060(uint param_1, uint
   param_2) */

void core_platfrm_cpp_FUN_0054f060(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (in_stack_00000008,"</>","Move platform forward/back on course.");
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  if ((char)in_stack_00000008[0xbc] == '\0') {
    engine_2d_c_drawText_FUN_00401fd0
              ("You are using a manual course for this platform.",g_ClipLeft,*in_stack_00000008);
    iVar2 = g_ClipLeft;
    iVar1 = *in_stack_00000008;
    *in_stack_00000008 = iVar1 + 0x16;
    engine_2d_c_drawText_FUN_00401fd0("For a manual course, you specify the start and end position,",iVar2,iVar1 + 0x16);
    iVar2 = g_ClipLeft;
    iVar1 = *in_stack_00000008;
    *in_stack_00000008 = iVar1 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("and the game will do its best to interpolate smoothly between the two.",iVar2,iVar1 + 0xb);
    iVar2 = g_ClipLeft;
    iVar1 = *in_stack_00000008;
    *in_stack_00000008 = iVar1 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("Manual courses can only be used in very simple situations, like simple",iVar2,iVar1 + 0xb);
    iVar2 = g_ClipLeft;
    iVar1 = *in_stack_00000008;
    *in_stack_00000008 = iVar1 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("translation or rotation.  For finer control of the course, a .PTH file must be used.",iVar2,iVar1 + 0xb);
    iVar2 = g_ClipLeft;
    iVar1 = *in_stack_00000008;
    *in_stack_00000008 = iVar1 + 0x16;
    engine_2d_c_drawText_FUN_00401fd0("In the editor, a green box graphically depicts the start position, and a red box shows",iVar2,iVar1 + 0x16);
    iVar2 = g_ClipLeft;
    iVar1 = *in_stack_00000008;
    *in_stack_00000008 = iVar1 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("the ending position.",iVar2,iVar1 + 0xb);
    iVar2 = g_ClipLeft;
    iVar1 = *in_stack_00000008;
    *in_stack_00000008 = iVar1 + 0x16;
    engine_2d_c_drawText_FUN_00401fd0("To move the start or end positions, you must first select what you want",iVar2,iVar1 + 0x16);
    iVar2 = g_ClipLeft;
    iVar1 = *in_stack_00000008;
    *in_stack_00000008 = iVar1 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("to slew, either by pressing Y, or clicking on the \"Editor slew mode\" property.",iVar2,iVar1 + 0xb);
    *in_stack_00000008 = *in_stack_00000008 + 0x16;
    core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
              (in_stack_00000008,"CTRL+HOME","Slam the start and end position to the current location of the platform");
    iVar2 = g_ClipLeft;
    iVar1 = *in_stack_00000008;
    *in_stack_00000008 = iVar1 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("After creating a platform, the easiest way to get it into place",iVar2,iVar1 + 0xb);
    iVar2 = g_ClipLeft;
    iVar1 = *in_stack_00000008;
    *in_stack_00000008 = iVar1 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("is to switch the slew mode to \"Start\", slew the platform where you want",iVar2,iVar1 + 0xb);
    iVar2 = g_ClipLeft;
    iVar1 = *in_stack_00000008;
    *in_stack_00000008 = iVar1 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("it to start out (not worrying about the end position for now).  Then,",iVar2,iVar1 + 0xb);
    iVar2 = g_ClipLeft;
    iVar1 = *in_stack_00000008;
    *in_stack_00000008 = iVar1 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("press CTRL+HOME to snap the end position to the current location.",iVar2,iVar1 + 0xb);
    iVar2 = g_ClipLeft;
    iVar1 = *in_stack_00000008;
    *in_stack_00000008 = iVar1 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("Finally, switch the slew mode to \"End\", and slew the end position into place.",iVar2,iVar1 + 0xb);
    *in_stack_00000008 = *in_stack_00000008 + 0xb;
    return;
  }
  engine_2d_c_drawText_FUN_00401fd0
            ("You are using an explicit .PTH course file for this platform.",g_ClipLeft,*in_stack_00000008);
  iVar2 = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0x16;
  engine_2d_c_drawText_FUN_00401fd0("Since you are using a .PTH file, you cannot slew the platform.  The position",iVar2,iVar1 + 0x16);
  iVar2 = g_ClipLeft;
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = iVar1 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0("is hardwired into the course.",iVar2,iVar1 + 0xb);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  return;
}
