// Name: core_actor.cpp_getRandomFloat_FUN_0040cbc0
// Address: 0040cbc0
// Address Range: [[0040cbc0, 0040cc0a]]
// Convention: __cdecl
// Signature: undefined core_actor.cpp_getRandomFloat_FUN_0040cbc0()
// Globals:
//   float FLOAT_006142e8 = 0.00003051851
//   int INT_006142ec = 0x33800001
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 DAT_02d81cd8
// Function calls:
//   core_actor.cpp_generateRandomValue_FUN_0040cba0
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

float __cdecl core_actor_cpp_getRandomFloat_FUN_0040cbc0(void)

{
  uint uVar1;
  int iVar2;
  
  if (g_CGamePtr->is_processing != 0) {
    uVar1 = core_actor_cpp_generateRandomValue_FUN_0040cba0();
    return (float)(int)uVar1 * (float)INT_006142ec;
  }
  iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
  return (float)iVar2 * FLOAT_006142e8;
}


// Assembly code:
// 0040cbc0: SUB ESP,0x8
//   Label: core_actor.cpp_getRandomFloat_FUN_0040cbc0
// 0040cbc3: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (PARAM)
// 0040cbc8: CMP dword ptr [EAX + 0x23c],0x0
//   XREF to: 02d81cd8 (READ)
// 0040cbcf: JZ 0x0040cbee
//   XREF to: 0040cbee (CONDITIONAL_JUMP)
// 0040cbd1: CALL core_actor.cpp_generateRandomValue_FUN_0040cba0
//   XREF to: 0040cba0 (UNCONDITIONAL_CALL)
// 0040cbd6: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 0040cbda: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 0040cbde: FMUL float ptr [0x006142ec]
//   XREF to: 006142ec (READ)
// 0040cbe4: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0040cbe7: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0040cbea: ADD ESP,0x8
// 0040cbed: RET
// 0040cbee: CALL crt_stdlib.c_rand_FUN_005feb5c
//   Label: LAB_0040cbee
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 0040cbf3: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 0040cbf7: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 0040cbfb: FMUL float ptr [0x006142e8]
//   XREF to: 006142e8 (READ)
// 0040cc01: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0040cc04: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0040cc07: ADD ESP,0x8
// 0040cc0a: RET
