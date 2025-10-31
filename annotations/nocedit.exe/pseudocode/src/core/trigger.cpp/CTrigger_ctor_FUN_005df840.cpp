// Name: core_trigger.cpp_CTrigger_ctor_FUN_005df840
// Address: 005df840
// Address Range: [[005df840, 005df983]]
// Convention: __cdecl
// Signature: CTrigger * core_trigger.cpp_CTrigger_ctor_FUN_005df840(CTrigger * this_ptr)
// Cross-references:
//   core_trigger.cpp_FUN_005df800 (005df800) at 005df81a [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWayPoint_ctor_FUN_005ebe70 (005ebe70) at 005ebe75 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_nobody_006555f9
//   undefined4 s_obody_006555fa
//   undefined4 s_body_006555fb
//   undefined4 s_ody_006555fc
//   TerminatedCString s_CDemonActor_00655600
//   undefined4 s_DemonActor_00655601
//   undefined4 s_emonActor_00655602
//   undefined4 s_monActor_00655603
//   CDemonActor_vtable g_CTriggerVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0

#include "nocturne.h"

CTrigger * __cdecl core_trigger_cpp_CTrigger_ctor_FUN_005df840(CTrigger *this_ptr)

{
  char cVar1;
  CTrigger *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CTrigger *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  (pCVar2->base_actor).metadata.vtable = &g_CTriggerVTable;
  pCVar2->field1_0x158[8] = '\0';
  pCVar2->field1_0x158[9] = '\0';
  pCVar2->field1_0x158[10] = -0x60;
  pCVar2->field1_0x158[0xb] = '@';
  pCVar2->field1_0x158[0xc] = '\0';
  pCVar2->field1_0x158[0xd] = '\0';
  pCVar2->field1_0x158[0xe] = '\x10';
  pCVar2->field1_0x158[0xf] = 'A';
  pCVar2->field1_0x158[0x10] = '\0';
  pCVar2->field1_0x158[0x11] = '\0';
  pCVar2->field1_0x158[0x12] = -0x60;
  pCVar2->field1_0x158[0x13] = '@';
  pCVar2->field1_0x158[0x18] = '\0';
  pCVar2->field1_0x158[0x19] = '\0';
  pCVar2->field1_0x158[0x1a] = '\0';
  pCVar2->field1_0x158[0x1b] = '\0';
  pCVar2->field1_0x158[4] = '\0';
  pCVar2->field1_0x158[5] = '\0';
  pCVar2->field1_0x158[6] = '\0';
  pCVar2->field1_0x158[7] = '\0';
  pcVar3 = "nobody";
  pCVar2->field1_0x158[0xcc] = '\0';
  pCVar2->field1_0x158[0x130] = '\0';
  pCVar2->field1_0x158[0x14] = '\0';
  pCVar2->field1_0x158[0x15] = '\0';
  pCVar2->field1_0x158[0x16] = '\0';
  pCVar2->field1_0x158[0x17] = '\0';
  pcVar4 = pCVar2->field1_0x158 + 0x20;
  pCVar2->field1_0x158[0x1c] = '\0';
  pCVar2->field1_0x158[0x1d] = '\0';
  pCVar2->field1_0x158[0x1e] = '\0';
  pCVar2->field1_0x158[0x1f] = '\0';
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "CDemonActor";
  pcVar4 = pCVar2->field1_0x158 + 0x70;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar2->field1_0x158[0xc0] = '\0';
  pCVar2->field1_0x158[0xc1] = '\0';
  pCVar2->field1_0x158[0xc2] = '\0';
  pCVar2->field1_0x158[0xc3] = '\0';
  pCVar2->field1_0x158[0xc4] = '\0';
  pCVar2->field1_0x158[0xc5] = '\0';
  pCVar2->field1_0x158[0xc6] = -0x80;
  pCVar2->field1_0x158[199] = '>';
  pCVar2->field1_0x158[200] = '\0';
  pCVar2->field1_0x158[0xc9] = '\0';
  pCVar2->field1_0x158[0xca] = -0x80;
  pCVar2->field1_0x158[0xcb] = '?';
  pCVar2->field1_0x158[0x194] = '\0';
  pCVar2->field1_0x158[0x195] = '\0';
  pCVar2->field1_0x158[0x196] = '\0';
  pCVar2->field1_0x158[0x197] = '\0';
  pCVar2->field1_0x158[0x198] = '\0';
  pCVar2->field1_0x158[0x199] = '\0';
  pCVar2->field1_0x158[0x19a] = '\0';
  pCVar2->field1_0x158[0x19b] = '\0';
  pCVar2->field1_0x158[0x19c] = '\x01';
  pCVar2->field1_0x158[0x19d] = '\0';
  pCVar2->field1_0x158[0x19e] = '\0';
  pCVar2->field1_0x158[0x19f] = '\0';
  pCVar2->field1_0x158[0x1a0] = '\0';
  pCVar2->field1_0x158[0x1a1] = '\0';
  pCVar2->field1_0x158[0x1a2] = -0x38;
  pCVar2->field1_0x158[0x1a3] = 'B';
  (pCVar2->base_actor).health = 0x96;
  pCVar2->field1_0x158[0x210] = '\0';
  pCVar2->field1_0x158[0x211] = '\0';
  pCVar2->field1_0x158[0x212] = '\0';
  pCVar2->field1_0x158[0x213] = '\0';
  pCVar2->field1_0x158[0x1a4] = '\0';
  pCVar2->field1_0x158[0x1a5] = '\0';
  pCVar2->field1_0x158[0x1a6] = '\0';
  pCVar2->field1_0x158[0x1a7] = '\0';
  pCVar2->field1_0x158[0] = -0xd;
  pCVar2->field1_0x158[1] = 'O';
  pCVar2->field1_0x158[2] = -0x3d;
  pCVar2->field1_0x158[3] = 'G';
  pCVar2->field1_0x158[0x1a8] = '\x01';
  pCVar2->field1_0x158[0x1a9] = '\0';
  pCVar2->field1_0x158[0x1aa] = '\0';
  pCVar2->field1_0x158[0x1ab] = '\0';
  pCVar2->field1_0x158[0x1ac] = '\0';
  pCVar2->field1_0x158[0x214] = '\0';
  pCVar2->field1_0x158[0x215] = '\0';
  pCVar2->field1_0x158[0x216] = '\0';
  pCVar2->field1_0x158[0x217] = '\0';
  return pCVar2;
}


