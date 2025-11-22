// Name: engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
// Address: 00410560
// Address Range: [[00410560, 004105c8]]
// Convention: __cdecl
// Signature: void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
// Cross-references:
//   core_inv.cpp_freeInventory_FUN_004fd510 (004fd510) at 004fd522 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 005087a2 [UNCONDITIONAL_CALL]
//   core_main.c_showPromoScreen_FUN_00508340 (00508340) at 00508523 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showCalibrationTest_FUN_00510ba0 (00510ba0) at 00510c40 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_free_FUN_00529ce0 (00529ce0) at 00529d2b [UNCONDITIONAL_CALL]
//   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540 (00410540) at 00410546 [UNCONDITIONAL_CALL]
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 (004105d0) at 004105e2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_alphabit_cpp_00614702
//   TerminatedCString s_engine_alphabit_cpp_00614719
//   TerminatedCString s_engine_alphabit_cpp_00614730
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap *this_ptr)

{
  if (this_ptr->ptrRaw != (char *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->ptrRaw,"..\\engine\\alphabit.cpp",0x2f);
    this_ptr->ptrRaw = (char *)0x0;
  }
  if (this_ptr->ptrOpa != (char *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->ptrOpa,"..\\engine\\alphabit.cpp",0x33);
    this_ptr->ptrOpa = (char *)0x0;
  }
  if (this_ptr->ptrAct == (uint *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->ptrAct,"..\\engine\\alphabit.cpp",0x37);
  this_ptr->ptrAct = (uint *)0x0;
  return;
}


// Assembly code:
// 00410560: PUSH EBX
//   Label: engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
// 00410561: PUSH ESI
// 00410562: PUSH EBP
// 00410563: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00410567: MOV EDX,dword ptr [EBX]
// 00410569: TEST EDX,EDX
// 0041056b: JNZ 0x00410596
//   XREF to: 00410596 (CONDITIONAL_JUMP)
// 0041056d: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_0041056d
// 00410570: TEST ESI,ESI
// 00410572: JZ 0x0041058b
//   XREF to: 0041058b (CONDITIONAL_JUMP)
// 00410574: PUSH 0x33
// 00410576: PUSH 0x614719
//   XREF to: 00614719 (DATA)
// 0041057b: PUSH ESI
// 0041057c: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00410581: ADD ESP,0xc
// 00410584: MOV dword ptr [EBX + 0x4],0x0
// 0041058b: MOV EBP,dword ptr [EBX + 0x8]
//   Label: LAB_0041058b
// 0041058e: TEST EBP,EBP
// 00410590: JNZ 0x004105ae
//   XREF to: 004105ae (CONDITIONAL_JUMP)
// 00410592: POP EBP
// 00410593: POP ESI
// 00410594: POP EBX
// 00410595: RET
// 00410596: PUSH 0x2f
//   Label: LAB_00410596
// 00410598: PUSH 0x614702
//   XREF to: 00614702 (DATA)
// 0041059d: PUSH EDX
// 0041059e: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004105a3: ADD ESP,0xc
// 004105a6: MOV dword ptr [EBX],0x0
// 004105ac: JMP 0x0041056d
//   XREF to: 0041056d (UNCONDITIONAL_JUMP)
// 004105ae: PUSH 0x37
//   Label: LAB_004105ae
// 004105b0: PUSH 0x614730
//   XREF to: 00614730 (DATA)
// 004105b5: PUSH EBP
// 004105b6: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004105bb: ADD ESP,0xc
// 004105be: MOV dword ptr [EBX + 0x8],0x0
// 004105c5: POP EBP
// 004105c6: POP ESI
// 004105c7: POP EBX
// 004105c8: RET
