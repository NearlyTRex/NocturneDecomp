// Name: sound_mp3.cpp_applyScalefactorsToLayer2Samples_FUN_005303a0
// Address: 005303a0
// Address Range: [[005303a0, 005303f7]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_applyScalefactorsToLayer2Samples_FUN_005303a0(float * sample_array, int * scalefactor_indices, SMpegFrame * frame_info)
// Globals:
//   double[64] g_MpegScalefactorTable

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_applyScalefactorsToLayer2Samples_FUN_005303a0
          (float *sample_array,int *scalefactor_indices,SMpegFrame *frame_info)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar1 = frame_info->samples_per_granule;
  do {
    iVar5 = 0;
    if (0 < iVar1) {
      piVar4 = (int *)((int)scalefactor_indices + iVar6);
      pfVar3 = (float *)((int)sample_array + iVar6);
      do {
        iVar2 = *piVar4;
        piVar4 = piVar4 + 0x60;
        iVar5 = iVar5 + 1;
        *pfVar3 = *pfVar3 * (float)g_MpegScalefactorTable[iVar2];
        pfVar3 = pfVar3 + 0x60;
      } while (iVar5 < iVar1);
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x80);
  return;
}


// Assembly code:
// 005303a0: PUSH EBX
//   Label: sound_mp3.cpp_applyScalefactorsToLayer2Samples_FUN_005303a0
// 005303a1: PUSH ESI
// 005303a2: PUSH EDI
// 005303a3: SUB ESP,0x8
// 005303a6: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005303aa: XOR EDI,EDI
// 005303ac: MOV ESI,dword ptr [ESI + 0x10]
// 005303af: XOR EDX,EDX
//   Label: LAB_005303af
// 005303b1: TEST ESI,ESI
// 005303b3: JLE 0x005303e6
//   XREF to: 005303e6 (CONDITIONAL_JUMP)
// 005303b5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005303b9: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005303bd: ADD EAX,EDI
// 005303bf: ADD ECX,EDI
// 005303c1: FLD float ptr [EAX]
//   Label: LAB_005303c1
// 005303c3: MOV EBX,dword ptr [ECX]
// 005303c5: FLD ST0
// 005303c7: FMUL double ptr [EBX*0x8 + 0x67e3c0]
//   XREF to: 0067e3c0 (DATA)
// 005303ce: ADD ECX,0x180
// 005303d4: ADD EAX,0x180
// 005303d9: INC EDX
// 005303da: FSTP ST1
// 005303dc: FSTP float ptr [EAX + 0xfffffe80]
// 005303e2: CMP EDX,ESI
// 005303e4: JL 0x005303c1
//   XREF to: 005303c1 (CONDITIONAL_JUMP)
// 005303e6: ADD EDI,0x4
//   Label: LAB_005303e6
// 005303e9: CMP EDI,0x80
// 005303ef: JNZ 0x005303af
//   XREF to: 005303af (CONDITIONAL_JUMP)
// 005303f1: ADD ESP,0x8
// 005303f4: POP EDI
// 005303f5: POP ESI
// 005303f6: POP EBX
// 005303f7: RET
