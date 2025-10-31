// Name: wincore_windll.cpp_setColorTable16_FUN_005b7579
// Address: 005b7579
// Address Range: [[005b7579, 005b75ae]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_setColorTable16_FUN_005b7579(void)
// Globals:
//   ushort[256] g_ColorTable16
//   char[768] g_SourcePaletteData
//   int g_UseExternalRenderer
//   APIDLL_setColorTable16* g_APIDLL_setColorTable16
// Function calls:
//   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0

#include "nocturne.h"

int __cdecl wincore_windll_cpp_setColorTable16_FUN_005b7579(void)

{
  int iVar1;
  undefined4 uStack0000000c;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_setColorTable16)(g_SourcePaletteData,g_ColorTable16);
  if (iVar1 != 0) {
    uStack0000000c = 0x5b75ab;
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0();
  }
  return iVar1;
}


// Assembly code:
// 005b7579: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_setColorTable16_FUN_005b7579
// 005b757f: NOP
// 005b7580: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b7587: JNZ 0x005b758c
//   XREF to: 005b758c (CONDITIONAL_JUMP)
// 005b7589: XOR EAX,EAX
// 005b758b: RET
// 005b758c: PUSH EBX
//   Label: LAB_005b758c
// 005b758d: PUSH 0x2d01020
//   XREF to: 02d01020 (DATA)
// 005b7592: PUSH 0x2d01f48
//   XREF to: 02d01f48 (DATA)
// 005b7597: CALL dword ptr [g_APIDLL_setColorTable16]
//   XREF to: 03f6b900 (READ)
// 005b759d: ADD ESP,0x8
// 005b75a0: MOV EBX,EAX
// 005b75a2: TEST EAX,EAX
// 005b75a4: JZ 0x005b75ab
//   XREF to: 005b75ab (CONDITIONAL_JUMP)
// 005b75a6: CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
//   XREF to: 004f41c0 (UNCONDITIONAL_CALL)
// 005b75ab: MOV EAX,EBX
//   Label: LAB_005b75ab
// 005b75ad: POP EBX
// 005b75ae: RET
