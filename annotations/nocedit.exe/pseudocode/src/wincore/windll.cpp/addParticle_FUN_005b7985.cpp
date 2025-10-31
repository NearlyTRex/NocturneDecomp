// Name: wincore_windll.cpp_addParticle_FUN_005b7985
// Address: 005b7985
// Address Range: [[005b7985, 005b79b1]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_addParticle_FUN_005b7985(void * particle_data, int particle_type)
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_addParticle* g_APIDLL_addParticle

#include "nocturne.h"

int __cdecl wincore_windll_cpp_addParticle_FUN_005b7985(void *particle_data,int particle_type)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_addParticle)(particle_data,particle_type);
  return iVar1;
}


// Assembly code:
// 005b7985: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_addParticle_FUN_005b7985
// 005b798b: LEA EDX,[EDX]
// 005b798e: MOV EBX,EBX
// 005b7990: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b7997: JNZ 0x005b799c
//   XREF to: 005b799c (CONDITIONAL_JUMP)
// 005b7999: XOR EAX,EAX
// 005b799b: RET
// 005b799c: PUSH EBX
//   Label: LAB_005b799c
// 005b799d: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005b79a1: PUSH ECX
// 005b79a2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005b79a6: PUSH EBX
// 005b79a7: CALL dword ptr [g_APIDLL_addParticle]
//   XREF to: 03f6b8dc (READ)
// 005b79ad: ADD ESP,0x8
// 005b79b0: POP EBX
// 005b79b1: RET
