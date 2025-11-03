// Name: core_game.cpp_CGame_beginFadeIn_FUN_004e0920
// Address: 004e0920
// Address Range: [[004e07d5, 004e091b] [004e0920, 004e095b]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_beginFadeIn_FUN_004e0920(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db29e [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c0a6 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0062c92d = 0.5
//   float FLOAT_0065e9b4 = 256
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CScript* g_CScriptPtr = 0310f858
//   undefined4 DAT_02d831ec
//   undefined4 DAT_02d831f0
//   undefined4 DAT_02d831f4
//   undefined4 DAT_02d831f8
//   CDemonCamera g_CDemonCameraInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
//   core_game.cpp_FUN_004e09a0

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_beginFadeIn_FUN_004e0920(CGame *this_ptr)

{
  DAT_02d831ec = 1;
  DAT_02d831f4 = g_WindowWidth / 2;
  DAT_02d831f8 = g_WindowHeight / 2;
  DAT_02d831f0 = 0;
  core_game_cpp_FUN_004e09a0();
  return;
}


// Assembly code:
// 004e07d5: MOV EAX,EDX
//   Label: LAB_004e07d5
// 004e07d7: MOV EBX,dword ptr [EDX + 0x154]
// 004e07dd: MOV EDX,ESP
// 004e07df: PUSH EDX
// 004e07e0: PUSH EAX
// 004e07e1: CALL dword ptr [EBX + 0x14]
// 004e07e4: LEA EDX,[EAX + 0xc]
// 004e07e7: FLD float ptr [EAX]
// 004e07e9: FADD float ptr [EDX]
// 004e07eb: ADD ESP,0x8
// 004e07ee: FST float ptr [ESP + 0x54]
// 004e07f2: FLD float ptr [EAX + 0x4]
// 004e07f5: FADD float ptr [EDX + 0x4]
// 004e07f8: FXCH
// 004e07fa: FLD float ptr [0x0062c92d]
//   XREF to: 0062c92d (READ)
// 004e0800: FXCH
// 004e0802: FMUL ST1
// 004e0804: FXCH ST2
// 004e0806: FST float ptr [ESP + 0x58]
// 004e080a: FLD float ptr [EAX + 0x8]
// 004e080d: FADD float ptr [EDX + 0x8]
// 004e0810: FXCH
// 004e0812: FMUL ST2
// 004e0814: FXCH
// 004e0816: FST float ptr [ESP + 0x5c]
// 004e081a: FMULP ST2
// 004e081c: LEA EAX,[ESP + 0x30]
// 004e0820: FXCH ST2
// 004e0822: FSTP float ptr [ESP + 0x30]
// 004e0826: PUSH EAX
// 004e0827: LEA EAX,[ESP + 0x28]
// 004e082b: FXCH
// 004e082d: FSTP float ptr [ESP + 0x38]
// 004e0831: PUSH EAX
// 004e0832: MOV EAX,[0x00680d50]
//   XREF to: 00680d50 (READ)
// 004e0837: FSTP float ptr [ESP + 0x40]
// 004e083b: MOV ECX,dword ptr [EAX + 0xc]
// 004e083e: PUSH ECX
// 004e083f: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004e0844: ADD ESP,0xc
// 004e0847: LEA EBX,[ESP + 0x18]
// 004e084b: LEA EAX,[ESP + 0x24]
// 004e084f: FLD float ptr [EAX]
// 004e0851: FMUL float ptr [0x0065e9b4]
//   XREF to: 0065e9b4 (READ)
// 004e0857: FISTP dword ptr [EBX]
// 004e0859: FLD float ptr [EAX + 0x4]
// 004e085c: FMUL float ptr [0x0065e9b4]
//   XREF to: 0065e9b4 (READ)
// 004e0862: FISTP dword ptr [EBX + 0x4]
// 004e0865: FLD float ptr [EAX + 0x8]
// 004e0868: FMUL float ptr [0x0065e9b4]
//   XREF to: 0065e9b4 (READ)
// 004e086e: FISTP dword ptr [EBX + 0x8]
// 004e0871: LEA EAX,[ESP + 0x18]
// 004e0875: PUSH EAX
// 004e0876: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 004e087b: LEA ESI,[ESP + 0x50]
// 004e087f: LEA EDI,[ESP + 0x44]
// 004e0883: CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
//   XREF to: 0044d7d0 (UNCONDITIONAL_CALL)
// 004e0888: LEA ESI,[ESP + 0x50]
// 004e088c: ADD ESP,0x8
// 004e088f: MOVSD ES:EDI,ESI
// 004e0890: MOVSD ES:EDI,ESI
// 004e0891: MOVSD ES:EDI,ESI
// 004e0892: CMP dword ptr [ESP + 0x44],0x0
// 004e0897: JZ 0x004e09b6
//   XREF to: 004e09b6 (CONDITIONAL_JUMP)
// 004e089d: MOV EAX,dword ptr [ESP + 0x3c]
// 004e08a1: MOV EDX,EAX
// 004e08a3: SAR EDX,0x1f
// 004e08a6: SHL EDX,0x10
// 004e08a9: SBB EAX,EDX
// 004e08ab: SAR EAX,0x10
// 004e08ae: MOV [0x02d831f4],EAX
//   XREF to: 02d831f4 (WRITE)
// 004e08b3: MOV EAX,dword ptr [ESP + 0x40]
// 004e08b7: MOV EDX,EAX
// 004e08b9: SAR EDX,0x1f
// 004e08bc: SHL EDX,0x10
// 004e08bf: SBB EAX,EDX
// 004e08c1: SAR EAX,0x10
// 004e08c4: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004e08ca: MOV [0x02d831f8],EAX
//   XREF to: 02d831f8 (WRITE)
// 004e08cf: CMP ESI,0x1e0
// 004e08d5: JLE 0x004e09b6
//   XREF to: 004e09b6 (CONDITIONAL_JUMP)
// 004e08db: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004e08e1: MOV EDX,dword ptr [0x02d831f4]
//   XREF to: 02d831f4 (READ)
// 004e08e7: IMUL EDX,EDI
// 004e08ea: MOV EBX,0x280
// 004e08ef: MOV EAX,EDX
// 004e08f1: SAR EDX,0x1f
// 004e08f4: IDIV EBX
// 004e08f6: MOV EDX,dword ptr [0x02d831f8]
//   XREF to: 02d831f8 (READ)
// 004e08fc: IMUL EDX,ESI
// 004e08ff: MOV EBX,0x1e0
// 004e0904: MOV [0x02d831f4],EAX
//   XREF to: 02d831f4 (WRITE)
// 004e0909: MOV EAX,EDX
// 004e090b: SAR EDX,0x1f
// 004e090e: IDIV EBX
// 004e0910: MOV [0x02d831f8],EAX
//   XREF to: 02d831f8 (WRITE)
// 004e0915: ADD ESP,0x60
// 004e0918: POP EDI
// 004e0919: POP ESI
// 004e091a: POP EBX
// 004e091b: RET
// 004e0920: MOV dword ptr [0x02d831ec],0x1
//   Label: core_game.cpp_CGame_beginFadeIn_FUN_004e0920
//   XREF to: 02d831ec (WRITE)
// 004e092a: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004e0930: MOV EAX,EDX
// 004e0932: SAR EDX,0x1f
// 004e0935: SUB EAX,EDX
// 004e0937: SAR EAX,0x1
// 004e0939: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004e093f: MOV [0x02d831f4],EAX
//   XREF to: 02d831f4 (WRITE)
// 004e0944: MOV EAX,EDX
// 004e0946: SAR EDX,0x1f
// 004e0949: SUB EAX,EDX
// 004e094b: SAR EAX,0x1
// 004e094d: XOR ECX,ECX
// 004e094f: MOV dword ptr [0x02d831f0],ECX
//   XREF to: 02d831f0 (WRITE)
// 004e0955: MOV [0x02d831f8],EAX
//   XREF to: 02d831f8 (WRITE)
// 004e095a: JMP 0x004e09a0
//   XREF to: 004e09a0 (UNCONDITIONAL_CALL)
