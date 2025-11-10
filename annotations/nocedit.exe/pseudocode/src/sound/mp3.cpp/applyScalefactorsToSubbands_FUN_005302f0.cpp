// Name: sound_mp3.cpp_applyScalefactorsToSubbands_FUN_005302f0
// Address: 005302f0
// Address Range: [[005302f0, 0053039d]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_applyScalefactorsToSubbands_FUN_005302f0(float * spectral_samples, int * scalefactor_band_indices, SMpegFrame * frame_info, int channel_or_granule_index)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 (00534d40) at 0053547d [UNCONDITIONAL_CALL]
// Globals:
//   double[64] g_MpegScalefactorTable

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_applyScalefactorsToSubbands_FUN_005302f0
          (float *spectral_samples,int *scalefactor_band_indices,SMpegFrame *frame_info,
          int channel_or_granule_index)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar1 = frame_info->samples_per_granule;
  iVar2 = frame_info->sblimit;
  if (0 < iVar2) {
    iVar7 = 0;
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        piVar6 = (int *)(channel_or_granule_index * 0x80 + iVar7 + (int)scalefactor_band_indices);
        pfVar4 = (float *)((int)spectral_samples + iVar7);
        do {
          *pfVar4 = *pfVar4 * (float)g_MpegScalefactorTable[*piVar6];
          pfVar4[0x20] = pfVar4[0x20] * (float)g_MpegScalefactorTable[*piVar6];
          iVar3 = *piVar6;
          piVar6 = piVar6 + 0x60;
          iVar5 = iVar5 + 1;
          pfVar4[0x40] = pfVar4[0x40] * (float)g_MpegScalefactorTable[iVar3];
          pfVar4 = pfVar4 + 0x60;
        } while (iVar5 < iVar1);
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 < iVar2 << 2);
  }
  return;
}


// Assembly code:
// 005302f0: PUSH EBX
//   Label: sound_mp3.cpp_applyScalefactorsToSubbands_FUN_005302f0
// 005302f1: PUSH ESI
// 005302f2: PUSH EDI
// 005302f3: SUB ESP,0x10
// 005302f6: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 005302fa: MOV ESI,dword ptr [EAX + 0x10]
// 005302fd: MOV EAX,dword ptr [EAX + 0x18]
// 00530300: TEST EAX,EAX
// 00530302: JLE 0x00530397
//   XREF to: 00530397 (CONDITIONAL_JUMP)
// 00530308: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 0053030c: SHL EAX,0x2
// 0053030f: XOR EDI,EDI
// 00530311: SHL EDX,0x7
// 00530314: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00530318: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0053031c: XOR ECX,ECX
//   Label: LAB_0053031c
// 0053031e: TEST ESI,ESI
// 00530320: JLE 0x0053038c
//   XREF to: 0053038c (CONDITIONAL_JUMP)
// 00530322: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00530326: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0053032a: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0053032e: ADD EDX,EDI
// 00530330: ADD EAX,EDI
// 00530332: ADD EDX,EBX
// 00530334: FLD float ptr [EAX]
//   Label: LAB_00530334
// 00530336: MOV EBX,dword ptr [EDX]
// 00530338: FLD ST0
// 0053033a: FMUL double ptr [EBX*0x8 + 0x67e3c0]
//   XREF to: 0067e3c0 (DATA)
// 00530341: FLD float ptr [EAX + 0x80]
// 00530347: FXCH
// 00530349: FSTP ST2
// 0053034b: FXCH
// 0053034d: FSTP float ptr [EAX]
// 0053034f: MOV EBX,dword ptr [EDX]
// 00530351: FLD ST0
// 00530353: FMUL double ptr [EBX*0x8 + 0x67e3c0]
//   XREF to: 0067e3c0 (DATA)
// 0053035a: FLD float ptr [EAX + 0x100]
// 00530360: FXCH
// 00530362: FSTP ST2
// 00530364: FXCH
// 00530366: FSTP float ptr [EAX + 0x80]
// 0053036c: MOV EBX,dword ptr [EDX]
// 0053036e: FLD ST0
// 00530370: FMUL double ptr [EBX*0x8 + 0x67e3c0]
//   XREF to: 0067e3c0 (DATA)
// 00530377: ADD EDX,0x180
// 0053037d: ADD EAX,0x180
// 00530382: INC ECX
// 00530383: FSTP ST1
// 00530385: FSTP float ptr [EAX + -0x80]
// 00530388: CMP ECX,ESI
// 0053038a: JL 0x00530334
//   XREF to: 00530334 (CONDITIONAL_JUMP)
// 0053038c: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_0053038c
//   XREF to: Stack[-0x10] (READ)
// 00530390: ADD EDI,0x4
// 00530393: CMP EDI,EDX
// 00530395: JL 0x0053031c
//   XREF to: 0053031c (CONDITIONAL_JUMP)
// 00530397: ADD ESP,0x10
//   Label: LAB_00530397
// 0053039a: POP EDI
// 0053039b: POP ESI
// 0053039c: POP EBX
// 0053039d: RET
