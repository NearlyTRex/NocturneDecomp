// Name: sound_sndmain.cpp_allocateHwSample_FUN_005a5620
// Address: 005a5620
// Address Range: [[005a5620, 005a56b2]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_allocateHwSample_FUN_005a5620(int bits_per_sample, int channel_count, int sample_rate, int sample_count)
// Globals:
//   TerminatedCString s_allocateHwSample_failed_0064fabf
//   int g_LastSampleAccessIndex
//   CSfxSample[64] g_SfxSamples
//   undefined4 DAT_03f62980
//   undefined4 DAT_03f629ac
//   undefined4 DAT_03f62afc
//   undefined4 DAT_03f62b00
//   undefined4 DAT_03f62b04
//   CSoundDevice* g_CSoundDevicePtr
// Function calls:
//   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_allocateHwSample_FUN_005a5620
          (int bits_per_sample,int channel_count,int sample_rate,int sample_count)

{
  int iVar1;
  int iVar2;
  
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    do {
      iVar1 = (*g_CSoundDevicePtr->vtable->allocateSample)
                        (g_CSoundDevicePtr,bits_per_sample,channel_count,sample_rate,sample_count);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = 0;
      iVar1 = g_LastSampleAccessIndex;
      do {
        iVar1 = iVar1 + 1;
        if (0x3f < iVar1) {
          iVar1 = 0;
        }
        if (((g_SfxSamples[iVar1].ref_count == 0) && (g_SfxSamples[iVar1].buffer_id != 0)) &&
           (g_SfxSamples[iVar1].taken == 0)) {
          sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(g_SfxSamples + iVar1);
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40);
    } while (iVar2 < 0x40);
    sound_sndmain_cpp_logSoundError_FUN_005adba0("allocateHwSample - failed\n");
  }
  return 0;
}


// Assembly code:
// 005a5620: PUSH EBX
//   Label: sound_sndmain.cpp_allocateHwSample_FUN_005a5620
// 005a5621: PUSH ESI
// 005a5622: PUSH EDI
// 005a5623: PUSH EBP
// 005a5624: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a5628: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a562c: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a5630: CMP dword ptr [0x03f69268],0x0
//   XREF to: 03f69268 (READ)
// 005a5637: JZ 0x005a5689
//   XREF to: 005a5689 (CONDITIONAL_JUMP)
// 005a5639: PUSH EDI
//   Label: LAB_005a5639
// 005a563a: PUSH ESI
// 005a563b: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005a563f: PUSH ECX
// 005a5640: MOV EAX,[0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a5645: PUSH EBP
// 005a5646: MOV EDX,dword ptr [EAX]
// 005a5648: PUSH EAX
// 005a5649: CALL dword ptr [EDX + 0x2c]
// 005a564c: ADD ESP,0x14
// 005a564f: TEST EAX,EAX
// 005a5651: JNZ 0x005a568b
//   XREF to: 005a568b (CONDITIONAL_JUMP)
// 005a5653: MOV EAX,[0x03f62828]
//   XREF to: 03f62828 (READ)
// 005a5658: XOR EBX,EBX
// 005a565a: INC EAX
//   Label: LAB_005a565a
// 005a565b: CMP EAX,0x40
// 005a565e: JL 0x005a5662
//   XREF to: 005a5662 (CONDITIONAL_JUMP)
// 005a5660: XOR EAX,EAX
// 005a5662: IMUL EDX,EAX,0x180
//   Label: LAB_005a5662
// 005a5668: CMP dword ptr [EDX + 0x3f62980],0x0
//   XREF to: 03f62980 (READ)
//   XREF to: 03f62b00 (READ)
// 005a566f: JZ 0x005a5690
//   XREF to: 005a5690 (CONDITIONAL_JUMP)
// 005a5671: INC EBX
//   Label: LAB_005a5671
// 005a5672: CMP EBX,0x40
// 005a5675: JL 0x005a565a
//   XREF to: 005a565a (CONDITIONAL_JUMP)
// 005a5677: CMP EBX,0x40
//   Label: LAB_005a5677
// 005a567a: JL 0x005a5639
//   XREF to: 005a5639 (CONDITIONAL_JUMP)
// 005a567c: PUSH 0x64fabf
//   XREF to: 0064fabf (DATA)
// 005a5681: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a5686: ADD ESP,0x4
// 005a5689: XOR EAX,EAX
//   Label: LAB_005a5689
// 005a568b: POP EBP
//   Label: LAB_005a568b
// 005a568c: POP EDI
// 005a568d: POP ESI
// 005a568e: POP EBX
// 005a568f: RET
// 005a5690: CMP dword ptr [EDX + 0x3f62984],0x0
//   Label: LAB_005a5690
//   XREF to: 03f62b04 (READ)
// 005a5697: JZ 0x005a5671
//   XREF to: 005a5671 (CONDITIONAL_JUMP)
// 005a5699: CMP dword ptr [EDX + 0x3f6297c],0x0
//   XREF to: 03f62afc (READ)
// 005a56a0: JNZ 0x005a5671
//   XREF to: 005a5671 (CONDITIONAL_JUMP)
// 005a56a2: ADD EDX,0x3f6282c
//   XREF to: 03f6282c (DATA)
// 005a56a8: PUSH EDX
//   XREF to: 03f629ac (DATA)
// 005a56a9: CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
//   XREF to: 005a62c0 (UNCONDITIONAL_CALL)
// 005a56ae: ADD ESP,0x4
// 005a56b1: JMP 0x005a5677
//   XREF to: 005a5677 (UNCONDITIONAL_JUMP)
