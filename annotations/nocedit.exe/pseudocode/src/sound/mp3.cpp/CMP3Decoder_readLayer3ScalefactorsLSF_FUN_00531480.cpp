// Name: sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
// Address: 00531480
// Address Range: [[00531480, 0053167a]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3Granule * granule_info, int channel, int granule, SMpegFrame * frame)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 (00534d40) at 00535c00 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
          (CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3Granule *granule_info,int channel,
          int granule,SMpegFrame *frame)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar4;
  
  iVar7 = 0;
  sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0
            (this_ptr,scalefactor_dest,granule_info,channel,granule,frame);
  if ((granule_info[granule].table_select[channel * 0x12 + -3] != 0) &&
     (granule_info[granule].table_select[channel * 0x12 + -2] == 2)) {
    piVar9 = (int *)((int)granule_info + granule * 0xf8);
    if (granule_info[granule].table_select[channel * 0x12 + -1] != 0) {
      piVar5 = piVar9;
      piVar6 = scalefactor_dest;
      do {
        piVar2 = piVar5 + 1;
        piVar1 = piVar6 + 0x1cd6;
        piVar6 = piVar6 + 1;
        iVar7 = iVar7 + 1;
        *piVar5 = *piVar1;
        piVar5 = piVar2;
      } while (piVar2 != piVar9 + 8);
      iVar8 = 0xa8;
      iVar10 = 3;
      do {
        piVar9 = scalefactor_dest + iVar7;
        iVar4 = (int)granule_info + iVar10 * 4 + (int)frame * 0xf8;
        do {
          iVar3 = iVar4 + 0x34;
          piVar5 = piVar9 + 0x1cd6;
          piVar9 = piVar9 + 1;
          iVar7 = iVar7 + 1;
          *(int *)(iVar4 + 0x5c) = *piVar5;
          iVar4 = iVar3;
        } while (iVar3 != (int)granule_info + iVar8 + (int)frame * 0xf8);
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar10 < 0xc);
      iVar7 = (int)granule_info + (int)frame * 0xf8 + 0x30;
      do {
        iVar8 = iVar7 + 0x34;
        *(undefined4 *)(iVar7 + 0x5c) = 0;
        iVar7 = iVar8;
      } while (iVar8 != (int)granule_info + (int)frame * 0xf8 + 0xcc);
      return;
    }
    iVar8 = 0x9c;
    iVar10 = 0;
    do {
      piVar6 = scalefactor_dest + iVar7;
      piVar5 = piVar9 + iVar10;
      do {
        piVar2 = piVar5 + 0xd;
        piVar1 = piVar6 + 0x1cd6;
        piVar6 = piVar6 + 1;
        iVar7 = iVar7 + 1;
        piVar5[0x17] = *piVar1;
        piVar5 = piVar2;
      } while (piVar2 != (int *)((int)piVar9 + iVar8));
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar10 < 0xc);
    iVar7 = (int)granule_info + (int)frame * 0xf8 + 0x30;
    do {
      iVar8 = iVar7 + 0x34;
      *(undefined4 *)(iVar7 + 0x5c) = 0;
      iVar7 = iVar8;
    } while (iVar8 != (int)granule_info + (int)frame * 0xf8 + 0xcc);
    return;
  }
  iVar7 = 0;
  do {
    piVar9 = scalefactor_dest + 0x1cd6;
    iVar8 = iVar7 + (int)frame * 0xf8;
    scalefactor_dest = scalefactor_dest + 1;
    iVar7 = iVar7 + 4;
    *(int *)((int)granule_info + iVar8) = *piVar9;
  } while (iVar7 != 0x54);
  *(undefined4 *)((int)granule_info + (int)frame * 0xf8 + 0x58) = 0;
  return;
}


