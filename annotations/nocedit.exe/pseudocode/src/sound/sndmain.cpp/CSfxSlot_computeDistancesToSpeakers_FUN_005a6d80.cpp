// Name: sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005a6d80
// Address: 005a6d80
// Address Range: [[005a6d80, 005a6dec]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005a6d80(CSfxSlot * this_ptr)
// Cross-references:
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 (005a7100) at 005a7259 [UNCONDITIONAL_CALL]
// Globals:
//   int g_AudioChannelCount = 0x2
//   double[8] g_VirtualSpeakerXPositions
//   undefined4 g_VirtualSpeakerXPositions[1]
//   double[8] g_VirtualSpeakerYPositions
//   undefined4 g_VirtualSpeakerYPositions[1]
//   double[8] g_VirtualSpeakerZPositions
//   undefined4 g_VirtualSpeakerZPositions[1]

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005a6d80(CSfxSlot *this_ptr)

{
  int in_EAX;
  CSfxSlot *pCVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar3 = 0;
  if (0 < g_AudioChannelCount) {
    iVar2 = 0;
    pCVar1 = this_ptr;
    do {
      fVar4 = (float10)(this_ptr->options).position.x -
              (float10)*(double *)((int)g_VirtualSpeakerXPositions + iVar2);
      fVar5 = (float10)(this_ptr->options).position.y -
              (float10)*(double *)((int)g_VirtualSpeakerYPositions + iVar2);
      fVar6 = (float10)(this_ptr->options).position.z -
              (float10)*(double *)((int)g_VirtualSpeakerZPositions + iVar2);
      iVar2 = iVar2 + 8;
      iVar3 = iVar3 + 1;
      pCVar1->distance_to_speakers[0] = (float)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      pCVar1 = (CSfxSlot *)&(pCVar1->options).position;
    } while (iVar3 < g_AudioChannelCount);
  }
  return in_EAX;
}


// Assembly code:
// 005a6d80: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005a6d80
// 005a6d81: PUSH ESI
// 005a6d82: PUSH EDI
// 005a6d83: SUB ESP,0x18
// 005a6d86: MOV EDI,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005a6d8c: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005a6d90: XOR EBX,EBX
// 005a6d92: TEST EDI,EDI
// 005a6d94: JLE 0x005a6de0
//   XREF to: 005a6de0 (CONDITIONAL_JUMP)
// 005a6d96: MOV ECX,ESI
// 005a6d98: XOR EDX,EDX
// 005a6d9a: FLD double ptr [ESI + 0x4]
//   Label: LAB_005a6d9a
// 005a6d9d: FSUB double ptr [EDX + 0x3f69328]
//   XREF to: 03f69328 (READ)
//   XREF to: 03f69330 (READ)
// 005a6da3: FMUL ST0
// 005a6da5: FLD double ptr [ESI + 0xc]
// 005a6da8: FSUB double ptr [EDX + 0x3f69368]
//   XREF to: 03f69368 (READ)
//   XREF to: 03f69370 (READ)
// 005a6dae: FMUL ST0
// 005a6db0: FLD double ptr [ESI + 0x14]
// 005a6db3: FXCH
// 005a6db5: FADDP ST2,ST0
// 005a6db7: FSUB double ptr [EDX + 0x3f693a8]
//   XREF to: 03f693a8 (READ)
//   XREF to: 03f693b0 (READ)
// 005a6dbd: FMUL ST0
// 005a6dbf: FADDP
// 005a6dc1: FSQRT
// 005a6dc3: ADD ECX,0x4
// 005a6dc6: ADD EDX,0x8
// 005a6dc9: INC EBX
// 005a6dca: FSTP float ptr [ECX + 0x7c]
// 005a6dcd: CMP EBX,EDI
// 005a6dcf: JL 0x005a6d9a
//   XREF to: 005a6d9a (CONDITIONAL_JUMP)
// 005a6dd1: LEA EAX,[EAX]
// 005a6dd7: LEA EDX,[EDX]
// 005a6ddd: LEA EAX,[EAX]
// 005a6de0: MOV dword ptr [0x00681b18],EDI
//   Label: LAB_005a6de0
//   XREF to: 00681b18 (WRITE)
// 005a6de6: ADD ESP,0x18
// 005a6de9: POP EDI
// 005a6dea: POP ESI
// 005a6deb: POP EBX
// 005a6dec: RET
