// Name: core_fire.cpp_FUN_004c6be0
// Address: 004c6be0
// Address Range: [[004c6be0, 004c6c0d]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c6be0()
// Globals:
//   undefined4 DAT_02d141e8
//   CSmokeParticle[2048] g_CFireEffectSmokeParticles

#include "nocturne.h"

CSmokeParticle * core_fire_cpp_FUN_004c6be0(void)

{
  CSmokeParticle *pCVar1;
  int iVar2;
  
  iVar2 = DAT_02d141e8 + 1;
  pCVar1 = g_CFireEffectSmokeParticles + DAT_02d141e8;
  if (0x7ff < iVar2) {
    iVar2 = 0;
  }
  DAT_02d141e8 = iVar2;
  return pCVar1;
}


// Assembly code:
// 004c6be0: MOV ECX,dword ptr [0x02d141e8]
//   Label: core_fire.cpp_FUN_004c6be0
//   XREF to: 02d141e8 (READ)
// 004c6be6: LEA EAX,[ECX*0x4 + 0x0]
// 004c6bed: SUB EAX,ECX
// 004c6bef: SHL EAX,0x2
// 004c6bf2: SUB EAX,ECX
// 004c6bf4: SHL EAX,0x2
// 004c6bf7: INC ECX
// 004c6bf8: ADD EAX,0x2d141ec
//   XREF to: 02d141ec (DATA)
// 004c6bfd: CMP ECX,0x800
// 004c6c03: JL 0x004c6c07
//   XREF to: 004c6c07 (CONDITIONAL_JUMP)
// 004c6c05: XOR ECX,ECX
// 004c6c07: MOV dword ptr [0x02d141e8],ECX
//   Label: LAB_004c6c07
//   XREF to: 02d141e8 (WRITE)
// 004c6c0d: RET
