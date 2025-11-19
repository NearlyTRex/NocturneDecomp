// Name: sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_005a5530
// Address: 005a5530
// Address Range: [[005a5530, 005a561b]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_005a5530(void)
// Cross-references:
//   sound_sndmain.cpp_pollAllSfxSlots_FUN_005acdb0 (005acdb0) at 005acdc4 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90 (005aca90) at 005acaf9 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0064fab7 = 0.5
//   int g_AudioChannelCount = 0x2
//   double DOUBLE_00681b38 = 1
//   CVector3d g_Cached3DListenerPos
//   undefined4 g_Cached3DListenerPos.y
//   undefined4 g_Cached3DListenerPos.z
//   CVector3d g_Cached3DListenerOrientFront
//   undefined4 g_Cached3DListenerOrientFront.y
//   undefined4 g_Cached3DListenerOrientFront.z
//   double[8] g_VirtualSpeakerXPositions
//   undefined4 g_VirtualSpeakerXPositions[1]
//   double[8] g_VirtualSpeakerYPositions
//   undefined4 g_VirtualSpeakerYPositions[1]
//   double[8] g_VirtualSpeakerZPositions
//   undefined4 g_VirtualSpeakerZPositions[1]

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_005a5530(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  
  dVar3 = g_Cached3DListenerPos.z;
  dVar2 = g_Cached3DListenerPos.y;
  dVar1 = g_Cached3DListenerPos.x;
  if (g_AudioChannelCount == 2) {
    dVar1 = DOUBLE_00681b38 * DOUBLE_0064fab7;
    g_VirtualSpeakerXPositions[0] =
         g_Cached3DListenerPos.x - g_Cached3DListenerOrientFront.x * dVar1;
    g_VirtualSpeakerYPositions[0] =
         g_Cached3DListenerPos.y - g_Cached3DListenerOrientFront.y * dVar1;
    g_VirtualSpeakerZPositions[0] =
         g_Cached3DListenerPos.z - g_Cached3DListenerOrientFront.z * dVar1;
    g_VirtualSpeakerXPositions[1] =
         g_Cached3DListenerPos.x + g_Cached3DListenerOrientFront.x * dVar1;
    g_VirtualSpeakerYPositions[1] =
         g_Cached3DListenerPos.y + g_Cached3DListenerOrientFront.y * dVar1;
    g_VirtualSpeakerZPositions[1] =
         g_Cached3DListenerPos.z + g_Cached3DListenerOrientFront.z * dVar1;
    return;
  }
  if (0 < g_AudioChannelCount) {
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 8;
      *(double *)((int)g_VirtualSpeakerXPositions + iVar4) = dVar1;
      *(double *)((int)g_VirtualSpeakerYPositions + iVar4) = dVar2;
      *(double *)((int)g_VirtualSpeakerZPositions + iVar4) = dVar3;
      iVar4 = iVar5;
    } while (SBORROW4(iVar5,g_AudioChannelCount * 8) != iVar5 + g_AudioChannelCount * -8 < 0);
  }
  return;
}