// Assembly code:
// 005df840: PUSH ESI
//   Label: core_trigger.cpp_CTrigger_ctor_FUN_005df840
// 005df841: PUSH EDI
// 005df842: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005df846: PUSH EDX
// 005df847: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 005df84c: MOV dword ptr [EAX + 0x154],0x664a24
//   XREF to: 00664a24 (DATA)
// 005df856: MOV dword ptr [EAX + 0x160],0x40a00000
// 005df860: MOV dword ptr [EAX + 0x164],0x41100000
// 005df86a: MOV dword ptr [EAX + 0x168],0x40a00000
// 005df874: MOV dword ptr [EAX + 0x170],0x0
// 005df87e: MOV dword ptr [EAX + 0x15c],0x0
// 005df888: MOV ESI,0x6555f9
//   XREF to: 006555f9 (DATA)
// 005df88d: MOV byte ptr [EAX + 0x224],0x0
// 005df894: MOV EDX,EAX
// 005df896: MOV byte ptr [EAX + 0x288],0x0
// 005df89d: ADD ESP,0x4
// 005df8a0: MOV dword ptr [EAX + 0x16c],0x0
// 005df8aa: LEA EDI,[EAX + 0x178]
// 005df8b0: MOV dword ptr [EAX + 0x174],0x0
// 005df8ba: PUSH EDI
// 005df8bb: MOV AL,byte ptr [ESI]
//   Label: LAB_005df8bb
//   XREF to: 006555f9 (READ)
//   XREF to: 006555fb (READ)
// 005df8bd: MOV byte ptr [EDI],AL
// 005df8bf: CMP AL,0x0
// 005df8c1: JZ 0x005df8d3
//   XREF to: 005df8d3 (CONDITIONAL_JUMP)
// 005df8c3: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006555fa (READ)
//   XREF to: 006555fc (READ)
// 005df8c6: ADD ESI,0x2
// 005df8c9: MOV byte ptr [EDI + 0x1],AL
// 005df8cc: ADD EDI,0x2
// 005df8cf: CMP AL,0x0
// 005df8d1: JNZ 0x005df8bb
//   XREF to: 005df8bb (CONDITIONAL_JUMP)
// 005df8d3: POP EDI
//   Label: LAB_005df8d3
// 005df8d4: MOV ESI,0x655600
//   XREF to: 00655600 (DATA)
// 005df8d9: LEA EDI,[EDX + 0x1c8]
// 005df8df: PUSH EDI
// 005df8e0: MOV AL,byte ptr [ESI]
//   Label: LAB_005df8e0
//   XREF to: 00655600 (READ)
//   XREF to: 00655602 (READ)
// 005df8e2: MOV byte ptr [EDI],AL
// 005df8e4: CMP AL,0x0
// 005df8e6: JZ 0x005df8f8
//   XREF to: 005df8f8 (CONDITIONAL_JUMP)
// 005df8e8: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00655601 (READ)
//   XREF to: 00655603 (READ)
// 005df8eb: ADD ESI,0x2
// 005df8ee: MOV byte ptr [EDI + 0x1],AL
// 005df8f1: ADD EDI,0x2
// 005df8f4: CMP AL,0x0
// 005df8f6: JNZ 0x005df8e0
//   XREF to: 005df8e0 (CONDITIONAL_JUMP)
// 005df8f8: POP EDI
//   Label: LAB_005df8f8
// 005df8f9: MOV dword ptr [EDX + 0x218],0x0
// 005df903: MOV dword ptr [EDX + 0x21c],0x3e800000
// 005df90d: MOV dword ptr [EDX + 0x220],0x3f800000
// 005df917: MOV dword ptr [EDX + 0x2ec],0x0
// 005df921: MOV dword ptr [EDX + 0x2f0],0x0
// 005df92b: MOV dword ptr [EDX + 0x2f4],0x1
// 005df935: MOV dword ptr [EDX + 0x2f8],0x42c80000
// 005df93f: MOV dword ptr [EDX + 0x64],0x96
// 005df946: MOV dword ptr [EDX + 0x368],0x0
// 005df950: MOV dword ptr [EDX + 0x2fc],0x0
// 005df95a: MOV dword ptr [EDX + 0x158],0x47c34ff3
// 005df964: MOV dword ptr [EDX + 0x300],0x1
// 005df96e: MOV byte ptr [EDX + 0x304],0x0
// 005df975: MOV EAX,EDX
// 005df977: MOV dword ptr [EDX + 0x36c],0x0
// 005df981: POP EDI
// 005df982: POP ESI
// 005df983: RET
