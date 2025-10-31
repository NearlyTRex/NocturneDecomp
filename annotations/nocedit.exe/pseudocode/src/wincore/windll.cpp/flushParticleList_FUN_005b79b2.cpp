// Name: wincore_windll.cpp_flushParticleList_FUN_005b79b2
// Address: 005b79b2
// Address Range: [[005b79b2, 005b79d2]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_flushParticleList_FUN_005b79b2(void)
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_flushParticleList* g_APIDLL_flushParticleList

#include "nocturne.h"

int __cdecl wincore_windll_cpp_flushParticleList_FUN_005b79b2(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_flushParticleList)();
  return iVar1;
}


// Assembly code:
// 005b79b2: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_flushParticleList_FUN_005b79b2
// 005b79b8: LEA EDX,[EDX]
// 005b79be: MOV EAX,EAX
// 005b79c0: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b79c7: JNZ 0x005b79cc
//   XREF to: 005b79cc (CONDITIONAL_JUMP)
// 005b79c9: XOR EAX,EAX
// 005b79cb: RET
// 005b79cc: CALL dword ptr [g_APIDLL_flushParticleList]
//   Label: LAB_005b79cc
//   XREF to: 03f6b8e0 (READ)
// 005b79d2: RET
