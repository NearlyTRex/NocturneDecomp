// Name: core_platfrm.cpp_FUN_0054f060
// Address: 0054f060
// Address Range: [[0054f060, 0054f290]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054f060()
// Globals:
//   TerminatedCString s_Move_platform_forward_ba_0063fc7e
//   TerminatedCString s_anon_0063fca4
//   TerminatedCString s_You_are_using_a_manual_c_0063fca8
//   TerminatedCString s_For_a_manual_course_you__0063fcd9
//   TerminatedCString s_and_the_game_will_do_its_0063fd16
//   TerminatedCString s_Manual_courses_can_only__0063fd5d
//   TerminatedCString s_translation_or_rotation__0063fda4
//   TerminatedCString s_In_the_editor_a_green_bo_0063fdf9
//   TerminatedCString s_the_ending_position_0063fe50
//   TerminatedCString s_To_move_the_start_or_end_0063fe65
//   TerminatedCString s_to_slew_either_by_pressi_0063fead
//   TerminatedCString s_Slam_the_start_and_end_p_0063fefc
//   TerminatedCString s_CTRL_HOME_0063ff44
//   TerminatedCString s_After_creating_a_platfor_0063ff4e
//   TerminatedCString s_is_to_switch_the_slew_mo_0063ff8e
//   TerminatedCString s_it_to_start_out_not_worr_0063ffd6
//   TerminatedCString s_press_CTRL_HOME_to_snap__0064001c
//   TerminatedCString s_Finally_switch_the_slew__0064005e
//   TerminatedCString s_You_are_using_an_explici_006400ac
//   TerminatedCString s_Since_you_are_using_a_PT_006400ea
//   TerminatedCString s_is_hardwired_into_the_co_00640137
//   int g_ClipLeft
// Function calls:
//   core_actor.cpp_SomethingElseWithStrings1_FUN_0040d1e0
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054f060(undefined4 param_1, undefined4
   param_2) */

