// Name: core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0
// Address: 00575df0
// Address Range: [[00575df0, 00575e32]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0(CDemonSet * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_clear_FUN_005693c0 (005693c0) at 00569405 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0 (00575bc0) at 00575bca [UNCONDITIONAL_CALL]
// Globals:
//   CZThumb[1500] g_CZThumbPool
//   undefined4 DAT_03347130
//   undefined4 DAT_033471f8
// Function calls:
//   core_setdir.cpp_CZThumb_free_FUN_00574b50

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_freeThumbs_FUN_00575df0(CDemonSet *this_ptr)

{
  CZThumb *this_ptr_00;
  CZThumb *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = g_CZThumbPool;
  do {
    pCVar1 = pCVar1 + 6;
    this_ptr_00 = g_CZThumbPool + iVar2 * 6;
    do {
      core_setdir_cpp_CZThumb_free_FUN_00574b50(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != pCVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xfa);
  return;
}


// Assembly code:
// 00575df0: PUSH EBX
//   Label: core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0
// 00575df1: PUSH ESI
// 00575df2: PUSH EDI
// 00575df3: PUSH EBP
// 00575df4: MOV EBP,0x3347108
//   XREF to: 03347108 (DATA)
// 00575df9: XOR EDI,EDI
// 00575dfb: ADD EBP,0xf0
// 00575e01: IMUL EBX,EDI,0xf0
//   Label: LAB_00575e01
// 00575e07: MOV ESI,EBP
// 00575e09: ADD EBX,0x3347108
//   XREF to: 033471f8 (PARAM)
//   XREF to: 03347108 (PARAM)
// 00575e0f: PUSH EBX
//   Label: LAB_00575e0f
//   XREF to: 03347108 (DATA)
//   XREF to: 03347130 (DATA)
//   XREF to: 033471f8 (DATA)
// 00575e10: CALL core_setdir.cpp_CZThumb_free_FUN_00574b50
//   XREF to: 00574b50 (UNCONDITIONAL_CALL)
// 00575e15: ADD EBX,0x28
//   XREF to: 03347130 (PARAM)
// 00575e18: ADD ESP,0x4
// 00575e1b: CMP EBX,ESI
// 00575e1d: JNZ 0x00575e0f
//   XREF to: 00575e0f (CONDITIONAL_JUMP)
// 00575e1f: INC EDI
// 00575e20: ADD EBP,0xf0
// 00575e26: CMP EDI,0xfa
// 00575e2c: JL 0x00575e01
//   XREF to: 00575e01 (CONDITIONAL_JUMP)
// 00575e2e: POP EBP
// 00575e2f: POP EDI
// 00575e30: POP ESI
// 00575e31: POP EBX
// 00575e32: RET