// Assembly code:
// 005a5530: SUB ESP,0x10
//   Label: sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_005a5530
// 005a5533: MOV ECX,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005a5539: CMP ECX,0x2
// 005a553c: JZ 0x005a558e
//   XREF to: 005a558e (CONDITIONAL_JUMP)
// 005a553e: TEST ECX,ECX
// 005a5540: JLE 0x005a5584
//   XREF to: 005a5584 (CONDITIONAL_JUMP)
// 005a5542: FLD double ptr [0x03f68840]
//   XREF to: 03f68840 (READ)
// 005a5548: FLD double ptr [0x03f68838]
//   XREF to: 03f68838 (READ)
// 005a554e: LEA EDX,[ECX*0x8 + 0x0]
// 005a5555: XOR EAX,EAX
// 005a5557: FLD double ptr [0x03f68830]
//   XREF to: 03f68830 (READ)
// 005a555d: FLD ST0
//   Label: LAB_005a555d
// 005a555f: FLD ST2
// 005a5561: ADD EAX,0x8
// 005a5564: FLD ST4
// 005a5566: FXCH ST2
// 005a5568: FSTP double ptr [EAX + 0x3f69320]
//   XREF to: 03f69328 (WRITE)
//   XREF to: 03f69330 (WRITE)
// 005a556e: FSTP double ptr [EAX + 0x3f69360]
//   XREF to: 03f69368 (WRITE)
//   XREF to: 03f69370 (WRITE)
// 005a5574: FSTP double ptr [EAX + 0x3f693a0]
//   XREF to: 03f693a8 (WRITE)
//   XREF to: 03f693b0 (WRITE)
// 005a557a: CMP EAX,EDX
// 005a557c: JL 0x005a555d
//   XREF to: 005a555d (CONDITIONAL_JUMP)
// 005a557e: FSTP ST0
// 005a5580: FSTP ST0
// 005a5582: FSTP ST0
// 005a5584: MOV dword ptr [0x00681b18],ECX
//   Label: LAB_005a5584
//   XREF to: 00681b18 (WRITE)
// 005a558a: ADD ESP,0x10
// 005a558d: RET
// 005a558e: FLD double ptr [0x00681b38]
//   Label: LAB_005a558e
//   XREF to: 00681b38 (READ)
// 005a5594: FMUL double ptr [0x0064fab7]
//   XREF to: 0064fab7 (READ)
// 005a559a: FLD double ptr [0x03f68860]
//   XREF to: 03f68860 (READ)
// 005a55a0: FMUL ST1
// 005a55a2: FLD double ptr [0x03f68868]
//   XREF to: 03f68868 (READ)
// 005a55a8: FMUL ST2
// 005a55aa: FLD double ptr [0x03f68870]
//   XREF to: 03f68870 (READ)
// 005a55b0: FMULP ST3
// 005a55b2: FLD double ptr [0x03f68830]
//   XREF to: 03f68830 (READ)
// 005a55b8: FLD double ptr [0x03f68838]
//   XREF to: 03f68838 (READ)
// 005a55be: FLD double ptr [0x03f68840]
//   XREF to: 03f68840 (READ)
// 005a55c4: FXCH ST2
// 005a55c6: FSUB ST0,ST4
// 005a55c8: FXCH
// 005a55ca: FSUB ST0,ST3
// 005a55cc: FXCH ST2
// 005a55ce: FSUB ST0,ST5
// 005a55d0: FLD double ptr [0x03f68830]
//   XREF to: 03f68830 (READ)
// 005a55d6: FADDP ST5,ST0
// 005a55d8: FLD double ptr [0x03f68838]
//   XREF to: 03f68838 (READ)
// 005a55de: FADDP ST4,ST0
// 005a55e0: FLD double ptr [0x03f68840]
//   XREF to: 03f68840 (READ)
// 005a55e6: FADDP ST6,ST0
// 005a55e8: FXCH
// 005a55ea: FSTP double ptr [0x03f69328]
//   XREF to: 03f69328 (WRITE)
// 005a55f0: FXCH
// 005a55f2: FSTP double ptr [0x03f69368]
//   XREF to: 03f69368 (WRITE)
// 005a55f8: FSTP double ptr [0x03f693a8]
//   XREF to: 03f693a8 (WRITE)
// 005a55fe: FXCH
// 005a5600: FSTP double ptr [0x03f69330]
//   XREF to: 03f69330 (WRITE)
// 005a5606: FSTP double ptr [0x03f69370]
//   XREF to: 03f69370 (WRITE)
// 005a560c: FSTP double ptr [0x03f693b0]
//   XREF to: 03f693b0 (WRITE)
// 005a5612: MOV dword ptr [0x00681b18],ECX
//   XREF to: 00681b18 (WRITE)
// 005a5618: ADD ESP,0x10
// 005a561b: RET
