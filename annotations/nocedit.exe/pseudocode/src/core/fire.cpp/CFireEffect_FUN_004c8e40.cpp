// Name: core_fire.cpp_CFireEffect_FUN_004c8e40
// Address: 004c8e40
// Address Range: [[004c8e40, 004c8e9d]]
// Convention: __cdecl
// Signature: int core_fire.cpp_CFireEffect_FUN_004c8e40(CFireEffect * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c8dd0 (004c8dd0) at 004c8e05 [UNCONDITIONAL_CALL]
// Globals:
//   CExplosion* g_CFireEffectExplosionsEnd
//   CToss[20] g_CFireEffectTosses
// Function calls:
//   core_fire.cpp_CToss_create_FUN_004c3ee0

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_FUN_004c8e40(CFireEffect *this_ptr)

{
  char *pcVar1;
  CExplosion *pCVar2;
  
  pCVar2 = g_CFireEffectExplosionsEnd;
  core_fire_cpp_CToss_create_FUN_004c3ee0(g_CFireEffectTosses + (int)g_CFireEffectExplosionsEnd);
  pcVar1 = g_CFireEffectExplosionsEnd->field0_0x0;
  g_CFireEffectExplosionsEnd = (CExplosion *)(pcVar1 + 1);
  if ((int)(pcVar1 + 1) < 0x14) {
    return (int)pCVar2;
  }
  g_CFireEffectExplosionsEnd = (CExplosion *)0x0;
  return (int)pCVar2;
}


// Assembly code:
// 004c8e40: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c8e40
// 004c8e41: PUSH ESI
// 004c8e42: PUSH EDI
// 004c8e43: PUSH EBP
// 004c8e44: MOV EBX,dword ptr [0x02d678cc]
//   XREF to: 02d678cc (READ)
// 004c8e4a: IMUL EAX,EBX,0x3e4
// 004c8e50: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004c8e54: PUSH dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004c8e58: PUSH EDX
// 004c8e59: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 004c8e5d: PUSH ECX
// 004c8e5e: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 004c8e62: PUSH ESI
// 004c8e63: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 004c8e67: PUSH EDI
// 004c8e68: ADD EAX,0x2d678d0
//   XREF to: 02d678d0 (DATA)
// 004c8e6d: PUSH EAX
// 004c8e6e: CALL core_fire.cpp_CToss_create_FUN_004c3ee0
//   XREF to: 004c3ee0 (UNCONDITIONAL_CALL)
// 004c8e73: MOV EBP,dword ptr [0x02d678cc]
//   XREF to: 02d678cc (READ)
// 004c8e79: INC EBP
// 004c8e7a: ADD ESP,0x18
// 004c8e7d: MOV dword ptr [0x02d678cc],EBP
//   XREF to: 02d678cc (WRITE)
// 004c8e83: CMP EBP,0x14
// 004c8e86: JGE 0x004c8e8f
//   XREF to: 004c8e8f (CONDITIONAL_JUMP)
// 004c8e88: MOV EAX,EBX
// 004c8e8a: POP EBP
// 004c8e8b: POP EDI
// 004c8e8c: POP ESI
// 004c8e8d: POP EBX
// 004c8e8e: RET
// 004c8e8f: XOR EDX,EDX
//   Label: LAB_004c8e8f
// 004c8e91: MOV dword ptr [0x02d678cc],EDX
//   XREF to: 02d678cc (WRITE)
// 004c8e97: MOV EAX,EBX
// 004c8e99: POP EBP
// 004c8e9a: POP EDI
// 004c8e9b: POP ESI
// 004c8e9c: POP EBX
// 004c8e9d: RET
