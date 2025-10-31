// Name: core_actor.cpp_SomethingElseWithStrings1_FUN_0040d1e0
// Address: 0040d1e0
// Address Range: [[0040d1e0, 0040d235]]
// Convention: unknown
// Signature: undefined core_actor.cpp_SomethingElseWithStrings1_FUN_0040d1e0()
// Cross-references:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 (0040d150) at 0040d1d0 [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_FUN_00414fb0 (00414fb0) at 00414fd5 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d2740 (004d2740) at 004d2765 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054f060 (0054f060) at 0054f073 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_FUN_005da970 (005da970) at 005da995 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_FUN_005dadc0 (005dadc0) at 005dae03 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWayPoint_FUN_005ec690 (005ec690) at 005ec6c8 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_ClipLeft
// Function calls:
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void core_actor_cpp_SomethingElseWithStrings1_FUN_0040d1e0(void)

{
  int *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_00000010;
  
  engine_2d_c_drawText_FUN_00401fd0(in_stack_00000008,g_ClipLeft,*in_stack_00000004);
  engine_2d_c_drawText_FUN_00401fd0
            (in_stack_00000010,
             ((int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -8) -
                   (uint)((g_WindowWidth >> 0x1f) << 2 < 0)) >> 3) + g_ClipLeft,*in_stack_00000004);
  *in_stack_00000004 = *in_stack_00000004 + 0xb;
  return;
}


// Assembly code:
// 0040d1e0: PUSH EBX
//   Label: core_actor.cpp_SomethingElseWithStrings1_FUN_0040d1e0
// 0040d1e1: PUSH ESI
// 0040d1e2: PUSH EDI
// 0040d1e3: PUSH EBP
// 0040d1e4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040d1e8: MOV EDX,dword ptr [EBX]
// 0040d1ea: PUSH EDX
// 0040d1eb: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0040d1f1: PUSH ECX
// 0040d1f2: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0040d1f6: PUSH ESI
// 0040d1f7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0040d1fc: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0040d201: MOV EDX,EAX
// 0040d203: SAR EDX,0x1f
// 0040d206: SHL EDX,0x3
// 0040d209: SBB EAX,EDX
// 0040d20b: SAR EAX,0x3
// 0040d20e: ADD ESP,0xc
// 0040d211: MOV EDI,dword ptr [EBX]
// 0040d213: MOV EBP,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0040d219: PUSH EDI
// 0040d21a: ADD EAX,EBP
// 0040d21c: PUSH EAX
// 0040d21d: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0040d221: PUSH EAX
// 0040d222: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0040d227: MOV EDX,dword ptr [EBX]
// 0040d229: ADD EDX,0xb
// 0040d22c: ADD ESP,0xc
// 0040d22f: MOV dword ptr [EBX],EDX
// 0040d231: POP EBP
// 0040d232: POP EDI
// 0040d233: POP ESI
// 0040d234: POP EBX
// 0040d235: RET
