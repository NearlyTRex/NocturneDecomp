// Name: core_fire.cpp_allocateBulletHole_FUN_004c6c10
// Address: 004c6c10
// Address Range: [[004c6c10, 004c6c56]]
// Convention: __cdecl
// Signature: CBulletHole * core_fire.cpp_allocateBulletHole_FUN_004c6c10(void)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c76a0 (004c76a0) at 004c7852 [UNCONDITIONAL_CALL]
// Globals:
//   int g_BulletHoleActiveCount
//   int g_BulletHoleAllocIndex
//   CBulletHole[256] g_BulletHolePool

#include "nocturne.h"

CBulletHole * __cdecl core_fire_cpp_allocateBulletHole_FUN_004c6c10(void)

{
  CBulletHole *pCVar1;
  int iVar2;
  
  iVar2 = g_BulletHoleAllocIndex + 1;
  pCVar1 = g_BulletHolePool + g_BulletHoleAllocIndex;
  if (0xff < iVar2) {
    iVar2 = 0;
  }
  g_BulletHoleActiveCount = g_BulletHoleActiveCount + 1;
  if (0x100 < g_BulletHoleActiveCount) {
    g_BulletHoleActiveCount = 0x100;
  }
  g_BulletHoleAllocIndex = iVar2;
  return pCVar1;
}


// Assembly code:
// 004c6c10: PUSH EBX
//   Label: core_fire.cpp_allocateBulletHole_FUN_004c6c10
// 004c6c11: MOV ECX,dword ptr [0x02d2a1f0]
//   XREF to: 02d2a1f0 (READ)
// 004c6c17: MOV EBX,dword ptr [0x02d2a1ec]
//   XREF to: 02d2a1ec (READ)
// 004c6c1d: LEA EAX,[ECX*0x4 + 0x0]
// 004c6c24: MOV EDX,EAX
// 004c6c26: SHL EAX,0x4
// 004c6c29: SUB EAX,EDX
// 004c6c2b: INC ECX
// 004c6c2c: ADD EAX,0x2d2a1f4
//   XREF to: 02d2a1f4 (DATA)
// 004c6c31: CMP ECX,0x100
// 004c6c37: JL 0x004c6c3b
//   XREF to: 004c6c3b (CONDITIONAL_JUMP)
// 004c6c39: XOR ECX,ECX
// 004c6c3b: INC EBX
//   Label: LAB_004c6c3b
// 004c6c3c: CMP EBX,0x100
// 004c6c42: JLE 0x004c6c49
//   XREF to: 004c6c49 (CONDITIONAL_JUMP)
// 004c6c44: MOV EBX,0x100
// 004c6c49: MOV dword ptr [0x02d2a1ec],EBX
//   Label: LAB_004c6c49
//   XREF to: 02d2a1ec (WRITE)
// 004c6c4f: MOV dword ptr [0x02d2a1f0],ECX
//   XREF to: 02d2a1f0 (WRITE)
// 004c6c55: POP EBX
// 004c6c56: RET
