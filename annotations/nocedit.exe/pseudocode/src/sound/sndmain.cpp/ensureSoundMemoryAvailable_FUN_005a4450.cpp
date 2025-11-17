// Name: sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450
// Address: 005a4450
// Address Range: [[005a4450, 005a4525]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450(int requested_bytes)
// Cross-references:
//   sound_sndmain.cpp_CSfxSample_FUN_005a6170 (005a6170) at 005a6277 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60 (005a7e60) at 005a7f82 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setMemoryBudget_FUN_005aa340 (005aa340) at 005aa354 [UNCONDITIONAL_CALL]
// Globals:
//   int g_MaximumSoundMemoryBudget = 0x400000
//   int g_LastSampleAccessIndex
//   CSfxSample[64] g_SfxSamples
//   undefined4 DAT_03f6294c
//   undefined4 DAT_03f6297c
//   undefined4 DAT_03f62980
//   undefined4 DAT_03f6298c
//   undefined4 DAT_03f629ac
//   undefined4 DAT_03f62acc
//   undefined4 DAT_03f62b0c
// Function calls:
//   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
//   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_005a4450(int requested_bytes)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  do {
    if (*(int *)(g_SfxSamples[0].field5_0x12c + iVar2 + -0xc) != 0) {
      iVar3 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
                        ((CSfxSample *)(g_SfxSamples[0].sample_info.name + iVar2));
      iVar4 = iVar4 + iVar3 * *(int *)(g_SfxSamples[0].field7_0x140 + iVar2 + 0x20);
    }
    iVar2 = iVar2 + 0x180;
  } while (iVar2 != 0x6000);
