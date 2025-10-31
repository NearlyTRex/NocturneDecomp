// Name: engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0
// Address: 00410cf0
// Address Range: [[00410cf0, 00410d15]]
// Convention: __cdecl
// Signature: void engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0(CAlphaBitmap * this_ptr)
// Cross-references:
//   core_moon.cpp_CMoon_FUN_00529ed0 (00529ed0) at 0052a142 [UNCONDITIONAL_CALL]
//   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 (00410950) at 00410990 [UNCONDITIONAL_CALL]
//   engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00 (00410b00) at 00410b23 [UNCONDITIONAL_CALL]
// Globals:
//   uint[256] g_Hardware32BitPalette
//   undefined4 g_GlobalPalette[1]
//   undefined4 g_GlobalPalette[1]+1

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(CAlphaBitmap *this_ptr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = this_ptr->ptrAct;
  puVar3 = g_Hardware32BitPalette;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(char *)puVar3 = (char)*puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
    puVar3 = (uint *)((int)puVar3 + 1);
  }
  return;
}


// Assembly code:
// 00410cf0: PUSH ESI
//   Label: engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0
// 00410cf1: PUSH EDI
// 00410cf2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00410cf6: MOV ECX,0x400
// 00410cfb: MOV EDI,0x2d01924
//   XREF to: 02d01924 (DATA)
// 00410d00: MOV ESI,dword ptr [ESI + 0x8]
// 00410d03: PUSH EDI
//   XREF to: 02d01924 (DATA)
// 00410d04: MOV EAX,ECX
// 00410d06: SHR ECX,0x2
// 00410d09: MOVSD.REP ES:EDI,ESI
//   XREF to: 02d01924 (WRITE)
//   XREF to: 02d01928 (WRITE)
// 00410d0b: MOV CL,AL
// 00410d0d: AND CL,0x3
// 00410d10: MOVSB.REP ES:EDI,ESI
//   XREF to: 02d01924 (WRITE)
//   XREF to: 02d01928 (WRITE)
//   XREF to: 02d01929 (WRITE)
// 00410d12: POP EDI
// 00410d13: POP EDI
// 00410d14: POP ESI
// 00410d15: RET
