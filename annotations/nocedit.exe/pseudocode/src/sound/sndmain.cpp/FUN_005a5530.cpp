// Name: sound_sndmain.cpp_FUN_005a5530
// Address: 005a5530
// Address Range: [[005a5530, 005a561b]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a5530()
// Cross-references:
//   sound_sndmain.cpp_CSfxSlot_kill_FUN_005acdb0 (005acdb0) at 005acdc4 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90 (005aca90) at 005acaf9 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0064fab7 = 0.5
//   int g_AudioChannelCount = 0x2
//   double DOUBLE_00681b38 = 1
//   undefined4 DAT_03f68830
//   undefined4 DAT_03f68838
//   undefined4 DAT_03f68840
//   undefined4 DAT_03f68860
//   undefined4 DAT_03f68868
//   undefined4 DAT_03f68870
//   undefined8 DAT_03f69328
//   undefined8 DAT_03f69330
//   undefined8 DAT_03f69368
//   undefined8 DAT_03f69370
//   undefined8 DAT_03f693a8
//   undefined8 DAT_03f693b0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_005a5530(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  
  dVar3 = _DAT_03f68840;
  dVar2 = _DAT_03f68838;
  dVar1 = _DAT_03f68830;
  if (g_AudioChannelCount == 2) {
    dVar1 = DOUBLE_00681b38 * DOUBLE_0064fab7;
    DAT_03f69328 = _DAT_03f68830 - _DAT_03f68860 * dVar1;
    DAT_03f69368 = _DAT_03f68838 - _DAT_03f68868 * dVar1;
    DAT_03f693a8 = _DAT_03f68840 - _DAT_03f68870 * dVar1;
    DAT_03f69330 = _DAT_03f68830 + _DAT_03f68860 * dVar1;
    DAT_03f69370 = _DAT_03f68838 + _DAT_03f68868 * dVar1;
    DAT_03f693b0 = _DAT_03f68840 + _DAT_03f68870 * dVar1;
    return;
  }
  if (0 < g_AudioChannelCount) {
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 8;
      *(double *)((int)&DAT_03f69328 + iVar4) = dVar1;
      *(double *)((int)&DAT_03f69368 + iVar4) = dVar2;
      *(double *)((int)&DAT_03f693a8 + iVar4) = dVar3;
      iVar4 = iVar5;
    } while (SBORROW4(iVar5,g_AudioChannelCount * 8) != iVar5 + g_AudioChannelCount * -8 < 0);
  }
  return;
}


// Assembly code:
// 005a5530: SUB ESP,0x10
//   Label: sound_sndmain.cpp_FUN_005a5530
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
