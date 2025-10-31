// Name: sound_sndmain.cpp_FUN_005a6d80
// Address: 005a6d80
// Address Range: [[005a6d80, 005a6dec]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a6d80()
// Cross-references:
//   sound_sndmain.cpp_ComputingDelay_FUN_005a7100 (005a7100) at 005a7259 [UNCONDITIONAL_CALL]
// Globals:
//   int g_AudioChannels = 0x2
//   undefined8 DAT_03f69328
//   undefined8 DAT_03f69330
//   undefined8 DAT_03f69368
//   undefined8 DAT_03f69370
//   undefined8 DAT_03f693a8
//   undefined8 DAT_03f693b0

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_FUN_005a6d80(undefined4 param_1) */

undefined8
sound_sndmain_cpp_FUN_005a6d80
          (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar2 = 0;
  if (0 < g_AudioChannels) {
    param_2 = 0;
    iVar1 = param_5;
    do {
      fVar3 = (float10)*(double *)(param_5 + 4) - (float10)*(double *)((int)&DAT_03f69328 + param_2)
      ;
      fVar4 = (float10)*(double *)(param_5 + 0xc) -
              (float10)*(double *)((int)&DAT_03f69368 + param_2);
      fVar5 = (float10)*(double *)(param_5 + 0x14) -
              (float10)*(double *)((int)&DAT_03f693a8 + param_2);
      param_2 = param_2 + 8;
      iVar2 = iVar2 + 1;
      *(float *)(iVar1 + 0x80) = (float)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      iVar1 = iVar1 + 4;
    } while (iVar2 < g_AudioChannels);
  }
  return CONCAT44(param_2,param_1);
}


// Assembly code:
// 005a6d80: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a6d80
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
