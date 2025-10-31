// Name: core_terrain.cpp_CTerrain_process_FUN_005e2050
// Address: 005e2050
// Address Range: [[005e2050, 005e207d]]
// Convention: __cdecl
// Signature: void core_terrain.cpp_CTerrain_process_FUN_005e2050(CTerrain * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e354f [UNCONDITIONAL_CALL]
// Globals:
//   int g_GlobalDeltaTimeInt

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_process_FUN_005e2050(CTerrain *this_ptr)

{
  int iVar1;
  
  iVar1 = this_ptr->animation_counter +
          ((uint)((longlong)g_GlobalDeltaTimeInt * 0x6270) >> 0x10 |
          (int)((ulonglong)((longlong)g_GlobalDeltaTimeInt * 0x6270) >> 0x20) << 0x10);
  this_ptr->animation_counter = iVar1;
  if (iVar1 < 0x8000001) {
    return;
  }
  this_ptr->animation_counter = iVar1 + -0x8000000;
  return;
}


// Assembly code:
// 005e2050: MOV ECX,dword ptr [ESP + 0x4]
//   Label: core_terrain.cpp_CTerrain_process_FUN_005e2050
//   XREF to: Stack[0x4] (READ)
// 005e2054: MOV EDX,0x6270
// 005e2059: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 005e205e: IMUL EDX
// 005e2060: SHRD EAX,EDX,0x10
// 005e2064: MOV EDX,dword ptr [ECX]
// 005e2066: ADD EDX,EAX
// 005e2068: MOV dword ptr [ECX],EDX
// 005e206a: CMP EDX,0x8000000
// 005e2070: JG 0x005e2073
//   XREF to: 005e2073 (CONDITIONAL_JUMP)
// 005e2072: RET
// 005e2073: PUSH ESI
//   Label: LAB_005e2073
// 005e2074: LEA ESI,[EDX + 0xf8000000]
// 005e207a: MOV dword ptr [ECX],ESI
// 005e207c: POP ESI
// 005e207d: RET
