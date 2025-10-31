// Name: core_hero.cpp_FUN_004f2340
// Address: 004f2340
// Address Range: [[004f2340, 004f2467]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f2340()
// Cross-references:
//   core_baron.cpp_CBaron_ctor_FUN_00412bc0 (00412bc0) at 00412bc8 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_CColonel_ctor_FUN_0043f7e0 (0043f7e0) at 0043f7e6 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_constructorMaybe_FUN_004d2b20 (004d2b20) at 004d2b28 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0c10 (004f0c10) at 004f0c16 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f7df0 (004f7df0) at 004f7df6 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_ctor_FUN_00528b30 (00528b30) at 00528b38 [UNCONDITIONAL_CALL]
//   core_scat.cpp_CScat_ctor_FUN_00556ed0 (00556ed0) at 00556ed6 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_ctor_FUN_005bb120 (005bb120) at 005bb128 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850 (005d8850) at 005d8856 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable g_CHeroVTable
// Function calls:
//   core_charactr.cpp_CCharacter_ctor_FUN_00427e20
//   core_hero.cpp_CHero_FUN_004f2a30
//   core_inv.cpp_CInventory_ctor_FUN_004fd020
//   core_path.cpp_CPathMap_ctor_FUN_00546450
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

CHero * core_hero_cpp_FUN_004f2340(void)

{
  CHero *this_ptr;
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  int extraout_EAX;
  CCharacter *in_stack_00000004;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_00427e20(in_stack_00000004);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_00546450((CPathMap *)&pCVar1[1].base_actor.orient.bank);
  core_inv_cpp_CInventory_ctor_FUN_004fd020((CInventory *)&pCVar2[1].current_position.y);
  this_ptr = (CHero *)(extraout_EAX + -0x1f738);
  *(CHero **)(extraout_EAX + 4) = this_ptr;
  *(CDemonActor_vtable **)(extraout_EAX + -0x1f5e4) = &g_CHeroVTable;
  crt_memory_c_memset_FUN_005fde40((void *)(extraout_EAX + -0x1390c),0,0x2c);
  *(undefined4 *)(extraout_EAX + -0x13914) = 0;
  *(undefined4 *)(extraout_EAX + -0x1c95c) = 0x3f19999a;
  *(undefined4 *)(extraout_EAX + -0x1c958) = 0x3f666666;
  *(undefined4 *)(extraout_EAX + -0x1c954) = 0x49742400;
  *(undefined4 *)(extraout_EAX + -0x1c950) = 0x49742400;
  *(undefined4 *)(extraout_EAX + -0x1c94c) = 0x3fcccccd;
  *(undefined4 *)(extraout_EAX + -0x1c948) = 0x40c00000;
  *(undefined4 *)(extraout_EAX + -0x13910) = 2;
  *(undefined4 *)(extraout_EAX + -4) = 0;
  *(undefined4 *)(extraout_EAX + 0x464) = 0;
  *(undefined4 *)(extraout_EAX + 0x468) = 0;
  *(undefined4 *)(extraout_EAX + 0x46c) = 0;
  *(undefined4 *)(extraout_EAX + 0x470) = 0;
  *(undefined4 *)(extraout_EAX + 0x474) = 0;
  *(undefined4 *)(extraout_EAX + 0x478) = 0;
  *(undefined4 *)(extraout_EAX + 0x47c) = 0;
  *(undefined4 *)(extraout_EAX + 0x460) = 0;
  core_hero_cpp_CHero_FUN_004f2a30(this_ptr);
  *(undefined4 *)(extraout_EAX + 0x498) = 2;
  *(undefined4 *)(extraout_EAX + -0x1d114) = 0;
  *(undefined4 *)(extraout_EAX + -0x1d2f4) = 1;
  return this_ptr;
}


// Assembly code:
// 004f2340: PUSH EBX
//   Label: core_hero.cpp_FUN_004f2340
// 004f2341: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f2345: PUSH EBX
// 004f2346: CALL core_charactr.cpp_CCharacter_ctor_FUN_00427e20
//   XREF to: 00427e20 (UNCONDITIONAL_CALL)
// 004f234b: ADD ESP,0x4
// 004f234e: ADD EAX,0xbe58
// 004f2353: PUSH EAX
// 004f2354: CALL core_path.cpp_CPathMap_ctor_FUN_00546450
//   XREF to: 00546450 (UNCONDITIONAL_CALL)
// 004f2359: ADD ESP,0x4
// 004f235c: ADD EAX,0x138e0
// 004f2361: PUSH EAX
// 004f2362: CALL core_inv.cpp_CInventory_ctor_FUN_004fd020
//   XREF to: 004fd020 (UNCONDITIONAL_CALL)
// 004f2367: ADD ESP,0x4
// 004f236a: PUSH 0x2c
// 004f236c: LEA EBX,[EAX + 0xfffe08c8]
// 004f2372: PUSH 0x0
// 004f2374: MOV dword ptr [EBX + 0x1f73c],EBX
// 004f237a: LEA EAX,[EBX + 0xbe2c]
// 004f2380: PUSH EAX
// 004f2381: MOV dword ptr [EBX + 0x154],0x65f6d4
//   XREF to: 0065f6d4 (DATA)
// 004f238b: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004f2390: MOV dword ptr [EBX + 0xbe24],0x0
// 004f239a: MOV dword ptr [EBX + 0x2ddc],0x3f19999a
// 004f23a4: MOV dword ptr [EBX + 0x2de0],0x3f666666
// 004f23ae: MOV dword ptr [EBX + 0x2de4],0x49742400
// 004f23b8: MOV dword ptr [EBX + 0x2de8],0x49742400
// 004f23c2: MOV dword ptr [EBX + 0x2dec],0x3fcccccd
// 004f23cc: MOV dword ptr [EBX + 0x2df0],0x40c00000
// 004f23d6: MOV dword ptr [EBX + 0xbe28],0x2
// 004f23e0: MOV dword ptr [EBX + 0x1f734],0x0
// 004f23ea: MOV dword ptr [EBX + 0x1fb9c],0x0
// 004f23f4: MOV dword ptr [EBX + 0x1fba0],0x0
// 004f23fe: MOV dword ptr [EBX + 0x1fba4],0x0
// 004f2408: MOV dword ptr [EBX + 0x1fba8],0x0
// 004f2412: MOV dword ptr [EBX + 0x1fbac],0x0
// 004f241c: MOV dword ptr [EBX + 0x1fbb0],0x0
// 004f2426: ADD ESP,0xc
// 004f2429: MOV dword ptr [EBX + 0x1fbb4],0x0
// 004f2433: PUSH EBX
// 004f2434: MOV dword ptr [EBX + 0x1fb98],0x0
// 004f243e: CALL core_hero.cpp_CHero_FUN_004f2a30
//   XREF to: 004f2a30 (UNCONDITIONAL_CALL)
// 004f2443: MOV dword ptr [EBX + 0x1fbd0],0x2
// 004f244d: ADD ESP,0x4
// 004f2450: MOV dword ptr [EBX + 0x2624],0x0
// 004f245a: MOV EAX,EBX
// 004f245c: MOV dword ptr [EBX + 0x2444],0x1
// 004f2466: POP EBX
// 004f2467: RET