// Assembly code:
// 00531480: PUSH EBX
//   Label: sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480
// 00531481: PUSH ESI
// 00531482: PUSH EDI
// 00531483: PUSH EBP
// 00531484: SUB ESP,0x10
// 00531487: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 0053148b: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 0053148f: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 00531493: LEA EAX,[EDX*0x4 + 0x0]
// 0053149a: ADD EAX,EDX
// 0053149c: SHL EAX,0x5
// 0053149f: LEA EDX,[ESI + 0x8]
// 005314a2: LEA EDI,[EDX + EAX*0x1]
// 005314a5: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x18] (READ)
// 005314a9: PUSH EDX
// 005314aa: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x14] (READ)
// 005314ae: LEA EAX,[ECX*0x8 + 0x0]
// 005314b5: PUSH EBP
// 005314b6: ADD EDI,0x10
// 005314b9: ADD EAX,ECX
// 005314bb: PUSH ECX
// 005314bc: SHL EAX,0x3
// 005314bf: PUSH ESI
// 005314c0: ADD EDI,EAX
// 005314c2: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 005314c6: PUSH EAX
// 005314c7: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005314cb: PUSH EDX
// 005314cc: XOR EBX,EBX
// 005314ce: CALL sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0
//   XREF to: 005310f0 (UNCONDITIONAL_CALL)
// 005314d3: MOV ECX,dword ptr [EDI + 0x10]
// 005314d6: ADD ESP,0x18
// 005314d9: TEST ECX,ECX
// 005314db: JNZ 0x00531526
//   XREF to: 00531526 (CONDITIONAL_JUMP)
// 005314dd: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_005314dd
//   XREF to: Stack[0x14] (READ)
// 005314e1: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005314e5: SHL EAX,0x3
// 005314e8: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005314ec: MOV EDI,EAX
// 005314ee: LEA EDX,[EBX*0x4 + 0x0]
// 005314f5: SHL EDI,0x5
// 005314f8: ADD EDX,EBP
// 005314fa: SUB EDI,EAX
// 005314fc: XOR EAX,EAX
// 005314fe: ADD EDI,ECX
// 00531500: INC EBX
//   Label: LAB_00531500
// 00531501: MOV ECX,dword ptr [EDX + 0x7358]
// 00531507: LEA ESI,[EDI + EAX*0x1]
// 0053150a: ADD EDX,0x4
// 0053150d: ADD EAX,0x4
// 00531510: MOV dword ptr [ESI],ECX
// 00531512: CMP EAX,0x54
// 00531515: JNZ 0x00531500
//   XREF to: 00531500 (CONDITIONAL_JUMP)
// 00531517: MOV dword ptr [EDI + 0x58],0x0
// 0053151e: ADD ESP,0x10
// 00531521: POP EBP
// 00531522: POP EDI
// 00531523: POP ESI
// 00531524: POP EBX
// 00531525: RET
// 00531526: CMP dword ptr [EDI + 0x14],0x2
//   Label: LAB_00531526
// 0053152a: JNZ 0x005314dd
//   XREF to: 005314dd (CONDITIONAL_JUMP)
// 0053152c: LEA EAX,[EBP*0x8 + 0x0]
// 00531533: MOV EDX,EAX
// 00531535: SHL EAX,0x5
// 00531538: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0053153c: SUB EAX,EDX
// 0053153e: MOV EBP,dword ptr [EDI + 0x18]
// 00531541: ADD ESI,EAX
// 00531543: TEST EBP,EBP
// 00531545: JZ 0x005315fc
//   XREF to: 005315fc (CONDITIONAL_JUMP)
// 0053154b: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0053154f: MOV EAX,ESI
// 00531551: ADD ESI,0x20
// 00531554: ADD EAX,0x4
//   Label: LAB_00531554
// 00531557: MOV ECX,dword ptr [EDX + 0x7358]
// 0053155d: ADD EDX,0x4
// 00531560: INC EBX
// 00531561: MOV dword ptr [EAX + -0x4],ECX
// 00531564: CMP EAX,ESI
// 00531566: JNZ 0x00531554
//   XREF to: 00531554 (CONDITIONAL_JUMP)
// 00531568: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 0053156c: SHL EAX,0x3
// 0053156f: MOV EDX,EAX
// 00531571: SHL EAX,0x5
// 00531574: SUB EAX,EDX
// 00531576: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0053157a: MOV EBP,0xa8
// 0053157f: ADD EDX,EAX
// 00531581: MOV EDI,0x3
// 00531586: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0053158a: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x20] (DATA)
// 0053158d: MOV ESI,dword ptr [ESP + 0xc]
//   Label: LAB_0053158d
//   XREF to: Stack[-0x14] (READ)
// 00531591: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00531595: LEA EAX,[EDI*0x4 + 0x0]
// 0053159c: LEA EDX,[EBX*0x4 + 0x0]
// 005315a3: ADD EAX,ESI
// 005315a5: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005315a8: ADD EDX,ECX
// 005315aa: ADD ESI,EBP
// 005315ac: ADD EAX,0x34
//   Label: LAB_005315ac
// 005315af: MOV ECX,dword ptr [EDX + 0x7358]
// 005315b5: ADD EDX,0x4
// 005315b8: INC EBX
// 005315b9: MOV dword ptr [EAX + 0x28],ECX
// 005315bc: CMP EAX,ESI
// 005315be: JNZ 0x005315ac
//   XREF to: 005315ac (CONDITIONAL_JUMP)
// 005315c0: INC EDI
// 005315c1: ADD EBP,0x4
// 005315c4: CMP EDI,0xc
// 005315c7: JL 0x0053158d
//   XREF to: 0053158d (CONDITIONAL_JUMP)
// 005315c9: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 005315cd: SHL EAX,0x3
// 005315d0: MOV EDX,EAX
// 005315d2: SHL EAX,0x5
// 005315d5: SUB EAX,EDX
// 005315d7: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005315db: ADD EDX,EAX
// 005315dd: LEA EAX,[EDX + 0x30]
// 005315e0: ADD EDX,0xcc
// 005315e6: ADD EAX,0x34
//   Label: LAB_005315e6
// 005315e9: MOV dword ptr [EAX + 0x28],0x0
// 005315f0: CMP EAX,EDX
// 005315f2: JNZ 0x005315e6
//   XREF to: 005315e6 (CONDITIONAL_JUMP)
// 005315f4: ADD ESP,0x10
// 005315f7: POP EBP
// 005315f8: POP EDI
// 005315f9: POP ESI
// 005315fa: POP EBX
// 005315fb: RET
// 005315fc: MOV EBP,0x9c
//   Label: LAB_005315fc
// 00531601: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00531605: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 00531609: XOR EDI,EDI
// 0053160b: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_0053160b
//   XREF to: Stack[-0x18] (READ)
// 0053160f: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00531613: LEA EAX,[EDI*0x4 + 0x0]
// 0053161a: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 0053161e: ADD EAX,EDX
// 00531620: LEA EDX,[EBX*0x4 + 0x0]
// 00531627: ADD ESI,EBP
// 00531629: ADD EDX,ECX
// 0053162b: ADD EAX,0x34
//   Label: LAB_0053162b
// 0053162e: MOV ECX,dword ptr [EDX + 0x7358]
// 00531634: ADD EDX,0x4
// 00531637: INC EBX
// 00531638: MOV dword ptr [EAX + 0x28],ECX
// 0053163b: CMP EAX,ESI
// 0053163d: JNZ 0x0053162b
//   XREF to: 0053162b (CONDITIONAL_JUMP)
// 0053163f: INC EDI
// 00531640: ADD EBP,0x4
// 00531643: CMP EDI,0xc
// 00531646: JL 0x0053160b
//   XREF to: 0053160b (CONDITIONAL_JUMP)
// 00531648: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 0053164c: SHL EAX,0x3
// 0053164f: MOV EDX,EAX
// 00531651: SHL EAX,0x5
// 00531654: SUB EAX,EDX
// 00531656: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0053165a: ADD EDX,EAX
// 0053165c: LEA EAX,[EDX + 0x30]
// 0053165f: ADD EDX,0xcc
// 00531665: ADD EAX,0x34
//   Label: LAB_00531665
// 00531668: MOV dword ptr [EAX + 0x28],0x0
// 0053166f: CMP EAX,EDX
// 00531671: JNZ 0x00531665
//   XREF to: 00531665 (CONDITIONAL_JUMP)
// 00531673: ADD ESP,0x10
// 00531676: POP EBP
// 00531677: POP EDI
// 00531678: POP ESI
// 00531679: POP EBX
// 0053167a: RET
