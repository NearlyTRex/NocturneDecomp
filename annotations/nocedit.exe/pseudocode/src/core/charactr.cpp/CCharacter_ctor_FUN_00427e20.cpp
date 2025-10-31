// Name: core_charactr.cpp_CCharacter_ctor_FUN_00427e20
// Address: 00427e20
// Address Range: [[00427e20, 0042813c]]
// Convention: __cdecl
// Signature: CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_00427e20(CCharacter * this_ptr)
// Cross-references:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500 (004a9500) at 004a950b [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2340 (004f2340) at 004f2346 [UNCONDITIONAL_CALL]
//   core_npc.cpp_FUN_005447e0 (005447e0) at 005447e6 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
//   WatcomTypeInfo g_CFlameTypeInfo
//   WatcomTypeInfo g_SFireTypeInfo
//   CDemonActor_vtable g_CCharacterVTable
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_cloth.cpp_FUN_0043bf40
//   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CCharacter * __cdecl core_charactr_cpp_CCharacter_ctor_FUN_00427e20(CCharacter *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  void *pvVar3;
  CCharacter *pCVar4;
  BADSPACEBASE *in_ESP;
  float *pfVar5;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
            ((CDeformableModelInstance *)(pCVar1 + 1));
  iVar2 = core_cloth_cpp_FUN_0043bf40();
  pvVar3 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)(iVar2 + 0x1c8),0xf,&g_CVectorTypeInfo);
  pvVar3 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar3 + 0xb4),0xf,&g_CVectorTypeInfo);
  pvVar3 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar3 + 0x20c),0x32,&g_SFireTypeInfo);
  pvVar3 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar3 + 0x4b0),0x32,&g_CFlameTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar3 + -0x3278) = &g_CCharacterVTable;
  *(undefined4 *)((int)pvVar3 + -0xfc0) = 0;
  *(undefined4 *)((int)pvVar3 + -0xf9c) = 0;
  *(undefined4 *)((int)pvVar3 + -4000) = *(undefined4 *)((int)pvVar3 + -0xf9c);
  *(undefined4 *)((int)pvVar3 + -0xfa4) = *(undefined4 *)((int)pvVar3 + -4000);
  *(undefined4 *)((int)pvVar3 + -0xf8c) = 0x42c80000;
  *(undefined4 *)((int)pvVar3 + -0x5f0) = 0x3f800000;
  *(undefined4 *)((int)pvVar3 + -0x5ec) = 0x40000000;
  *(undefined4 *)((int)pvVar3 + -0x5e8) = 0x41a00000;
  *(undefined4 *)((int)pvVar3 + -0x5e4) = 0x42480000;
  *(undefined4 *)((int)pvVar3 + -0x5e0) = 0x40000000;
  *(undefined4 *)((int)pvVar3 + -0x5dc) = 0xc479c000;
  *(undefined4 *)((int)pvVar3 + -0x5d8) = 0;
  *(undefined4 *)((int)pvVar3 + -0x4bc) = 0;
  *(undefined4 *)((int)pvVar3 + -0x4b4) = 0x40000000;
  *(undefined4 *)((int)pvVar3 + -0xe04) = 0xffffffff;
  *(undefined4 *)((int)pvVar3 + -0xe08) = 0xffffffff;
  *(undefined4 *)((int)pvVar3 + -0x5f4) = 0;
  *(undefined4 *)((int)pvVar3 + -0xe1c) = 0;
  *(undefined4 *)((int)pvVar3 + -0xe2c) = 0;
  *(undefined4 *)((int)pvVar3 + -0xe28) = 0x40400000;
  *(undefined4 *)((int)pvVar3 + -0xe24) = 0x7149f2ca;
  *(undefined4 *)((int)pvVar3 + -0xe20) = 0xbf800000;
  *(undefined4 *)((int)pvVar3 + -0xe18) = 0;
  *(undefined4 *)((int)pvVar3 + -0xf90) = 0x42c80000;
  if ((undefined4 *)((int)pvVar3 + -0xe14) != (undefined4 *)&stack0x00000010) {
    *(undefined4 *)((int)pvVar3 + -0xe14) = 0;
    *(undefined4 *)((int)pvVar3 + -0xe10) = 0;
    *(undefined4 *)((int)pvVar3 + -0xe0c) = 0x40000000;
  }
  *(undefined4 *)((int)pvVar3 + -0xde4) = 0;
  *(undefined4 *)((int)pvVar3 + -0xde0) = 0;
  *(undefined4 *)((int)pvVar3 + -0xddc) = 0;
  *(undefined4 *)((int)pvVar3 + -0xdd8) = 0;
  *(undefined4 *)((int)pvVar3 + -0xde8) = 0xffffffff;
  pCVar4 = (CCharacter *)((int)pvVar3 + -0x33cc);
  do {
    pfVar5 = &(pCVar4->base_actor).orient_matrix.m[0].z;
    pCVar4->carry_hands[0].field0_0x0[0] = -1;
    pCVar4->carry_hands[0].field0_0x0[1] = -1;
    pCVar4->carry_hands[0].field0_0x0[2] = -1;
    pCVar4->carry_hands[0].field0_0x0[3] = -1;
    pCVar4->carry_hands[0].field0_0x0[4] = -1;
    pCVar4->carry_hands[0].field0_0x0[5] = -1;
    pCVar4->carry_hands[0].field0_0x0[6] = -1;
    pCVar4->carry_hands[0].field0_0x0[7] = -1;
    pCVar4->carry_hands[0].carry_actor = (CDemonActor *)0x0;
    pCVar4 = (CCharacter *)pfVar5;
  } while (pfVar5 != (float *)((int)pvVar3 + -0x3344));
  *(undefined4 *)((int)pvVar3 + -0xdf4) = 0;
  *(undefined4 *)((int)pvVar3 + -0xdf0) = 0;
  *(undefined4 *)((int)pvVar3 + -0xdec) = 0;
  *(undefined4 *)((int)pvVar3 + -0xdfc) = 0;
  *(undefined4 *)((int)pvVar3 + -0xdf8) = 0;
  *(undefined4 *)((int)pvVar3 + -0xdbc) = 0;
  *(undefined4 *)((int)pvVar3 + 0x840c) = 0;
  *(undefined4 *)((int)pvVar3 + -0xdb8) = 0;
  *(undefined4 *)((int)pvVar3 + -0xe34) = 0;
  *(undefined4 *)((int)pvVar3 + -0xe30) = 0;
  *(undefined4 *)((int)pvVar3 + -0xdb4) = 0;
  *(undefined4 *)((int)pvVar3 + 0x8414) = 0;
  *(undefined4 *)((int)pvVar3 + -0xdb0) = 0x3f800000;
  *(undefined4 *)((int)pvVar3 + -0xdac) = 0;
  *(undefined4 *)((int)pvVar3 + -0xda4) = 0;
  *(undefined4 *)((int)pvVar3 + -0x940) = 0;
  *(undefined4 *)((int)pvVar3 + -0x93c) = 0;
  *(undefined4 *)((int)pvVar3 + -0xda8) = 1;
  *(undefined4 *)((int)pvVar3 + -0xf88) = 0;
  *(undefined1 *)((int)pvVar3 + -0xf84) = 0;
  *(undefined4 *)((int)pvVar3 + -0x77c) = 0;
  *(undefined4 *)((int)pvVar3 + -0x778) = 0;
  *(undefined4 *)((int)pvVar3 + -0x774) = 0;
  *(undefined4 *)((int)pvVar3 + -0x608) = 0;
  *(undefined4 *)((int)pvVar3 + -0x5f8) = 0;
  *(undefined1 *)((int)pvVar3 + -0xe98) = 0;
  return (CCharacter *)((int)pvVar3 + -0x33cc);
}


