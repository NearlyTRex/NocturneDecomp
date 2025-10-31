// Name: core_morph.cpp_FUN_0052ca90
// Address: 0052ca90
// Address Range: [[0052ca90, 0052cc08]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052ca90()
// Cross-references:
//   core_morph.cpp_Select1stModel_Select2ndModel_Loading_FUN_0052bcb0 (0052bcb0) at 0052c4c0 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0063a537
//   undefined4 DAT_0063a53f
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CSpotView* g_CSpotViewPtr = 03f6b9e0
//   CDemonRenderer g_CDemonRendererInstance
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   CSpotView g_CSpotViewInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_morph.cpp_MorphModelRotatePointsTwice_FUN_0052bae0
//   core_stairs.cpp_FUN_005b9620
//   core_stairs.cpp_FUN_005b9670
//   core_stairs.cpp_FUN_005b9a20
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_morph.cpp_FUN_0052ca90(undefined4 param_1) */

void core_morph_cpp_FUN_0052ca90(void)

{
  int iVar1;
  CGame *n2;
  
  n2 = (CGame *)0x0;
  core_stairs_cpp_FUN_005b9620();
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,n2);
  while( true ) {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,4);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    core_stairs_cpp_FUN_005b9a20();
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&g_ZeroVector);
    core_morph_cpp_MorphModelRotatePointsTwice_FUN_0052bae0();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_stairs_cpp_FUN_005b9670();
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar1 != 0) break;
    (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
    (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x33);
    (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x34);
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}