LAB_005a4473:
  do {
    if (iVar4 + requested_bytes <= g_MaximumSoundMemoryBudget) {
      return 1;
    }
    iVar3 = 0;
    iVar2 = g_LastSampleAccessIndex;
    do {
      iVar2 = iVar2 + 1;
      if (0x3f < iVar2) {
        iVar2 = 0;
      }
      if ((((g_SfxSamples[iVar2].sample_data != (void *)0x0) &&
           (0 < g_SfxSamples[iVar2].streaming_buffer_size)) && (g_SfxSamples[iVar2].ref_count == 0))
         && (g_SfxSamples[iVar2].taken == 0)) {
        iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(g_SfxSamples + iVar2);
        iVar4 = iVar4 - iVar1 * g_SfxSamples[iVar2].streaming_buffer_size;
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(g_SfxSamples + iVar2);
        if (0x3f < iVar3) {
          return 0;
        }
        goto LAB_005a4473;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
    if (0x3f < iVar3) {
      return 0;
    }
  } while( true );
}


// Assembly code:
// 005a4450: PUSH EBX
//   Label: sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450
// 005a4451: PUSH ESI
// 005a4452: PUSH EDI
// 005a4453: PUSH EBP
// 005a4454: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a4458: XOR EBX,EBX
// 005a445a: XOR ESI,ESI
// 005a445c: CMP dword ptr [EBX + 0x3f6294c],0x0
//   Label: LAB_005a445c
//   XREF to: 03f6294c (READ)
//   XREF to: 03f62acc (READ)
// 005a4463: JNZ 0x005a44b6
//   XREF to: 005a44b6 (CONDITIONAL_JUMP)
// 005a4465: ADD EBX,0x180
//   Label: LAB_005a4465
// 005a446b: CMP EBX,0x6000
// 005a4471: JNZ 0x005a445c
//   XREF to: 005a445c (CONDITIONAL_JUMP)
// 005a4473: MOV EBX,dword ptr [0x00681b44]
//   Label: LAB_005a4473
//   XREF to: 00681b44 (READ)
// 005a4479: LEA EAX,[ESI + EBP*0x1]
// 005a447c: CMP EAX,EBX
// 005a447e: JLE 0x005a451c
//   XREF to: 005a451c (CONDITIONAL_JUMP)
// 005a4484: MOV EDX,dword ptr [0x03f62828]
//   XREF to: 03f62828 (READ)
// 005a448a: XOR EBX,EBX
// 005a448c: XOR EDI,EDI
// 005a448e: INC EDX
//   Label: LAB_005a448e
// 005a448f: CMP EDX,0x40
// 005a4492: JL 0x005a4496
//   XREF to: 005a4496 (CONDITIONAL_JUMP)
// 005a4494: MOV EDX,EDI
// 005a4496: IMUL EAX,EDX,0x180
//   Label: LAB_005a4496
// 005a449c: CMP EDI,dword ptr [EAX + 0x3f6294c]
//   XREF to: 03f6294c (READ)
//   XREF to: 03f62acc (READ)
// 005a44a2: JNZ 0x005a44d1
//   XREF to: 005a44d1 (CONDITIONAL_JUMP)
// 005a44a4: INC EBX
//   Label: LAB_005a44a4
// 005a44a5: CMP EBX,0x40
// 005a44a8: JL 0x005a448e
//   XREF to: 005a448e (CONDITIONAL_JUMP)
// 005a44aa: CMP EBX,0x40
// 005a44ad: JL 0x005a4473
//   XREF to: 005a4473 (CONDITIONAL_JUMP)
// 005a44af: XOR EAX,EAX
// 005a44b1: POP EBP
// 005a44b2: POP EDI
// 005a44b3: POP ESI
// 005a44b4: POP EBX
// 005a44b5: RET
// 005a44b6: MOV EDI,0x3f6282c
//   Label: LAB_005a44b6
//   XREF to: 03f6282c (DATA)
// 005a44bb: ADD EDI,EBX
// 005a44bd: PUSH EDI
//   XREF to: 03f629ac (DATA)
// 005a44be: CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
//   XREF to: 005a8550 (UNCONDITIONAL_CALL)
// 005a44c3: IMUL EAX,dword ptr [EDI + 0x160]
//   XREF to: 03f62b0c (READ)
// 005a44ca: ADD ESP,0x4
// 005a44cd: ADD ESI,EAX
// 005a44cf: JMP 0x005a4465
//   XREF to: 005a4465 (UNCONDITIONAL_JUMP)
// 005a44d1: CMP dword ptr [EAX + 0x3f6298c],0x1
//   Label: LAB_005a44d1
//   XREF to: 03f6298c (READ)
// 005a44d8: JL 0x005a44a4
//   XREF to: 005a44a4 (CONDITIONAL_JUMP)
// 005a44da: CMP EDI,dword ptr [EAX + 0x3f62980]
//   XREF to: 03f62980 (READ)
// 005a44e0: JNZ 0x005a44a4
//   XREF to: 005a44a4 (CONDITIONAL_JUMP)
// 005a44e2: CMP EDI,dword ptr [EAX + 0x3f6297c]
//   XREF to: 03f6297c (READ)
// 005a44e8: JNZ 0x005a44a4
//   XREF to: 005a44a4 (CONDITIONAL_JUMP)
// 005a44ea: MOV EDI,0x3f6282c
//   XREF to: 03f6282c (DATA)
// 005a44ef: ADD EDI,EAX
// 005a44f1: PUSH EDI
//   XREF to: 03f6282c (DATA)
// 005a44f2: CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
//   XREF to: 005a8550 (UNCONDITIONAL_CALL)
// 005a44f7: IMUL EAX,dword ptr [EDI + 0x160]
//   XREF to: 03f6298c (READ)
// 005a44fe: ADD ESP,0x4
// 005a4501: PUSH EDI
//   XREF to: 03f6282c (DATA)
// 005a4502: SUB ESI,EAX
// 005a4504: CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
//   XREF to: 005a62c0 (UNCONDITIONAL_CALL)
// 005a4509: ADD ESP,0x4
// 005a450c: CMP EBX,0x40
// 005a450f: JL 0x005a4473
//   XREF to: 005a4473 (CONDITIONAL_JUMP)
// 005a4515: XOR EAX,EAX
// 005a4517: POP EBP
// 005a4518: POP EDI
// 005a4519: POP ESI
// 005a451a: POP EBX
// 005a451b: RET
// 005a451c: MOV EAX,0x1
//   Label: LAB_005a451c
// 005a4521: POP EBP
// 005a4522: POP EDI
// 005a4523: POP ESI
// 005a4524: POP EBX
// 005a4525: RET