// Assembly code:
// 00427e20: SUB ESP,0xc
//   Label: core_charactr.cpp_CCharacter_ctor_FUN_00427e20
// 00427e23: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00427e27: PUSH EDX
// 00427e28: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 00427e2d: ADD ESP,0x4
// 00427e30: ADD EAX,0x158
// 00427e35: PUSH EAX
// 00427e36: CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)
// 00427e3b: ADD ESP,0x4
// 00427e3e: ADD EAX,0x293c
// 00427e43: PUSH EAX
// 00427e44: CALL core_cloth.cpp_FUN_0043bf40
//   XREF to: 0043bf40 (UNCONDITIONAL_CALL)
// 00427e49: ADD ESP,0x4
// 00427e4c: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 00427e51: PUSH 0xf
// 00427e53: ADD EAX,0x1c8
// 00427e58: PUSH EAX
// 00427e59: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00427e5e: ADD ESP,0xc
// 00427e61: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 00427e66: PUSH 0xf
// 00427e68: ADD EAX,0xb4
// 00427e6d: PUSH EAX
// 00427e6e: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00427e73: ADD ESP,0xc
// 00427e76: PUSH 0x659f00
//   XREF to: 00659f00 (DATA)
// 00427e7b: PUSH 0x32
// 00427e7d: ADD EAX,0x20c
// 00427e82: PUSH EAX
// 00427e83: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00427e88: ADD ESP,0xc
// 00427e8b: PUSH 0x659ee0
//   XREF to: 00659ee0 (DATA)
// 00427e90: PUSH 0x32
// 00427e92: ADD EAX,0x4b0
// 00427e97: PUSH EAX
// 00427e98: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00427e9d: LEA EDX,[EAX + 0xffffcc34]
// 00427ea3: MOV dword ptr [EDX + 0x154],0x65b844
//   XREF to: 0065b844 (DATA)
// 00427ead: LEA EAX,[EDX + 0x2428]
// 00427eb3: MOV dword ptr [EDX + 0x240c],0x0
// 00427ebd: MOV dword ptr [EAX + 0x8],0x0
// 00427ec4: ADD ESP,0xc
// 00427ec7: MOV ECX,dword ptr [EAX + 0x8]
// 00427eca: MOV dword ptr [EAX + 0x4],ECX
// 00427ecd: MOV ECX,dword ptr [EAX + 0x4]
// 00427ed0: MOV dword ptr [EAX],ECX
// 00427ed2: PUSH ESI
// 00427ed3: MOV dword ptr [EDX + 0x2440],0x42c80000
// 00427edd: MOV dword ptr [EDX + 0x2ddc],0x3f800000
// 00427ee7: MOV dword ptr [EDX + 0x2de0],0x40000000
// 00427ef1: MOV dword ptr [EDX + 0x2de4],0x41a00000
// 00427efb: MOV dword ptr [EDX + 0x2de8],0x42480000
// 00427f05: MOV dword ptr [EDX + 0x2dec],0x40000000
// 00427f0f: MOV dword ptr [EDX + 0x2df0],0xc479c000
// 00427f19: MOV dword ptr [EDX + 0x2df4],0x0
// 00427f23: MOV dword ptr [EDX + 0x2f10],0x0
// 00427f2d: MOV dword ptr [EDX + 0x2f18],0x40000000
// 00427f37: MOV dword ptr [EDX + 0x25c8],0xffffffff
// 00427f41: MOV dword ptr [EDX + 0x25c4],0xffffffff
// 00427f4b: MOV dword ptr [EDX + 0x2dd8],0x0
// 00427f55: MOV dword ptr [EDX + 0x25b0],0x0
// 00427f5f: MOV dword ptr [EDX + 0x25a0],0x0
// 00427f69: MOV dword ptr [EDX + 0x25a4],0x40400000
// 00427f73: MOV dword ptr [EDX + 0x25a8],0x7149f2ca
// 00427f7d: MOV dword ptr [EDX + 0x25ac],0xbf800000
// 00427f87: MOV dword ptr [EDX + 0x25b4],0x0
// 00427f91: MOV ESI,0x40000000
// 00427f96: MOV dword ptr [EDX + 0x243c],0x42c80000
// 00427fa0: XOR ECX,ECX
// 00427fa2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xc] (DATA)
// 00427fa6: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 00427faa: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 00427fae: LEA ECX,[EDX + 0x25b8]
// 00427fb4: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x4] (WRITE)
// 00427fb8: CMP ECX,EAX
// 00427fba: JNZ 0x00428124
//   XREF to: 00428124 (CONDITIONAL_JUMP)
// 00427fc0: MOV dword ptr [EDX + 0x25e8],0x0
//   Label: LAB_00427fc0
// 00427fca: MOV dword ptr [EDX + 0x25ec],0x0
// 00427fd4: MOV dword ptr [EDX + 0x25f0],0x0
// 00427fde: MOV dword ptr [EDX + 0x25f4],0x0
// 00427fe8: MOV EAX,EDX
// 00427fea: MOV dword ptr [EDX + 0x25e4],0xffffffff
// 00427ff4: LEA ECX,[EDX + 0x88]
// 00427ffa: POP ESI
// 00427ffb: ADD EAX,0x44
//   Label: LAB_00427ffb
// 00427ffe: MOV dword ptr [EAX + 0x2468],0xffffffff
// 00428008: MOV dword ptr [EAX + 0x246c],0xffffffff
// 00428012: MOV dword ptr [EAX + 0x2470],0x0
// 0042801c: CMP EAX,ECX
// 0042801e: JNZ 0x00427ffb
//   XREF to: 00427ffb (CONDITIONAL_JUMP)
// 00428020: MOV dword ptr [EDX + 0x25d8],0x0
// 0042802a: MOV dword ptr [EDX + 0x25dc],0x0
// 00428034: MOV dword ptr [EDX + 0x25e0],0x0
// 0042803e: MOV dword ptr [EDX + 0x25d0],0x0
// 00428048: MOV dword ptr [EDX + 0x25d4],0x0
// 00428052: MOV dword ptr [EDX + 0x2610],0x0
// 0042805c: MOV dword ptr [EDX + 0xb7d8],0x0
// 00428066: MOV dword ptr [EDX + 0x2614],0x0
// 00428070: MOV dword ptr [EDX + 0x2598],0x0
// 0042807a: MOV dword ptr [EDX + 0x259c],0x0
// 00428084: MOV dword ptr [EDX + 0x2618],0x0
// 0042808e: MOV dword ptr [EDX + 0xb7e0],0x0
// 00428098: MOV dword ptr [EDX + 0x261c],0x3f800000
// 004280a2: MOV dword ptr [EDX + 0x2620],0x0
// 004280ac: MOV dword ptr [EDX + 0x2628],0x0
// 004280b6: MOV dword ptr [EDX + 0x2a8c],0x0
// 004280c0: MOV dword ptr [EDX + 0x2a90],0x0
// 004280ca: MOV dword ptr [EDX + 0x2624],0x1
// 004280d4: MOV dword ptr [EDX + 0x2444],0x0
// 004280de: MOV byte ptr [EDX + 0x2448],0x0
// 004280e5: MOV dword ptr [EDX + 0x2c50],0x0
// 004280ef: MOV dword ptr [EDX + 0x2c54],0x0
// 004280f9: MOV dword ptr [EDX + 0x2c58],0x0
// 00428103: MOV dword ptr [EDX + 0x2dc4],0x0
// 0042810d: MOV dword ptr [EDX + 0x2dd4],0x0
// 00428117: MOV EAX,EDX
// 00428119: MOV byte ptr [EDX + 0x2534],0x0
// 00428120: ADD ESP,0xc
// 00428123: RET
// 00428124: MOV dword ptr [ECX],0x0
//   Label: LAB_00428124
// 0042812a: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x8] (READ)
// 0042812e: MOV dword ptr [ECX + 0x4],EAX
// 00428131: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4] (READ)
// 00428135: MOV dword ptr [ECX + 0x8],EAX
// 00428138: JMP 0x00427fc0
//   XREF to: 00427fc0 (UNCONDITIONAL_JUMP)