// Assembly code:
// 0052ca90: PUSH EBX
//   Label: core_morph.cpp_FUN_0052ca90
// 0052ca91: PUSH ESI
// 0052ca92: PUSH EDI
// 0052ca93: PUSH EBP
// 0052ca94: MOV EBP,ESP
// 0052ca96: SUB ESP,0x8
// 0052ca99: AND ESP,0xfffffff8
// 0052ca9c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052ca9f: PUSH 0x1f
// 0052caa1: MOV ECX,dword ptr [0x0068416c]
//   XREF to: 03f6b9e0 (PARAM)
//   XREF to: 0068416c (READ)
// 0052caa7: XOR EDX,EDX
// 0052caa9: PUSH ECX
//   XREF to: 03f6b9e0 (DATA)
// 0052caaa: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0052caae: CALL core_stairs.cpp_FUN_005b9620
//   XREF to: 005b9620 (UNCONDITIONAL_CALL)
// 0052cab3: ADD ESP,0x8
// 0052cab6: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0052cabc: PUSH EBX
//   XREF to: 02d81a9c (DATA)
// 0052cabd: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 0052cac2: ADD ESP,0x4
// 0052cac5: FLD float ptr [ESP + 0x4]
//   Label: LAB_0052cac5
//   XREF to: Stack[-0x14] (READ)
// 0052cac9: FLDZ
// 0052cacb: FCOMPP
// 0052cacd: FNSTSW AX
// 0052cacf: SAHF
// 0052cad0: JA 0x0052cbf2
//   XREF to: 0052cbf2 (CONDITIONAL_JUMP)
// 0052cad6: FLD float ptr [ESP + 0x4]
//   Label: LAB_0052cad6
//   XREF to: Stack[-0x14] (READ)
// 0052cada: FLD1
// 0052cadc: FCOMPP
// 0052cade: FNSTSW AX
// 0052cae0: SAHF
// 0052cae1: JNC 0x0052caeb
//   XREF to: 0052caeb (CONDITIONAL_JUMP)
// 0052cae3: MOV dword ptr [ESP + 0x4],0x3f800000
//   XREF to: Stack[-0x14] (WRITE)
// 0052caeb: MOV EAX,[0x00679398]
//   Label: LAB_0052caeb
//   XREF to: 00679398 (READ)
// 0052caf0: PUSH 0x4
// 0052caf2: DEC EAX
// 0052caf3: PUSH EAX
// 0052caf4: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0052caf9: DEC EAX
// 0052cafa: PUSH EAX
// 0052cafb: PUSH 0x0
// 0052cafd: PUSH 0x0
// 0052caff: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 0052cb04: ADD ESP,0x14
// 0052cb07: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 0052cb0c: MOV EDX,dword ptr [0x0068416c]
//   XREF to: 03f6b9e0 (PARAM)
//   XREF to: 0068416c (READ)
// 0052cb12: PUSH EDX
//   XREF to: 03f6b9e0 (DATA)
// 0052cb13: CALL core_stairs.cpp_FUN_005b9a20
//   XREF to: 005b9a20 (UNCONDITIONAL_CALL)
// 0052cb18: ADD ESP,0x4
// 0052cb1b: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0052cb20: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052cb26: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0052cb27: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0052cb2c: ADD ESP,0x8
// 0052cb2f: PUSH dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0052cb33: PUSH ESI
// 0052cb34: CALL core_morph.cpp_MorphModelRotatePointsTwice_FUN_0052bae0
//   XREF to: 0052bae0 (UNCONDITIONAL_CALL)
// 0052cb39: ADD ESP,0x8
// 0052cb3c: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0052cb41: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0052cb47: PUSH EBX
//   XREF to: 02d81a9c (DATA)
// 0052cb48: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 0052cb4d: ADD ESP,0x4
// 0052cb50: PUSH 0x1f
// 0052cb52: MOV EDI,dword ptr [0x0068416c]
//   XREF to: 0068416c (READ)
// 0052cb58: PUSH EDI
//   XREF to: 03f6b9e0 (DATA)
// 0052cb59: CALL core_stairs.cpp_FUN_005b9670
//   XREF to: 005b9670 (UNCONDITIONAL_CALL)
// 0052cb5e: ADD ESP,0x8
// 0052cb61: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0052cb66: PUSH 0x1
// 0052cb68: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0052cb6a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0052cb6b: CALL dword ptr [EDX + 0x4]
// 0052cb6e: ADD ESP,0x8
// 0052cb71: TEST EAX,EAX
// 0052cb73: JNZ 0x0052cbfd
//   XREF to: 0052cbfd (CONDITIONAL_JUMP)
// 0052cb79: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0052cb7e: PUSH 0x38
// 0052cb80: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0052cb86: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0052cb8b: FMUL double ptr [0x0063a537]
//   XREF to: 0063a537 (READ)
// 0052cb91: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0052cb92: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0052cb94: FSTP float ptr [ESP + 0x8]
// 0052cb98: CALL dword ptr [EDX]
// 0052cb9a: ADD ESP,0x8
// 0052cb9d: TEST EAX,EAX
// 0052cb9f: JZ 0x0052cbad
//   XREF to: 0052cbad (CONDITIONAL_JUMP)
// 0052cba1: FLD float ptr [ESP]
// 0052cba4: FMUL double ptr [0x0063a53f]
//   XREF to: 0063a53f (READ)
// 0052cbaa: FSTP float ptr [ESP]
// 0052cbad: PUSH 0x33
//   Label: LAB_0052cbad
// 0052cbaf: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0052cbb4: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0052cbb5: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0052cbb7: CALL dword ptr [EDX]
// 0052cbb9: ADD ESP,0x8
// 0052cbbc: TEST EAX,EAX
// 0052cbbe: JZ 0x0052cbcb
//   XREF to: 0052cbcb (CONDITIONAL_JUMP)
// 0052cbc0: FLD float ptr [ESP + 0x4]
// 0052cbc4: FSUB float ptr [ESP]
// 0052cbc7: FSTP float ptr [ESP + 0x4]
// 0052cbcb: PUSH 0x34
//   Label: LAB_0052cbcb
// 0052cbcd: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0052cbd2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0052cbd3: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0052cbd5: CALL dword ptr [EDX]
// 0052cbd7: ADD ESP,0x8
// 0052cbda: TEST EAX,EAX
// 0052cbdc: JZ 0x0052cac5
//   XREF to: 0052cac5 (CONDITIONAL_JUMP)
// 0052cbe2: FLD float ptr [ESP + 0x4]
// 0052cbe6: FADD float ptr [ESP]
// 0052cbe9: FSTP float ptr [ESP + 0x4]
// 0052cbed: JMP 0x0052cac5
//   XREF to: 0052cac5 (UNCONDITIONAL_JUMP)
// 0052cbf2: XOR EDI,EDI
//   Label: LAB_0052cbf2
// 0052cbf4: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0052cbf8: JMP 0x0052cad6
//   XREF to: 0052cad6 (UNCONDITIONAL_JUMP)
// 0052cbfd: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_0052cbfd
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0052cc02: MOV ESP,EBP
// 0052cc04: POP EBP
// 0052cc05: POP EDI
// 0052cc06: POP ESI
// 0052cc07: POP EBX
// 0052cc08: RET