void core_platfrm_cpp_FUN_0054f060(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
  core_actor_cpp_SomethingElseWithStrings1_FUN_0040d1e0();
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
    core_actor_cpp_SomethingElseWithStrings1_FUN_0040d1e0();
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


// Assembly code:
// 0054f060: PUSH EBX
//   Label: core_platfrm.cpp_FUN_0054f060
// 0054f061: PUSH ESI
// 0054f062: PUSH EDI
// 0054f063: PUSH EBP
// 0054f064: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0054f068: PUSH 0x63fc7e
//   XREF to: 0063fc7e (DATA)
// 0054f06d: PUSH 0x63fca4
//   XREF to: 0063fca4 (DATA)
// 0054f072: PUSH EBX
// 0054f073: CALL core_actor.cpp_SomethingElseWithStrings1_FUN_0040d1e0
//   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)
// 0054f078: MOV EDX,dword ptr [EBX]
// 0054f07a: ADD ESP,0xc
// 0054f07d: ADD EDX,0xb
// 0054f080: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0054f084: MOV dword ptr [EBX],EDX
// 0054f086: CMP byte ptr [EAX + 0x2f0],0x0
// 0054f08d: JNZ 0x0054f237
//   XREF to: 0054f237 (CONDITIONAL_JUMP)
// 0054f093: MOV EBP,dword ptr [EBX]
// 0054f095: PUSH EBP
// 0054f096: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f09b: PUSH EAX
// 0054f09c: PUSH 0x63fca8
//   XREF to: 0063fca8 (DATA)
// 0054f0a1: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f0a6: MOV EDX,dword ptr [EBX]
// 0054f0a8: ADD ESP,0xc
// 0054f0ab: ADD EDX,0x16
// 0054f0ae: PUSH EDX
// 0054f0af: MOV ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f0b5: PUSH ESI
// 0054f0b6: PUSH 0x63fcd9
//   XREF to: 0063fcd9 (DATA)
// 0054f0bb: MOV dword ptr [EBX],EDX
// 0054f0bd: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f0c2: MOV EDI,dword ptr [EBX]
// 0054f0c4: ADD ESP,0xc
// 0054f0c7: ADD EDI,0xb
// 0054f0ca: PUSH EDI
// 0054f0cb: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f0d0: PUSH EAX
// 0054f0d1: PUSH 0x63fd16
//   XREF to: 0063fd16 (DATA)
// 0054f0d6: MOV dword ptr [EBX],EDI
// 0054f0d8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f0dd: MOV EDX,dword ptr [EBX]
// 0054f0df: ADD ESP,0xc
// 0054f0e2: ADD EDX,0xb
// 0054f0e5: PUSH EDX
// 0054f0e6: MOV ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f0ec: PUSH ESI
// 0054f0ed: PUSH 0x63fd5d
//   XREF to: 0063fd5d (DATA)
// 0054f0f2: MOV dword ptr [EBX],EDX
// 0054f0f4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f0f9: MOV EDI,dword ptr [EBX]
// 0054f0fb: ADD ESP,0xc
// 0054f0fe: ADD EDI,0xb
// 0054f101: PUSH EDI
// 0054f102: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f107: PUSH EAX
// 0054f108: PUSH 0x63fda4
//   XREF to: 0063fda4 (DATA)
// 0054f10d: MOV dword ptr [EBX],EDI
// 0054f10f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f114: MOV EDX,dword ptr [EBX]
// 0054f116: ADD ESP,0xc
// 0054f119: ADD EDX,0x16
// 0054f11c: PUSH EDX
// 0054f11d: MOV ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f123: PUSH ESI
// 0054f124: PUSH 0x63fdf9
//   XREF to: 0063fdf9 (DATA)
// 0054f129: MOV dword ptr [EBX],EDX
// 0054f12b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f130: MOV EDI,dword ptr [EBX]
// 0054f132: ADD ESP,0xc
// 0054f135: ADD EDI,0xb
// 0054f138: PUSH EDI
// 0054f139: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f13e: PUSH EAX
// 0054f13f: PUSH 0x63fe50
//   XREF to: 0063fe50 (DATA)
// 0054f144: MOV dword ptr [EBX],EDI
// 0054f146: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f14b: MOV EDX,dword ptr [EBX]
// 0054f14d: ADD ESP,0xc
// 0054f150: ADD EDX,0x16
// 0054f153: PUSH EDX
// 0054f154: MOV ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f15a: PUSH ESI
// 0054f15b: PUSH 0x63fe65
//   XREF to: 0063fe65 (DATA)
// 0054f160: MOV dword ptr [EBX],EDX
// 0054f162: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f167: MOV EDI,dword ptr [EBX]
// 0054f169: ADD ESP,0xc
// 0054f16c: ADD EDI,0xb
// 0054f16f: PUSH EDI
// 0054f170: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f175: PUSH EAX
// 0054f176: PUSH 0x63fead
//   XREF to: 0063fead (DATA)
// 0054f17b: MOV dword ptr [EBX],EDI
// 0054f17d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f182: ADD ESP,0xc
// 0054f185: PUSH 0x63fefc
//   XREF to: 0063fefc (DATA)
// 0054f18a: MOV EDX,dword ptr [EBX]
// 0054f18c: PUSH 0x63ff44
//   XREF to: 0063ff44 (DATA)
// 0054f191: ADD EDX,0x16
// 0054f194: PUSH EBX
// 0054f195: MOV dword ptr [EBX],EDX
// 0054f197: CALL core_actor.cpp_SomethingElseWithStrings1_FUN_0040d1e0
//   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)
// 0054f19c: MOV ECX,dword ptr [EBX]
// 0054f19e: ADD ESP,0xc
// 0054f1a1: ADD ECX,0xb
// 0054f1a4: PUSH ECX
// 0054f1a5: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f1ab: PUSH EDI
// 0054f1ac: PUSH 0x63ff4e
//   XREF to: 0063ff4e (DATA)
// 0054f1b1: MOV dword ptr [EBX],ECX
// 0054f1b3: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f1b8: ADD ESP,0xc
// 0054f1bb: MOV EBP,dword ptr [EBX]
// 0054f1bd: ADD EBP,0xb
// 0054f1c0: PUSH EBP
// 0054f1c1: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f1c7: PUSH EDX
// 0054f1c8: PUSH 0x63ff8e
//   XREF to: 0063ff8e (DATA)
// 0054f1cd: MOV dword ptr [EBX],EBP
// 0054f1cf: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f1d4: MOV ECX,dword ptr [EBX]
// 0054f1d6: ADD ESP,0xc
// 0054f1d9: ADD ECX,0xb
// 0054f1dc: PUSH ECX
// 0054f1dd: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f1e3: PUSH EDI
// 0054f1e4: PUSH 0x63ffd6
//   XREF to: 0063ffd6 (DATA)
// 0054f1e9: MOV dword ptr [EBX],ECX
// 0054f1eb: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f1f0: MOV EBP,dword ptr [EBX]
// 0054f1f2: ADD ESP,0xc
// 0054f1f5: ADD EBP,0xb
// 0054f1f8: PUSH EBP
// 0054f1f9: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f1ff: PUSH EDX
// 0054f200: PUSH 0x64001c
//   XREF to: 0064001c (DATA)
// 0054f205: MOV dword ptr [EBX],EBP
// 0054f207: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f20c: MOV ECX,dword ptr [EBX]
// 0054f20e: ADD ESP,0xc
// 0054f211: ADD ECX,0xb
// 0054f214: PUSH ECX
// 0054f215: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f21b: PUSH EDI
// 0054f21c: PUSH 0x64005e
//   XREF to: 0064005e (DATA)
// 0054f221: MOV dword ptr [EBX],ECX
// 0054f223: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f228: MOV EBP,dword ptr [EBX]
// 0054f22a: ADD EBP,0xb
// 0054f22d: ADD ESP,0xc
// 0054f230: MOV dword ptr [EBX],EBP
// 0054f232: POP EBP
// 0054f233: POP EDI
// 0054f234: POP ESI
// 0054f235: POP EBX
// 0054f236: RET
// 0054f237: MOV ECX,dword ptr [EBX]
//   Label: LAB_0054f237
// 0054f239: PUSH ECX
// 0054f23a: MOV ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f240: PUSH ESI
// 0054f241: PUSH 0x6400ac
//   XREF to: 006400ac (DATA)
// 0054f246: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f24b: MOV EDI,dword ptr [EBX]
// 0054f24d: ADD ESP,0xc
// 0054f250: ADD EDI,0x16
// 0054f253: PUSH EDI
// 0054f254: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f259: PUSH EAX
// 0054f25a: PUSH 0x6400ea
//   XREF to: 006400ea (DATA)
// 0054f25f: MOV dword ptr [EBX],EDI
// 0054f261: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f266: MOV EDX,dword ptr [EBX]
// 0054f268: ADD ESP,0xc
// 0054f26b: ADD EDX,0xb
// 0054f26e: PUSH EDX
// 0054f26f: MOV ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0054f275: PUSH ESI
// 0054f276: PUSH 0x640137
//   XREF to: 00640137 (DATA)
// 0054f27b: MOV dword ptr [EBX],EDX
// 0054f27d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0054f282: MOV EDI,dword ptr [EBX]
// 0054f284: ADD EDI,0xb
// 0054f287: ADD ESP,0xc
// 0054f28a: MOV dword ptr [EBX],EDI
// 0054f28c: POP EBP
// 0054f28d: POP EDI
// 0054f28e: POP ESI
// 0054f28f: POP EBX
// 0054f290: RET
